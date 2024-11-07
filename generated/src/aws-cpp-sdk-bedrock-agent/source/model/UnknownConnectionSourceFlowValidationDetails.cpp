/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/UnknownConnectionSourceFlowValidationDetails.h>
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

UnknownConnectionSourceFlowValidationDetails::UnknownConnectionSourceFlowValidationDetails() : 
    m_connectionHasBeenSet(false)
{
}

UnknownConnectionSourceFlowValidationDetails::UnknownConnectionSourceFlowValidationDetails(JsonView jsonValue)
  : UnknownConnectionSourceFlowValidationDetails()
{
  *this = jsonValue;
}

UnknownConnectionSourceFlowValidationDetails& UnknownConnectionSourceFlowValidationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("connection"))
  {
    m_connection = jsonValue.GetString("connection");

    m_connectionHasBeenSet = true;
  }

  return *this;
}

JsonValue UnknownConnectionSourceFlowValidationDetails::Jsonize() const
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
