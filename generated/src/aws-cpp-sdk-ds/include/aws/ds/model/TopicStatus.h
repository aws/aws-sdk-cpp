/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{
  enum class TopicStatus
  {
    NOT_SET,
    Registered,
    Topic_not_found,
    Failed,
    Deleted
  };

namespace TopicStatusMapper
{
AWS_DIRECTORYSERVICE_API TopicStatus GetTopicStatusForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForTopicStatus(TopicStatus value);
} // namespace TopicStatusMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
