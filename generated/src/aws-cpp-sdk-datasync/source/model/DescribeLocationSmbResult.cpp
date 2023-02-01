/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/DescribeLocationSmbResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeLocationSmbResult::DescribeLocationSmbResult()
{
}

DescribeLocationSmbResult::DescribeLocationSmbResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeLocationSmbResult& DescribeLocationSmbResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LocationArn"))
  {
    m_locationArn = jsonValue.GetString("LocationArn");

  }

  if(jsonValue.ValueExists("LocationUri"))
  {
    m_locationUri = jsonValue.GetString("LocationUri");

  }

  if(jsonValue.ValueExists("AgentArns"))
  {
    Aws::Utils::Array<JsonView> agentArnsJsonList = jsonValue.GetArray("AgentArns");
    for(unsigned agentArnsIndex = 0; agentArnsIndex < agentArnsJsonList.GetLength(); ++agentArnsIndex)
    {
      m_agentArns.push_back(agentArnsJsonList[agentArnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("User"))
  {
    m_user = jsonValue.GetString("User");

  }

  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = jsonValue.GetString("Domain");

  }

  if(jsonValue.ValueExists("MountOptions"))
  {
    m_mountOptions = jsonValue.GetObject("MountOptions");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }



  return *this;
}
