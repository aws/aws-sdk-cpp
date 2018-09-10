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

#include <aws/opsworks/model/DeregisterRdsDbInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeregisterRdsDbInstanceRequest::DeregisterRdsDbInstanceRequest() : 
    m_rdsDbInstanceArnHasBeenSet(false)
{
}

Aws::String DeregisterRdsDbInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_rdsDbInstanceArnHasBeenSet)
  {
   payload.WithString("RdsDbInstanceArn", m_rdsDbInstanceArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeregisterRdsDbInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.DeregisterRdsDbInstance"));
  return headers;

}




