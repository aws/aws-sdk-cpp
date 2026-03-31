/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ConnectHealth {
namespace Model {
enum class CustomTemplateBase { NOT_SET, HISTORY_AND_PHYSICAL, GIRPP, DAP, SIRP, BIRP, BEHAVIORAL_SOAP };

namespace CustomTemplateBaseMapper {
AWS_CONNECTHEALTH_API CustomTemplateBase GetCustomTemplateBaseForName(const Aws::String& name);

AWS_CONNECTHEALTH_API Aws::String GetNameForCustomTemplateBase(CustomTemplateBase value);
}  // namespace CustomTemplateBaseMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
