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

#include <aws/marketplace-catalog/model/DescribeChangeSetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MarketplaceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeChangeSetResult::DescribeChangeSetResult() : 
    m_status(ChangeStatus::NOT_SET)
{
}

DescribeChangeSetResult::DescribeChangeSetResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ChangeStatus::NOT_SET)
{
  *this = result;
}

DescribeChangeSetResult& DescribeChangeSetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ChangeSetId"))
  {
    m_changeSetId = jsonValue.GetString("ChangeSetId");

  }

  if(jsonValue.ValueExists("ChangeSetArn"))
  {
    m_changeSetArn = jsonValue.GetString("ChangeSetArn");

  }

  if(jsonValue.ValueExists("ChangeSetName"))
  {
    m_changeSetName = jsonValue.GetString("ChangeSetName");

  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetString("StartTime");

  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetString("EndTime");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ChangeStatusMapper::GetChangeStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("FailureDescription"))
  {
    m_failureDescription = jsonValue.GetString("FailureDescription");

  }

  if(jsonValue.ValueExists("ChangeSet"))
  {
    Array<JsonView> changeSetJsonList = jsonValue.GetArray("ChangeSet");
    for(unsigned changeSetIndex = 0; changeSetIndex < changeSetJsonList.GetLength(); ++changeSetIndex)
    {
      m_changeSet.push_back(changeSetJsonList[changeSetIndex].AsObject());
    }
  }



  return *this;
}
