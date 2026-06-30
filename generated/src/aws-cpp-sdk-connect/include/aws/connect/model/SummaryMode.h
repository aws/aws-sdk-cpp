/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Connect {
namespace Model {
enum class SummaryMode { NOT_SET, PostContact, AutomatedInteraction, ContactChain };

namespace SummaryModeMapper {
AWS_CONNECT_API SummaryMode GetSummaryModeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForSummaryMode(SummaryMode value);
}  // namespace SummaryModeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
