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
#include <aws/ec2/model/StatusType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int passed_HASH = HashingUtils::HashString("passed");
static const int failed_HASH = HashingUtils::HashString("failed");
static const int insufficient_data_HASH = HashingUtils::HashString("insufficient-data");
static const int initializing_HASH = HashingUtils::HashString("initializing");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace StatusTypeMapper
{
StatusType GetStatusTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == passed_HASH)
  {
    return StatusType::passed;
  }
  else if (hashCode == failed_HASH)
  {
    return StatusType::failed;
  }
  else if (hashCode == insufficient_data_HASH)
  {
    return StatusType::insufficient_data;
  }
  else if (hashCode == initializing_HASH)
  {
    return StatusType::initializing;
  }

  return StatusType::NOT_SET;
}

Aws::String GetNameForStatusType(StatusType value)
{
  switch(value)
  {
  case StatusType::passed:
    return "passed";
  case StatusType::failed:
    return "failed";
  case StatusType::insufficient_data:
    return "insufficient-data";
  case StatusType::initializing:
    return "initializing";
  default:
    return "";
  }
}

} // namespace StatusTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
