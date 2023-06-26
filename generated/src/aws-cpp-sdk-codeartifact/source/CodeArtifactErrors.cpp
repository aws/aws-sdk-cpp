/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/codeartifact/CodeArtifactErrors.h>
#include <aws/codeartifact/model/ConflictException.h>
#include <aws/codeartifact/model/ServiceQuotaExceededException.h>
#include <aws/codeartifact/model/ThrottlingException.h>
#include <aws/codeartifact/model/ResourceNotFoundException.h>
#include <aws/codeartifact/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CodeArtifact;
using namespace Aws::CodeArtifact::Model;

namespace Aws
{
namespace CodeArtifact
{
template<> AWS_CODEARTIFACT_API ConflictException CodeArtifactError::GetModeledError()
{
  assert(this->GetErrorType() == CodeArtifactErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_CODEARTIFACT_API ServiceQuotaExceededException CodeArtifactError::GetModeledError()
{
  assert(this->GetErrorType() == CodeArtifactErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_CODEARTIFACT_API ThrottlingException CodeArtifactError::GetModeledError()
{
  assert(this->GetErrorType() == CodeArtifactErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_CODEARTIFACT_API ResourceNotFoundException CodeArtifactError::GetModeledError()
{
  assert(this->GetErrorType() == CodeArtifactErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_CODEARTIFACT_API ValidationException CodeArtifactError::GetModeledError()
{
  assert(this->GetErrorType() == CodeArtifactErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace CodeArtifactErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeArtifactErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeArtifactErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeArtifactErrors::INTERNAL_SERVER), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CodeArtifactErrorMapper
} // namespace CodeArtifact
} // namespace Aws
