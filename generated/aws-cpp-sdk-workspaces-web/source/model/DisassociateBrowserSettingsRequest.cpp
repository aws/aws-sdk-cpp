/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/DisassociateBrowserSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateBrowserSettingsRequest::DisassociateBrowserSettingsRequest() : 
    m_portalArnHasBeenSet(false)
{
}

Aws::String DisassociateBrowserSettingsRequest::SerializePayload() const
{
  return {};
}




