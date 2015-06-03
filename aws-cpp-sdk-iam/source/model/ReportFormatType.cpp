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
#include <aws/iam/model/ReportFormatType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int text_csv_HASH = HashingUtils::HashString("text/csv");

namespace Aws
{
namespace IAM
{
namespace Model
{
namespace ReportFormatTypeMapper
{
ReportFormatType GetReportFormatTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == text_csv_HASH)
  {
    return ReportFormatType::text_csv;
  }

  return ReportFormatType::text_csv;
}

Aws::String GetNameForReportFormatType(ReportFormatType value)
{
  switch(value)
  {
  case ReportFormatType::text_csv:
    return "text/csv";
  default:
    return "text_csv";
  }
}

} // namespace ReportFormatTypeMapper
} // namespace Model
} // namespace IAM
} // namespace Aws
