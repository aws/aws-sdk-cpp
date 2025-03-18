/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/BlueprintFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockDataAutomation
{
namespace Model
{

BlueprintFilter::BlueprintFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

BlueprintFilter& BlueprintFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("blueprintArn"))
  {
    m_blueprintArn = jsonValue.GetString("blueprintArn");
    m_blueprintArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("blueprintVersion"))
  {
    m_blueprintVersion = jsonValue.GetString("blueprintVersion");
    m_blueprintVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("blueprintStage"))
  {
    m_blueprintStage = BlueprintStageMapper::GetBlueprintStageForName(jsonValue.GetString("blueprintStage"));
    m_blueprintStageHasBeenSet = true;
  }
  return *this;
}

JsonValue BlueprintFilter::Jsonize() const
{
  JsonValue payload;

  if(m_blueprintArnHasBeenSet)
  {
   payload.WithString("blueprintArn", m_blueprintArn);

  }

  if(m_blueprintVersionHasBeenSet)
  {
   payload.WithString("blueprintVersion", m_blueprintVersion);

  }

  if(m_blueprintStageHasBeenSet)
  {
   payload.WithString("blueprintStage", BlueprintStageMapper::GetNameForBlueprintStage(m_blueprintStage));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
