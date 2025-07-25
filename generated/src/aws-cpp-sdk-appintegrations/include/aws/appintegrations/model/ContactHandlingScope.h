/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppIntegrationsService
{
namespace Model
{
  enum class ContactHandlingScope
  {
    NOT_SET,
    CROSS_CONTACTS,
    PER_CONTACT
  };

namespace ContactHandlingScopeMapper
{
AWS_APPINTEGRATIONSSERVICE_API ContactHandlingScope GetContactHandlingScopeForName(const Aws::String& name);

AWS_APPINTEGRATIONSSERVICE_API Aws::String GetNameForContactHandlingScope(ContactHandlingScope value);
} // namespace ContactHandlingScopeMapper
} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
