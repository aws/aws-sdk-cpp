/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataSync
{
namespace Model
{
  enum class SmbAuthenticationType
  {
    NOT_SET,
    NTLM,
    KERBEROS
  };

namespace SmbAuthenticationTypeMapper
{
AWS_DATASYNC_API SmbAuthenticationType GetSmbAuthenticationTypeForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForSmbAuthenticationType(SmbAuthenticationType value);
} // namespace SmbAuthenticationTypeMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws
