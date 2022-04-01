/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/RegisterOnPremisesInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterOnPremisesInstanceRequest::RegisterOnPremisesInstanceRequest() : 
    m_instanceNameHasBeenSet(false),
    m_iamSessionArnHasBeenSet(false),
    m_iamUserArnHasBeenSet(false)
{
}

Aws::String RegisterOnPremisesInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceNameHasBeenSet)
  {
   payload.WithString("instanceName", m_instanceName);

  }

  if(m_iamSessionArnHasBeenSet)
  {
   payload.WithString("iamSessionArn", m_iamSessionArn);

  }

  if(m_iamUserArnHasBeenSet)
  {
   payload.WithString("iamUserArn", m_iamUserArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterOnPremisesInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeDeploy_20141006.RegisterOnPremisesInstance"));
  return headers;

}




