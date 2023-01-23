/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/DeleteFrameworkRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteFrameworkRequest::DeleteFrameworkRequest() : 
    m_frameworkNameHasBeenSet(false)
{
}

Aws::String DeleteFrameworkRequest::SerializePayload() const
{
  return {};
}




