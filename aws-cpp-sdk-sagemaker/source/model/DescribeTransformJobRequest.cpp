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

#include <aws/sagemaker/model/DescribeTransformJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeTransformJobRequest::DescribeTransformJobRequest() : 
    m_transformJobNameHasBeenSet(false)
{
}

Aws::String DescribeTransformJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_transformJobNameHasBeenSet)
  {
   payload.WithString("TransformJobName", m_transformJobName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeTransformJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeTransformJob"));
  return headers;

}




