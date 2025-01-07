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
  enum class DocumentStatus
  {
    NOT_SET,
    INDEXED,
    PARTIALLY_INDEXED,
    PENDING,
    FAILED,
    METADATA_PARTIALLY_INDEXED,
    METADATA_UPDATE_FAILED,
    IGNORED,
    NOT_FOUND,
    STARTING,
    IN_PROGRESS,
    DELETING,
    DELETE_IN_PROGRESS
  };

namespace DocumentStatusMapper
{
AWS_BEDROCKAGENT_API DocumentStatus GetDocumentStatusForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForDocumentStatus(DocumentStatus value);
} // namespace DocumentStatusMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
