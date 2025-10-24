﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace B2BI {
namespace Model {
enum class X12TechnicalAcknowledgment { NOT_SET, DO_NOT_GENERATE, GENERATE_ALL_SEGMENTS };

namespace X12TechnicalAcknowledgmentMapper {
AWS_B2BI_API X12TechnicalAcknowledgment GetX12TechnicalAcknowledgmentForName(const Aws::String& name);

AWS_B2BI_API Aws::String GetNameForX12TechnicalAcknowledgment(X12TechnicalAcknowledgment value);
}  // namespace X12TechnicalAcknowledgmentMapper
}  // namespace Model
}  // namespace B2BI
}  // namespace Aws
