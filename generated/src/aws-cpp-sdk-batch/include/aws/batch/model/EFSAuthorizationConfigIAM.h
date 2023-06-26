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
  enum class EFSAuthorizationConfigIAM
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace EFSAuthorizationConfigIAMMapper
{
AWS_BATCH_API EFSAuthorizationConfigIAM GetEFSAuthorizationConfigIAMForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForEFSAuthorizationConfigIAM(EFSAuthorizationConfigIAM value);
} // namespace EFSAuthorizationConfigIAMMapper
} // namespace Model
} // namespace Batch
} // namespace Aws
