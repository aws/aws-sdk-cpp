/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{
  enum class OrganizationResourceCollectionType
  {
    NOT_SET,
    AWS_CLOUD_FORMATION,
    AWS_SERVICE,
    AWS_ACCOUNT,
    AWS_TAGS
  };

namespace OrganizationResourceCollectionTypeMapper
{
AWS_DEVOPSGURU_API OrganizationResourceCollectionType GetOrganizationResourceCollectionTypeForName(const Aws::String& name);

AWS_DEVOPSGURU_API Aws::String GetNameForOrganizationResourceCollectionType(OrganizationResourceCollectionType value);
} // namespace OrganizationResourceCollectionTypeMapper
} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
