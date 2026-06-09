/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/keyspacesstreams/KeyspacesStreams_EXPORTS.h>

namespace Aws {
namespace KeyspacesStreams {
namespace Model {
enum class IteratorPosition { NOT_SET, AT_TIP, BEHIND_TIP };

namespace IteratorPositionMapper {
AWS_KEYSPACESSTREAMS_API IteratorPosition GetIteratorPositionForName(const Aws::String& name);

AWS_KEYSPACESSTREAMS_API Aws::String GetNameForIteratorPosition(IteratorPosition value);
}  // namespace IteratorPositionMapper
}  // namespace Model
}  // namespace KeyspacesStreams
}  // namespace Aws
