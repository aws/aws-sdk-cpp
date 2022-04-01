/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{
  enum class OrganizationNodeType
  {
    NOT_SET,
    ORGANIZATION,
    ORGANIZATIONAL_UNIT,
    ACCOUNT
  };

namespace OrganizationNodeTypeMapper
{
AWS_SERVICECATALOG_API OrganizationNodeType GetOrganizationNodeTypeForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForOrganizationNodeType(OrganizationNodeType value);
} // namespace OrganizationNodeTypeMapper
} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
