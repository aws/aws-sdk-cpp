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

#include <aws/iotsitewise/model/AssetErrorDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

AssetErrorDetails::AssetErrorDetails() : 
    m_assetIdHasBeenSet(false),
    m_code(AssetErrorCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

AssetErrorDetails::AssetErrorDetails(JsonView jsonValue) : 
    m_assetIdHasBeenSet(false),
    m_code(AssetErrorCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

AssetErrorDetails& AssetErrorDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("assetId"))
  {
    m_assetId = jsonValue.GetString("assetId");

    m_assetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("code"))
  {
    m_code = AssetErrorCodeMapper::GetAssetErrorCodeForName(jsonValue.GetString("code"));

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetErrorDetails::Jsonize() const
{
  JsonValue payload;

  if(m_assetIdHasBeenSet)
  {
   payload.WithString("assetId", m_assetId);

  }

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", AssetErrorCodeMapper::GetNameForAssetErrorCode(m_code));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
