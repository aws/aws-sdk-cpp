/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_s3DataDistributionTypeHasBeenSet(false),
    m_attributeNamesHasBeenSet(false),
    m_instanceGroupNamesHasBeenSet(false)
{
}

S3DataSource::S3DataSource(JsonView jsonValue) : 
    m_s3DataType(S3DataType::NOT_SET),
    m_s3DataTypeHasBeenSet(false),
    m_s3UriHasBeenSet(false),
    m_s3DataDistributionType(S3DataDistribution::NOT_SET),
    m_s3DataDistributionTypeHasBeenSet(false),
    m_attributeNamesHasBeenSet(false),
    m_instanceGroupNamesHasBeenSet(false)
{
  *this = jsonValue;
}

S3DataSource& S3DataSource::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("AttributeNames"))
  {
    Aws::Utils::Array<JsonView> attributeNamesJsonList = jsonValue.GetArray("AttributeNames");
    for(unsigned attributeNamesIndex = 0; attributeNamesIndex < attributeNamesJsonList.GetLength(); ++attributeNamesIndex)
    {
      m_attributeNames.push_back(attributeNamesJsonList[attributeNamesIndex].AsString());
    }
    m_attributeNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceGroupNames"))
  {
    Aws::Utils::Array<JsonView> instanceGroupNamesJsonList = jsonValue.GetArray("InstanceGroupNames");
    for(unsigned instanceGroupNamesIndex = 0; instanceGroupNamesIndex < instanceGroupNamesJsonList.GetLength(); ++instanceGroupNamesIndex)
    {
      m_instanceGroupNames.push_back(instanceGroupNamesJsonList[instanceGroupNamesIndex].AsString());
    }
    m_instanceGroupNamesHasBeenSet = true;
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

  if(m_attributeNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributeNamesJsonList(m_attributeNames.size());
   for(unsigned attributeNamesIndex = 0; attributeNamesIndex < attributeNamesJsonList.GetLength(); ++attributeNamesIndex)
   {
     attributeNamesJsonList[attributeNamesIndex].AsString(m_attributeNames[attributeNamesIndex]);
   }
   payload.WithArray("AttributeNames", std::move(attributeNamesJsonList));

  }

  if(m_instanceGroupNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceGroupNamesJsonList(m_instanceGroupNames.size());
   for(unsigned instanceGroupNamesIndex = 0; instanceGroupNamesIndex < instanceGroupNamesJsonList.GetLength(); ++instanceGroupNamesIndex)
   {
     instanceGroupNamesJsonList[instanceGroupNamesIndex].AsString(m_instanceGroupNames[instanceGroupNamesIndex]);
   }
   payload.WithArray("InstanceGroupNames", std::move(instanceGroupNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
