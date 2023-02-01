/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/GetEnrollmentStatusesForOrganizationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEnrollmentStatusesForOrganizationResult::GetEnrollmentStatusesForOrganizationResult()
{
}

GetEnrollmentStatusesForOrganizationResult::GetEnrollmentStatusesForOrganizationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetEnrollmentStatusesForOrganizationResult& GetEnrollmentStatusesForOrganizationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("accountEnrollmentStatuses"))
  {
    Aws::Utils::Array<JsonView> accountEnrollmentStatusesJsonList = jsonValue.GetArray("accountEnrollmentStatuses");
    for(unsigned accountEnrollmentStatusesIndex = 0; accountEnrollmentStatusesIndex < accountEnrollmentStatusesJsonList.GetLength(); ++accountEnrollmentStatusesIndex)
    {
      m_accountEnrollmentStatuses.push_back(accountEnrollmentStatusesJsonList[accountEnrollmentStatusesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
