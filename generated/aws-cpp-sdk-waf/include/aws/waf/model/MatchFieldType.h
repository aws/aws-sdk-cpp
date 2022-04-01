/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WAF
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
AWS_WAF_API MatchFieldType GetMatchFieldTypeForName(const Aws::String& name);

AWS_WAF_API Aws::String GetNameForMatchFieldType(MatchFieldType value);
} // namespace MatchFieldTypeMapper
} // namespace Model
} // namespace WAF
} // namespace Aws
