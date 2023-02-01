/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/StartResourceScanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AccessAnalyzer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartResourceScanRequest::StartResourceScanRequest() : 
    m_analyzerArnHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_resourceOwnerAccountHasBeenSet(false)
{
}

Aws::String StartResourceScanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_analyzerArnHasBeenSet)
  {
   payload.WithString("analyzerArn", m_analyzerArn);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  if(m_resourceOwnerAccountHasBeenSet)
  {
   payload.WithString("resourceOwnerAccount", m_resourceOwnerAccount);

  }

  return payload.View().WriteReadable();
}




