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
  enum class DomainNameStatus
  {
    NOT_SET,
    AVAILABLE,
    UPDATING,
    PENDING,
    PENDING_CERTIFICATE_REIMPORT,
    PENDING_OWNERSHIP_VERIFICATION
  };

namespace DomainNameStatusMapper
{
AWS_APIGATEWAY_API DomainNameStatus GetDomainNameStatusForName(const Aws::String& name);

AWS_APIGATEWAY_API Aws::String GetNameForDomainNameStatus(DomainNameStatus value);
} // namespace DomainNameStatusMapper
} // namespace Model
} // namespace APIGateway
} // namespace Aws
