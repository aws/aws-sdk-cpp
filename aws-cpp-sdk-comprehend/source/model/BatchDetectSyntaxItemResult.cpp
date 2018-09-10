/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/comprehend/model/BatchDetectSyntaxItemResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

BatchDetectSyntaxItemResult::BatchDetectSyntaxItemResult() : 
    m_index(0),
    m_indexHasBeenSet(false),
    m_syntaxTokensHasBeenSet(false)
{
}

BatchDetectSyntaxItemResult::BatchDetectSyntaxItemResult(JsonView jsonValue) : 
    m_index(0),
    m_indexHasBeenSet(false),
    m_syntaxTokensHasBeenSet(false)
{
  *this = jsonValue;
}

BatchDetectSyntaxItemResult& BatchDetectSyntaxItemResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Index"))
  {
    m_index = jsonValue.GetInteger("Index");

    m_indexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SyntaxTokens"))
  {
    Array<JsonView> syntaxTokensJsonList = jsonValue.GetArray("SyntaxTokens");
    for(unsigned syntaxTokensIndex = 0; syntaxTokensIndex < syntaxTokensJsonList.GetLength(); ++syntaxTokensIndex)
    {
      m_syntaxTokens.push_back(syntaxTokensJsonList[syntaxTokensIndex].AsObject());
    }
    m_syntaxTokensHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchDetectSyntaxItemResult::Jsonize() const
{
  JsonValue payload;

  if(m_indexHasBeenSet)
  {
   payload.WithInteger("Index", m_index);

  }

  if(m_syntaxTokensHasBeenSet)
  {
   Array<JsonValue> syntaxTokensJsonList(m_syntaxTokens.size());
   for(unsigned syntaxTokensIndex = 0; syntaxTokensIndex < syntaxTokensJsonList.GetLength(); ++syntaxTokensIndex)
   {
     syntaxTokensJsonList[syntaxTokensIndex].AsObject(m_syntaxTokens[syntaxTokensIndex].Jsonize());
   }
   payload.WithArray("SyntaxTokens", std::move(syntaxTokensJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
