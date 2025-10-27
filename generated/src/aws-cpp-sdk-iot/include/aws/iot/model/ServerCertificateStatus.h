/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/IoT_EXPORTS.h>

namespace Aws {
namespace IoT {
namespace Model {
enum class ServerCertificateStatus { NOT_SET, INVALID, VALID };

namespace ServerCertificateStatusMapper {
AWS_IOT_API ServerCertificateStatus GetServerCertificateStatusForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForServerCertificateStatus(ServerCertificateStatus value);
}  // namespace ServerCertificateStatusMapper
}  // namespace Model
}  // namespace IoT
}  // namespace Aws
