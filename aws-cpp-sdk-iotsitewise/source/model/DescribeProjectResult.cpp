/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DescribeProjectResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeProjectResult::DescribeProjectResult()
{
}

DescribeProjectResult::DescribeProjectResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeProjectResult& DescribeProjectResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("projectId"))
  {
    m_projectId = jsonValue.GetString("projectId");

  }

  if(jsonValue.ValueExists("projectArn"))
  {
    m_projectArn = jsonValue.GetString("projectArn");

  }

  if(jsonValue.ValueExists("projectName"))
  {
    m_projectName = jsonValue.GetString("projectName");

  }

  if(jsonValue.ValueExists("portalId"))
  {
    m_portalId = jsonValue.GetString("portalId");

  }

  if(jsonValue.ValueExists("projectDescription"))
  {
    m_projectDescription = jsonValue.GetString("projectDescription");

  }

  if(jsonValue.ValueExists("projectCreationDate"))
  {
    m_projectCreationDate = jsonValue.GetDouble("projectCreationDate");

  }

  if(jsonValue.ValueExists("projectLastUpdateDate"))
  {
    m_projectLastUpdateDate = jsonValue.GetDouble("projectLastUpdateDate");

  }



  return *this;
}
