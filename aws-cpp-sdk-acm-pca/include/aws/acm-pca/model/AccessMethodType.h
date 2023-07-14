/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ACMPCA
{
namespace Model
{
  enum class AccessMethodType
  {
    NOT_SET,
    CA_REPOSITORY,
    RESOURCE_PKI_MANIFEST,
    RESOURCE_PKI_NOTIFY
  };

namespace AccessMethodTypeMapper
{
AWS_ACMPCA_API AccessMethodType GetAccessMethodTypeForName(const Aws::String& name);

AWS_ACMPCA_API Aws::String GetNameForAccessMethodType(AccessMethodType value);
} // namespace AccessMethodTypeMapper
} // namespace Model
} // namespace ACMPCA
} // namespace Aws
