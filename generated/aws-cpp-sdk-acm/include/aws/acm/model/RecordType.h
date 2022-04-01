/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ACM
{
namespace Model
{
  enum class RecordType
  {
    NOT_SET,
    CNAME
  };

namespace RecordTypeMapper
{
AWS_ACM_API RecordType GetRecordTypeForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForRecordType(RecordType value);
} // namespace RecordTypeMapper
} // namespace Model
} // namespace ACM
} // namespace Aws
