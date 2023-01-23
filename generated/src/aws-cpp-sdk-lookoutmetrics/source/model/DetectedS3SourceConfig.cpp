/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/DetectedS3SourceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

DetectedS3SourceConfig::DetectedS3SourceConfig() : 
    m_fileFormatDescriptorHasBeenSet(false)
{
}

DetectedS3SourceConfig::DetectedS3SourceConfig(JsonView jsonValue) : 
    m_fileFormatDescriptorHasBeenSet(false)
{
  *this = jsonValue;
}

DetectedS3SourceConfig& DetectedS3SourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FileFormatDescriptor"))
  {
    m_fileFormatDescriptor = jsonValue.GetObject("FileFormatDescriptor");

    m_fileFormatDescriptorHasBeenSet = true;
  }

  return *this;
}

JsonValue DetectedS3SourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_fileFormatDescriptorHasBeenSet)
  {
   payload.WithObject("FileFormatDescriptor", m_fileFormatDescriptor.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
