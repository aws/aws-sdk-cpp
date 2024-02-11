/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsIntentGroupByKey.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

AnalyticsIntentGroupByKey::AnalyticsIntentGroupByKey() : 
    m_name(AnalyticsIntentField::NOT_SET),
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

AnalyticsIntentGroupByKey::AnalyticsIntentGroupByKey(JsonView jsonValue) : 
    m_name(AnalyticsIntentField::NOT_SET),
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

AnalyticsIntentGroupByKey& AnalyticsIntentGroupByKey::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = AnalyticsIntentFieldMapper::GetAnalyticsIntentFieldForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalyticsIntentGroupByKey::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", AnalyticsIntentFieldMapper::GetNameForAnalyticsIntentField(m_name));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
