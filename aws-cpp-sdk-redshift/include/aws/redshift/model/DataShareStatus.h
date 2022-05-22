/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{
  enum class DataShareStatus
  {
    NOT_SET,
    ACTIVE,
    PENDING_AUTHORIZATION,
    AUTHORIZED,
    DEAUTHORIZED,
    REJECTED,
    AVAILABLE
  };

namespace DataShareStatusMapper
{
AWS_REDSHIFT_API DataShareStatus GetDataShareStatusForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForDataShareStatus(DataShareStatus value);
} // namespace DataShareStatusMapper
} // namespace Model
} // namespace Redshift
} // namespace Aws
