/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Organizations
{
namespace Model
{
  enum class OrganizationFeatureSet
  {
    NOT_SET,
    ALL,
    CONSOLIDATED_BILLING
  };

namespace OrganizationFeatureSetMapper
{
AWS_ORGANIZATIONS_API OrganizationFeatureSet GetOrganizationFeatureSetForName(const Aws::String& name);

AWS_ORGANIZATIONS_API Aws::String GetNameForOrganizationFeatureSet(OrganizationFeatureSet value);
} // namespace OrganizationFeatureSetMapper
} // namespace Model
} // namespace Organizations
} // namespace Aws
