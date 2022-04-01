/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/S3SourceAdditionalOptions.h>
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

S3SourceAdditionalOptions::S3SourceAdditionalOptions() : 
    m_boundedSize(0),
    m_boundedSizeHasBeenSet(false),
    m_boundedFiles(0),
    m_boundedFilesHasBeenSet(false)
{
}

S3SourceAdditionalOptions::S3SourceAdditionalOptions(JsonView jsonValue) : 
    m_boundedSize(0),
    m_boundedSizeHasBeenSet(false),
    m_boundedFiles(0),
    m_boundedFilesHasBeenSet(false)
{
  *this = jsonValue;
}

S3SourceAdditionalOptions& S3SourceAdditionalOptions::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue S3SourceAdditionalOptions::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
