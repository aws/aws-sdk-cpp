/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/PutOrganizationConformancePackResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutOrganizationConformancePackResult::PutOrganizationConformancePackResult()
{
}

PutOrganizationConformancePackResult::PutOrganizationConformancePackResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutOrganizationConformancePackResult& PutOrganizationConformancePackResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OrganizationConformancePackArn"))
  {
    m_organizationConformancePackArn = jsonValue.GetString("OrganizationConformancePackArn");

  }



  return *this;
}
