/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/BatchListObjectParentsResponse.h>
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

BatchListObjectParentsResponse::BatchListObjectParentsResponse() : 
    m_parentLinksHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

BatchListObjectParentsResponse::BatchListObjectParentsResponse(JsonView jsonValue) : 
    m_parentLinksHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
  *this = jsonValue;
}

BatchListObjectParentsResponse& BatchListObjectParentsResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ParentLinks"))
  {
    Aws::Utils::Array<JsonView> parentLinksJsonList = jsonValue.GetArray("ParentLinks");
    for(unsigned parentLinksIndex = 0; parentLinksIndex < parentLinksJsonList.GetLength(); ++parentLinksIndex)
    {
      m_parentLinks.push_back(parentLinksJsonList[parentLinksIndex].AsObject());
    }
    m_parentLinksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

    m_nextTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchListObjectParentsResponse::Jsonize() const
{
  JsonValue payload;

  if(m_parentLinksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parentLinksJsonList(m_parentLinks.size());
   for(unsigned parentLinksIndex = 0; parentLinksIndex < parentLinksJsonList.GetLength(); ++parentLinksIndex)
   {
     parentLinksJsonList[parentLinksIndex].AsObject(m_parentLinks[parentLinksIndex].Jsonize());
   }
   payload.WithArray("ParentLinks", std::move(parentLinksJsonList));

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
