/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/DescribeAccountAssignmentDeletionStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAccountAssignmentDeletionStatusResult::DescribeAccountAssignmentDeletionStatusResult()
{
}

DescribeAccountAssignmentDeletionStatusResult::DescribeAccountAssignmentDeletionStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAccountAssignmentDeletionStatusResult& DescribeAccountAssignmentDeletionStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AccountAssignmentDeletionStatus"))
  {
    m_accountAssignmentDeletionStatus = jsonValue.GetObject("AccountAssignmentDeletionStatus");

  }



  return *this;
}
