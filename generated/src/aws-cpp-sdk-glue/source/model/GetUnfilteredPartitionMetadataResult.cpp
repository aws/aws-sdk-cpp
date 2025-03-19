/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetUnfilteredPartitionMetadataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetUnfilteredPartitionMetadataResult::GetUnfilteredPartitionMetadataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetUnfilteredPartitionMetadataResult& GetUnfilteredPartitionMetadataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Partition"))
  {
    m_partition = jsonValue.GetObject("Partition");
    m_partitionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthorizedColumns"))
  {
    Aws::Utils::Array<JsonView> authorizedColumnsJsonList = jsonValue.GetArray("AuthorizedColumns");
    for(unsigned authorizedColumnsIndex = 0; authorizedColumnsIndex < authorizedColumnsJsonList.GetLength(); ++authorizedColumnsIndex)
    {
      m_authorizedColumns.push_back(authorizedColumnsJsonList[authorizedColumnsIndex].AsString());
    }
    m_authorizedColumnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsRegisteredWithLakeFormation"))
  {
    m_isRegisteredWithLakeFormation = jsonValue.GetBool("IsRegisteredWithLakeFormation");
    m_isRegisteredWithLakeFormationHasBeenSet = true;
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
