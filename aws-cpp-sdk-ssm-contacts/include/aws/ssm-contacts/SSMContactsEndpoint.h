/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace SSMContacts
{
namespace SSMContactsEndpoint
{
AWS_SSMCONTACTS_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace SSMContactsEndpoint
} // namespace SSMContacts
} // namespace Aws
