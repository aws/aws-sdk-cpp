/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/CheckDomainTransferabilityResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CheckDomainTransferabilityResult::CheckDomainTransferabilityResult()
{
}

CheckDomainTransferabilityResult::CheckDomainTransferabilityResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CheckDomainTransferabilityResult& CheckDomainTransferabilityResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Transferability"))
  {
    m_transferability = jsonValue.GetObject("Transferability");

  }



  return *this;
}
