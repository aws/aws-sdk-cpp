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
  enum class DomainStatus
  {
    NOT_SET,
    CREATING,
    AVAILABLE,
    CREATION_FAILED,
    DELETING,
    DELETED,
    DELETION_FAILED
  };

namespace DomainStatusMapper
{
AWS_DATAZONE_API DomainStatus GetDomainStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForDomainStatus(DomainStatus value);
} // namespace DomainStatusMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
