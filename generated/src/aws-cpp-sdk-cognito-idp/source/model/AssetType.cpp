/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AssetType.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

AssetType::AssetType(JsonView jsonValue)
{
  *this = jsonValue;
}

AssetType& AssetType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Category"))
  {
    m_category = AssetCategoryTypeMapper::GetAssetCategoryTypeForName(jsonValue.GetString("Category"));
    m_categoryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ColorMode"))
  {
    m_colorMode = ColorSchemeModeTypeMapper::GetColorSchemeModeTypeForName(jsonValue.GetString("ColorMode"));
    m_colorModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Extension"))
  {
    m_extension = AssetExtensionTypeMapper::GetAssetExtensionTypeForName(jsonValue.GetString("Extension"));
    m_extensionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Bytes"))
  {
    m_bytes = HashingUtils::Base64Decode(jsonValue.GetString("Bytes"));
    m_bytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");
    m_resourceIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetType::Jsonize() const
{
  JsonValue payload;

  if(m_categoryHasBeenSet)
  {
   payload.WithString("Category", AssetCategoryTypeMapper::GetNameForAssetCategoryType(m_category));
  }

  if(m_colorModeHasBeenSet)
  {
   payload.WithString("ColorMode", ColorSchemeModeTypeMapper::GetNameForColorSchemeModeType(m_colorMode));
  }

  if(m_extensionHasBeenSet)
  {
   payload.WithString("Extension", AssetExtensionTypeMapper::GetNameForAssetExtensionType(m_extension));
  }

  if(m_bytesHasBeenSet)
  {
   payload.WithString("Bytes", HashingUtils::Base64Encode(m_bytes));
  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
