﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/UnknownNodeInputFlowValidationDetails.h>
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

UnknownNodeInputFlowValidationDetails::UnknownNodeInputFlowValidationDetails() : 
    m_inputHasBeenSet(false),
    m_nodeHasBeenSet(false)
{
}

UnknownNodeInputFlowValidationDetails::UnknownNodeInputFlowValidationDetails(JsonView jsonValue)
  : UnknownNodeInputFlowValidationDetails()
{
  *this = jsonValue;
}

UnknownNodeInputFlowValidationDetails& UnknownNodeInputFlowValidationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("input"))
  {
    m_input = jsonValue.GetString("input");

    m_inputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("node"))
  {
    m_node = jsonValue.GetString("node");

    m_nodeHasBeenSet = true;
  }

  return *this;
}

JsonValue UnknownNodeInputFlowValidationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_inputHasBeenSet)
  {
   payload.WithString("input", m_input);

  }

  if(m_nodeHasBeenSet)
  {
   payload.WithString("node", m_node);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
