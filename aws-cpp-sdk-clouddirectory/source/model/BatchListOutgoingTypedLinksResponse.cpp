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

#include <aws/clouddirectory/model/BatchListOutgoingTypedLinksResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

BatchListOutgoingTypedLinksResponse::BatchListOutgoingTypedLinksResponse() : 
    m_typedLinkSpecifiersHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

BatchListOutgoingTypedLinksResponse::BatchListOutgoingTypedLinksResponse(const JsonValue& jsonValue) : 
    m_typedLinkSpecifiersHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
  *this = jsonValue;
}

BatchListOutgoingTypedLinksResponse& BatchListOutgoingTypedLinksResponse::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("TypedLinkSpecifiers"))
  {
    Array<JsonValue> typedLinkSpecifiersJsonList = jsonValue.GetArray("TypedLinkSpecifiers");
    for(unsigned typedLinkSpecifiersIndex = 0; typedLinkSpecifiersIndex < typedLinkSpecifiersJsonList.GetLength(); ++typedLinkSpecifiersIndex)
    {
      m_typedLinkSpecifiers.push_back(typedLinkSpecifiersJsonList[typedLinkSpecifiersIndex].AsObject());
    }
    m_typedLinkSpecifiersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

    m_nextTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchListOutgoingTypedLinksResponse::Jsonize() const
{
  JsonValue payload;

  if(m_typedLinkSpecifiersHasBeenSet)
  {
   Array<JsonValue> typedLinkSpecifiersJsonList(m_typedLinkSpecifiers.size());
   for(unsigned typedLinkSpecifiersIndex = 0; typedLinkSpecifiersIndex < typedLinkSpecifiersJsonList.GetLength(); ++typedLinkSpecifiersIndex)
   {
     typedLinkSpecifiersJsonList[typedLinkSpecifiersIndex].AsObject(m_typedLinkSpecifiers[typedLinkSpecifiersIndex].Jsonize());
   }
   payload.WithArray("TypedLinkSpecifiers", std::move(typedLinkSpecifiersJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
