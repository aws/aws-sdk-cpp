/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{
  enum class SchemaStatusReasonCode
  {
    NOT_SET,
    ANALYSIS_RULE_MISSING,
    ANALYSIS_TEMPLATES_NOT_CONFIGURED,
    ANALYSIS_PROVIDERS_NOT_CONFIGURED,
    DIFFERENTIAL_PRIVACY_POLICY_NOT_CONFIGURED,
    ID_MAPPING_TABLE_NOT_POPULATED,
    COLLABORATION_ANALYSIS_RULE_NOT_CONFIGURED,
    ADDITIONAL_ANALYSES_NOT_CONFIGURED,
    RESULT_RECEIVERS_NOT_CONFIGURED,
    ADDITIONAL_ANALYSES_NOT_ALLOWED,
    RESULT_RECEIVERS_NOT_ALLOWED,
    ANALYSIS_RULE_TYPES_NOT_COMPATIBLE
  };

namespace SchemaStatusReasonCodeMapper
{
AWS_CLEANROOMS_API SchemaStatusReasonCode GetSchemaStatusReasonCodeForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForSchemaStatusReasonCode(SchemaStatusReasonCode value);
} // namespace SchemaStatusReasonCodeMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
