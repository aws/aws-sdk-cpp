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
  enum class VocabularyState
  {
    NOT_SET,
    CREATION_IN_PROGRESS,
    ACTIVE,
    CREATION_FAILED,
    DELETE_IN_PROGRESS
  };

namespace VocabularyStateMapper
{
AWS_CONNECT_API VocabularyState GetVocabularyStateForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForVocabularyState(VocabularyState value);
} // namespace VocabularyStateMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
