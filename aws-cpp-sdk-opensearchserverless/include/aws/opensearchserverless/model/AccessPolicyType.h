/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{
  enum class AccessPolicyType
  {
    NOT_SET,
    data
  };

namespace AccessPolicyTypeMapper
{
AWS_OPENSEARCHSERVERLESS_API AccessPolicyType GetAccessPolicyTypeForName(const Aws::String& name);

AWS_OPENSEARCHSERVERLESS_API Aws::String GetNameForAccessPolicyType(AccessPolicyType value);
} // namespace AccessPolicyTypeMapper
} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
