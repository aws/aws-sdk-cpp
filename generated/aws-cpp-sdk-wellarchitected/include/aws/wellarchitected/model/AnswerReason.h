/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{
  enum class AnswerReason
  {
    NOT_SET,
    OUT_OF_SCOPE,
    BUSINESS_PRIORITIES,
    ARCHITECTURE_CONSTRAINTS,
    OTHER,
    NONE
  };

namespace AnswerReasonMapper
{
AWS_WELLARCHITECTED_API AnswerReason GetAnswerReasonForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForAnswerReason(AnswerReason value);
} // namespace AnswerReasonMapper
} // namespace Model
} // namespace WellArchitected
} // namespace Aws
