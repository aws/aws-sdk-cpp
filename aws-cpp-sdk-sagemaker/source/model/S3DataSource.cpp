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

#include <aws/sagemaker/model/S3DataSource.h>
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

S3DataSource::S3DataSource() : 
    m_s3DataType(S3DataType::NOT_SET),
    m_s3DataTypeHasBeenSet(false),
    m_s3UriHasBeenSet(false),
    m_s3DataDistributionType(S3DataDistribution::NOT_SET),
    m_s3DataDistributionTypeHasBeenSet(false)
{
}

S3DataSource::S3DataSource(const JsonValue& jsonValue) : 
    m_s3DataType(S3DataType::NOT_SET),
    m_s3DataTypeHasBeenSet(false),
    m_s3UriHasBeenSet(false),
    m_s3DataDistributionType(S3DataDistribution::NOT_SET),
    m_s3DataDistributionTypeHasBeenSet(false)
{
  *this = jsonValue;
}

S3DataSource& S3DataSource::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("S3DataType"))
  {
    m_s3DataType = S3DataTypeMapper::GetS3DataTypeForName(jsonValue.GetString("S3DataType"));

    m_s3DataTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");

    m_s3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3DataDistributionType"))
  {
    m_s3DataDistributionType = S3DataDistributionMapper::GetS3DataDistributionForName(jsonValue.GetString("S3DataDistributionType"));

    m_s3DataDistributionTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue S3DataSource::Jsonize() const
{
  JsonValue payload;

  if(m_s3DataTypeHasBeenSet)
  {
   payload.WithString("S3DataType", S3DataTypeMapper::GetNameForS3DataType(m_s3DataType));
  }

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("S3Uri", m_s3Uri);

  }

  if(m_s3DataDistributionTypeHasBeenSet)
  {
   payload.WithString("S3DataDistributionType", S3DataDistributionMapper::GetNameForS3DataDistribution(m_s3DataDistributionType));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
