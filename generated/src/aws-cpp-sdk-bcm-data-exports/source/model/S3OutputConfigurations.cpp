/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-data-exports/model/S3OutputConfigurations.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMDataExports
{
namespace Model
{

S3OutputConfigurations::S3OutputConfigurations() : 
    m_compression(CompressionOption::NOT_SET),
    m_compressionHasBeenSet(false),
    m_format(FormatOption::NOT_SET),
    m_formatHasBeenSet(false),
    m_outputType(S3OutputType::NOT_SET),
    m_outputTypeHasBeenSet(false),
    m_overwrite(OverwriteOption::NOT_SET),
    m_overwriteHasBeenSet(false)
{
}

S3OutputConfigurations::S3OutputConfigurations(JsonView jsonValue) : 
    m_compression(CompressionOption::NOT_SET),
    m_compressionHasBeenSet(false),
    m_format(FormatOption::NOT_SET),
    m_formatHasBeenSet(false),
    m_outputType(S3OutputType::NOT_SET),
    m_outputTypeHasBeenSet(false),
    m_overwrite(OverwriteOption::NOT_SET),
    m_overwriteHasBeenSet(false)
{
  *this = jsonValue;
}

S3OutputConfigurations& S3OutputConfigurations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Compression"))
  {
    m_compression = CompressionOptionMapper::GetCompressionOptionForName(jsonValue.GetString("Compression"));

    m_compressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Format"))
  {
    m_format = FormatOptionMapper::GetFormatOptionForName(jsonValue.GetString("Format"));

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputType"))
  {
    m_outputType = S3OutputTypeMapper::GetS3OutputTypeForName(jsonValue.GetString("OutputType"));

    m_outputTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Overwrite"))
  {
    m_overwrite = OverwriteOptionMapper::GetOverwriteOptionForName(jsonValue.GetString("Overwrite"));

    m_overwriteHasBeenSet = true;
  }

  return *this;
}

JsonValue S3OutputConfigurations::Jsonize() const
{
  JsonValue payload;

  if(m_compressionHasBeenSet)
  {
   payload.WithString("Compression", CompressionOptionMapper::GetNameForCompressionOption(m_compression));
  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", FormatOptionMapper::GetNameForFormatOption(m_format));
  }

  if(m_outputTypeHasBeenSet)
  {
   payload.WithString("OutputType", S3OutputTypeMapper::GetNameForS3OutputType(m_outputType));
  }

  if(m_overwriteHasBeenSet)
  {
   payload.WithString("Overwrite", OverwriteOptionMapper::GetNameForOverwriteOption(m_overwrite));
  }

  return payload;
}

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
