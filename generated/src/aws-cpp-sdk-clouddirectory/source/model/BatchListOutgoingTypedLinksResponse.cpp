/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

BatchListOutgoingTypedLinksResponse::BatchListOutgoingTypedLinksResponse(JsonView jsonValue) : 
    m_typedLinkSpecifiersHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
  *this = jsonValue;
}

BatchListOutgoingTypedLinksResponse& BatchListOutgoingTypedLinksResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TypedLinkSpecifiers"))
  {
    Aws::Utils::Array<JsonView> typedLinkSpecifiersJsonList = jsonValue.GetArray("TypedLinkSpecifiers");
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
   Aws::Utils::Array<JsonValue> typedLinkSpecifiersJsonList(m_typedLinkSpecifiers.size());
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
