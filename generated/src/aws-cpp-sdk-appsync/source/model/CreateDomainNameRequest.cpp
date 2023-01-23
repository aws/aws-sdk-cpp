/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/CreateDomainNameRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDomainNameRequest::CreateDomainNameRequest() : 
    m_domainNameHasBeenSet(false),
    m_certificateArnHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Aws::String CreateDomainNameRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  if(m_certificateArnHasBeenSet)
  {
   payload.WithString("certificateArn", m_certificateArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload.View().WriteReadable();
}




