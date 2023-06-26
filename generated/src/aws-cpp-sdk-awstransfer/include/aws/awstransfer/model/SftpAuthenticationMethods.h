/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Transfer
{
namespace Model
{
  enum class SftpAuthenticationMethods
  {
    NOT_SET,
    PASSWORD,
    PUBLIC_KEY,
    PUBLIC_KEY_OR_PASSWORD,
    PUBLIC_KEY_AND_PASSWORD
  };

namespace SftpAuthenticationMethodsMapper
{
AWS_TRANSFER_API SftpAuthenticationMethods GetSftpAuthenticationMethodsForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForSftpAuthenticationMethods(SftpAuthenticationMethods value);
} // namespace SftpAuthenticationMethodsMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
