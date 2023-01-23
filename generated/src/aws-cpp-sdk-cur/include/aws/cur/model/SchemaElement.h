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
  enum class SchemaElement
  {
    NOT_SET,
    RESOURCES
  };

namespace SchemaElementMapper
{
AWS_COSTANDUSAGEREPORTSERVICE_API SchemaElement GetSchemaElementForName(const Aws::String& name);

AWS_COSTANDUSAGEREPORTSERVICE_API Aws::String GetNameForSchemaElement(SchemaElement value);
} // namespace SchemaElementMapper
} // namespace Model
} // namespace CostandUsageReportService
} // namespace Aws
