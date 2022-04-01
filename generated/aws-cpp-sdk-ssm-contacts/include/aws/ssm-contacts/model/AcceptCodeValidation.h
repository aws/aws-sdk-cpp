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
  enum class AcceptCodeValidation
  {
    NOT_SET,
    IGNORE,
    ENFORCE
  };

namespace AcceptCodeValidationMapper
{
AWS_SSMCONTACTS_API AcceptCodeValidation GetAcceptCodeValidationForName(const Aws::String& name);

AWS_SSMCONTACTS_API Aws::String GetNameForAcceptCodeValidation(AcceptCodeValidation value);
} // namespace AcceptCodeValidationMapper
} // namespace Model
} // namespace SSMContacts
} // namespace Aws
