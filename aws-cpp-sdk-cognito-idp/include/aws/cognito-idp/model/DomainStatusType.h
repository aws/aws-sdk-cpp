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
  enum class DomainStatusType
  {
    NOT_SET,
    CREATING,
    DELETING,
    UPDATING,
    ACTIVE,
    FAILED
  };

namespace DomainStatusTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API DomainStatusType GetDomainStatusTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForDomainStatusType(DomainStatusType value);
} // namespace DomainStatusTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
