/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/LabelingJobDataSource.h>
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

LabelingJobDataSource::LabelingJobDataSource() : 
    m_s3DataSourceHasBeenSet(false),
    m_snsDataSourceHasBeenSet(false)
{
}

LabelingJobDataSource::LabelingJobDataSource(JsonView jsonValue) : 
    m_s3DataSourceHasBeenSet(false),
    m_snsDataSourceHasBeenSet(false)
{
  *this = jsonValue;
}

LabelingJobDataSource& LabelingJobDataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3DataSource"))
  {
    m_s3DataSource = jsonValue.GetObject("S3DataSource");

    m_s3DataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnsDataSource"))
  {
    m_snsDataSource = jsonValue.GetObject("SnsDataSource");

    m_snsDataSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue LabelingJobDataSource::Jsonize() const
{
  JsonValue payload;

  if(m_s3DataSourceHasBeenSet)
  {
   payload.WithObject("S3DataSource", m_s3DataSource.Jsonize());

  }

  if(m_snsDataSourceHasBeenSet)
  {
   payload.WithObject("SnsDataSource", m_snsDataSource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
