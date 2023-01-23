/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/BatchListPolicyAttachmentsResponse.h>
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

BatchListPolicyAttachmentsResponse::BatchListPolicyAttachmentsResponse() : 
    m_objectIdentifiersHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

BatchListPolicyAttachmentsResponse::BatchListPolicyAttachmentsResponse(JsonView jsonValue) : 
    m_objectIdentifiersHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
  *this = jsonValue;
}

BatchListPolicyAttachmentsResponse& BatchListPolicyAttachmentsResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ObjectIdentifiers"))
  {
    Aws::Utils::Array<JsonView> objectIdentifiersJsonList = jsonValue.GetArray("ObjectIdentifiers");
    for(unsigned objectIdentifiersIndex = 0; objectIdentifiersIndex < objectIdentifiersJsonList.GetLength(); ++objectIdentifiersIndex)
    {
      m_objectIdentifiers.push_back(objectIdentifiersJsonList[objectIdentifiersIndex].AsString());
    }
    m_objectIdentifiersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

    m_nextTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchListPolicyAttachmentsResponse::Jsonize() const
{
  JsonValue payload;

  if(m_objectIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> objectIdentifiersJsonList(m_objectIdentifiers.size());
   for(unsigned objectIdentifiersIndex = 0; objectIdentifiersIndex < objectIdentifiersJsonList.GetLength(); ++objectIdentifiersIndex)
   {
     objectIdentifiersJsonList[objectIdentifiersIndex].AsString(m_objectIdentifiers[objectIdentifiersIndex]);
   }
   payload.WithArray("ObjectIdentifiers", std::move(objectIdentifiersJsonList));

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
