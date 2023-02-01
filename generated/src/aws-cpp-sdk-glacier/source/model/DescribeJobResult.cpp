/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/DescribeJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
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

DescribeJobResult::DescribeJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_action(ActionCode::NOT_SET),
    m_completed(false),
    m_statusCode(StatusCode::NOT_SET),
    m_archiveSizeInBytes(0),
    m_inventorySizeInBytes(0)
{
  *this = result;
}

DescribeJobResult& DescribeJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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

  if(jsonValue.ValueExists("Tier"))
  {
    m_tier = jsonValue.GetString("Tier");

  }

  if(jsonValue.ValueExists("InventoryRetrievalParameters"))
  {
    m_inventoryRetrievalParameters = jsonValue.GetObject("InventoryRetrievalParameters");

  }

  if(jsonValue.ValueExists("JobOutputPath"))
  {
    m_jobOutputPath = jsonValue.GetString("JobOutputPath");

  }

  if(jsonValue.ValueExists("SelectParameters"))
  {
    m_selectParameters = jsonValue.GetObject("SelectParameters");

  }

  if(jsonValue.ValueExists("OutputLocation"))
  {
    m_outputLocation = jsonValue.GetObject("OutputLocation");

  }



  return *this;
}
