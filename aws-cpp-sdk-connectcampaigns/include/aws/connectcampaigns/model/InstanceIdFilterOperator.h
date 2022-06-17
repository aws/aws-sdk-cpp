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
  enum class InstanceIdFilterOperator
  {
    NOT_SET,
    Eq
  };

namespace InstanceIdFilterOperatorMapper
{
AWS_CONNECTCAMPAIGNS_API InstanceIdFilterOperator GetInstanceIdFilterOperatorForName(const Aws::String& name);

AWS_CONNECTCAMPAIGNS_API Aws::String GetNameForInstanceIdFilterOperator(InstanceIdFilterOperator value);
} // namespace InstanceIdFilterOperatorMapper
} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
