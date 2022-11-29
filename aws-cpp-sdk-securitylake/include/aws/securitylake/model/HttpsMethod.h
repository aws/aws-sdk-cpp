/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{
  enum class HttpsMethod
  {
    NOT_SET,
    POST,
    PUT
  };

namespace HttpsMethodMapper
{
AWS_SECURITYLAKE_API HttpsMethod GetHttpsMethodForName(const Aws::String& name);

AWS_SECURITYLAKE_API Aws::String GetNameForHttpsMethod(HttpsMethod value);
} // namespace HttpsMethodMapper
} // namespace Model
} // namespace SecurityLake
} // namespace Aws
