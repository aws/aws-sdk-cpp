/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KMS
{
namespace Model
{
  enum class XksProxyConnectivityType
  {
    NOT_SET,
    PUBLIC_ENDPOINT,
    VPC_ENDPOINT_SERVICE
  };

namespace XksProxyConnectivityTypeMapper
{
AWS_KMS_API XksProxyConnectivityType GetXksProxyConnectivityTypeForName(const Aws::String& name);

AWS_KMS_API Aws::String GetNameForXksProxyConnectivityType(XksProxyConnectivityType value);
} // namespace XksProxyConnectivityTypeMapper
} // namespace Model
} // namespace KMS
} // namespace Aws
