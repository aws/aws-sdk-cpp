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
#include <aws/glacier/model/GlacierJobDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glacier
{
namespace Model
{

GlacierJobDescription::GlacierJobDescription() : 
    m_jobIdHasBeenSet(false),
    m_jobDescriptionHasBeenSet(false),
    m_action(ActionCode::NOT_SET),
    m_actionHasBeenSet(false),
    m_archiveIdHasBeenSet(false),
    m_vaultARNHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_completed(false),
    m_completedHasBeenSet(false),
    m_statusCode(StatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_archiveSizeInBytes(0),
    m_archiveSizeInBytesHasBeenSet(false),
    m_inventorySizeInBytes(0),
    m_inventorySizeInBytesHasBeenSet(false),
    m_sNSTopicHasBeenSet(false),
    m_completionDateHasBeenSet(false),
    m_sHA256TreeHashHasBeenSet(false),
    m_archiveSHA256TreeHashHasBeenSet(false),
    m_retrievalByteRangeHasBeenSet(false),
    m_inventoryRetrievalParametersHasBeenSet(false)
{
}

GlacierJobDescription::GlacierJobDescription(const JsonValue& jsonValue) : 
    m_jobIdHasBeenSet(false),
    m_jobDescriptionHasBeenSet(false),
    m_action(ActionCode::NOT_SET),
    m_actionHasBeenSet(false),
    m_archiveIdHasBeenSet(false),
    m_vaultARNHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_completed(false),
    m_completedHasBeenSet(false),
    m_statusCode(StatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_archiveSizeInBytes(0),
    m_archiveSizeInBytesHasBeenSet(false),
    m_inventorySizeInBytes(0),
    m_inventorySizeInBytesHasBeenSet(false),
    m_sNSTopicHasBeenSet(false),
    m_completionDateHasBeenSet(false),
    m_sHA256TreeHashHasBeenSet(false),
    m_archiveSHA256TreeHashHasBeenSet(false),
    m_retrievalByteRangeHasBeenSet(false),
    m_inventoryRetrievalParametersHasBeenSet(false)
{
  *this = jsonValue;
}

GlacierJobDescription& GlacierJobDescription::operator =(const JsonValue& jsonValue)
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

  if(jsonValue.ValueExists("InventoryRetrievalParameters"))
  {
    m_inventoryRetrievalParameters = jsonValue.GetObject("InventoryRetrievalParameters");

    m_inventoryRetrievalParametersHasBeenSet = true;
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

  if(m_inventoryRetrievalParametersHasBeenSet)
  {
   payload.WithObject("InventoryRetrievalParameters", m_inventoryRetrievalParameters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glacier
} // namespace Aws