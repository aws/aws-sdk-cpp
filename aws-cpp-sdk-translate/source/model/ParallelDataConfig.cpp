/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/ParallelDataConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Translate
{
namespace Model
{

ParallelDataConfig::ParallelDataConfig() : 
    m_s3UriHasBeenSet(false),
    m_format(ParallelDataFormat::NOT_SET),
    m_formatHasBeenSet(false)
{
}

ParallelDataConfig::ParallelDataConfig(JsonView jsonValue) : 
    m_s3UriHasBeenSet(false),
    m_format(ParallelDataFormat::NOT_SET),
    m_formatHasBeenSet(false)
{
  *this = jsonValue;
}

ParallelDataConfig& ParallelDataConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");

    m_s3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Format"))
  {
    m_format = ParallelDataFormatMapper::GetParallelDataFormatForName(jsonValue.GetString("Format"));

    m_formatHasBeenSet = true;
  }

  return *this;
}

JsonValue ParallelDataConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("S3Uri", m_s3Uri);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", ParallelDataFormatMapper::GetNameForParallelDataFormat(m_format));
  }

  return payload;
}

} // namespace Model
} // namespace Translate
} // namespace Aws
