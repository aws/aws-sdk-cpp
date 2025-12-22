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
enum class DocumentDbUngracefulBehavior { NOT_SET, failover };

namespace DocumentDbUngracefulBehaviorMapper {
AWS_ARCREGIONSWITCH_API DocumentDbUngracefulBehavior GetDocumentDbUngracefulBehaviorForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForDocumentDbUngracefulBehavior(DocumentDbUngracefulBehavior value);
}  // namespace DocumentDbUngracefulBehaviorMapper
}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
