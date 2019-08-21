/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
