/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/ExportEnvironment.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int citrix_HASH = HashingUtils::HashString("citrix");
static const int vmware_HASH = HashingUtils::HashString("vmware");
static const int microsoft_HASH = HashingUtils::HashString("microsoft");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace ExportEnvironmentMapper
{
ExportEnvironment GetExportEnvironmentForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == citrix_HASH)
  {
    return ExportEnvironment::citrix;
  }
  else if (hashCode == vmware_HASH)
  {
    return ExportEnvironment::vmware;
  }
  else if (hashCode == microsoft_HASH)
  {
    return ExportEnvironment::microsoft;
  }

  return ExportEnvironment::NOT_SET;
}

Aws::String GetNameForExportEnvironment(ExportEnvironment value)
{
  switch(value)
  {
  case ExportEnvironment::citrix:
    return "citrix";
  case ExportEnvironment::vmware:
    return "vmware";
  case ExportEnvironment::microsoft:
    return "microsoft";
  default:
    return "";
  }
}

} // namespace ExportEnvironmentMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
