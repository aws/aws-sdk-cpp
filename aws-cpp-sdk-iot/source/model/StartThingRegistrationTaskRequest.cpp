/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/StartThingRegistrationTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartThingRegistrationTaskRequest::StartThingRegistrationTaskRequest() : 
    m_templateBodyHasBeenSet(false),
    m_inputFileBucketHasBeenSet(false),
    m_inputFileKeyHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

Aws::String StartThingRegistrationTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_templateBodyHasBeenSet)
  {
   payload.WithString("templateBody", m_templateBody);

  }

  if(m_inputFileBucketHasBeenSet)
  {
   payload.WithString("inputFileBucket", m_inputFileBucket);

  }

  if(m_inputFileKeyHasBeenSet)
  {
   payload.WithString("inputFileKey", m_inputFileKey);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload.View().WriteReadable();
}




