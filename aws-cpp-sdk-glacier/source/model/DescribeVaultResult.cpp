/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/glacier/model/DescribeVaultResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
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

DescribeVaultResult::DescribeVaultResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_numberOfArchives(0),
    m_sizeInBytes(0)
{
  *this = result;
}

DescribeVaultResult& DescribeVaultResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
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
