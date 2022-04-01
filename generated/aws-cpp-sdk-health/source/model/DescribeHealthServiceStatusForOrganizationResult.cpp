/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/health/model/DescribeHealthServiceStatusForOrganizationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Health::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeHealthServiceStatusForOrganizationResult::DescribeHealthServiceStatusForOrganizationResult()
{
}

DescribeHealthServiceStatusForOrganizationResult::DescribeHealthServiceStatusForOrganizationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeHealthServiceStatusForOrganizationResult& DescribeHealthServiceStatusForOrganizationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("healthServiceAccessStatusForOrganization"))
  {
    m_healthServiceAccessStatusForOrganization = jsonValue.GetString("healthServiceAccessStatusForOrganization");

  }



  return *this;
}
