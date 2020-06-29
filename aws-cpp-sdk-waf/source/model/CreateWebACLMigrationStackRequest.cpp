/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/CreateWebACLMigrationStackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAF::Model;
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
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20150824.CreateWebACLMigrationStack"));
  return headers;

}




