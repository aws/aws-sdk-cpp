/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{
  enum class SourceType
  {
    NOT_SET,
    git,
    svn,
    archive,
    s3
  };

namespace SourceTypeMapper
{
AWS_OPSWORKS_API SourceType GetSourceTypeForName(const Aws::String& name);

AWS_OPSWORKS_API Aws::String GetNameForSourceType(SourceType value);
} // namespace SourceTypeMapper
} // namespace Model
} // namespace OpsWorks
} // namespace Aws
