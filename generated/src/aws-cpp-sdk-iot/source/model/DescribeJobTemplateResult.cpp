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
    m_jobTemplateArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobTemplateId"))
  {
    m_jobTemplateId = jsonValue.GetString("jobTemplateId");
    m_jobTemplateIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("documentSource"))
  {
    m_documentSource = jsonValue.GetString("documentSource");
    m_documentSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("document"))
  {
    m_document = jsonValue.GetString("document");
    m_documentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("presignedUrlConfig"))
  {
    m_presignedUrlConfig = jsonValue.GetObject("presignedUrlConfig");
    m_presignedUrlConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobExecutionsRolloutConfig"))
  {
    m_jobExecutionsRolloutConfig = jsonValue.GetObject("jobExecutionsRolloutConfig");
    m_jobExecutionsRolloutConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("abortConfig"))
  {
    m_abortConfig = jsonValue.GetObject("abortConfig");
    m_abortConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timeoutConfig"))
  {
    m_timeoutConfig = jsonValue.GetObject("timeoutConfig");
    m_timeoutConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobExecutionsRetryConfig"))
  {
    m_jobExecutionsRetryConfig = jsonValue.GetObject("jobExecutionsRetryConfig");
    m_jobExecutionsRetryConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maintenanceWindows"))
  {
    Aws::Utils::Array<JsonView> maintenanceWindowsJsonList = jsonValue.GetArray("maintenanceWindows");
    for(unsigned maintenanceWindowsIndex = 0; maintenanceWindowsIndex < maintenanceWindowsJsonList.GetLength(); ++maintenanceWindowsIndex)
    {
      m_maintenanceWindows.push_back(maintenanceWindowsJsonList[maintenanceWindowsIndex].AsObject());
    }
    m_maintenanceWindowsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("destinationPackageVersions"))
  {
    Aws::Utils::Array<JsonView> destinationPackageVersionsJsonList = jsonValue.GetArray("destinationPackageVersions");
    for(unsigned destinationPackageVersionsIndex = 0; destinationPackageVersionsIndex < destinationPackageVersionsJsonList.GetLength(); ++destinationPackageVersionsIndex)
    {
      m_destinationPackageVersions.push_back(destinationPackageVersionsJsonList[destinationPackageVersionsIndex].AsString());
    }
    m_destinationPackageVersionsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
