/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/S3DirectSourceAdditionalOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

S3DirectSourceAdditionalOptions::S3DirectSourceAdditionalOptions() : 
    m_boundedSize(0),
    m_boundedSizeHasBeenSet(false),
    m_boundedFiles(0),
    m_boundedFilesHasBeenSet(false),
    m_enableSamplePath(false),
    m_enableSamplePathHasBeenSet(false),
    m_samplePathHasBeenSet(false)
{
}

S3DirectSourceAdditionalOptions::S3DirectSourceAdditionalOptions(JsonView jsonValue) : 
    m_boundedSize(0),
    m_boundedSizeHasBeenSet(false),
    m_boundedFiles(0),
    m_boundedFilesHasBeenSet(false),
    m_enableSamplePath(false),
    m_enableSamplePathHasBeenSet(false),
    m_samplePathHasBeenSet(false)
{
  *this = jsonValue;
}

S3DirectSourceAdditionalOptions& S3DirectSourceAdditionalOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BoundedSize"))
  {
    m_boundedSize = jsonValue.GetInt64("BoundedSize");

    m_boundedSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BoundedFiles"))
  {
    m_boundedFiles = jsonValue.GetInt64("BoundedFiles");

    m_boundedFilesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableSamplePath"))
  {
    m_enableSamplePath = jsonValue.GetBool("EnableSamplePath");

    m_enableSamplePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SamplePath"))
  {
    m_samplePath = jsonValue.GetString("SamplePath");

    m_samplePathHasBeenSet = true;
  }

  return *this;
}

JsonValue S3DirectSourceAdditionalOptions::Jsonize() const
{
  JsonValue payload;

  if(m_boundedSizeHasBeenSet)
  {
   payload.WithInt64("BoundedSize", m_boundedSize);

  }

  if(m_boundedFilesHasBeenSet)
  {
   payload.WithInt64("BoundedFiles", m_boundedFiles);

  }

  if(m_enableSamplePathHasBeenSet)
  {
   payload.WithBool("EnableSamplePath", m_enableSamplePath);

  }

  if(m_samplePathHasBeenSet)
  {
   payload.WithString("SamplePath", m_samplePath);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
