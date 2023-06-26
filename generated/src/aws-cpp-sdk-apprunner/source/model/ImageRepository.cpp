/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/ImageRepository.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppRunner
{
namespace Model
{

ImageRepository::ImageRepository() : 
    m_imageIdentifierHasBeenSet(false),
    m_imageConfigurationHasBeenSet(false),
    m_imageRepositoryType(ImageRepositoryType::NOT_SET),
    m_imageRepositoryTypeHasBeenSet(false)
{
}

ImageRepository::ImageRepository(JsonView jsonValue) : 
    m_imageIdentifierHasBeenSet(false),
    m_imageConfigurationHasBeenSet(false),
    m_imageRepositoryType(ImageRepositoryType::NOT_SET),
    m_imageRepositoryTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ImageRepository& ImageRepository::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ImageIdentifier"))
  {
    m_imageIdentifier = jsonValue.GetString("ImageIdentifier");

    m_imageIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageConfiguration"))
  {
    m_imageConfiguration = jsonValue.GetObject("ImageConfiguration");

    m_imageConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageRepositoryType"))
  {
    m_imageRepositoryType = ImageRepositoryTypeMapper::GetImageRepositoryTypeForName(jsonValue.GetString("ImageRepositoryType"));

    m_imageRepositoryTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageRepository::Jsonize() const
{
  JsonValue payload;

  if(m_imageIdentifierHasBeenSet)
  {
   payload.WithString("ImageIdentifier", m_imageIdentifier);

  }

  if(m_imageConfigurationHasBeenSet)
  {
   payload.WithObject("ImageConfiguration", m_imageConfiguration.Jsonize());

  }

  if(m_imageRepositoryTypeHasBeenSet)
  {
   payload.WithString("ImageRepositoryType", ImageRepositoryTypeMapper::GetNameForImageRepositoryType(m_imageRepositoryType));
  }

  return payload;
}

} // namespace Model
} // namespace AppRunner
} // namespace Aws
