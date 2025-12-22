/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ARCRegionswitch {
namespace Model {
enum class DocumentDbDefaultBehavior { NOT_SET, switchoverOnly, failover };

namespace DocumentDbDefaultBehaviorMapper {
AWS_ARCREGIONSWITCH_API DocumentDbDefaultBehavior GetDocumentDbDefaultBehaviorForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForDocumentDbDefaultBehavior(DocumentDbDefaultBehavior value);
}  // namespace DocumentDbDefaultBehaviorMapper
}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
