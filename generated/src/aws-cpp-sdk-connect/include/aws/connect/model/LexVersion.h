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
  enum class LexVersion
  {
    NOT_SET,
    V1,
    V2
  };

namespace LexVersionMapper
{
AWS_CONNECT_API LexVersion GetLexVersionForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForLexVersion(LexVersion value);
} // namespace LexVersionMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
