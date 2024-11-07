/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/CyclicConnectionFlowValidationDetails.h>
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

CyclicConnectionFlowValidationDetails::CyclicConnectionFlowValidationDetails() : 
    m_connectionHasBeenSet(false)
{
}

CyclicConnectionFlowValidationDetails::CyclicConnectionFlowValidationDetails(JsonView jsonValue)
  : CyclicConnectionFlowValidationDetails()
{
  *this = jsonValue;
}

CyclicConnectionFlowValidationDetails& CyclicConnectionFlowValidationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("connection"))
  {
    m_connection = jsonValue.GetString("connection");

    m_connectionHasBeenSet = true;
  }

  return *this;
}

JsonValue CyclicConnectionFlowValidationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_connectionHasBeenSet)
  {
   payload.WithString("connection", m_connection);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
