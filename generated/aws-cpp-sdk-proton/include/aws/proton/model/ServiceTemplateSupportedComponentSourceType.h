/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Proton
{
namespace Model
{
  enum class ServiceTemplateSupportedComponentSourceType
  {
    NOT_SET,
    DIRECTLY_DEFINED
  };

namespace ServiceTemplateSupportedComponentSourceTypeMapper
{
AWS_PROTON_API ServiceTemplateSupportedComponentSourceType GetServiceTemplateSupportedComponentSourceTypeForName(const Aws::String& name);

AWS_PROTON_API Aws::String GetNameForServiceTemplateSupportedComponentSourceType(ServiceTemplateSupportedComponentSourceType value);
} // namespace ServiceTemplateSupportedComponentSourceTypeMapper
} // namespace Model
} // namespace Proton
} // namespace Aws
