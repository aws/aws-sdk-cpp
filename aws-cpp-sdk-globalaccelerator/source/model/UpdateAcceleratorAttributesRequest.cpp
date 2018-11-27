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

#include <aws/globalaccelerator/model/UpdateAcceleratorAttributesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAcceleratorAttributesRequest::UpdateAcceleratorAttributesRequest() : 
    m_acceleratorArnHasBeenSet(false),
    m_flowLogsEnabled(false),
    m_flowLogsEnabledHasBeenSet(false),
    m_flowLogsS3BucketHasBeenSet(false),
    m_flowLogsS3PrefixHasBeenSet(false)
{
}

Aws::String UpdateAcceleratorAttributesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_acceleratorArnHasBeenSet)
  {
   payload.WithString("AcceleratorArn", m_acceleratorArn);

  }

  if(m_flowLogsEnabledHasBeenSet)
  {
   payload.WithBool("FlowLogsEnabled", m_flowLogsEnabled);

  }

  if(m_flowLogsS3BucketHasBeenSet)
  {
   payload.WithString("FlowLogsS3Bucket", m_flowLogsS3Bucket);

  }

  if(m_flowLogsS3PrefixHasBeenSet)
  {
   payload.WithString("FlowLogsS3Prefix", m_flowLogsS3Prefix);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateAcceleratorAttributesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GlobalAccelerator_V20180706.UpdateAcceleratorAttributes"));
  return headers;

}




