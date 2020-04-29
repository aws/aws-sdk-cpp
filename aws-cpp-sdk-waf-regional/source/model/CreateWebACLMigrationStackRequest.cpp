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

#include <aws/waf-regional/model/CreateWebACLMigrationStackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAFRegional::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateWebACLMigrationStackRequest::CreateWebACLMigrationStackRequest() : 
    m_webACLIdHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_ignoreUnsupportedType(false),
    m_ignoreUnsupportedTypeHasBeenSet(false)
{
}

Aws::String CreateWebACLMigrationStackRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_webACLIdHasBeenSet)
  {
   payload.WithString("WebACLId", m_webACLId);

  }

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("S3BucketName", m_s3BucketName);

  }

  if(m_ignoreUnsupportedTypeHasBeenSet)
  {
   payload.WithBool("IgnoreUnsupportedType", m_ignoreUnsupportedType);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateWebACLMigrationStackRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_Regional_20161128.CreateWebACLMigrationStack"));
  return headers;

}




