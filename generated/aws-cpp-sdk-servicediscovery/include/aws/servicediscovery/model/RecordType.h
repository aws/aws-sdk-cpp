/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{
  enum class RecordType
  {
    NOT_SET,
    SRV,
    A,
    AAAA,
    CNAME
  };

namespace RecordTypeMapper
{
AWS_SERVICEDISCOVERY_API RecordType GetRecordTypeForName(const Aws::String& name);

AWS_SERVICEDISCOVERY_API Aws::String GetNameForRecordType(RecordType value);
} // namespace RecordTypeMapper
} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
