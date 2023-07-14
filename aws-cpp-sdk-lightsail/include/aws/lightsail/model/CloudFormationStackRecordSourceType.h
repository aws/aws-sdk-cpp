/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{
  enum class CloudFormationStackRecordSourceType
  {
    NOT_SET,
    ExportSnapshotRecord
  };

namespace CloudFormationStackRecordSourceTypeMapper
{
AWS_LIGHTSAIL_API CloudFormationStackRecordSourceType GetCloudFormationStackRecordSourceTypeForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForCloudFormationStackRecordSourceType(CloudFormationStackRecordSourceType value);
} // namespace CloudFormationStackRecordSourceTypeMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
