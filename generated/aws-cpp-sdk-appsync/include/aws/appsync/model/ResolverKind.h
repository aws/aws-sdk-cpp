/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppSync
{
namespace Model
{
  enum class ResolverKind
  {
    NOT_SET,
    UNIT,
    PIPELINE
  };

namespace ResolverKindMapper
{
AWS_APPSYNC_API ResolverKind GetResolverKindForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForResolverKind(ResolverKind value);
} // namespace ResolverKindMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
