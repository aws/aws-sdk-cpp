/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/serverlessrepo/model/DeleteApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServerlessApplicationRepository::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteApplicationRequest::DeleteApplicationRequest() : 
    m_applicationIdHasBeenSet(false)
{
}

Aws::String DeleteApplicationRequest::SerializePayload() const
{
  return {};
}




