/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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




