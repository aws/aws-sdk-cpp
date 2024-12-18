/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Amplify
{
namespace Model
{
  enum class WafStatus
  {
    NOT_SET,
    ASSOCIATING,
    ASSOCIATION_FAILED,
    ASSOCIATION_SUCCESS,
    DISASSOCIATING,
    DISASSOCIATION_FAILED
  };

namespace WafStatusMapper
{
AWS_AMPLIFY_API WafStatus GetWafStatusForName(const Aws::String& name);

AWS_AMPLIFY_API Aws::String GetNameForWafStatus(WafStatus value);
} // namespace WafStatusMapper
} // namespace Model
} // namespace Amplify
} // namespace Aws
