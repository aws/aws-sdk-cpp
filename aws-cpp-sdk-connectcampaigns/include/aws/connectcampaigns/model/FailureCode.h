/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectCampaigns
{
namespace Model
{
  enum class FailureCode
  {
    NOT_SET,
    InvalidInput,
    RequestThrottled,
    UnknownError
  };

namespace FailureCodeMapper
{
AWS_CONNECTCAMPAIGNS_API FailureCode GetFailureCodeForName(const Aws::String& name);

AWS_CONNECTCAMPAIGNS_API Aws::String GetNameForFailureCode(FailureCode value);
} // namespace FailureCodeMapper
} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
