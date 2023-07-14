/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectParticipant
{
namespace Model
{
  enum class SortKey
  {
    NOT_SET,
    DESCENDING,
    ASCENDING
  };

namespace SortKeyMapper
{
AWS_CONNECTPARTICIPANT_API SortKey GetSortKeyForName(const Aws::String& name);

AWS_CONNECTPARTICIPANT_API Aws::String GetNameForSortKey(SortKey value);
} // namespace SortKeyMapper
} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
