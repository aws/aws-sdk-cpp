/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/DescribeReleaseLabelResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeReleaseLabelResult::DescribeReleaseLabelResult()
{
}

DescribeReleaseLabelResult::DescribeReleaseLabelResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeReleaseLabelResult& DescribeReleaseLabelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ReleaseLabel"))
  {
    m_releaseLabel = jsonValue.GetString("ReleaseLabel");

  }

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

  if(jsonValue.ValueExists("AvailableOSReleases"))
  {
    Aws::Utils::Array<JsonView> availableOSReleasesJsonList = jsonValue.GetArray("AvailableOSReleases");
    for(unsigned availableOSReleasesIndex = 0; availableOSReleasesIndex < availableOSReleasesJsonList.GetLength(); ++availableOSReleasesIndex)
    {
      m_availableOSReleases.push_back(availableOSReleasesJsonList[availableOSReleasesIndex].AsObject());
    }
  }



  return *this;
}
