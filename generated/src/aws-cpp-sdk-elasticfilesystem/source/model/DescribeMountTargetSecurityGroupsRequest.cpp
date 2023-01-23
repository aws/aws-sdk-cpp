/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/DescribeMountTargetSecurityGroupsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EFS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeMountTargetSecurityGroupsRequest::DescribeMountTargetSecurityGroupsRequest() : 
    m_mountTargetIdHasBeenSet(false)
{
}

Aws::String DescribeMountTargetSecurityGroupsRequest::SerializePayload() const
{
  return {};
}




