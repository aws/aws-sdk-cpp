/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/GetJobRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMRServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetJobRunRequest::GetJobRunRequest() : 
    m_applicationIdHasBeenSet(false),
    m_jobRunIdHasBeenSet(false)
{
}

Aws::String GetJobRunRequest::SerializePayload() const
{
  return {};
}




