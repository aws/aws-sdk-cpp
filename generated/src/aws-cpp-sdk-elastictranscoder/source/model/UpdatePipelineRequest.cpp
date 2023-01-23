/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elastictranscoder/model/UpdatePipelineRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ElasticTranscoder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePipelineRequest::UpdatePipelineRequest() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_inputBucketHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_awsKmsKeyArnHasBeenSet(false),
    m_notificationsHasBeenSet(false),
    m_contentConfigHasBeenSet(false),
    m_thumbnailConfigHasBeenSet(false)
{
}

Aws::String UpdatePipelineRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}




