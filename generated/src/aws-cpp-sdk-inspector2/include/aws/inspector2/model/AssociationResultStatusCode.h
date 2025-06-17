/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class AssociationResultStatusCode
  {
    NOT_SET,
    INTERNAL_ERROR,
    ACCESS_DENIED,
    SCAN_CONFIGURATION_NOT_FOUND,
    INVALID_INPUT,
    RESOURCE_NOT_FOUND,
    QUOTA_EXCEEDED
  };

namespace AssociationResultStatusCodeMapper
{
AWS_INSPECTOR2_API AssociationResultStatusCode GetAssociationResultStatusCodeForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForAssociationResultStatusCode(AssociationResultStatusCode value);
} // namespace AssociationResultStatusCodeMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
