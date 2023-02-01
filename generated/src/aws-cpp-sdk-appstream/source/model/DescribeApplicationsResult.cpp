/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/DescribeApplicationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeApplicationsResult::DescribeApplicationsResult()
{
}

DescribeApplicationsResult::DescribeApplicationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeApplicationsResult& DescribeApplicationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Applications"))
  {
    Aws::Utils::Array<JsonView> applicationsJsonList = jsonValue.GetArray("Applications");
    for(unsigned applicationsIndex = 0; applicationsIndex < applicationsJsonList.GetLength(); ++applicationsIndex)
    {
      m_applications.push_back(applicationsJsonList[applicationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
