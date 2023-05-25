/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace drs
{
namespace Model
{
  enum class OriginEnvironment
  {
    NOT_SET,
    ON_PREMISES,
    AWS
  };

namespace OriginEnvironmentMapper
{
AWS_DRS_API OriginEnvironment GetOriginEnvironmentForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForOriginEnvironment(OriginEnvironment value);
} // namespace OriginEnvironmentMapper
} // namespace Model
} // namespace drs
} // namespace Aws
