/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Batch
{
namespace Model
{
  enum class UserdataType
  {
    NOT_SET,
    EKS_BOOTSTRAP_SH,
    EKS_NODEADM
  };

namespace UserdataTypeMapper
{
AWS_BATCH_API UserdataType GetUserdataTypeForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForUserdataType(UserdataType value);
} // namespace UserdataTypeMapper
} // namespace Model
} // namespace Batch
} // namespace Aws
