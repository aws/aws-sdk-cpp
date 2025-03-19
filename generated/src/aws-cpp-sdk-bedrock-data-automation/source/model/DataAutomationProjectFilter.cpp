/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/DataAutomationProjectFilter.h>
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

DataAutomationProjectFilter::DataAutomationProjectFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

DataAutomationProjectFilter& DataAutomationProjectFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("projectArn"))
  {
    m_projectArn = jsonValue.GetString("projectArn");
    m_projectArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("projectStage"))
  {
    m_projectStage = DataAutomationProjectStageMapper::GetDataAutomationProjectStageForName(jsonValue.GetString("projectStage"));
    m_projectStageHasBeenSet = true;
  }
  return *this;
}

JsonValue DataAutomationProjectFilter::Jsonize() const
{
  JsonValue payload;

  if(m_projectArnHasBeenSet)
  {
   payload.WithString("projectArn", m_projectArn);

  }

  if(m_projectStageHasBeenSet)
  {
   payload.WithString("projectStage", DataAutomationProjectStageMapper::GetNameForDataAutomationProjectStage(m_projectStage));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
