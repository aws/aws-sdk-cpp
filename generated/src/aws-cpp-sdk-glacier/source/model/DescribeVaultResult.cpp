/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/DescribeVaultResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Glacier::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeVaultResult::DescribeVaultResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeVaultResult& DescribeVaultResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("VaultARN"))
  {
    m_vaultARN = jsonValue.GetString("VaultARN");
    m_vaultARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VaultName"))
  {
    m_vaultName = jsonValue.GetString("VaultName");
    m_vaultNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetString("CreationDate");
    m_creationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastInventoryDate"))
  {
    m_lastInventoryDate = jsonValue.GetString("LastInventoryDate");
    m_lastInventoryDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumberOfArchives"))
  {
    m_numberOfArchives = jsonValue.GetInt64("NumberOfArchives");
    m_numberOfArchivesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SizeInBytes"))
  {
    m_sizeInBytes = jsonValue.GetInt64("SizeInBytes");
    m_sizeInBytesHasBeenSet = true;
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
