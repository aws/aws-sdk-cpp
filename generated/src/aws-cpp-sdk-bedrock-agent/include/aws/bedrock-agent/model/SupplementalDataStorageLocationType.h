/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{
  enum class SupplementalDataStorageLocationType
  {
    NOT_SET,
    S3
  };

namespace SupplementalDataStorageLocationTypeMapper
{
AWS_BEDROCKAGENT_API SupplementalDataStorageLocationType GetSupplementalDataStorageLocationTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForSupplementalDataStorageLocationType(SupplementalDataStorageLocationType value);
} // namespace SupplementalDataStorageLocationTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
