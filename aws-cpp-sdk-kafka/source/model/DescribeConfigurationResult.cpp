/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/DescribeConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeConfigurationResult::DescribeConfigurationResult() : 
    m_state(ConfigurationState::NOT_SET)
{
}

DescribeConfigurationResult::DescribeConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(ConfigurationState::NOT_SET)
{
  *this = result;
}

DescribeConfigurationResult& DescribeConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("kafkaVersions"))
  {
    Aws::Utils::Array<JsonView> kafkaVersionsJsonList = jsonValue.GetArray("kafkaVersions");
    for(unsigned kafkaVersionsIndex = 0; kafkaVersionsIndex < kafkaVersionsJsonList.GetLength(); ++kafkaVersionsIndex)
    {
      m_kafkaVersions.push_back(kafkaVersionsJsonList[kafkaVersionsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("latestRevision"))
  {
    m_latestRevision = jsonValue.GetObject("latestRevision");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = ConfigurationStateMapper::GetConfigurationStateForName(jsonValue.GetString("state"));

  }



  return *this;
}
