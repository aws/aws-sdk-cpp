/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation-runtime/model/DataAutomationConfiguration.h>
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

DataAutomationConfiguration::DataAutomationConfiguration() : 
    m_dataAutomationProjectArnHasBeenSet(false),
    m_stage(DataAutomationStage::NOT_SET),
    m_stageHasBeenSet(false)
{
}

DataAutomationConfiguration::DataAutomationConfiguration(JsonView jsonValue)
  : DataAutomationConfiguration()
{
  *this = jsonValue;
}

DataAutomationConfiguration& DataAutomationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataAutomationProjectArn"))
  {
    m_dataAutomationProjectArn = jsonValue.GetString("dataAutomationProjectArn");

    m_dataAutomationProjectArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stage"))
  {
    m_stage = DataAutomationStageMapper::GetDataAutomationStageForName(jsonValue.GetString("stage"));

    m_stageHasBeenSet = true;
  }

  return *this;
}

JsonValue DataAutomationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_dataAutomationProjectArnHasBeenSet)
  {
   payload.WithString("dataAutomationProjectArn", m_dataAutomationProjectArn);

  }

  if(m_stageHasBeenSet)
  {
   payload.WithString("stage", DataAutomationStageMapper::GetNameForDataAutomationStage(m_stage));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockDataAutomationRuntime
} // namespace Aws
