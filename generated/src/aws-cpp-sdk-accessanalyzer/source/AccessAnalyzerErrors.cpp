/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/accessanalyzer/AccessAnalyzerErrors.h>
#include <aws/accessanalyzer/model/ConflictException.h>
#include <aws/accessanalyzer/model/ThrottlingException.h>
#include <aws/accessanalyzer/model/ServiceQuotaExceededException.h>
#include <aws/accessanalyzer/model/ResourceNotFoundException.h>
#include <aws/accessanalyzer/model/InternalServerException.h>
#include <aws/accessanalyzer/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::AccessAnalyzer;
using namespace Aws::AccessAnalyzer::Model;

namespace Aws
{
namespace AccessAnalyzer
{
template<> AWS_ACCESSANALYZER_API ConflictException AccessAnalyzerError::GetModeledError()
{
  assert(this->GetErrorType() == AccessAnalyzerErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_ACCESSANALYZER_API ThrottlingException AccessAnalyzerError::GetModeledError()
{
  assert(this->GetErrorType() == AccessAnalyzerErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_ACCESSANALYZER_API ServiceQuotaExceededException AccessAnalyzerError::GetModeledError()
{
  assert(this->GetErrorType() == AccessAnalyzerErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_ACCESSANALYZER_API ResourceNotFoundException AccessAnalyzerError::GetModeledError()
{
  assert(this->GetErrorType() == AccessAnalyzerErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_ACCESSANALYZER_API InternalServerException AccessAnalyzerError::GetModeledError()
{
  assert(this->GetErrorType() == AccessAnalyzerErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_ACCESSANALYZER_API ValidationException AccessAnalyzerError::GetModeledError()
{
  assert(this->GetErrorType() == AccessAnalyzerErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace AccessAnalyzerErrorMapper
{

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AccessAnalyzerErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AccessAnalyzerErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AccessAnalyzerErrors::INTERNAL_SERVER), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace AccessAnalyzerErrorMapper
} // namespace AccessAnalyzer
} // namespace Aws
