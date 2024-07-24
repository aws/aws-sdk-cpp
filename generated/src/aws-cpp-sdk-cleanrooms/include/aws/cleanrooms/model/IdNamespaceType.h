/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{
  enum class IdNamespaceType
  {
    NOT_SET,
    SOURCE,
    TARGET
  };

namespace IdNamespaceTypeMapper
{
AWS_CLEANROOMS_API IdNamespaceType GetIdNamespaceTypeForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForIdNamespaceType(IdNamespaceType value);
} // namespace IdNamespaceTypeMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
