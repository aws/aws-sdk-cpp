/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  enum class MatchFieldType
  {
    NOT_SET,
    URI,
    QUERY_STRING,
    HEADER,
    METHOD,
    BODY,
    SINGLE_QUERY_ARG,
    ALL_QUERY_ARGS
  };

namespace MatchFieldTypeMapper
{
AWS_WAFREGIONAL_API MatchFieldType GetMatchFieldTypeForName(const Aws::String& name);

AWS_WAFREGIONAL_API Aws::String GetNameForMatchFieldType(MatchFieldType value);
} // namespace MatchFieldTypeMapper
} // namespace Model
} // namespace WAFRegional
} // namespace Aws
