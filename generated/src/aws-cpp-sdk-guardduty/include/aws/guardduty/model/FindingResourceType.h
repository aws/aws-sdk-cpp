/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{
  enum class FindingResourceType
  {
    NOT_SET,
    EC2_INSTANCE,
    EC2_NETWORK_INTERFACE,
    S3_BUCKET,
    S3_OBJECT,
    ACCESS_KEY,
    EKS_CLUSTER,
    KUBERNETES_WORKLOAD,
    CONTAINER
  };

namespace FindingResourceTypeMapper
{
AWS_GUARDDUTY_API FindingResourceType GetFindingResourceTypeForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForFindingResourceType(FindingResourceType value);
} // namespace FindingResourceTypeMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
