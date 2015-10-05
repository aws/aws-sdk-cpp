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
#include <aws/ec2/model/ReportStatusType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int ok_HASH = HashingUtils::HashString("ok");
static const int impaired_HASH = HashingUtils::HashString("impaired");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace ReportStatusTypeMapper
{
ReportStatusType GetReportStatusTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == ok_HASH)
  {
    return ReportStatusType::ok;
  }
  else if (hashCode == impaired_HASH)
  {
    return ReportStatusType::impaired;
  }

  return ReportStatusType::NOT_SET;
}

Aws::String GetNameForReportStatusType(ReportStatusType value)
{
  switch(value)
  {
  case ReportStatusType::ok:
    return "ok";
  case ReportStatusType::impaired:
    return "impaired";
  default:
    return "";
  }
}

} // namespace ReportStatusTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
