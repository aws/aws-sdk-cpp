/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-security/model/FilePath.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruSecurity
{
namespace Model
{

FilePath::FilePath(JsonView jsonValue)
{
  *this = jsonValue;
}

FilePath& FilePath::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("path"))
  {
    m_path = jsonValue.GetString("path");
    m_pathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startLine"))
  {
    m_startLine = jsonValue.GetInteger("startLine");
    m_startLineHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endLine"))
  {
    m_endLine = jsonValue.GetInteger("endLine");
    m_endLineHasBeenSet = true;
  }
  if(jsonValue.ValueExists("codeSnippet"))
  {
    Aws::Utils::Array<JsonView> codeSnippetJsonList = jsonValue.GetArray("codeSnippet");
    for(unsigned codeSnippetIndex = 0; codeSnippetIndex < codeSnippetJsonList.GetLength(); ++codeSnippetIndex)
    {
      m_codeSnippet.push_back(codeSnippetJsonList[codeSnippetIndex].AsObject());
    }
    m_codeSnippetHasBeenSet = true;
  }
  return *this;
}

JsonValue FilePath::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("path", m_path);

  }

  if(m_startLineHasBeenSet)
  {
   payload.WithInteger("startLine", m_startLine);

  }

  if(m_endLineHasBeenSet)
  {
   payload.WithInteger("endLine", m_endLine);

  }

  if(m_codeSnippetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> codeSnippetJsonList(m_codeSnippet.size());
   for(unsigned codeSnippetIndex = 0; codeSnippetIndex < codeSnippetJsonList.GetLength(); ++codeSnippetIndex)
   {
     codeSnippetJsonList[codeSnippetIndex].AsObject(m_codeSnippet[codeSnippetIndex].Jsonize());
   }
   payload.WithArray("codeSnippet", std::move(codeSnippetJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
