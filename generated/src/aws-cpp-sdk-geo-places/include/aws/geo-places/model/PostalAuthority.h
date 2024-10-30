/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GeoPlaces
{
namespace Model
{
  enum class PostalAuthority
  {
    NOT_SET,
    Usps
  };

namespace PostalAuthorityMapper
{
AWS_GEOPLACES_API PostalAuthority GetPostalAuthorityForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForPostalAuthority(PostalAuthority value);
} // namespace PostalAuthorityMapper
} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
