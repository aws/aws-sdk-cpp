/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ToolArguments.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCore
{
namespace Model
{

ToolArguments::ToolArguments(JsonView jsonValue)
{
  *this = jsonValue;
}

ToolArguments& ToolArguments::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("code"))
  {
    m_code = jsonValue.GetString("code");
    m_codeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("language"))
  {
    m_language = ProgrammingLanguageMapper::GetProgrammingLanguageForName(jsonValue.GetString("language"));
    m_languageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clearContext"))
  {
    m_clearContext = jsonValue.GetBool("clearContext");
    m_clearContextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("command"))
  {
    m_command = jsonValue.GetString("command");
    m_commandHasBeenSet = true;
  }
  if(jsonValue.ValueExists("path"))
  {
    m_path = jsonValue.GetString("path");
    m_pathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("paths"))
  {
    Aws::Utils::Array<JsonView> pathsJsonList = jsonValue.GetArray("paths");
    for(unsigned pathsIndex = 0; pathsIndex < pathsJsonList.GetLength(); ++pathsIndex)
    {
      m_paths.push_back(pathsJsonList[pathsIndex].AsString());
    }
    m_pathsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("content"))
  {
    Aws::Utils::Array<JsonView> contentJsonList = jsonValue.GetArray("content");
    for(unsigned contentIndex = 0; contentIndex < contentJsonList.GetLength(); ++contentIndex)
    {
      m_content.push_back(contentJsonList[contentIndex].AsObject());
    }
    m_contentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("directoryPath"))
  {
    m_directoryPath = jsonValue.GetString("directoryPath");
    m_directoryPathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("taskId"))
  {
    m_taskId = jsonValue.GetString("taskId");
    m_taskIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ToolArguments::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", m_code);

  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("language", ProgrammingLanguageMapper::GetNameForProgrammingLanguage(m_language));
  }

  if(m_clearContextHasBeenSet)
  {
   payload.WithBool("clearContext", m_clearContext);

  }

  if(m_commandHasBeenSet)
  {
   payload.WithString("command", m_command);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("path", m_path);

  }

  if(m_pathsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pathsJsonList(m_paths.size());
   for(unsigned pathsIndex = 0; pathsIndex < pathsJsonList.GetLength(); ++pathsIndex)
   {
     pathsJsonList[pathsIndex].AsString(m_paths[pathsIndex]);
   }
   payload.WithArray("paths", std::move(pathsJsonList));

  }

  if(m_contentHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contentJsonList(m_content.size());
   for(unsigned contentIndex = 0; contentIndex < contentJsonList.GetLength(); ++contentIndex)
   {
     contentJsonList[contentIndex].AsObject(m_content[contentIndex].Jsonize());
   }
   payload.WithArray("content", std::move(contentJsonList));

  }

  if(m_directoryPathHasBeenSet)
  {
   payload.WithString("directoryPath", m_directoryPath);

  }

  if(m_taskIdHasBeenSet)
  {
   payload.WithString("taskId", m_taskId);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
