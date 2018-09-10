﻿/*
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

#include <aws/opsworks/model/DescribeRdsDbInstancesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeRdsDbInstancesRequest::DescribeRdsDbInstancesRequest() : 
    m_stackIdHasBeenSet(false),
    m_rdsDbInstanceArnsHasBeenSet(false)
{
}

Aws::String DescribeRdsDbInstancesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_rdsDbInstanceArnsHasBeenSet)
  {
   Array<JsonValue> rdsDbInstanceArnsJsonList(m_rdsDbInstanceArns.size());
   for(unsigned rdsDbInstanceArnsIndex = 0; rdsDbInstanceArnsIndex < rdsDbInstanceArnsJsonList.GetLength(); ++rdsDbInstanceArnsIndex)
   {
     rdsDbInstanceArnsJsonList[rdsDbInstanceArnsIndex].AsString(m_rdsDbInstanceArns[rdsDbInstanceArnsIndex]);
   }
   payload.WithArray("RdsDbInstanceArns", std::move(rdsDbInstanceArnsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeRdsDbInstancesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.DescribeRdsDbInstances"));
  return headers;

}




