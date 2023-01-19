/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class RehydrationType
  {
    NOT_SET,
    ENTIRE_PAST_SESSION,
    FROM_SEGMENT
  };

namespace RehydrationTypeMapper
{
AWS_CONNECT_API RehydrationType GetRehydrationTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForRehydrationType(RehydrationType value);
} // namespace RehydrationTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
