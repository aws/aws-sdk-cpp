/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsIntentStageGroupByKey.h>
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

AnalyticsIntentStageGroupByKey::AnalyticsIntentStageGroupByKey() : 
    m_name(AnalyticsIntentStageField::NOT_SET),
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

AnalyticsIntentStageGroupByKey::AnalyticsIntentStageGroupByKey(JsonView jsonValue) : 
    m_name(AnalyticsIntentStageField::NOT_SET),
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

AnalyticsIntentStageGroupByKey& AnalyticsIntentStageGroupByKey::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = AnalyticsIntentStageFieldMapper::GetAnalyticsIntentStageFieldForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalyticsIntentStageGroupByKey::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", AnalyticsIntentStageFieldMapper::GetNameForAnalyticsIntentStageField(m_name));
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
