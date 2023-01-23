/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{
  enum class NetworkEapMethod
  {
    NOT_SET,
    EAP_TLS
  };

namespace NetworkEapMethodMapper
{
AWS_ALEXAFORBUSINESS_API NetworkEapMethod GetNetworkEapMethodForName(const Aws::String& name);

AWS_ALEXAFORBUSINESS_API Aws::String GetNameForNetworkEapMethod(NetworkEapMethod value);
} // namespace NetworkEapMethodMapper
} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
