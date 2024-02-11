/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DescribeJobTemplateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeJobTemplateResult::DescribeJobTemplateResult()
{
}

DescribeJobTemplateResult::DescribeJobTemplateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeJobTemplateResult& DescribeJobTemplateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("jobTemplateArn"))
  {
    m_jobTemplateArn = jsonValue.GetString("jobTemplateArn");

  }

  if(jsonValue.ValueExists("jobTemplateId"))
  {
    m_jobTemplateId = jsonValue.GetString("jobTemplateId");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("documentSource"))
  {
    m_documentSource = jsonValue.GetString("documentSource");

  }

  if(jsonValue.ValueExists("document"))
  {
    m_document = jsonValue.GetString("document");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("presignedUrlConfig"))
  {
    m_presignedUrlConfig = jsonValue.GetObject("presignedUrlConfig");

  }

  if(jsonValue.ValueExists("jobExecutionsRolloutConfig"))
  {
    m_jobExecutionsRolloutConfig = jsonValue.GetObject("jobExecutionsRolloutConfig");

  }

  if(jsonValue.ValueExists("abortConfig"))
  {
    m_abortConfig = jsonValue.GetObject("abortConfig");

  }

  if(jsonValue.ValueExists("timeoutConfig"))
  {
    m_timeoutConfig = jsonValue.GetObject("timeoutConfig");

  }

  if(jsonValue.ValueExists("jobExecutionsRetryConfig"))
  {
    m_jobExecutionsRetryConfig = jsonValue.GetObject("jobExecutionsRetryConfig");

  }

  if(jsonValue.ValueExists("maintenanceWindows"))
  {
    Aws::Utils::Array<JsonView> maintenanceWindowsJsonList = jsonValue.GetArray("maintenanceWindows");
    for(unsigned maintenanceWindowsIndex = 0; maintenanceWindowsIndex < maintenanceWindowsJsonList.GetLength(); ++maintenanceWindowsIndex)
    {
      m_maintenanceWindows.push_back(maintenanceWindowsJsonList[maintenanceWindowsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("destinationPackageVersions"))
  {
    Aws::Utils::Array<JsonView> destinationPackageVersionsJsonList = jsonValue.GetArray("destinationPackageVersions");
    for(unsigned destinationPackageVersionsIndex = 0; destinationPackageVersionsIndex < destinationPackageVersionsJsonList.GetLength(); ++destinationPackageVersionsIndex)
    {
      m_destinationPackageVersions.push_back(destinationPackageVersionsJsonList[destinationPackageVersionsIndex].AsString());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
