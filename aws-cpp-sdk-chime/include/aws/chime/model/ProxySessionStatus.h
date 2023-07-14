/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Chime
{
namespace Model
{
  enum class ProxySessionStatus
  {
    NOT_SET,
    Open,
    InProgress,
    Closed
  };

namespace ProxySessionStatusMapper
{
AWS_CHIME_API ProxySessionStatus GetProxySessionStatusForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForProxySessionStatus(ProxySessionStatus value);
} // namespace ProxySessionStatusMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
