/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/AppFlowConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

AppFlowConfig::AppFlowConfig() : 
    m_roleArnHasBeenSet(false),
    m_flowNameHasBeenSet(false)
{
}

AppFlowConfig::AppFlowConfig(JsonView jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_flowNameHasBeenSet(false)
{
  *this = jsonValue;
}

AppFlowConfig& AppFlowConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FlowName"))
  {
    m_flowName = jsonValue.GetString("FlowName");

    m_flowNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AppFlowConfig::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_flowNameHasBeenSet)
  {
   payload.WithString("FlowName", m_flowName);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
