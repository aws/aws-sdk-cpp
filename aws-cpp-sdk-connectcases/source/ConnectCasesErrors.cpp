/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/connectcases/ConnectCasesErrors.h>
#include <aws/connectcases/model/InternalServerException.h>
#include <aws/connectcases/model/ResourceNotFoundException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ConnectCases;
using namespace Aws::ConnectCases::Model;

namespace Aws
{
namespace ConnectCases
{
template<> AWS_CONNECTCASES_API InternalServerException ConnectCasesError::GetModeledError()
{
  assert(this->GetErrorType() == ConnectCasesErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_CONNECTCASES_API ResourceNotFoundException ConnectCasesError::GetModeledError()
{
  assert(this->GetErrorType() == ConnectCasesErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

namespace ConnectCasesErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectCasesErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectCasesErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConnectCasesErrors::INTERNAL_SERVER), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ConnectCasesErrorMapper
} // namespace ConnectCases
} // namespace Aws
