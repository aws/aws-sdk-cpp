/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/PutResourcePermissionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SsmSap::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutResourcePermissionResult::PutResourcePermissionResult()
{
}

PutResourcePermissionResult::PutResourcePermissionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutResourcePermissionResult& PutResourcePermissionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Policy"))
  {
    m_policy = jsonValue.GetString("Policy");

  }



  return *this;
}
