﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/GlacierJobDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glacier
{
namespace Model
{

GlacierJobDescription::GlacierJobDescription(JsonView jsonValue)
{
  *this = jsonValue;
}

GlacierJobDescription& GlacierJobDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");
    m_jobIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobDescription"))
  {
    m_jobDescription = jsonValue.GetString("JobDescription");
    m_jobDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Action"))
  {
    m_action = ActionCodeMapper::GetActionCodeForName(jsonValue.GetString("Action"));
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ArchiveId"))
  {
    m_archiveId = jsonValue.GetString("ArchiveId");
    m_archiveIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VaultARN"))
  {
    m_vaultARN = jsonValue.GetString("VaultARN");
    m_vaultARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetString("CreationDate");
    m_creationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Completed"))
  {
    m_completed = jsonValue.GetBool("Completed");
    m_completedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusCode"))
  {
    m_statusCode = StatusCodeMapper::GetStatusCodeForName(jsonValue.GetString("StatusCode"));
    m_statusCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ArchiveSizeInBytes"))
  {
    m_archiveSizeInBytes = jsonValue.GetInt64("ArchiveSizeInBytes");
    m_archiveSizeInBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InventorySizeInBytes"))
  {
    m_inventorySizeInBytes = jsonValue.GetInt64("InventorySizeInBytes");
    m_inventorySizeInBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SNSTopic"))
  {
    m_sNSTopic = jsonValue.GetString("SNSTopic");
    m_sNSTopicHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompletionDate"))
  {
    m_completionDate = jsonValue.GetString("CompletionDate");
    m_completionDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SHA256TreeHash"))
  {
    m_sHA256TreeHash = jsonValue.GetString("SHA256TreeHash");
    m_sHA256TreeHashHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ArchiveSHA256TreeHash"))
  {
    m_archiveSHA256TreeHash = jsonValue.GetString("ArchiveSHA256TreeHash");
    m_archiveSHA256TreeHashHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RetrievalByteRange"))
  {
    m_retrievalByteRange = jsonValue.GetString("RetrievalByteRange");
    m_retrievalByteRangeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tier"))
  {
    m_tier = jsonValue.GetString("Tier");
    m_tierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InventoryRetrievalParameters"))
  {
    m_inventoryRetrievalParameters = jsonValue.GetObject("InventoryRetrievalParameters");
    m_inventoryRetrievalParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobOutputPath"))
  {
    m_jobOutputPath = jsonValue.GetString("JobOutputPath");
    m_jobOutputPathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SelectParameters"))
  {
    m_selectParameters = jsonValue.GetObject("SelectParameters");
    m_selectParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OutputLocation"))
  {
    m_outputLocation = jsonValue.GetObject("OutputLocation");
    m_outputLocationHasBeenSet = true;
  }
  return *this;
}

JsonValue GlacierJobDescription::Jsonize() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("JobId", m_jobId);

  }

  if(m_jobDescriptionHasBeenSet)
  {
   payload.WithString("JobDescription", m_jobDescription);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", ActionCodeMapper::GetNameForActionCode(m_action));
  }

  if(m_archiveIdHasBeenSet)
  {
   payload.WithString("ArchiveId", m_archiveId);

  }

  if(m_vaultARNHasBeenSet)
  {
   payload.WithString("VaultARN", m_vaultARN);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithString("CreationDate", m_creationDate);

  }

  if(m_completedHasBeenSet)
  {
   payload.WithBool("Completed", m_completed);

  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("StatusCode", StatusCodeMapper::GetNameForStatusCode(m_statusCode));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_archiveSizeInBytesHasBeenSet)
  {
   payload.WithInt64("ArchiveSizeInBytes", m_archiveSizeInBytes);

  }

  if(m_inventorySizeInBytesHasBeenSet)
  {
   payload.WithInt64("InventorySizeInBytes", m_inventorySizeInBytes);

  }

  if(m_sNSTopicHasBeenSet)
  {
   payload.WithString("SNSTopic", m_sNSTopic);

  }

  if(m_completionDateHasBeenSet)
  {
   payload.WithString("CompletionDate", m_completionDate);

  }

  if(m_sHA256TreeHashHasBeenSet)
  {
   payload.WithString("SHA256TreeHash", m_sHA256TreeHash);

  }

  if(m_archiveSHA256TreeHashHasBeenSet)
  {
   payload.WithString("ArchiveSHA256TreeHash", m_archiveSHA256TreeHash);

  }

  if(m_retrievalByteRangeHasBeenSet)
  {
   payload.WithString("RetrievalByteRange", m_retrievalByteRange);

  }

  if(m_tierHasBeenSet)
  {
   payload.WithString("Tier", m_tier);

  }

  if(m_inventoryRetrievalParametersHasBeenSet)
  {
   payload.WithObject("InventoryRetrievalParameters", m_inventoryRetrievalParameters.Jsonize());

  }

  if(m_jobOutputPathHasBeenSet)
  {
   payload.WithString("JobOutputPath", m_jobOutputPath);

  }

  if(m_selectParametersHasBeenSet)
  {
   payload.WithObject("SelectParameters", m_selectParameters.Jsonize());

  }

  if(m_outputLocationHasBeenSet)
  {
   payload.WithObject("OutputLocation", m_outputLocation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glacier
} // namespace Aws
