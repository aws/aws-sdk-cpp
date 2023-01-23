/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/cloudsearchdomain/CloudSearchDomainErrors.h>
#include <aws/cloudsearchdomain/model/DocumentServiceException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CloudSearchDomain;
using namespace Aws::CloudSearchDomain::Model;

namespace Aws
{
namespace CloudSearchDomain
{
template<> AWS_CLOUDSEARCHDOMAIN_API DocumentServiceException CloudSearchDomainError::GetModeledError()
{
  assert(this->GetErrorType() == CloudSearchDomainErrors::DOCUMENT_SERVICE);
  return DocumentServiceException(this->GetJsonPayload().View());
}

namespace CloudSearchDomainErrorMapper
{

static const int DOCUMENT_SERVICE_HASH = HashingUtils::HashString("DocumentServiceException");
static const int SEARCH_HASH = HashingUtils::HashString("SearchException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == DOCUMENT_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudSearchDomainErrors::DOCUMENT_SERVICE), false);
  }
  else if (hashCode == SEARCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudSearchDomainErrors::SEARCH), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CloudSearchDomainErrorMapper
} // namespace CloudSearchDomain
} // namespace Aws
