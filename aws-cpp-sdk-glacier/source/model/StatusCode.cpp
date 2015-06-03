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
#include <aws/glacier/model/StatusCode.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int InProgress_HASH = HashingUtils::HashString("InProgress");
static const int Succeeded_HASH = HashingUtils::HashString("Succeeded");
static const int Failed_HASH = HashingUtils::HashString("Failed");

namespace Aws
{
namespace Glacier
{
namespace Model
{
namespace StatusCodeMapper
{
StatusCode GetStatusCodeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == InProgress_HASH)
  {
    return StatusCode::InProgress;
  }
  else if (hashCode == Succeeded_HASH)
  {
    return StatusCode::Succeeded;
  }
  else if (hashCode == Failed_HASH)
  {
    return StatusCode::Failed;
  }

  return StatusCode::InProgress;
}

Aws::String GetNameForStatusCode(StatusCode value)
{
  switch(value)
  {
  case StatusCode::InProgress:
    return "InProgress";
  case StatusCode::Succeeded:
    return "Succeeded";
  case StatusCode::Failed:
    return "Failed";
  default:
    return "InProgress";
  }
}

} // namespace StatusCodeMapper
} // namespace Model
} // namespace Glacier
} // namespace Aws
