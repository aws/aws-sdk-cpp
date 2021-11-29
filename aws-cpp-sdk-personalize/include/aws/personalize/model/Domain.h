/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Personalize
{
namespace Model
{
  enum class Domain
  {
    NOT_SET,
    ECOMMERCE,
    VIDEO_ON_DEMAND
  };

namespace DomainMapper
{
AWS_PERSONALIZE_API Domain GetDomainForName(const Aws::String& name);

AWS_PERSONALIZE_API Aws::String GetNameForDomain(Domain value);
} // namespace DomainMapper
} // namespace Model
} // namespace Personalize
} // namespace Aws
