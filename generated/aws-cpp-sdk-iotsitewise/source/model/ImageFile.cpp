/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ImageFile.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

ImageFile::ImageFile() : 
    m_dataHasBeenSet(false),
    m_type(ImageFileType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

ImageFile::ImageFile(JsonView jsonValue) : 
    m_dataHasBeenSet(false),
    m_type(ImageFileType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

ImageFile& ImageFile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("data"))
  {
    m_data = HashingUtils::Base64Decode(jsonValue.GetString("data"));
    m_dataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = ImageFileTypeMapper::GetImageFileTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageFile::Jsonize() const
{
  JsonValue payload;

  if(m_dataHasBeenSet)
  {
   payload.WithString("data", HashingUtils::Base64Encode(m_data));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ImageFileTypeMapper::GetNameForImageFileType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
