/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/S3OutputFormatConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

S3OutputFormatConfig::S3OutputFormatConfig() : 
    m_fileType(FileType::NOT_SET),
    m_fileTypeHasBeenSet(false),
    m_prefixConfigHasBeenSet(false),
    m_aggregationConfigHasBeenSet(false)
{
}

S3OutputFormatConfig::S3OutputFormatConfig(JsonView jsonValue) : 
    m_fileType(FileType::NOT_SET),
    m_fileTypeHasBeenSet(false),
    m_prefixConfigHasBeenSet(false),
    m_aggregationConfigHasBeenSet(false)
{
  *this = jsonValue;
}

S3OutputFormatConfig& S3OutputFormatConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fileType"))
  {
    m_fileType = FileTypeMapper::GetFileTypeForName(jsonValue.GetString("fileType"));

    m_fileTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("prefixConfig"))
  {
    m_prefixConfig = jsonValue.GetObject("prefixConfig");

    m_prefixConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("aggregationConfig"))
  {
    m_aggregationConfig = jsonValue.GetObject("aggregationConfig");

    m_aggregationConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue S3OutputFormatConfig::Jsonize() const
{
  JsonValue payload;

  if(m_fileTypeHasBeenSet)
  {
   payload.WithString("fileType", FileTypeMapper::GetNameForFileType(m_fileType));
  }

  if(m_prefixConfigHasBeenSet)
  {
   payload.WithObject("prefixConfig", m_prefixConfig.Jsonize());

  }

  if(m_aggregationConfigHasBeenSet)
  {
   payload.WithObject("aggregationConfig", m_aggregationConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
