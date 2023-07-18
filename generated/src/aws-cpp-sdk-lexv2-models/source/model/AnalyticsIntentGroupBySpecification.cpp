/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsIntentGroupBySpecification.h>
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

AnalyticsIntentGroupBySpecification::AnalyticsIntentGroupBySpecification() : 
    m_name(AnalyticsIntentField::NOT_SET),
    m_nameHasBeenSet(false)
{
}

AnalyticsIntentGroupBySpecification::AnalyticsIntentGroupBySpecification(JsonView jsonValue) : 
    m_name(AnalyticsIntentField::NOT_SET),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

AnalyticsIntentGroupBySpecification& AnalyticsIntentGroupBySpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = AnalyticsIntentFieldMapper::GetAnalyticsIntentFieldForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalyticsIntentGroupBySpecification::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", AnalyticsIntentFieldMapper::GetNameForAnalyticsIntentField(m_name));
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
