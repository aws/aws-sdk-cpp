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
  enum class TypeDefinitionFormat
  {
    NOT_SET,
    SDL,
    JSON
  };

namespace TypeDefinitionFormatMapper
{
AWS_APPSYNC_API TypeDefinitionFormat GetTypeDefinitionFormatForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForTypeDefinitionFormat(TypeDefinitionFormat value);
} // namespace TypeDefinitionFormatMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
