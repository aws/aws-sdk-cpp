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
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WAFRegional
{
namespace Model
{
  enum class ParameterExceptionField
  {
    NOT_SET,
    CHANGE_ACTION,
    WAF_ACTION,
    WAF_OVERRIDE_ACTION,
    PREDICATE_TYPE,
    IPSET_TYPE,
    BYTE_MATCH_FIELD_TYPE,
    SQL_INJECTION_MATCH_FIELD_TYPE,
    BYTE_MATCH_TEXT_TRANSFORMATION,
    BYTE_MATCH_POSITIONAL_CONSTRAINT,
    SIZE_CONSTRAINT_COMPARISON_OPERATOR,
    GEO_MATCH_LOCATION_TYPE,
    GEO_MATCH_LOCATION_VALUE,
    RATE_KEY,
    RULE_TYPE,
    NEXT_MARKER,
    RESOURCE_ARN,
    TAGS,
    TAG_KEYS
  };

namespace ParameterExceptionFieldMapper
{
AWS_WAFREGIONAL_API ParameterExceptionField GetParameterExceptionFieldForName(const Aws::String& name);

AWS_WAFREGIONAL_API Aws::String GetNameForParameterExceptionField(ParameterExceptionField value);
} // namespace ParameterExceptionFieldMapper
} // namespace Model
} // namespace WAFRegional
} // namespace Aws
