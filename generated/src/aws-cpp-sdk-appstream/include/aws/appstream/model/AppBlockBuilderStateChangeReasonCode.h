/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppStream
{
namespace Model
{
  enum class AppBlockBuilderStateChangeReasonCode
  {
    NOT_SET,
    INTERNAL_ERROR
  };

namespace AppBlockBuilderStateChangeReasonCodeMapper
{
AWS_APPSTREAM_API AppBlockBuilderStateChangeReasonCode GetAppBlockBuilderStateChangeReasonCodeForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForAppBlockBuilderStateChangeReasonCode(AppBlockBuilderStateChangeReasonCode value);
} // namespace AppBlockBuilderStateChangeReasonCodeMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
