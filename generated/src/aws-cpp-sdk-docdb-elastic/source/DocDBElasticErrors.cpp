/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/docdb-elastic/DocDBElasticErrors.h>
#include <aws/docdb-elastic/model/ConflictException.h>
#include <aws/docdb-elastic/model/ThrottlingException.h>
#include <aws/docdb-elastic/model/ResourceNotFoundException.h>
#include <aws/docdb-elastic/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::DocDBElastic;
using namespace Aws::DocDBElastic::Model;

namespace Aws
{
namespace DocDBElastic
{
template<> AWS_DOCDBELASTIC_API ConflictException DocDBElasticError::GetModeledError()
{
  assert(this->GetErrorType() == DocDBElasticErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_DOCDBELASTIC_API ThrottlingException DocDBElasticError::GetModeledError()
{
  assert(this->GetErrorType() == DocDBElasticErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_DOCDBELASTIC_API ResourceNotFoundException DocDBElasticError::GetModeledError()
{
  assert(this->GetErrorType() == DocDBElasticErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_DOCDBELASTIC_API ValidationException DocDBElasticError::GetModeledError()
{
  assert(this->GetErrorType() == DocDBElasticErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace DocDBElasticErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DocDBElasticErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DocDBElasticErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DocDBElasticErrors::INTERNAL_SERVER), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace DocDBElasticErrorMapper
} // namespace DocDBElastic
} // namespace Aws
