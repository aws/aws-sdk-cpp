/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudHSM
{
namespace Model
{
  enum class ClientVersion
  {
    NOT_SET,
    _5_1,
    _5_3
  };

namespace ClientVersionMapper
{
AWS_CLOUDHSM_API ClientVersion GetClientVersionForName(const Aws::String& name);

AWS_CLOUDHSM_API Aws::String GetNameForClientVersion(ClientVersion value);
} // namespace ClientVersionMapper
} // namespace Model
} // namespace CloudHSM
} // namespace Aws
