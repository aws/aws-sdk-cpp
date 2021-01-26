/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/serverlessrepo/model/GetCloudFormationTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServerlessApplicationRepository::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetCloudFormationTemplateRequest::GetCloudFormationTemplateRequest() : 
    m_applicationIdHasBeenSet(false),
    m_templateIdHasBeenSet(false)
{
}

Aws::String GetCloudFormationTemplateRequest::SerializePayload() const
{
  return {};
}




