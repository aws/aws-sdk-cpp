/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

