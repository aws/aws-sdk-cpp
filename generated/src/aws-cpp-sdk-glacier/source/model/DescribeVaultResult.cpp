/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/DescribeVaultResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glacier::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeVaultResult::DescribeVaultResult() : 
    m_numberOfArchives(0),
    m_sizeInBytes(0)
{
}

DescribeVaultResult::DescribeVaultResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_numberOfArchives(0),
    m_sizeInBytes(0)
{
  *this = result;
}

DescribeVaultResult& DescribeVaultResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("VaultARN"))
  {
    m_vaultARN = jsonValue.GetString("VaultARN");

  }

  if(jsonValue.ValueExists("VaultName"))
  {
    m_vaultName = jsonValue.GetString("VaultName");

  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetString("CreationDate");

  }

  if(jsonValue.ValueExists("LastInventoryDate"))
  {
    m_lastInventoryDate = jsonValue.GetString("LastInventoryDate");

  }

  if(jsonValue.ValueExists("NumberOfArchives"))
  {
    m_numberOfArchives = jsonValue.GetInt64("NumberOfArchives");

  }

  if(jsonValue.ValueExists("SizeInBytes"))
  {
    m_sizeInBytes = jsonValue.GetInt64("SizeInBytes");

  }



  return *this;
}
