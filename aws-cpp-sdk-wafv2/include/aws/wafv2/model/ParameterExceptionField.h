/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WAFV2
{
namespace Model
{
  enum class ParameterExceptionField
  {
    NOT_SET,
    WEB_ACL,
    RULE_GROUP,
    REGEX_PATTERN_SET,
    IP_SET,
    MANAGED_RULE_SET,
    RULE,
    EXCLUDED_RULE,
    STATEMENT,
    BYTE_MATCH_STATEMENT,
    SQLI_MATCH_STATEMENT,
    XSS_MATCH_STATEMENT,
    SIZE_CONSTRAINT_STATEMENT,
    GEO_MATCH_STATEMENT,
    RATE_BASED_STATEMENT,
    RULE_GROUP_REFERENCE_STATEMENT,
    REGEX_PATTERN_REFERENCE_STATEMENT,
    IP_SET_REFERENCE_STATEMENT,
    MANAGED_RULE_SET_STATEMENT,
    AND_STATEMENT,
    OR_STATEMENT,
    NOT_STATEMENT,
    IP_ADDRESS,
    IP_ADDRESS_VERSION,
    FIELD_TO_MATCH,
    TEXT_TRANSFORMATION,
    SINGLE_QUERY_ARGUMENT,
    SINGLE_HEADER,
    DEFAULT_ACTION,
    RULE_ACTION,
    ENTITY_LIMIT,
    OVERRIDE_ACTION,
    SCOPE_VALUE,
    RESOURCE_ARN,
    RESOURCE_TYPE,
    TAGS,
    TAG_KEYS,
    METRIC_NAME
  };

namespace ParameterExceptionFieldMapper
{
AWS_WAFV2_API ParameterExceptionField GetParameterExceptionFieldForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForParameterExceptionField(ParameterExceptionField value);
} // namespace ParameterExceptionFieldMapper
} // namespace Model
} // namespace WAFV2
} // namespace Aws
