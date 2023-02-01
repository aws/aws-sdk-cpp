/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/InitiateJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glacier::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

InitiateJobRequest::InitiateJobRequest() : 
    m_accountIdHasBeenSet(false),
    m_vaultNameHasBeenSet(false),
    m_jobParametersHasBeenSet(false)
{
}

Aws::String InitiateJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobParametersHasBeenSet)
  {
   payload = m_jobParameters.Jsonize();
  }

  return payload.View().WriteReadable();
}




