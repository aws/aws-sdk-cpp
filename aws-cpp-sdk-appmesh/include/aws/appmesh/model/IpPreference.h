/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppMesh
{
namespace Model
{
  enum class IpPreference
  {
    NOT_SET,
    IPv6_PREFERRED,
    IPv4_PREFERRED,
    IPv4_ONLY,
    IPv6_ONLY
  };

namespace IpPreferenceMapper
{
AWS_APPMESH_API IpPreference GetIpPreferenceForName(const Aws::String& name);

AWS_APPMESH_API Aws::String GetNameForIpPreference(IpPreference value);
} // namespace IpPreferenceMapper
} // namespace Model
} // namespace AppMesh
} // namespace Aws
