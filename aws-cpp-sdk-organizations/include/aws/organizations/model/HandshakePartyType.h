/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Organizations
{
namespace Model
{
  enum class HandshakePartyType
  {
    NOT_SET,
    ACCOUNT,
    ORGANIZATION,
    EMAIL
  };

namespace HandshakePartyTypeMapper
{
AWS_ORGANIZATIONS_API HandshakePartyType GetHandshakePartyTypeForName(const Aws::String& name);

AWS_ORGANIZATIONS_API Aws::String GetNameForHandshakePartyType(HandshakePartyType value);
} // namespace HandshakePartyTypeMapper
} // namespace Model
} // namespace Organizations
} // namespace Aws
