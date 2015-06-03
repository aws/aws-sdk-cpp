/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/opsworks/model/RegisterRdsDbInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterRdsDbInstanceRequest::RegisterRdsDbInstanceRequest()
{
}

Aws::String RegisterRdsDbInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  payload.WithString("StackId", m_stackId);

  payload.WithString("RdsDbInstanceArn", m_rdsDbInstanceArn);

  payload.WithString("DbUser", m_dbUser);

  payload.WithString("DbPassword", m_dbPassword);

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterRdsDbInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.RegisterRdsDbInstance"));
  return std::move(headers);

}



