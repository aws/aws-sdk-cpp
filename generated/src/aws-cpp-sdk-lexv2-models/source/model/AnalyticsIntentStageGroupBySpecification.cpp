/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsIntentStageGroupBySpecification.h>
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

AnalyticsIntentStageGroupBySpecification::AnalyticsIntentStageGroupBySpecification() : 
    m_name(AnalyticsIntentStageField::NOT_SET),
    m_nameHasBeenSet(false)
{
}

AnalyticsIntentStageGroupBySpecification::AnalyticsIntentStageGroupBySpecification(JsonView jsonValue) : 
    m_name(AnalyticsIntentStageField::NOT_SET),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

AnalyticsIntentStageGroupBySpecification& AnalyticsIntentStageGroupBySpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = AnalyticsIntentStageFieldMapper::GetAnalyticsIntentStageFieldForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalyticsIntentStageGroupBySpecification::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", AnalyticsIntentStageFieldMapper::GetNameForAnalyticsIntentStageField(m_name));
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
