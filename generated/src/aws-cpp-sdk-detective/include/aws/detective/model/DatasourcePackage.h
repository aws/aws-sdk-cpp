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
  enum class DatasourcePackage
  {
    NOT_SET,
    DETECTIVE_CORE,
    EKS_AUDIT,
    ASFF_SECURITYHUB_FINDING
  };

namespace DatasourcePackageMapper
{
AWS_DETECTIVE_API DatasourcePackage GetDatasourcePackageForName(const Aws::String& name);

AWS_DETECTIVE_API Aws::String GetNameForDatasourcePackage(DatasourcePackage value);
} // namespace DatasourcePackageMapper
} // namespace Model
} // namespace Detective
} // namespace Aws
