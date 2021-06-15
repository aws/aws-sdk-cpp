/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{
  enum class PartnerIntegrationStatus
  {
    NOT_SET,
    Active,
    Inactive,
    RuntimeFailure,
    ConnectionFailure
  };

namespace PartnerIntegrationStatusMapper
{
AWS_REDSHIFT_API PartnerIntegrationStatus GetPartnerIntegrationStatusForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForPartnerIntegrationStatus(PartnerIntegrationStatus value);
} // namespace PartnerIntegrationStatusMapper
} // namespace Model
} // namespace Redshift
} // namespace Aws
