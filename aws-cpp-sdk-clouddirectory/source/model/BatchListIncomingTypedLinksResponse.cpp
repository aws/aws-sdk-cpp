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

#include <aws/clouddirectory/model/BatchListIncomingTypedLinksResponse.h>
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

BatchListIncomingTypedLinksResponse::BatchListIncomingTypedLinksResponse() : 
    m_linkSpecifiersHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

BatchListIncomingTypedLinksResponse::BatchListIncomingTypedLinksResponse(const JsonValue& jsonValue) : 
    m_linkSpecifiersHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
  *this = jsonValue;
}

BatchListIncomingTypedLinksResponse& BatchListIncomingTypedLinksResponse::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("LinkSpecifiers"))
  {
    Array<JsonValue> linkSpecifiersJsonList = jsonValue.GetArray("LinkSpecifiers");
    for(unsigned linkSpecifiersIndex = 0; linkSpecifiersIndex < linkSpecifiersJsonList.GetLength(); ++linkSpecifiersIndex)
    {
      m_linkSpecifiers.push_back(linkSpecifiersJsonList[linkSpecifiersIndex].AsObject());
    }
    m_linkSpecifiersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

    m_nextTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchListIncomingTypedLinksResponse::Jsonize() const
{
  JsonValue payload;

  if(m_linkSpecifiersHasBeenSet)
  {
   Array<JsonValue> linkSpecifiersJsonList(m_linkSpecifiers.size());
   for(unsigned linkSpecifiersIndex = 0; linkSpecifiersIndex < linkSpecifiersJsonList.GetLength(); ++linkSpecifiersIndex)
   {
     linkSpecifiersJsonList[linkSpecifiersIndex].AsObject(m_linkSpecifiers[linkSpecifiersIndex].Jsonize());
   }
   payload.WithArray("LinkSpecifiers", std::move(linkSpecifiersJsonList));

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
