/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{
  enum class Relevance
  {
    NOT_SET,
    HELPFUL,
    NOT_HELPFUL
  };

namespace RelevanceMapper
{
AWS_CONNECTWISDOMSERVICE_API Relevance GetRelevanceForName(const Aws::String& name);

AWS_CONNECTWISDOMSERVICE_API Aws::String GetNameForRelevance(Relevance value);
} // namespace RelevanceMapper
} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
