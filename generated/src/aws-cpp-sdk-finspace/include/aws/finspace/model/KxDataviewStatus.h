/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace finspace
{
namespace Model
{
  enum class KxDataviewStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    UPDATING,
    FAILED,
    DELETING
  };

namespace KxDataviewStatusMapper
{
AWS_FINSPACE_API KxDataviewStatus GetKxDataviewStatusForName(const Aws::String& name);

AWS_FINSPACE_API Aws::String GetNameForKxDataviewStatus(KxDataviewStatus value);
} // namespace KxDataviewStatusMapper
} // namespace Model
} // namespace finspace
} // namespace Aws
