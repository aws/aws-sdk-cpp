/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/invoicing/InvoicingErrors.h>
#include <aws/invoicing/model/ResourceNotFoundException.h>
#include <aws/invoicing/model/InternalServerException.h>
#include <aws/invoicing/model/ValidationException.h>
#include <aws/invoicing/model/AccessDeniedException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Invoicing;
using namespace Aws::Invoicing::Model;

namespace Aws
{
namespace Invoicing
{
template<> AWS_INVOICING_API ResourceNotFoundException InvoicingError::GetModeledError()
{
  assert(this->GetErrorType() == InvoicingErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_INVOICING_API InternalServerException InvoicingError::GetModeledError()
{
  assert(this->GetErrorType() == InvoicingErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_INVOICING_API ValidationException InvoicingError::GetModeledError()
{
  assert(this->GetErrorType() == InvoicingErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_INVOICING_API AccessDeniedException InvoicingError::GetModeledError()
{
  assert(this->GetErrorType() == InvoicingErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

namespace InvoicingErrorMapper
{

static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(InvoicingErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(InvoicingErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace InvoicingErrorMapper
} // namespace Invoicing
} // namespace Aws
