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
  enum class SourceType
  {
    NOT_SET,
    SALESFORCE,
    ZENDESK,
    CASES
  };

namespace SourceTypeMapper
{
AWS_CONNECT_API SourceType GetSourceTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForSourceType(SourceType value);
} // namespace SourceTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
