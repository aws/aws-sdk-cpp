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
  enum class RetrieveAndGenerateType
  {
    NOT_SET,
    KNOWLEDGE_BASE,
    EXTERNAL_SOURCES
  };

namespace RetrieveAndGenerateTypeMapper
{
AWS_BEDROCK_API RetrieveAndGenerateType GetRetrieveAndGenerateTypeForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForRetrieveAndGenerateType(RetrieveAndGenerateType value);
} // namespace RetrieveAndGenerateTypeMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
