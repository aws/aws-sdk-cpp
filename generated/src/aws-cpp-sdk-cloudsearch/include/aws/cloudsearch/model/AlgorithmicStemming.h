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
  enum class AlgorithmicStemming
  {
    NOT_SET,
    none,
    minimal,
    light,
    full
  };

namespace AlgorithmicStemmingMapper
{
AWS_CLOUDSEARCH_API AlgorithmicStemming GetAlgorithmicStemmingForName(const Aws::String& name);

AWS_CLOUDSEARCH_API Aws::String GetNameForAlgorithmicStemming(AlgorithmicStemming value);
} // namespace AlgorithmicStemmingMapper
} // namespace Model
} // namespace CloudSearch
} // namespace Aws
