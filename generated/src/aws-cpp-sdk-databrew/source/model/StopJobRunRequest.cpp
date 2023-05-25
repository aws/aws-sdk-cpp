/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/StopJobRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GlueDataBrew::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopJobRunRequest::StopJobRunRequest() : 
    m_nameHasBeenSet(false),
    m_runIdHasBeenSet(false)
{
}

Aws::String StopJobRunRequest::SerializePayload() const
{
  return {};
}




