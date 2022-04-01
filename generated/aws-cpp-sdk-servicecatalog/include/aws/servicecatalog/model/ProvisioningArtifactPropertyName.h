/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{
  enum class ProvisioningArtifactPropertyName
  {
    NOT_SET,
    Id
  };

namespace ProvisioningArtifactPropertyNameMapper
{
AWS_SERVICECATALOG_API ProvisioningArtifactPropertyName GetProvisioningArtifactPropertyNameForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForProvisioningArtifactPropertyName(ProvisioningArtifactPropertyName value);
} // namespace ProvisioningArtifactPropertyNameMapper
} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
