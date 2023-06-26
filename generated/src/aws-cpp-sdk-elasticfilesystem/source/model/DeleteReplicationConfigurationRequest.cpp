/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/DeleteReplicationConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EFS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteReplicationConfigurationRequest::DeleteReplicationConfigurationRequest() : 
    m_sourceFileSystemIdHasBeenSet(false)
{
}

Aws::String DeleteReplicationConfigurationRequest::SerializePayload() const
{
  return {};
}




