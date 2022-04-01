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
  enum class ContentStatus
  {
    NOT_SET,
    CREATE_IN_PROGRESS,
    CREATE_FAILED,
    ACTIVE,
    DELETE_IN_PROGRESS,
    DELETE_FAILED,
    DELETED,
    UPDATE_FAILED
  };

namespace ContentStatusMapper
{
AWS_CONNECTWISDOMSERVICE_API ContentStatus GetContentStatusForName(const Aws::String& name);

AWS_CONNECTWISDOMSERVICE_API Aws::String GetNameForContentStatus(ContentStatus value);
} // namespace ContentStatusMapper
} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
