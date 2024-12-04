/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation-runtime/model/Blueprint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockDataAutomationRuntime
{
namespace Model
{

Blueprint::Blueprint() : 
    m_blueprintArnHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_stage(BlueprintStage::NOT_SET),
    m_stageHasBeenSet(false)
{
}

Blueprint::Blueprint(JsonView jsonValue)
  : Blueprint()
{
  *this = jsonValue;
}

Blueprint& Blueprint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("blueprintArn"))
  {
    m_blueprintArn = jsonValue.GetString("blueprintArn");

    m_blueprintArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stage"))
  {
    m_stage = BlueprintStageMapper::GetBlueprintStageForName(jsonValue.GetString("stage"));

    m_stageHasBeenSet = true;
  }

  return *this;
}

JsonValue Blueprint::Jsonize() const
{
  JsonValue payload;

  if(m_blueprintArnHasBeenSet)
  {
   payload.WithString("blueprintArn", m_blueprintArn);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_stageHasBeenSet)
  {
   payload.WithString("stage", BlueprintStageMapper::GetNameForBlueprintStage(m_stage));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockDataAutomationRuntime
} // namespace Aws
