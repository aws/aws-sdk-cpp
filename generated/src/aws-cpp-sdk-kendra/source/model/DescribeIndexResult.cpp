/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DescribeIndexResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeIndexResult::DescribeIndexResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeIndexResult& DescribeIndexResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Edition"))
  {
    m_edition = IndexEditionMapper::GetIndexEditionForName(jsonValue.GetString("Edition"));
    m_editionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServerSideEncryptionConfiguration"))
  {
    m_serverSideEncryptionConfiguration = jsonValue.GetObject("ServerSideEncryptionConfiguration");
    m_serverSideEncryptionConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = IndexStatusMapper::GetIndexStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DocumentMetadataConfigurations"))
  {
    Aws::Utils::Array<JsonView> documentMetadataConfigurationsJsonList = jsonValue.GetArray("DocumentMetadataConfigurations");
    for(unsigned documentMetadataConfigurationsIndex = 0; documentMetadataConfigurationsIndex < documentMetadataConfigurationsJsonList.GetLength(); ++documentMetadataConfigurationsIndex)
    {
      m_documentMetadataConfigurations.push_back(documentMetadataConfigurationsJsonList[documentMetadataConfigurationsIndex].AsObject());
    }
    m_documentMetadataConfigurationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IndexStatistics"))
  {
    m_indexStatistics = jsonValue.GetObject("IndexStatistics");
    m_indexStatisticsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CapacityUnits"))
  {
    m_capacityUnits = jsonValue.GetObject("CapacityUnits");
    m_capacityUnitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserTokenConfigurations"))
  {
    Aws::Utils::Array<JsonView> userTokenConfigurationsJsonList = jsonValue.GetArray("UserTokenConfigurations");
    for(unsigned userTokenConfigurationsIndex = 0; userTokenConfigurationsIndex < userTokenConfigurationsJsonList.GetLength(); ++userTokenConfigurationsIndex)
    {
      m_userTokenConfigurations.push_back(userTokenConfigurationsJsonList[userTokenConfigurationsIndex].AsObject());
    }
    m_userTokenConfigurationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserContextPolicy"))
  {
    m_userContextPolicy = UserContextPolicyMapper::GetUserContextPolicyForName(jsonValue.GetString("UserContextPolicy"));
    m_userContextPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserGroupResolutionConfiguration"))
  {
    m_userGroupResolutionConfiguration = jsonValue.GetObject("UserGroupResolutionConfiguration");
    m_userGroupResolutionConfigurationHasBeenSet = true;
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
