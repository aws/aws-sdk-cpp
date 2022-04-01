/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/CancelJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Braket::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelJobRequest::CancelJobRequest() : 
    m_jobArnHasBeenSet(false)
{
}

Aws::String CancelJobRequest::SerializePayload() const
{
  return {};
}




