/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class AssociationSyncCompliance
  {
    NOT_SET,
    AUTO,
    MANUAL
  };

namespace AssociationSyncComplianceMapper
{
AWS_SSM_API AssociationSyncCompliance GetAssociationSyncComplianceForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForAssociationSyncCompliance(AssociationSyncCompliance value);
} // namespace AssociationSyncComplianceMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
