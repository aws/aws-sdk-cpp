/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CodeSnippetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

CodeSnippetResult::CodeSnippetResult() : 
    m_codeSnippetHasBeenSet(false),
    m_endLine(0),
    m_endLineHasBeenSet(false),
    m_findingArnHasBeenSet(false),
    m_startLine(0),
    m_startLineHasBeenSet(false),
    m_suggestedFixesHasBeenSet(false)
{
}

CodeSnippetResult::CodeSnippetResult(JsonView jsonValue) : 
    m_codeSnippetHasBeenSet(false),
    m_endLine(0),
    m_endLineHasBeenSet(false),
    m_findingArnHasBeenSet(false),
    m_startLine(0),
    m_startLineHasBeenSet(false),
    m_suggestedFixesHasBeenSet(false)
{
  *this = jsonValue;
}

CodeSnippetResult& CodeSnippetResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("codeSnippet"))
  {
    Aws::Utils::Array<JsonView> codeSnippetJsonList = jsonValue.GetArray("codeSnippet");
    for(unsigned codeSnippetIndex = 0; codeSnippetIndex < codeSnippetJsonList.GetLength(); ++codeSnippetIndex)
    {
      m_codeSnippet.push_back(codeSnippetJsonList[codeSnippetIndex].AsObject());
    }
    m_codeSnippetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endLine"))
  {
    m_endLine = jsonValue.GetInteger("endLine");

    m_endLineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("findingArn"))
  {
    m_findingArn = jsonValue.GetString("findingArn");

    m_findingArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startLine"))
  {
    m_startLine = jsonValue.GetInteger("startLine");

    m_startLineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("suggestedFixes"))
  {
    Aws::Utils::Array<JsonView> suggestedFixesJsonList = jsonValue.GetArray("suggestedFixes");
    for(unsigned suggestedFixesIndex = 0; suggestedFixesIndex < suggestedFixesJsonList.GetLength(); ++suggestedFixesIndex)
    {
      m_suggestedFixes.push_back(suggestedFixesJsonList[suggestedFixesIndex].AsObject());
    }
    m_suggestedFixesHasBeenSet = true;
  }

  return *this;
}

JsonValue CodeSnippetResult::Jsonize() const
{
  JsonValue payload;

  if(m_codeSnippetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> codeSnippetJsonList(m_codeSnippet.size());
   for(unsigned codeSnippetIndex = 0; codeSnippetIndex < codeSnippetJsonList.GetLength(); ++codeSnippetIndex)
   {
     codeSnippetJsonList[codeSnippetIndex].AsObject(m_codeSnippet[codeSnippetIndex].Jsonize());
   }
   payload.WithArray("codeSnippet", std::move(codeSnippetJsonList));

  }

  if(m_endLineHasBeenSet)
  {
   payload.WithInteger("endLine", m_endLine);

  }

  if(m_findingArnHasBeenSet)
  {
   payload.WithString("findingArn", m_findingArn);

  }

  if(m_startLineHasBeenSet)
  {
   payload.WithInteger("startLine", m_startLine);

  }

  if(m_suggestedFixesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> suggestedFixesJsonList(m_suggestedFixes.size());
   for(unsigned suggestedFixesIndex = 0; suggestedFixesIndex < suggestedFixesJsonList.GetLength(); ++suggestedFixesIndex)
   {
     suggestedFixesJsonList[suggestedFixesIndex].AsObject(m_suggestedFixes[suggestedFixesIndex].Jsonize());
   }
   payload.WithArray("suggestedFixes", std::move(suggestedFixesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
