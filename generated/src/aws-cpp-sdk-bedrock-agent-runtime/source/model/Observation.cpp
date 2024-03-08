/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/Observation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

Observation::Observation() : 
    m_actionGroupInvocationOutputHasBeenSet(false),
    m_finalResponseHasBeenSet(false),
    m_knowledgeBaseLookupOutputHasBeenSet(false),
    m_repromptResponseHasBeenSet(false),
    m_traceIdHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Observation::Observation(JsonView jsonValue) : 
    m_actionGroupInvocationOutputHasBeenSet(false),
    m_finalResponseHasBeenSet(false),
    m_knowledgeBaseLookupOutputHasBeenSet(false),
    m_repromptResponseHasBeenSet(false),
    m_traceIdHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Observation& Observation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionGroupInvocationOutput"))
  {
    m_actionGroupInvocationOutput = jsonValue.GetObject("actionGroupInvocationOutput");

    m_actionGroupInvocationOutputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("finalResponse"))
  {
    m_finalResponse = jsonValue.GetObject("finalResponse");

    m_finalResponseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("knowledgeBaseLookupOutput"))
  {
    m_knowledgeBaseLookupOutput = jsonValue.GetObject("knowledgeBaseLookupOutput");

    m_knowledgeBaseLookupOutputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repromptResponse"))
  {
    m_repromptResponse = jsonValue.GetObject("repromptResponse");

    m_repromptResponseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("traceId"))
  {
    m_traceId = jsonValue.GetString("traceId");

    m_traceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = TypeMapper::GetTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue Observation::Jsonize() const
{
  JsonValue payload;

  if(m_actionGroupInvocationOutputHasBeenSet)
  {
   payload.WithObject("actionGroupInvocationOutput", m_actionGroupInvocationOutput.Jsonize());

  }

  if(m_finalResponseHasBeenSet)
  {
   payload.WithObject("finalResponse", m_finalResponse.Jsonize());

  }

  if(m_knowledgeBaseLookupOutputHasBeenSet)
  {
   payload.WithObject("knowledgeBaseLookupOutput", m_knowledgeBaseLookupOutput.Jsonize());

  }

  if(m_repromptResponseHasBeenSet)
  {
   payload.WithObject("repromptResponse", m_repromptResponse.Jsonize());

  }

  if(m_traceIdHasBeenSet)
  {
   payload.WithString("traceId", m_traceId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", TypeMapper::GetNameForType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
