/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/EnableImportFindingsForProductRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

EnableImportFindingsForProductRequest::EnableImportFindingsForProductRequest() : 
    m_productArnHasBeenSet(false)
{
}

Aws::String EnableImportFindingsForProductRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_productArnHasBeenSet)
  {
   payload.WithString("ProductArn", m_productArn);

  }

  return payload.View().WriteReadable();
}




