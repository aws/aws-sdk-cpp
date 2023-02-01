/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FMS
{
namespace Model
{
  enum class DestinationType
  {
    NOT_SET,
    IPV4,
    IPV6,
    PREFIX_LIST
  };

namespace DestinationTypeMapper
{
AWS_FMS_API DestinationType GetDestinationTypeForName(const Aws::String& name);

AWS_FMS_API Aws::String GetNameForDestinationType(DestinationType value);
} // namespace DestinationTypeMapper
} // namespace Model
} // namespace FMS
} // namespace Aws
