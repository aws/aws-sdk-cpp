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

#include <aws/kendra/model/FacetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

FacetResult::FacetResult() : 
    m_documentAttributeKeyHasBeenSet(false),
    m_documentAttributeValueCountPairsHasBeenSet(false)
{
}

FacetResult::FacetResult(JsonView jsonValue) : 
    m_documentAttributeKeyHasBeenSet(false),
    m_documentAttributeValueCountPairsHasBeenSet(false)
{
  *this = jsonValue;
}

FacetResult& FacetResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DocumentAttributeKey"))
  {
    m_documentAttributeKey = jsonValue.GetString("DocumentAttributeKey");

    m_documentAttributeKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentAttributeValueCountPairs"))
  {
    Array<JsonView> documentAttributeValueCountPairsJsonList = jsonValue.GetArray("DocumentAttributeValueCountPairs");
    for(unsigned documentAttributeValueCountPairsIndex = 0; documentAttributeValueCountPairsIndex < documentAttributeValueCountPairsJsonList.GetLength(); ++documentAttributeValueCountPairsIndex)
    {
      m_documentAttributeValueCountPairs.push_back(documentAttributeValueCountPairsJsonList[documentAttributeValueCountPairsIndex].AsObject());
    }
    m_documentAttributeValueCountPairsHasBeenSet = true;
  }

  return *this;
}

JsonValue FacetResult::Jsonize() const
{
  JsonValue payload;

  if(m_documentAttributeKeyHasBeenSet)
  {
   payload.WithString("DocumentAttributeKey", m_documentAttributeKey);

  }

  if(m_documentAttributeValueCountPairsHasBeenSet)
  {
   Array<JsonValue> documentAttributeValueCountPairsJsonList(m_documentAttributeValueCountPairs.size());
   for(unsigned documentAttributeValueCountPairsIndex = 0; documentAttributeValueCountPairsIndex < documentAttributeValueCountPairsJsonList.GetLength(); ++documentAttributeValueCountPairsIndex)
   {
     documentAttributeValueCountPairsJsonList[documentAttributeValueCountPairsIndex].AsObject(m_documentAttributeValueCountPairs[documentAttributeValueCountPairsIndex].Jsonize());
   }
   payload.WithArray("DocumentAttributeValueCountPairs", std::move(documentAttributeValueCountPairsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
