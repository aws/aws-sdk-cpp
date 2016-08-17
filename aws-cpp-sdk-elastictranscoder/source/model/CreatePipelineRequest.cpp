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
#include <aws/elastictranscoder/model/CreatePipelineRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ElasticTranscoder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePipelineRequest::CreatePipelineRequest() : 
    m_nameHasBeenSet(false),
    m_inputBucketHasBeenSet(false),
    m_outputBucketHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_awsKmsKeyArnHasBeenSet(false),
    m_notificationsHasBeenSet(false),
    m_contentConfigHasBeenSet(false),
    m_thumbnailConfigHasBeenSet(false)
{
}

Aws::String CreatePipelineRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

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

  return payload.WriteReadable();
}



