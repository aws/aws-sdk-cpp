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
  enum class AccessAssociationSourceType
  {
    NOT_SET,
    VPCE
  };

namespace AccessAssociationSourceTypeMapper
{
AWS_APIGATEWAY_API AccessAssociationSourceType GetAccessAssociationSourceTypeForName(const Aws::String& name);

AWS_APIGATEWAY_API Aws::String GetNameForAccessAssociationSourceType(AccessAssociationSourceType value);
} // namespace AccessAssociationSourceTypeMapper
} // namespace Model
} // namespace APIGateway
} // namespace Aws
