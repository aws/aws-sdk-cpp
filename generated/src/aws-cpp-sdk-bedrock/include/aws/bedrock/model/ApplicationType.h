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
  enum class ApplicationType
  {
    NOT_SET,
    ModelEvaluation,
    RagEvaluation
  };

namespace ApplicationTypeMapper
{
AWS_BEDROCK_API ApplicationType GetApplicationTypeForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForApplicationType(ApplicationType value);
} // namespace ApplicationTypeMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
