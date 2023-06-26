/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/CancelJobRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMRServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelJobRunRequest::CancelJobRunRequest() : 
    m_applicationIdHasBeenSet(false),
    m_jobRunIdHasBeenSet(false)
{
}

Aws::String CancelJobRunRequest::SerializePayload() const
{
  return {};
}




