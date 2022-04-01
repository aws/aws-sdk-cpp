/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SESV2
{
namespace Model
{
  enum class DkimSigningAttributesOrigin
  {
    NOT_SET,
    AWS_SES,
    EXTERNAL
  };

namespace DkimSigningAttributesOriginMapper
{
AWS_SESV2_API DkimSigningAttributesOrigin GetDkimSigningAttributesOriginForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForDkimSigningAttributesOrigin(DkimSigningAttributesOrigin value);
} // namespace DkimSigningAttributesOriginMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws
