/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DocumentMetadataResponseInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

DocumentMetadataResponseInfo::DocumentMetadataResponseInfo() : 
    m_reviewerResponseHasBeenSet(false)
{
}

DocumentMetadataResponseInfo::DocumentMetadataResponseInfo(JsonView jsonValue) : 
    m_reviewerResponseHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentMetadataResponseInfo& DocumentMetadataResponseInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReviewerResponse"))
  {
    Aws::Utils::Array<JsonView> reviewerResponseJsonList = jsonValue.GetArray("ReviewerResponse");
    for(unsigned reviewerResponseIndex = 0; reviewerResponseIndex < reviewerResponseJsonList.GetLength(); ++reviewerResponseIndex)
    {
      m_reviewerResponse.push_back(reviewerResponseJsonList[reviewerResponseIndex].AsObject());
    }
    m_reviewerResponseHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentMetadataResponseInfo::Jsonize() const
{
  JsonValue payload;

  if(m_reviewerResponseHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> reviewerResponseJsonList(m_reviewerResponse.size());
   for(unsigned reviewerResponseIndex = 0; reviewerResponseIndex < reviewerResponseJsonList.GetLength(); ++reviewerResponseIndex)
   {
     reviewerResponseJsonList[reviewerResponseIndex].AsObject(m_reviewerResponse[reviewerResponseIndex].Jsonize());
   }
   payload.WithArray("ReviewerResponse", std::move(reviewerResponseJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
