/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/DuplicateConnectionsFlowValidationDetails.h>
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

DuplicateConnectionsFlowValidationDetails::DuplicateConnectionsFlowValidationDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

DuplicateConnectionsFlowValidationDetails& DuplicateConnectionsFlowValidationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetString("source");
    m_sourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("target"))
  {
    m_target = jsonValue.GetString("target");
    m_targetHasBeenSet = true;
  }
  return *this;
}

JsonValue DuplicateConnectionsFlowValidationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", m_source);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("target", m_target);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
