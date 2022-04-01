/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/RegisterRdsDbInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterRdsDbInstanceRequest::RegisterRdsDbInstanceRequest() : 
    m_stackIdHasBeenSet(false),
    m_rdsDbInstanceArnHasBeenSet(false),
    m_dbUserHasBeenSet(false),
    m_dbPasswordHasBeenSet(false)
{
}

Aws::String RegisterRdsDbInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterRdsDbInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.RegisterRdsDbInstance"));
  return headers;

}




