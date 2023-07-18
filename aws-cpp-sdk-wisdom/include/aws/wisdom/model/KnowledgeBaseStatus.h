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
  enum class KnowledgeBaseStatus
  {
    NOT_SET,
    CREATE_IN_PROGRESS,
    CREATE_FAILED,
    ACTIVE,
    DELETE_IN_PROGRESS,
    DELETE_FAILED,
    DELETED
  };

namespace KnowledgeBaseStatusMapper
{
AWS_CONNECTWISDOMSERVICE_API KnowledgeBaseStatus GetKnowledgeBaseStatusForName(const Aws::String& name);

AWS_CONNECTWISDOMSERVICE_API Aws::String GetNameForKnowledgeBaseStatus(KnowledgeBaseStatus value);
} // namespace KnowledgeBaseStatusMapper
} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
