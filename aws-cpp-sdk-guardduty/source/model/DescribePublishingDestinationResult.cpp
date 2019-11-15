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

#include <aws/guardduty/model/DescribePublishingDestinationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribePublishingDestinationResult::DescribePublishingDestinationResult() : 
    m_destinationType(DestinationType::NOT_SET),
    m_status(PublishingStatus::NOT_SET),
    m_publishingFailureStartTimestamp(0)
{
}

DescribePublishingDestinationResult::DescribePublishingDestinationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_destinationType(DestinationType::NOT_SET),
    m_status(PublishingStatus::NOT_SET),
    m_publishingFailureStartTimestamp(0)
{
  *this = result;
}

DescribePublishingDestinationResult& DescribePublishingDestinationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("destinationId"))
  {
    m_destinationId = jsonValue.GetString("destinationId");

  }

  if(jsonValue.ValueExists("destinationType"))
  {
    m_destinationType = DestinationTypeMapper::GetDestinationTypeForName(jsonValue.GetString("destinationType"));

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = PublishingStatusMapper::GetPublishingStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("publishingFailureStartTimestamp"))
  {
    m_publishingFailureStartTimestamp = jsonValue.GetInt64("publishingFailureStartTimestamp");

  }

  if(jsonValue.ValueExists("destinationProperties"))
  {
    m_destinationProperties = jsonValue.GetObject("destinationProperties");

  }



  return *this;
}
