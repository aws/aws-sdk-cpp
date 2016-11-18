/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/config/model/DeliveryChannel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

DeliveryChannel::DeliveryChannel() : 
    m_nameHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_s3KeyPrefixHasBeenSet(false),
    m_snsTopicARNHasBeenSet(false),
    m_configSnapshotDeliveryPropertiesHasBeenSet(false)
{
}

DeliveryChannel::DeliveryChannel(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_s3KeyPrefixHasBeenSet(false),
    m_snsTopicARNHasBeenSet(false),
    m_configSnapshotDeliveryPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

DeliveryChannel& DeliveryChannel::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("s3BucketName");

    m_s3BucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3KeyPrefix"))
  {
    m_s3KeyPrefix = jsonValue.GetString("s3KeyPrefix");

    m_s3KeyPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snsTopicARN"))
  {
    m_snsTopicARN = jsonValue.GetString("snsTopicARN");

    m_snsTopicARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configSnapshotDeliveryProperties"))
  {
    m_configSnapshotDeliveryProperties = jsonValue.GetObject("configSnapshotDeliveryProperties");

    m_configSnapshotDeliveryPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue DeliveryChannel::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("s3BucketName", m_s3BucketName);

  }

  if(m_s3KeyPrefixHasBeenSet)
  {
   payload.WithString("s3KeyPrefix", m_s3KeyPrefix);

  }

  if(m_snsTopicARNHasBeenSet)
  {
   payload.WithString("snsTopicARN", m_snsTopicARN);

  }

  if(m_configSnapshotDeliveryPropertiesHasBeenSet)
  {
   payload.WithObject("configSnapshotDeliveryProperties", m_configSnapshotDeliveryProperties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws