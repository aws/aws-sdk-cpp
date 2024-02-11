/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Keyspaces
{
namespace Model
{
  enum class Rs
  {
    NOT_SET,
    SINGLE_REGION,
    MULTI_REGION
  };

namespace RsMapper
{
AWS_KEYSPACES_API Rs GetRsForName(const Aws::String& name);

AWS_KEYSPACES_API Aws::String GetNameForRs(Rs value);
} // namespace RsMapper
} // namespace Model
} // namespace Keyspaces
} // namespace Aws
