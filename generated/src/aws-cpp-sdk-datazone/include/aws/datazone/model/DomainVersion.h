/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{
  enum class DomainVersion
  {
    NOT_SET,
    V1,
    V2
  };

namespace DomainVersionMapper
{
AWS_DATAZONE_API DomainVersion GetDomainVersionForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForDomainVersion(DomainVersion value);
} // namespace DomainVersionMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
