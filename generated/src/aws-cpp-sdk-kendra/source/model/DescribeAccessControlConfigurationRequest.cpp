/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DescribeAccessControlConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAccessControlConfigurationRequest::DescribeAccessControlConfigurationRequest() : 
    m_indexIdHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

Aws::String DescribeAccessControlConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_indexIdHasBeenSet)
  {
   payload.WithString("IndexId", m_indexId);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeAccessControlConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSKendraFrontendService.DescribeAccessControlConfiguration"));
  return headers;

}




