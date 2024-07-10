/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/CodeInterpreterInvocationOutput.h>
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

CodeInterpreterInvocationOutput::CodeInterpreterInvocationOutput() : 
    m_executionErrorHasBeenSet(false),
    m_executionOutputHasBeenSet(false),
    m_executionTimeout(false),
    m_executionTimeoutHasBeenSet(false),
    m_filesHasBeenSet(false)
{
}

CodeInterpreterInvocationOutput::CodeInterpreterInvocationOutput(JsonView jsonValue)
  : CodeInterpreterInvocationOutput()
{
  *this = jsonValue;
}

CodeInterpreterInvocationOutput& CodeInterpreterInvocationOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("executionError"))
  {
    m_executionError = jsonValue.GetString("executionError");

    m_executionErrorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionOutput"))
  {
    m_executionOutput = jsonValue.GetString("executionOutput");

    m_executionOutputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionTimeout"))
  {
    m_executionTimeout = jsonValue.GetBool("executionTimeout");

    m_executionTimeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("files"))
  {
    Aws::Utils::Array<JsonView> filesJsonList = jsonValue.GetArray("files");
    for(unsigned filesIndex = 0; filesIndex < filesJsonList.GetLength(); ++filesIndex)
    {
      m_files.push_back(filesJsonList[filesIndex].AsString());
    }
    m_filesHasBeenSet = true;
  }

  return *this;
}

JsonValue CodeInterpreterInvocationOutput::Jsonize() const
{
  JsonValue payload;

  if(m_executionErrorHasBeenSet)
  {
   payload.WithString("executionError", m_executionError);

  }

  if(m_executionOutputHasBeenSet)
  {
   payload.WithString("executionOutput", m_executionOutput);

  }

  if(m_executionTimeoutHasBeenSet)
  {
   payload.WithBool("executionTimeout", m_executionTimeout);

  }

  if(m_filesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filesJsonList(m_files.size());
   for(unsigned filesIndex = 0; filesIndex < filesJsonList.GetLength(); ++filesIndex)
   {
     filesJsonList[filesIndex].AsString(m_files[filesIndex]);
   }
   payload.WithArray("files", std::move(filesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
