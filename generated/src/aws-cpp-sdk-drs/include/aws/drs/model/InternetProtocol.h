/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/Drs_EXPORTS.h>

namespace Aws {
namespace drs {
namespace Model {
enum class InternetProtocol { NOT_SET, IPV4, IPV6 };

namespace InternetProtocolMapper {
AWS_DRS_API InternetProtocol GetInternetProtocolForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForInternetProtocol(InternetProtocol value);
}  // namespace InternetProtocolMapper
}  // namespace Model
}  // namespace drs
}  // namespace Aws
