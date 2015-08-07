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
#include <aws/email/model/VerificationStatus.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int Pending_HASH = HashingUtils::HashString("Pending");
static const int Success_HASH = HashingUtils::HashString("Success");
static const int Failed_HASH = HashingUtils::HashString("Failed");
static const int TemporaryFailure_HASH = HashingUtils::HashString("TemporaryFailure");
static const int NotStarted_HASH = HashingUtils::HashString("NotStarted");

namespace Aws
{
namespace SES
{
namespace Model
{
namespace VerificationStatusMapper
{
VerificationStatus GetVerificationStatusForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == Pending_HASH)
  {
    return VerificationStatus::Pending;
  }
  else if (hashCode == Success_HASH)
  {
    return VerificationStatus::Success;
  }
  else if (hashCode == Failed_HASH)
  {
    return VerificationStatus::Failed;
  }
  else if (hashCode == TemporaryFailure_HASH)
  {
    return VerificationStatus::TemporaryFailure;
  }
  else if (hashCode == NotStarted_HASH)
  {
    return VerificationStatus::NotStarted;
  }

  return VerificationStatus::NOT_SET;
}

Aws::String GetNameForVerificationStatus(VerificationStatus value)
{
  switch(value)
  {
  case VerificationStatus::Pending:
    return "Pending";
  case VerificationStatus::Success:
    return "Success";
  case VerificationStatus::Failed:
    return "Failed";
  case VerificationStatus::TemporaryFailure:
    return "TemporaryFailure";
  case VerificationStatus::NotStarted:
    return "NotStarted";
  default:
    return "";
  }
}

} // namespace VerificationStatusMapper
} // namespace Model
} // namespace SES
} // namespace Aws
