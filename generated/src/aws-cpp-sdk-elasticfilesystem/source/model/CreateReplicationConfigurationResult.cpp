﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/CreateReplicationConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EFS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateReplicationConfigurationResult::CreateReplicationConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateReplicationConfigurationResult& CreateReplicationConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SourceFileSystemId"))
  {
    m_sourceFileSystemId = jsonValue.GetString("SourceFileSystemId");
    m_sourceFileSystemIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceFileSystemRegion"))
  {
    m_sourceFileSystemRegion = jsonValue.GetString("SourceFileSystemRegion");
    m_sourceFileSystemRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceFileSystemArn"))
  {
    m_sourceFileSystemArn = jsonValue.GetString("SourceFileSystemArn");
    m_sourceFileSystemArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OriginalSourceFileSystemArn"))
  {
    m_originalSourceFileSystemArn = jsonValue.GetString("OriginalSourceFileSystemArn");
    m_originalSourceFileSystemArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Destinations"))
  {
    Aws::Utils::Array<JsonView> destinationsJsonList = jsonValue.GetArray("Destinations");
    for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
    {
      m_destinations.push_back(destinationsJsonList[destinationsIndex].AsObject());
    }
    m_destinationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceFileSystemOwnerId"))
  {
    m_sourceFileSystemOwnerId = jsonValue.GetString("SourceFileSystemOwnerId");
    m_sourceFileSystemOwnerIdHasBeenSet = true;
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
