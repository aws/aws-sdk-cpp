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

#include <aws/sagemaker/model/DescribeWorkforceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeWorkforceRequest::DescribeWorkforceRequest() : 
    m_workforceNameHasBeenSet(false)
{
}

Aws::String DescribeWorkforceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workforceNameHasBeenSet)
  {
   payload.WithString("WorkforceName", m_workforceName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeWorkforceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeWorkforce"));
  return headers;

}




