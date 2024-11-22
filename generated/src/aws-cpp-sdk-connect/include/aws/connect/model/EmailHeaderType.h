/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class EmailHeaderType
  {
    NOT_SET,
    REFERENCES,
    MESSAGE_ID,
    IN_REPLY_TO,
    X_SES_SPAM_VERDICT,
    X_SES_VIRUS_VERDICT
  };

namespace EmailHeaderTypeMapper
{
AWS_CONNECT_API EmailHeaderType GetEmailHeaderTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEmailHeaderType(EmailHeaderType value);
} // namespace EmailHeaderTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
