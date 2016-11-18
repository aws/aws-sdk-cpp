/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/opsworks/model/UpdateRdsDbInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRdsDbInstanceRequest::UpdateRdsDbInstanceRequest() : 
    m_rdsDbInstanceArnHasBeenSet(false),
    m_dbUserHasBeenSet(false),
    m_dbPasswordHasBeenSet(false)
{
}

Aws::String UpdateRdsDbInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_rdsDbInstanceArnHasBeenSet)
  {
   payload.WithString("RdsDbInstanceArn", m_rdsDbInstanceArn);

  }

  if(m_dbUserHasBeenSet)
  {
   payload.WithString("DbUser", m_dbUser);

  }

  if(m_dbPasswordHasBeenSet)
  {
   payload.WithString("DbPassword", m_dbPassword);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateRdsDbInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.UpdateRdsDbInstance"));
  return headers;

}



