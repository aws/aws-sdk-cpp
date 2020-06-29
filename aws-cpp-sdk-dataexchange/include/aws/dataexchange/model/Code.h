/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataExchange
{
namespace Model
{
  enum class Code
  {
    NOT_SET,
    ACCESS_DENIED_EXCEPTION,
    INTERNAL_SERVER_EXCEPTION,
    MALWARE_DETECTED,
    RESOURCE_NOT_FOUND_EXCEPTION,
    SERVICE_QUOTA_EXCEEDED_EXCEPTION,
    VALIDATION_EXCEPTION,
    MALWARE_SCAN_ENCRYPTED_FILE
  };

namespace CodeMapper
{
AWS_DATAEXCHANGE_API Code GetCodeForName(const Aws::String& name);

AWS_DATAEXCHANGE_API Aws::String GetNameForCode(Code value);
} // namespace CodeMapper
} // namespace Model
} // namespace DataExchange
} // namespace Aws
