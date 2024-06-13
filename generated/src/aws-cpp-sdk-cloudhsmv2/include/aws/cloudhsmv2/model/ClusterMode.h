/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudHSMV2
{
namespace Model
{
  enum class ClusterMode
  {
    NOT_SET,
    FIPS,
    NON_FIPS
  };

namespace ClusterModeMapper
{
AWS_CLOUDHSMV2_API ClusterMode GetClusterModeForName(const Aws::String& name);

AWS_CLOUDHSMV2_API Aws::String GetNameForClusterMode(ClusterMode value);
} // namespace ClusterModeMapper
} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
