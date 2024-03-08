/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Braket
{
namespace Model
{
  enum class HybridJobAdditionalAttributeName
  {
    NOT_SET,
    QueueInfo
  };

namespace HybridJobAdditionalAttributeNameMapper
{
AWS_BRAKET_API HybridJobAdditionalAttributeName GetHybridJobAdditionalAttributeNameForName(const Aws::String& name);

AWS_BRAKET_API Aws::String GetNameForHybridJobAdditionalAttributeName(HybridJobAdditionalAttributeName value);
} // namespace HybridJobAdditionalAttributeNameMapper
} // namespace Model
} // namespace Braket
} // namespace Aws
