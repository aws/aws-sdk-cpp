/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Detective
{
namespace Model
{
  enum class InvitationType
  {
    NOT_SET,
    INVITATION,
    ORGANIZATION
  };

namespace InvitationTypeMapper
{
AWS_DETECTIVE_API InvitationType GetInvitationTypeForName(const Aws::String& name);

AWS_DETECTIVE_API Aws::String GetNameForInvitationType(InvitationType value);
} // namespace InvitationTypeMapper
} // namespace Model
} // namespace Detective
} // namespace Aws
