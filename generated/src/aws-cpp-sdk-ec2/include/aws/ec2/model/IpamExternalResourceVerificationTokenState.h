﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class IpamExternalResourceVerificationTokenState
  {
    NOT_SET,
    create_in_progress,
    create_complete,
    create_failed,
    delete_in_progress,
    delete_complete,
    delete_failed
  };

namespace IpamExternalResourceVerificationTokenStateMapper
{
AWS_EC2_API IpamExternalResourceVerificationTokenState GetIpamExternalResourceVerificationTokenStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIpamExternalResourceVerificationTokenState(IpamExternalResourceVerificationTokenState value);
} // namespace IpamExternalResourceVerificationTokenStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
