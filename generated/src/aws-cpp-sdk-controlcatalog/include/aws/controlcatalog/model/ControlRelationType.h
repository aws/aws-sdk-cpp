/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ControlCatalog {
namespace Model {
enum class ControlRelationType { NOT_SET, COMPLEMENTARY, ALTERNATIVE, MUTUALLY_EXCLUSIVE };

namespace ControlRelationTypeMapper {
AWS_CONTROLCATALOG_API ControlRelationType GetControlRelationTypeForName(const Aws::String& name);

AWS_CONTROLCATALOG_API Aws::String GetNameForControlRelationType(ControlRelationType value);
}  // namespace ControlRelationTypeMapper
}  // namespace Model
}  // namespace ControlCatalog
}  // namespace Aws
