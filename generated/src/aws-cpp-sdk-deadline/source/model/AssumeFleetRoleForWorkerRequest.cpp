/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/AssumeFleetRoleForWorkerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssumeFleetRoleForWorkerRequest::AssumeFleetRoleForWorkerRequest() : 
    m_farmIdHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_workerIdHasBeenSet(false)
{
}

Aws::String AssumeFleetRoleForWorkerRequest::SerializePayload() const
{
  return {};
}




