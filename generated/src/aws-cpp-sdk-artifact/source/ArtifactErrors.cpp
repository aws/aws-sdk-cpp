/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/artifact/ArtifactErrors.h>
#include <aws/artifact/model/ConflictException.h>
#include <aws/artifact/model/ThrottlingException.h>
#include <aws/artifact/model/ServiceQuotaExceededException.h>
#include <aws/artifact/model/ResourceNotFoundException.h>
#include <aws/artifact/model/InternalServerException.h>
#include <aws/artifact/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Artifact;
using namespace Aws::Artifact::Model;

namespace Aws
{
namespace Artifact
{
template<> AWS_ARTIFACT_API ConflictException ArtifactError::GetModeledError()
{
  assert(this->GetErrorType() == ArtifactErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_ARTIFACT_API ThrottlingException ArtifactError::GetModeledError()
{
  assert(this->GetErrorType() == ArtifactErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_ARTIFACT_API ServiceQuotaExceededException ArtifactError::GetModeledError()
{
  assert(this->GetErrorType() == ArtifactErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_ARTIFACT_API ResourceNotFoundException ArtifactError::GetModeledError()
{
  assert(this->GetErrorType() == ArtifactErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_ARTIFACT_API InternalServerException ArtifactError::GetModeledError()
{
  assert(this->GetErrorType() == ArtifactErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_ARTIFACT_API ValidationException ArtifactError::GetModeledError()
{
  assert(this->GetErrorType() == ArtifactErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace ArtifactErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ArtifactErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ArtifactErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ArtifactErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ArtifactErrorMapper
} // namespace Artifact
} // namespace Aws
