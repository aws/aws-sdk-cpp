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
  enum class PolicyQualifierId
  {
    NOT_SET,
    CPS
  };

namespace PolicyQualifierIdMapper
{
AWS_ACMPCA_API PolicyQualifierId GetPolicyQualifierIdForName(const Aws::String& name);

AWS_ACMPCA_API Aws::String GetNameForPolicyQualifierId(PolicyQualifierId value);
} // namespace PolicyQualifierIdMapper
} // namespace Model
} // namespace ACMPCA
} // namespace Aws
