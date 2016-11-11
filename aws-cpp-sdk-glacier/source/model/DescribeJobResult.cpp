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
#include <aws/glacier/model/DescribeJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glacier::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeJobResult::DescribeJobResult() : 
    m_action(ActionCode::NOT_SET),
    m_completed(false),
    m_statusCode(StatusCode::NOT_SET),
    m_archiveSizeInBytes(0),
    m_inventorySizeInBytes(0)
{
}

DescribeJobResult::DescribeJobResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_action(ActionCode::NOT_SET),
    m_completed(false),
    m_statusCode(StatusCode::NOT_SET),
    m_archiveSizeInBytes(0),
    m_inventorySizeInBytes(0)
{
  *this = result;
}

DescribeJobResult& DescribeJobResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");

  }

  if(jsonValue.ValueExists("JobDescription"))
  {
    m_jobDescription = jsonValue.GetString("JobDescription");

  }

  if(jsonValue.ValueExists("Action"))
  {
    m_action = ActionCodeMapper::GetActionCodeForName(jsonValue.GetString("Action"));

  }

  if(jsonValue.ValueExists("ArchiveId"))
  {
    m_archiveId = jsonValue.GetString("ArchiveId");

  }

  if(jsonValue.ValueExists("VaultARN"))
  {
    m_vaultARN = jsonValue.GetString("VaultARN");

  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetString("CreationDate");

  }

  if(jsonValue.ValueExists("Completed"))
  {
    m_completed = jsonValue.GetBool("Completed");

  }

  if(jsonValue.ValueExists("StatusCode"))
  {
    m_statusCode = StatusCodeMapper::GetStatusCodeForName(jsonValue.GetString("StatusCode"));

  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

  }

  if(jsonValue.ValueExists("ArchiveSizeInBytes"))
  {
    m_archiveSizeInBytes = jsonValue.GetInt64("ArchiveSizeInBytes");

  }

  if(jsonValue.ValueExists("InventorySizeInBytes"))
  {
    m_inventorySizeInBytes = jsonValue.GetInt64("InventorySizeInBytes");

  }

  if(jsonValue.ValueExists("SNSTopic"))
  {
    m_sNSTopic = jsonValue.GetString("SNSTopic");

  }

  if(jsonValue.ValueExists("CompletionDate"))
  {
    m_completionDate = jsonValue.GetString("CompletionDate");

  }

  if(jsonValue.ValueExists("SHA256TreeHash"))
  {
    m_sHA256TreeHash = jsonValue.GetString("SHA256TreeHash");

  }

  if(jsonValue.ValueExists("ArchiveSHA256TreeHash"))
  {
    m_archiveSHA256TreeHash = jsonValue.GetString("ArchiveSHA256TreeHash");

  }

  if(jsonValue.ValueExists("RetrievalByteRange"))
  {
    m_retrievalByteRange = jsonValue.GetString("RetrievalByteRange");

  }

  if(jsonValue.ValueExists("InventoryRetrievalParameters"))
  {
    m_inventoryRetrievalParameters = jsonValue.GetObject("InventoryRetrievalParameters");

  }



  return *this;
}
