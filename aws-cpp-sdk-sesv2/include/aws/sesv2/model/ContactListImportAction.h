/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SESV2
{
namespace Model
{
  enum class ContactListImportAction
  {
    NOT_SET,
    DELETE_,
    PUT
  };

namespace ContactListImportActionMapper
{
AWS_SESV2_API ContactListImportAction GetContactListImportActionForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForContactListImportAction(ContactListImportAction value);
} // namespace ContactListImportActionMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws
