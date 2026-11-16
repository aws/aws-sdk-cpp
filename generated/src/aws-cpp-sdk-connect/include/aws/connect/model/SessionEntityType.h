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
enum class SessionEntityType { NOT_SET, USER };

namespace SessionEntityTypeMapper {
AWS_CONNECT_API SessionEntityType GetSessionEntityTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForSessionEntityType(SessionEntityType value);
}  // namespace SessionEntityTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
