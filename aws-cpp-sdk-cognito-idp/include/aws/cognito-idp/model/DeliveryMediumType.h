/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{
  enum class DeliveryMediumType
  {
    NOT_SET,
    SMS,
    EMAIL
  };

namespace DeliveryMediumTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API DeliveryMediumType GetDeliveryMediumTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForDeliveryMediumType(DeliveryMediumType value);
} // namespace DeliveryMediumTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
