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
#include <aws/elastictranscoder/model/Pipeline.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticTranscoder
{
namespace Model
{

Pipeline::Pipeline() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_inputBucketHasBeenSet(false),
    m_outputBucketHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_awsKmsKeyArnHasBeenSet(false),
    m_notificationsHasBeenSet(false),
    m_contentConfigHasBeenSet(false),
    m_thumbnailConfigHasBeenSet(false)
{
}

Pipeline::Pipeline(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_inputBucketHasBeenSet(false),
    m_outputBucketHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_awsKmsKeyArnHasBeenSet(false),
    m_notificationsHasBeenSet(false),
    m_contentConfigHasBeenSet(false),
    m_thumbnailConfigHasBeenSet(false)
{
  *this = jsonValue;
}

Pipeline& Pipeline::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputBucket"))
  {
    m_inputBucket = jsonValue.GetString("InputBucket");

    m_inputBucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputBucket"))
  {
    m_outputBucket = jsonValue.GetString("OutputBucket");

    m_outputBucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Role"))
  {
    m_role = jsonValue.GetString("Role");

    m_roleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsKmsKeyArn"))
  {
    m_awsKmsKeyArn = jsonValue.GetString("AwsKmsKeyArn");

    m_awsKmsKeyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Notifications"))
  {
    m_notifications = jsonValue.GetObject("Notifications");

    m_notificationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentConfig"))
  {
    m_contentConfig = jsonValue.GetObject("ContentConfig");

    m_contentConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThumbnailConfig"))
  {
    m_thumbnailConfig = jsonValue.GetObject("ThumbnailConfig");

    m_thumbnailConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue Pipeline::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_inputBucketHasBeenSet)
  {
   payload.WithString("InputBucket", m_inputBucket);

  }

  if(m_outputBucketHasBeenSet)
  {
   payload.WithString("OutputBucket", m_outputBucket);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", m_role);

  }

  if(m_awsKmsKeyArnHasBeenSet)
  {
   payload.WithString("AwsKmsKeyArn", m_awsKmsKeyArn);

  }

  if(m_notificationsHasBeenSet)
  {
   payload.WithObject("Notifications", m_notifications.Jsonize());

  }

  if(m_contentConfigHasBeenSet)
  {
   payload.WithObject("ContentConfig", m_contentConfig.Jsonize());

  }

  if(m_thumbnailConfigHasBeenSet)
  {
   payload.WithObject("ThumbnailConfig", m_thumbnailConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws