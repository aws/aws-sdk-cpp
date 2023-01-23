/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{
  enum class NniPartnerType
  {
    NOT_SET,
    v1,
    v2,
    nonPartner
  };

namespace NniPartnerTypeMapper
{
AWS_DIRECTCONNECT_API NniPartnerType GetNniPartnerTypeForName(const Aws::String& name);

AWS_DIRECTCONNECT_API Aws::String GetNameForNniPartnerType(NniPartnerType value);
} // namespace NniPartnerTypeMapper
} // namespace Model
} // namespace DirectConnect
} // namespace Aws
