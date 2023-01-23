/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace kendra
{
namespace Model
{
  enum class ConfluenceAuthenticationType
  {
    NOT_SET,
    HTTP_BASIC,
    PAT
  };

namespace ConfluenceAuthenticationTypeMapper
{
AWS_KENDRA_API ConfluenceAuthenticationType GetConfluenceAuthenticationTypeForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForConfluenceAuthenticationType(ConfluenceAuthenticationType value);
} // namespace ConfluenceAuthenticationTypeMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
