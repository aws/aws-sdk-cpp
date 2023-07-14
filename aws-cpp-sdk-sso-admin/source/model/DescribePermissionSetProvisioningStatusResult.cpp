/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/DescribePermissionSetProvisioningStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribePermissionSetProvisioningStatusResult::DescribePermissionSetProvisioningStatusResult()
{
}

DescribePermissionSetProvisioningStatusResult::DescribePermissionSetProvisioningStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribePermissionSetProvisioningStatusResult& DescribePermissionSetProvisioningStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PermissionSetProvisioningStatus"))
  {
    m_permissionSetProvisioningStatus = jsonValue.GetObject("PermissionSetProvisioningStatus");

  }



  return *this;
}
