/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
