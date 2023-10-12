/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector/InspectorErrors.h>
#include <aws/inspector/model/InternalException.h>
#include <aws/inspector/model/AgentsAlreadyRunningAssessmentException.h>
#include <aws/inspector/model/UnsupportedFeatureException.h>
#include <aws/inspector/model/NoSuchEntityException.h>
#include <aws/inspector/model/LimitExceededException.h>
#include <aws/inspector/model/AccessDeniedException.h>
#include <aws/inspector/model/AssessmentRunInProgressException.h>
#include <aws/inspector/model/InvalidInputException.h>
#include <aws/inspector/model/ServiceTemporarilyUnavailableException.h>
#include <aws/inspector/model/InvalidCrossAccountRoleException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Inspector;
using namespace Aws::Inspector::Model;

namespace Aws
{
namespace Inspector
{
template<> AWS_INSPECTOR_API InternalException InspectorError::GetModeledError()
{
  assert(this->GetErrorType() == InspectorErrors::INTERNAL);
  return InternalException(this->GetJsonPayload().View());
}

template<> AWS_INSPECTOR_API AgentsAlreadyRunningAssessmentException InspectorError::GetModeledError()
{
  assert(this->GetErrorType() == InspectorErrors::AGENTS_ALREADY_RUNNING_ASSESSMENT);
  return AgentsAlreadyRunningAssessmentException(this->GetJsonPayload().View());
}

template<> AWS_INSPECTOR_API UnsupportedFeatureException InspectorError::GetModeledError()
{
  assert(this->GetErrorType() == InspectorErrors::UNSUPPORTED_FEATURE);
  return UnsupportedFeatureException(this->GetJsonPayload().View());
}

template<> AWS_INSPECTOR_API NoSuchEntityException InspectorError::GetModeledError()
{
  assert(this->GetErrorType() == InspectorErrors::NO_SUCH_ENTITY);
  return NoSuchEntityException(this->GetJsonPayload().View());
}

template<> AWS_INSPECTOR_API LimitExceededException InspectorError::GetModeledError()
{
  assert(this->GetErrorType() == InspectorErrors::LIMIT_EXCEEDED);
  return LimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_INSPECTOR_API AccessDeniedException InspectorError::GetModeledError()
{
  assert(this->GetErrorType() == InspectorErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

template<> AWS_INSPECTOR_API AssessmentRunInProgressException InspectorError::GetModeledError()
{
  assert(this->GetErrorType() == InspectorErrors::ASSESSMENT_RUN_IN_PROGRESS);
  return AssessmentRunInProgressException(this->GetJsonPayload().View());
}

template<> AWS_INSPECTOR_API InvalidInputException InspectorError::GetModeledError()
{
  assert(this->GetErrorType() == InspectorErrors::INVALID_INPUT);
  return InvalidInputException(this->GetJsonPayload().View());
}

template<> AWS_INSPECTOR_API ServiceTemporarilyUnavailableException InspectorError::GetModeledError()
{
  assert(this->GetErrorType() == InspectorErrors::SERVICE_TEMPORARILY_UNAVAILABLE);
  return ServiceTemporarilyUnavailableException(this->GetJsonPayload().View());
}

template<> AWS_INSPECTOR_API InvalidCrossAccountRoleException InspectorError::GetModeledError()
{
  assert(this->GetErrorType() == InspectorErrors::INVALID_CROSS_ACCOUNT_ROLE);
  return InvalidCrossAccountRoleException(this->GetJsonPayload().View());
}

namespace InspectorErrorMapper
{

static constexpr uint32_t INTERNAL_HASH = ConstExprHashingUtils::HashString("InternalException");
static constexpr uint32_t AGENTS_ALREADY_RUNNING_ASSESSMENT_HASH = ConstExprHashingUtils::HashString("AgentsAlreadyRunningAssessmentException");
static constexpr uint32_t PREVIEW_GENERATION_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("PreviewGenerationInProgressException");
static constexpr uint32_t UNSUPPORTED_FEATURE_HASH = ConstExprHashingUtils::HashString("UnsupportedFeatureException");
static constexpr uint32_t NO_SUCH_ENTITY_HASH = ConstExprHashingUtils::HashString("NoSuchEntityException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t ASSESSMENT_RUN_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("AssessmentRunInProgressException");
static constexpr uint32_t INVALID_INPUT_HASH = ConstExprHashingUtils::HashString("InvalidInputException");
static constexpr uint32_t SERVICE_TEMPORARILY_UNAVAILABLE_HASH = ConstExprHashingUtils::HashString("ServiceTemporarilyUnavailableException");
static constexpr uint32_t INVALID_CROSS_ACCOUNT_ROLE_HASH = ConstExprHashingUtils::HashString("InvalidCrossAccountRoleException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

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
    return AWSError<CoreErrors>(static_cast<CoreErrors>(InspectorErrors::LIMIT_EXCEEDED), true);
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
