/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/BatchListObjectChildrenResponse.h>
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

BatchListObjectChildrenResponse::BatchListObjectChildrenResponse() : 
    m_childrenHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

BatchListObjectChildrenResponse::BatchListObjectChildrenResponse(JsonView jsonValue) : 
    m_childrenHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
  *this = jsonValue;
}

BatchListObjectChildrenResponse& BatchListObjectChildrenResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Children"))
  {
    Aws::Map<Aws::String, JsonView> childrenJsonMap = jsonValue.GetObject("Children").GetAllObjects();
    for(auto& childrenItem : childrenJsonMap)
    {
      m_children[childrenItem.first] = childrenItem.second.AsString();
    }
    m_childrenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

    m_nextTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchListObjectChildrenResponse::Jsonize() const
{
  JsonValue payload;

  if(m_childrenHasBeenSet)
  {
   JsonValue childrenJsonMap;
   for(auto& childrenItem : m_children)
   {
     childrenJsonMap.WithString(childrenItem.first, childrenItem.second);
   }
   payload.WithObject("Children", std::move(childrenJsonMap));

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
