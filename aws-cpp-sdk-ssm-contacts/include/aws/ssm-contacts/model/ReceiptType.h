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
  enum class ReceiptType
  {
    NOT_SET,
    DELIVERED,
    ERROR_,
    READ,
    SENT,
    STOP
  };

namespace ReceiptTypeMapper
{
AWS_SSMCONTACTS_API ReceiptType GetReceiptTypeForName(const Aws::String& name);

AWS_SSMCONTACTS_API Aws::String GetNameForReceiptType(ReceiptType value);
} // namespace ReceiptTypeMapper
} // namespace Model
} // namespace SSMContacts
} // namespace Aws
