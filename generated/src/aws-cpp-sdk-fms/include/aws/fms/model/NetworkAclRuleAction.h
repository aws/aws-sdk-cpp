/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FMS
{
namespace Model
{
  enum class NetworkAclRuleAction
  {
    NOT_SET,
    allow,
    deny
  };

namespace NetworkAclRuleActionMapper
{
AWS_FMS_API NetworkAclRuleAction GetNetworkAclRuleActionForName(const Aws::String& name);

AWS_FMS_API Aws::String GetNameForNetworkAclRuleAction(NetworkAclRuleAction value);
} // namespace NetworkAclRuleActionMapper
} // namespace Model
} // namespace FMS
} // namespace Aws
