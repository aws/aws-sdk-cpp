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

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector/InspectorErrors.h>

using namespace Aws::Client;
using namespace Aws::Inspector;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace InspectorErrorMapper
{

static const int INTERNAL_HASH = HashingUtils::HashString("InternalException");
static const int AGENTS_ALREADY_RUNNING_ASSESSMENT_HASH = HashingUtils::HashString("AgentsAlreadyRunningAssessmentException");
static const int PREVIEW_GENERATION_IN_PROGRESS_HASH = HashingUtils::HashString("PreviewGenerationInProgressException");
static const int UNSUPPORTED_FEATURE_HASH = HashingUtils::HashString("UnsupportedFeatureException");
static const int NO_SUCH_ENTITY_HASH = HashingUtils::HashString("NoSuchEntityException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int ASSESSMENT_RUN_IN_PROGRESS_HASH = HashingUtils::HashString("AssessmentRunInProgressException");
static const int INVALID_INPUT_HASH = HashingUtils::HashString("InvalidInputException");
static const int SERVICE_TEMPORARILY_UNAVAILABLE_HASH = HashingUtils::HashString("ServiceTemporarilyUnavailableException");
static const int INVALID_CROSS_ACCOUNT_ROLE_HASH = HashingUtils::HashString("InvalidCrossAccountRoleException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(InspectorErrors::INTERNAL), false);
  }
  else if (hashCode == AGENTS_ALREADY_RUNNING_ASSESSMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(InspectorErrors::AGENTS_ALREADY_RUNNING_ASSESSMENT), false);
  }
  else if (hashCode == PREVIEW_GENERATION_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(InspectorErrors::PREVIEW_GENERATION_IN_PROGRESS), false);
  }
  else if (hashCode == UNSUPPORTED_FEATURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(InspectorErrors::UNSUPPORTED_FEATURE), false);
  }
  else if (hashCode == NO_SUCH_ENTITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(InspectorErrors::NO_SUCH_ENTITY), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(InspectorErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == ASSESSMENT_RUN_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(InspectorErrors::ASSESSMENT_RUN_IN_PROGRESS), false);
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(InspectorErrors::INVALID_INPUT), false);
  }
  else if (hashCode == SERVICE_TEMPORARILY_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(InspectorErrors::SERVICE_TEMPORARILY_UNAVAILABLE), false);
  }
  else if (hashCode == INVALID_CROSS_ACCOUNT_ROLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(InspectorErrors::INVALID_CROSS_ACCOUNT_ROLE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace InspectorErrorMapper
} // namespace Inspector
} // namespace Aws
