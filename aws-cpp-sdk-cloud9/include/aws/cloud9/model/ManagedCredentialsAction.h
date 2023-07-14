/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Cloud9
{
namespace Model
{
  enum class ManagedCredentialsAction
  {
    NOT_SET,
    ENABLE,
    DISABLE
  };

namespace ManagedCredentialsActionMapper
{
AWS_CLOUD9_API ManagedCredentialsAction GetManagedCredentialsActionForName(const Aws::String& name);

AWS_CLOUD9_API Aws::String GetNameForManagedCredentialsAction(ManagedCredentialsAction value);
} // namespace ManagedCredentialsActionMapper
} // namespace Model
} // namespace Cloud9
} // namespace Aws
