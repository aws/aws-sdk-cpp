﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/StorageFlowNodeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

StorageFlowNodeConfiguration::StorageFlowNodeConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

StorageFlowNodeConfiguration& StorageFlowNodeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serviceConfiguration"))
  {
    m_serviceConfiguration = jsonValue.GetObject("serviceConfiguration");
    m_serviceConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue StorageFlowNodeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_serviceConfigurationHasBeenSet)
  {
   payload.WithObject("serviceConfiguration", m_serviceConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
