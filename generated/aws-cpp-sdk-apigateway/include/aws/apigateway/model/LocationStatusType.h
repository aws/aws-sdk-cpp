/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace APIGateway
{
namespace Model
{
  enum class LocationStatusType
  {
    NOT_SET,
    DOCUMENTED,
    UNDOCUMENTED
  };

namespace LocationStatusTypeMapper
{
AWS_APIGATEWAY_API LocationStatusType GetLocationStatusTypeForName(const Aws::String& name);

AWS_APIGATEWAY_API Aws::String GetNameForLocationStatusType(LocationStatusType value);
} // namespace LocationStatusTypeMapper
} // namespace Model
} // namespace APIGateway
} // namespace Aws
