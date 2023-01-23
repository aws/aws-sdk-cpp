/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FSx
{
namespace Model
{
  enum class AliasLifecycle
  {
    NOT_SET,
    AVAILABLE,
    CREATING,
    DELETING,
    CREATE_FAILED,
    DELETE_FAILED
  };

namespace AliasLifecycleMapper
{
AWS_FSX_API AliasLifecycle GetAliasLifecycleForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForAliasLifecycle(AliasLifecycle value);
} // namespace AliasLifecycleMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
