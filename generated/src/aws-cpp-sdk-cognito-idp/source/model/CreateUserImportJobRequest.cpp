/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/CreateUserImportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateUserImportJobRequest::CreateUserImportJobRequest() : 
    m_jobNameHasBeenSet(false),
    m_userPoolIdHasBeenSet(false),
    m_cloudWatchLogsRoleArnHasBeenSet(false)
{
}

Aws::String CreateUserImportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_cloudWatchLogsRoleArnHasBeenSet)
  {
   payload.WithString("CloudWatchLogsRoleArn", m_cloudWatchLogsRoleArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateUserImportJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.CreateUserImportJob"));
  return headers;

}




