/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSMContacts
{
namespace Model
{
  enum class AcceptType
  {
    NOT_SET,
    DELIVERED,
    READ
  };

namespace AcceptTypeMapper
{
AWS_SSMCONTACTS_API AcceptType GetAcceptTypeForName(const Aws::String& name);

AWS_SSMCONTACTS_API Aws::String GetNameForAcceptType(AcceptType value);
} // namespace AcceptTypeMapper
} // namespace Model
} // namespace SSMContacts
} // namespace Aws
