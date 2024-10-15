/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Amplify
{
namespace Model
{
  enum class SourceUrlType
  {
    NOT_SET,
    ZIP,
    BUCKET_PREFIX
  };

namespace SourceUrlTypeMapper
{
AWS_AMPLIFY_API SourceUrlType GetSourceUrlTypeForName(const Aws::String& name);

AWS_AMPLIFY_API Aws::String GetNameForSourceUrlType(SourceUrlType value);
} // namespace SourceUrlTypeMapper
} // namespace Model
} // namespace Amplify
} // namespace Aws
