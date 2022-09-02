/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class SearchableQueueType
  {
    NOT_SET,
    STANDARD
  };

namespace SearchableQueueTypeMapper
{
AWS_CONNECT_API SearchableQueueType GetSearchableQueueTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForSearchableQueueType(SearchableQueueType value);
} // namespace SearchableQueueTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
