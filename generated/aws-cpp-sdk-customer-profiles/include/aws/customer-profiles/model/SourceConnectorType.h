/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{
  enum class SourceConnectorType
  {
    NOT_SET,
    Salesforce,
    Marketo,
    Zendesk,
    Servicenow,
    S3
  };

namespace SourceConnectorTypeMapper
{
AWS_CUSTOMERPROFILES_API SourceConnectorType GetSourceConnectorTypeForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForSourceConnectorType(SourceConnectorType value);
} // namespace SourceConnectorTypeMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
