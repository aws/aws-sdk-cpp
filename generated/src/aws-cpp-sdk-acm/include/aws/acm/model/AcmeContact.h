/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ACM {
namespace Model {
enum class AcmeContact { NOT_SET, REQUIRED, NOT_REQUIRED };

namespace AcmeContactMapper {
AWS_ACM_API AcmeContact GetAcmeContactForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForAcmeContact(AcmeContact value);
}  // namespace AcmeContactMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
