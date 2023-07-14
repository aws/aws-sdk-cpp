/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{
  enum class ReasonCode
  {
    NOT_SET,
    AWS_SERVICE_ACCESS_DISABLED,
    DELEGATED_ADMINISTRATOR_DEREGISTERED,
    ORGANIZATION_DELETED,
    SERVICE_LINKED_ROLE_CREATION_FAILED
  };

namespace ReasonCodeMapper
{
AWS_ACCESSANALYZER_API ReasonCode GetReasonCodeForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForReasonCode(ReasonCode value);
} // namespace ReasonCodeMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
