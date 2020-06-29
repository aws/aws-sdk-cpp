/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
