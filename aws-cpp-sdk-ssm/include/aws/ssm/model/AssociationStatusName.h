/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class AssociationStatusName
  {
    NOT_SET,
    Pending,
    Success,
    Failed
  };

namespace AssociationStatusNameMapper
{
AWS_SSM_API AssociationStatusName GetAssociationStatusNameForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForAssociationStatusName(AssociationStatusName value);
} // namespace AssociationStatusNameMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
