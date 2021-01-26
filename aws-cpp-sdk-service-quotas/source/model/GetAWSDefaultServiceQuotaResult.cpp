/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/service-quotas/model/GetAWSDefaultServiceQuotaResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceQuotas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAWSDefaultServiceQuotaResult::GetAWSDefaultServiceQuotaResult()
{
}

GetAWSDefaultServiceQuotaResult::GetAWSDefaultServiceQuotaResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAWSDefaultServiceQuotaResult& GetAWSDefaultServiceQuotaResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Quota"))
  {
    m_quota = jsonValue.GetObject("Quota");

  }



  return *this;
}
