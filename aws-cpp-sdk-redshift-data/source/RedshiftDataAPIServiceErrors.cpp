/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/redshift-data/RedshiftDataAPIServiceErrors.h>
#include <aws/redshift-data/model/ExecuteStatementException.h>
#include <aws/redshift-data/model/ResourceNotFoundException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::RedshiftDataAPIService;
using namespace Aws::RedshiftDataAPIService::Model;

namespace Aws
{
namespace RedshiftDataAPIService
{
template<> AWS_REDSHIFTDATAAPISERVICE_API ExecuteStatementException RedshiftDataAPIServiceError::GetModeledError()
{
  assert(this->GetErrorType() == RedshiftDataAPIServiceErrors::EXECUTE_STATEMENT);
  return ExecuteStatementException(this->GetJsonPayload().View());
}

template<> AWS_REDSHIFTDATAAPISERVICE_API ResourceNotFoundException RedshiftDataAPIServiceError::GetModeledError()
{
  assert(this->GetErrorType() == RedshiftDataAPIServiceErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

namespace RedshiftDataAPIServiceErrorMapper
{

static const int EXECUTE_STATEMENT_HASH = HashingUtils::HashString("ExecuteStatementException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == EXECUTE_STATEMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftDataAPIServiceErrors::EXECUTE_STATEMENT), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftDataAPIServiceErrors::INTERNAL_SERVER), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace RedshiftDataAPIServiceErrorMapper
} // namespace RedshiftDataAPIService
} // namespace Aws
