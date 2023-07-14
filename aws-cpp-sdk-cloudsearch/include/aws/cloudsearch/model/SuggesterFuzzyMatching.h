/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudSearch
{
namespace Model
{
  enum class SuggesterFuzzyMatching
  {
    NOT_SET,
    none,
    low,
    high
  };

namespace SuggesterFuzzyMatchingMapper
{
AWS_CLOUDSEARCH_API SuggesterFuzzyMatching GetSuggesterFuzzyMatchingForName(const Aws::String& name);

AWS_CLOUDSEARCH_API Aws::String GetNameForSuggesterFuzzyMatching(SuggesterFuzzyMatching value);
} // namespace SuggesterFuzzyMatchingMapper
} // namespace Model
} // namespace CloudSearch
} // namespace Aws
