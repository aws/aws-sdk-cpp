/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{
  enum class RerankingMetadataSelectionMode
  {
    NOT_SET,
    SELECTIVE,
    ALL
  };

namespace RerankingMetadataSelectionModeMapper
{
AWS_BEDROCK_API RerankingMetadataSelectionMode GetRerankingMetadataSelectionModeForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForRerankingMetadataSelectionMode(RerankingMetadataSelectionMode value);
} // namespace RerankingMetadataSelectionModeMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
