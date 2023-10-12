/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/finspace-data/FinSpaceDataErrors.h>
#include <aws/finspace-data/model/ConflictException.h>
#include <aws/finspace-data/model/ResourceNotFoundException.h>
#include <aws/finspace-data/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::FinSpaceData;
using namespace Aws::FinSpaceData::Model;

namespace Aws
{
namespace FinSpaceData
{
template<> AWS_FINSPACEDATA_API ConflictException FinSpaceDataError::GetModeledError()
{
  assert(this->GetErrorType() == FinSpaceDataErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_FINSPACEDATA_API ResourceNotFoundException FinSpaceDataError::GetModeledError()
{
  assert(this->GetErrorType() == FinSpaceDataErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_FINSPACEDATA_API ValidationException FinSpaceDataError::GetModeledError()
{
  assert(this->GetErrorType() == FinSpaceDataErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace FinSpaceDataErrorMapper
{

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FinSpaceDataErrors::CONFLICT), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FinSpaceDataErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FinSpaceDataErrors::LIMIT_EXCEEDED), true);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace FinSpaceDataErrorMapper
} // namespace FinSpaceData
} // namespace Aws
