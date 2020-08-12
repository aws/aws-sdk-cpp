/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DescribeAuditSuppressionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAuditSuppressionResult::DescribeAuditSuppressionResult() : 
    m_suppressIndefinitely(false)
{
}

DescribeAuditSuppressionResult::DescribeAuditSuppressionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_suppressIndefinitely(false)
{
  *this = result;
}

DescribeAuditSuppressionResult& DescribeAuditSuppressionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("checkName"))
  {
    m_checkName = jsonValue.GetString("checkName");

  }

  if(jsonValue.ValueExists("resourceIdentifier"))
  {
    m_resourceIdentifier = jsonValue.GetObject("resourceIdentifier");

  }

  if(jsonValue.ValueExists("expirationDate"))
  {
    m_expirationDate = jsonValue.GetDouble("expirationDate");

  }

  if(jsonValue.ValueExists("suppressIndefinitely"))
  {
    m_suppressIndefinitely = jsonValue.GetBool("suppressIndefinitely");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }



  return *this;
}
