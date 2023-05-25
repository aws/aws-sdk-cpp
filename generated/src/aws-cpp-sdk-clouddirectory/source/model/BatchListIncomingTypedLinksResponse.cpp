/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

BatchListIncomingTypedLinksResponse::BatchListIncomingTypedLinksResponse(JsonView jsonValue) : 
    m_linkSpecifiersHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
  *this = jsonValue;
}

BatchListIncomingTypedLinksResponse& BatchListIncomingTypedLinksResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LinkSpecifiers"))
  {
    Aws::Utils::Array<JsonView> linkSpecifiersJsonList = jsonValue.GetArray("LinkSpecifiers");
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
   Aws::Utils::Array<JsonValue> linkSpecifiersJsonList(m_linkSpecifiers.size());
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
