/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/lambda/model/InvocationType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int Event_HASH = HashingUtils::HashString("Event");
static const int RequestResponse_HASH = HashingUtils::HashString("RequestResponse");
static const int DryRun_HASH = HashingUtils::HashString("DryRun");

namespace Aws
{
namespace Lambda
{
namespace Model
{
namespace InvocationTypeMapper
{
InvocationType GetInvocationTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == Event_HASH)
  {
    return InvocationType::Event;
  }
  else if (hashCode == RequestResponse_HASH)
  {
    return InvocationType::RequestResponse;
  }
  else if (hashCode == DryRun_HASH)
  {
    return InvocationType::DryRun;
  }

  return InvocationType::NOT_SET;
}

Aws::String GetNameForInvocationType(InvocationType value)
{
  switch(value)
  {
  case InvocationType::Event:
    return "Event";
  case InvocationType::RequestResponse:
    return "RequestResponse";
  case InvocationType::DryRun:
    return "DryRun";
  default:
    return "";
  }
}

} // namespace InvocationTypeMapper
} // namespace Model
} // namespace Lambda
} // namespace Aws
