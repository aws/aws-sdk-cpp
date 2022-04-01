/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/CreateDatasetGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDatasetGroupRequest::CreateDatasetGroupRequest() : 
    m_nameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false),
    m_domain(Domain::NOT_SET),
    m_domainHasBeenSet(false)
{
}

Aws::String CreateDatasetGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("kmsKeyArn", m_kmsKeyArn);

  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("domain", DomainMapper::GetNameForDomain(m_domain));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDatasetGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.CreateDatasetGroup"));
  return headers;

}




