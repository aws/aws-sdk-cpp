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
  enum class QuantumTaskAdditionalAttributeName
  {
    NOT_SET,
    QueueInfo
  };

namespace QuantumTaskAdditionalAttributeNameMapper
{
AWS_BRAKET_API QuantumTaskAdditionalAttributeName GetQuantumTaskAdditionalAttributeNameForName(const Aws::String& name);

AWS_BRAKET_API Aws::String GetNameForQuantumTaskAdditionalAttributeName(QuantumTaskAdditionalAttributeName value);
} // namespace QuantumTaskAdditionalAttributeNameMapper
} // namespace Model
} // namespace Braket
} // namespace Aws
