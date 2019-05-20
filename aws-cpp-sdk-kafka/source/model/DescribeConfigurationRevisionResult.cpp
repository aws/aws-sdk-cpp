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

#include <aws/kafka/model/DescribeConfigurationRevisionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeConfigurationRevisionResult::DescribeConfigurationRevisionResult() : 
    m_revision(0)
{
}

DescribeConfigurationRevisionResult::DescribeConfigurationRevisionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_revision(0)
{
  *this = result;
}

DescribeConfigurationRevisionResult& DescribeConfigurationRevisionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("revision"))
  {
    m_revision = jsonValue.GetInt64("revision");

  }

  if(jsonValue.ValueExists("serverProperties"))
  {
    m_serverProperties = HashingUtils::Base64Decode(jsonValue.GetString("serverProperties"));
  }



  return *this;
}
