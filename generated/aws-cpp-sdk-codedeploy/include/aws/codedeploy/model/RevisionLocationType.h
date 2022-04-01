/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{
  enum class RevisionLocationType
  {
    NOT_SET,
    S3,
    GitHub,
    String,
    AppSpecContent
  };

namespace RevisionLocationTypeMapper
{
AWS_CODEDEPLOY_API RevisionLocationType GetRevisionLocationTypeForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForRevisionLocationType(RevisionLocationType value);
} // namespace RevisionLocationTypeMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
