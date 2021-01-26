/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/importexport/ImportExportEndpoint.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws;
using namespace Aws::ImportExport;

namespace Aws
{
namespace ImportExport
{
namespace ImportExportEndpoint
{


  Aws::String ForRegion(const Aws::String& regionName, bool useDualStack)
  {
    AWS_UNREFERENCED_PARAM(regionName);
    AWS_UNREFERENCED_PARAM(useDualStack);
    return "importexport.amazonaws.com";
  }

} // namespace ImportExportEndpoint
} // namespace ImportExport
} // namespace Aws

