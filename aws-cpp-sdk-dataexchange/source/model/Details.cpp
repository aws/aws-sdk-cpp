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

#include <aws/dataexchange/model/Details.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

Details::Details() : 
    m_importAssetFromSignedUrlJobErrorDetailsHasBeenSet(false),
    m_importAssetsFromS3JobErrorDetailsHasBeenSet(false)
{
}

Details::Details(JsonView jsonValue) : 
    m_importAssetFromSignedUrlJobErrorDetailsHasBeenSet(false),
    m_importAssetsFromS3JobErrorDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

Details& Details::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ImportAssetFromSignedUrlJobErrorDetails"))
  {
    m_importAssetFromSignedUrlJobErrorDetails = jsonValue.GetObject("ImportAssetFromSignedUrlJobErrorDetails");

    m_importAssetFromSignedUrlJobErrorDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImportAssetsFromS3JobErrorDetails"))
  {
    Array<JsonView> importAssetsFromS3JobErrorDetailsJsonList = jsonValue.GetArray("ImportAssetsFromS3JobErrorDetails");
    for(unsigned importAssetsFromS3JobErrorDetailsIndex = 0; importAssetsFromS3JobErrorDetailsIndex < importAssetsFromS3JobErrorDetailsJsonList.GetLength(); ++importAssetsFromS3JobErrorDetailsIndex)
    {
      m_importAssetsFromS3JobErrorDetails.push_back(importAssetsFromS3JobErrorDetailsJsonList[importAssetsFromS3JobErrorDetailsIndex].AsObject());
    }
    m_importAssetsFromS3JobErrorDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue Details::Jsonize() const
{
  JsonValue payload;

  if(m_importAssetFromSignedUrlJobErrorDetailsHasBeenSet)
  {
   payload.WithObject("ImportAssetFromSignedUrlJobErrorDetails", m_importAssetFromSignedUrlJobErrorDetails.Jsonize());

  }

  if(m_importAssetsFromS3JobErrorDetailsHasBeenSet)
  {
   Array<JsonValue> importAssetsFromS3JobErrorDetailsJsonList(m_importAssetsFromS3JobErrorDetails.size());
   for(unsigned importAssetsFromS3JobErrorDetailsIndex = 0; importAssetsFromS3JobErrorDetailsIndex < importAssetsFromS3JobErrorDetailsJsonList.GetLength(); ++importAssetsFromS3JobErrorDetailsIndex)
   {
     importAssetsFromS3JobErrorDetailsJsonList[importAssetsFromS3JobErrorDetailsIndex].AsObject(m_importAssetsFromS3JobErrorDetails[importAssetsFromS3JobErrorDetailsIndex].Jsonize());
   }
   payload.WithArray("ImportAssetsFromS3JobErrorDetails", std::move(importAssetsFromS3JobErrorDetailsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
