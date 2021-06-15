/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppRunner
{
namespace Model
{
  enum class CustomDomainAssociationStatus
  {
    NOT_SET,
    CREATING,
    CREATE_FAILED,
    ACTIVE,
    DELETING,
    DELETE_FAILED,
    PENDING_CERTIFICATE_DNS_VALIDATION,
    BINDING_CERTIFICATE
  };

namespace CustomDomainAssociationStatusMapper
{
AWS_APPRUNNER_API CustomDomainAssociationStatus GetCustomDomainAssociationStatusForName(const Aws::String& name);

AWS_APPRUNNER_API Aws::String GetNameForCustomDomainAssociationStatus(CustomDomainAssociationStatus value);
} // namespace CustomDomainAssociationStatusMapper
} // namespace Model
} // namespace AppRunner
} // namespace Aws
