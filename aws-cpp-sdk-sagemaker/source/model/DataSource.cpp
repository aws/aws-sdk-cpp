/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DataSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

DataSource::DataSource() : 
    m_s3DataSourceHasBeenSet(false),
    m_fileSystemDataSourceHasBeenSet(false)
{
}

DataSource::DataSource(JsonView jsonValue) : 
    m_s3DataSourceHasBeenSet(false),
    m_fileSystemDataSourceHasBeenSet(false)
{
  *this = jsonValue;
}

DataSource& DataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3DataSource"))
  {
    m_s3DataSource = jsonValue.GetObject("S3DataSource");

    m_s3DataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileSystemDataSource"))
  {
    m_fileSystemDataSource = jsonValue.GetObject("FileSystemDataSource");

    m_fileSystemDataSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSource::Jsonize() const
{
  JsonValue payload;

  if(m_s3DataSourceHasBeenSet)
  {
   payload.WithObject("S3DataSource", m_s3DataSource.Jsonize());

  }

  if(m_fileSystemDataSourceHasBeenSet)
  {
   payload.WithObject("FileSystemDataSource", m_fileSystemDataSource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
