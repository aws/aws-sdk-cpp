/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace finspace
{
namespace Model
{
  enum class ChangeType
  {
    NOT_SET,
    PUT,
    DELETE_
  };

namespace ChangeTypeMapper
{
AWS_FINSPACE_API ChangeType GetChangeTypeForName(const Aws::String& name);

AWS_FINSPACE_API Aws::String GetNameForChangeType(ChangeType value);
} // namespace ChangeTypeMapper
} // namespace Model
} // namespace finspace
} // namespace Aws
