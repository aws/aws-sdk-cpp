/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cur/CostandUsageReportService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CostandUsageReportService
{
namespace Model
{
  enum class AdditionalArtifact
  {
    NOT_SET,
    REDSHIFT,
    QUICKSIGHT,
    ATHENA
  };

namespace AdditionalArtifactMapper
{
AWS_COSTANDUSAGEREPORTSERVICE_API AdditionalArtifact GetAdditionalArtifactForName(const Aws::String& name);

AWS_COSTANDUSAGEREPORTSERVICE_API Aws::String GetNameForAdditionalArtifact(AdditionalArtifact value);
} // namespace AdditionalArtifactMapper
} // namespace Model
} // namespace CostandUsageReportService
} // namespace Aws
