/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{
  enum class FileClassification
  {
    NOT_SET,
    MODELIZEIT_EXPORT,
    RVTOOLS_EXPORT,
    VMWARE_NSX_EXPORT,
    IMPORT_TEMPLATE
  };

namespace FileClassificationMapper
{
AWS_APPLICATIONDISCOVERYSERVICE_API FileClassification GetFileClassificationForName(const Aws::String& name);

AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String GetNameForFileClassification(FileClassification value);
} // namespace FileClassificationMapper
} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
