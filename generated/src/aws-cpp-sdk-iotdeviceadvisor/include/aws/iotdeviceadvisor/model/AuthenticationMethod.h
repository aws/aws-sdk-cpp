/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTDeviceAdvisor
{
namespace Model
{
  enum class AuthenticationMethod
  {
    NOT_SET,
    X509ClientCertificate,
    SignatureVersion4
  };

namespace AuthenticationMethodMapper
{
AWS_IOTDEVICEADVISOR_API AuthenticationMethod GetAuthenticationMethodForName(const Aws::String& name);

AWS_IOTDEVICEADVISOR_API Aws::String GetNameForAuthenticationMethod(AuthenticationMethod value);
} // namespace AuthenticationMethodMapper
} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
