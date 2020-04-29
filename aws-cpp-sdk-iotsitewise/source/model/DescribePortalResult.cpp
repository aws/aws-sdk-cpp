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

#include <aws/iotsitewise/model/DescribePortalResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribePortalResult::DescribePortalResult()
{
}

DescribePortalResult::DescribePortalResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribePortalResult& DescribePortalResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("portalId"))
  {
    m_portalId = jsonValue.GetString("portalId");

  }

  if(jsonValue.ValueExists("portalArn"))
  {
    m_portalArn = jsonValue.GetString("portalArn");

  }

  if(jsonValue.ValueExists("portalName"))
  {
    m_portalName = jsonValue.GetString("portalName");

  }

  if(jsonValue.ValueExists("portalDescription"))
  {
    m_portalDescription = jsonValue.GetString("portalDescription");

  }

  if(jsonValue.ValueExists("portalClientId"))
  {
    m_portalClientId = jsonValue.GetString("portalClientId");

  }

  if(jsonValue.ValueExists("portalStartUrl"))
  {
    m_portalStartUrl = jsonValue.GetString("portalStartUrl");

  }

  if(jsonValue.ValueExists("portalContactEmail"))
  {
    m_portalContactEmail = jsonValue.GetString("portalContactEmail");

  }

  if(jsonValue.ValueExists("portalStatus"))
  {
    m_portalStatus = jsonValue.GetObject("portalStatus");

  }

  if(jsonValue.ValueExists("portalCreationDate"))
  {
    m_portalCreationDate = jsonValue.GetDouble("portalCreationDate");

  }

  if(jsonValue.ValueExists("portalLastUpdateDate"))
  {
    m_portalLastUpdateDate = jsonValue.GetDouble("portalLastUpdateDate");

  }

  if(jsonValue.ValueExists("portalLogoImage"))
  {
    m_portalLogoImage = jsonValue.GetObject("portalLogoImage");

  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }



  return *this;
}
