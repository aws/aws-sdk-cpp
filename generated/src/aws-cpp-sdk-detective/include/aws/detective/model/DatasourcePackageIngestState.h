/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Detective
{
namespace Model
{
  enum class DatasourcePackageIngestState
  {
    NOT_SET,
    STARTED,
    STOPPED,
    DISABLED
  };

namespace DatasourcePackageIngestStateMapper
{
AWS_DETECTIVE_API DatasourcePackageIngestState GetDatasourcePackageIngestStateForName(const Aws::String& name);

AWS_DETECTIVE_API Aws::String GetNameForDatasourcePackageIngestState(DatasourcePackageIngestState value);
} // namespace DatasourcePackageIngestStateMapper
} // namespace Model
} // namespace Detective
} // namespace Aws
