/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/UpdateBucketRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateBucketRequest::UpdateBucketRequest() : 
    m_bucketNameHasBeenSet(false),
    m_accessRulesHasBeenSet(false),
    m_versioningHasBeenSet(false),
    m_readonlyAccessAccountsHasBeenSet(false),
    m_accessLogConfigHasBeenSet(false)
{
}

Aws::String UpdateBucketRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("bucketName", m_bucketName);

  }

  if(m_accessRulesHasBeenSet)
  {
   payload.WithObject("accessRules", m_accessRules.Jsonize());

  }

  if(m_versioningHasBeenSet)
  {
   payload.WithString("versioning", m_versioning);

  }

  if(m_readonlyAccessAccountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> readonlyAccessAccountsJsonList(m_readonlyAccessAccounts.size());
   for(unsigned readonlyAccessAccountsIndex = 0; readonlyAccessAccountsIndex < readonlyAccessAccountsJsonList.GetLength(); ++readonlyAccessAccountsIndex)
   {
     readonlyAccessAccountsJsonList[readonlyAccessAccountsIndex].AsString(m_readonlyAccessAccounts[readonlyAccessAccountsIndex]);
   }
   payload.WithArray("readonlyAccessAccounts", std::move(readonlyAccessAccountsJsonList));

  }

  if(m_accessLogConfigHasBeenSet)
  {
   payload.WithObject("accessLogConfig", m_accessLogConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateBucketRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.UpdateBucket"));
  return headers;

}




