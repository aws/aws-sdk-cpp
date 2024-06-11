﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glacier/model/ActionCode.h>
#include <aws/glacier/model/StatusCode.h>
#include <aws/glacier/model/InventoryRetrievalJobDescription.h>
#include <aws/glacier/model/SelectParameters.h>
#include <aws/glacier/model/OutputLocation.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glacier
{
namespace Model
{

  /**
   * <p>Contains the description of an Amazon S3 Glacier job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/GlacierJobDescription">AWS
   * API Reference</a></p>
   */
  class GlacierJobDescription
  {
  public:
    AWS_GLACIER_API GlacierJobDescription();
    AWS_GLACIER_API GlacierJobDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API GlacierJobDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An opaque string that identifies an Amazon S3 Glacier job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline GlacierJobDescription& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline GlacierJobDescription& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline GlacierJobDescription& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job description provided when initiating the job.</p>
     */
    inline const Aws::String& GetJobDescription() const{ return m_jobDescription; }
    inline bool JobDescriptionHasBeenSet() const { return m_jobDescriptionHasBeenSet; }
    inline void SetJobDescription(const Aws::String& value) { m_jobDescriptionHasBeenSet = true; m_jobDescription = value; }
    inline void SetJobDescription(Aws::String&& value) { m_jobDescriptionHasBeenSet = true; m_jobDescription = std::move(value); }
    inline void SetJobDescription(const char* value) { m_jobDescriptionHasBeenSet = true; m_jobDescription.assign(value); }
    inline GlacierJobDescription& WithJobDescription(const Aws::String& value) { SetJobDescription(value); return *this;}
    inline GlacierJobDescription& WithJobDescription(Aws::String&& value) { SetJobDescription(std::move(value)); return *this;}
    inline GlacierJobDescription& WithJobDescription(const char* value) { SetJobDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job type. This value is either <code>ArchiveRetrieval</code>,
     * <code>InventoryRetrieval</code>, or <code>Select</code>. </p>
     */
    inline const ActionCode& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const ActionCode& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(ActionCode&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline GlacierJobDescription& WithAction(const ActionCode& value) { SetAction(value); return *this;}
    inline GlacierJobDescription& WithAction(ActionCode&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The archive ID requested for a select job or archive retrieval. Otherwise,
     * this field is null.</p>
     */
    inline const Aws::String& GetArchiveId() const{ return m_archiveId; }
    inline bool ArchiveIdHasBeenSet() const { return m_archiveIdHasBeenSet; }
    inline void SetArchiveId(const Aws::String& value) { m_archiveIdHasBeenSet = true; m_archiveId = value; }
    inline void SetArchiveId(Aws::String&& value) { m_archiveIdHasBeenSet = true; m_archiveId = std::move(value); }
    inline void SetArchiveId(const char* value) { m_archiveIdHasBeenSet = true; m_archiveId.assign(value); }
    inline GlacierJobDescription& WithArchiveId(const Aws::String& value) { SetArchiveId(value); return *this;}
    inline GlacierJobDescription& WithArchiveId(Aws::String&& value) { SetArchiveId(std::move(value)); return *this;}
    inline GlacierJobDescription& WithArchiveId(const char* value) { SetArchiveId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the vault from which an archive retrieval
     * was requested.</p>
     */
    inline const Aws::String& GetVaultARN() const{ return m_vaultARN; }
    inline bool VaultARNHasBeenSet() const { return m_vaultARNHasBeenSet; }
    inline void SetVaultARN(const Aws::String& value) { m_vaultARNHasBeenSet = true; m_vaultARN = value; }
    inline void SetVaultARN(Aws::String&& value) { m_vaultARNHasBeenSet = true; m_vaultARN = std::move(value); }
    inline void SetVaultARN(const char* value) { m_vaultARNHasBeenSet = true; m_vaultARN.assign(value); }
    inline GlacierJobDescription& WithVaultARN(const Aws::String& value) { SetVaultARN(value); return *this;}
    inline GlacierJobDescription& WithVaultARN(Aws::String&& value) { SetVaultARN(std::move(value)); return *this;}
    inline GlacierJobDescription& WithVaultARN(const char* value) { SetVaultARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC date when the job was created. This value is a string representation
     * of ISO 8601 date format, for example
     * <code>"2012-03-20T17:03:43.221Z"</code>.</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }
    inline GlacierJobDescription& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}
    inline GlacierJobDescription& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}
    inline GlacierJobDescription& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job status. When a job is completed, you get the job's output using Get
     * Job Output (GET output).</p>
     */
    inline bool GetCompleted() const{ return m_completed; }
    inline bool CompletedHasBeenSet() const { return m_completedHasBeenSet; }
    inline void SetCompleted(bool value) { m_completedHasBeenSet = true; m_completed = value; }
    inline GlacierJobDescription& WithCompleted(bool value) { SetCompleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status code can be <code>InProgress</code>, <code>Succeeded</code>, or
     * <code>Failed</code>, and indicates the status of the job.</p>
     */
    inline const StatusCode& GetStatusCode() const{ return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(const StatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline void SetStatusCode(StatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }
    inline GlacierJobDescription& WithStatusCode(const StatusCode& value) { SetStatusCode(value); return *this;}
    inline GlacierJobDescription& WithStatusCode(StatusCode&& value) { SetStatusCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly message that describes the job status.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline GlacierJobDescription& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline GlacierJobDescription& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline GlacierJobDescription& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For an archive retrieval job, this value is the size in bytes of the archive
     * being requested for download. For an inventory retrieval or select job, this
     * value is null.</p>
     */
    inline long long GetArchiveSizeInBytes() const{ return m_archiveSizeInBytes; }
    inline bool ArchiveSizeInBytesHasBeenSet() const { return m_archiveSizeInBytesHasBeenSet; }
    inline void SetArchiveSizeInBytes(long long value) { m_archiveSizeInBytesHasBeenSet = true; m_archiveSizeInBytes = value; }
    inline GlacierJobDescription& WithArchiveSizeInBytes(long long value) { SetArchiveSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For an inventory retrieval job, this value is the size in bytes of the
     * inventory requested for download. For an archive retrieval or select job, this
     * value is null.</p>
     */
    inline long long GetInventorySizeInBytes() const{ return m_inventorySizeInBytes; }
    inline bool InventorySizeInBytesHasBeenSet() const { return m_inventorySizeInBytesHasBeenSet; }
    inline void SetInventorySizeInBytes(long long value) { m_inventorySizeInBytesHasBeenSet = true; m_inventorySizeInBytes = value; }
    inline GlacierJobDescription& WithInventorySizeInBytes(long long value) { SetInventorySizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon SNS topic that receives notification.</p>
     */
    inline const Aws::String& GetSNSTopic() const{ return m_sNSTopic; }
    inline bool SNSTopicHasBeenSet() const { return m_sNSTopicHasBeenSet; }
    inline void SetSNSTopic(const Aws::String& value) { m_sNSTopicHasBeenSet = true; m_sNSTopic = value; }
    inline void SetSNSTopic(Aws::String&& value) { m_sNSTopicHasBeenSet = true; m_sNSTopic = std::move(value); }
    inline void SetSNSTopic(const char* value) { m_sNSTopicHasBeenSet = true; m_sNSTopic.assign(value); }
    inline GlacierJobDescription& WithSNSTopic(const Aws::String& value) { SetSNSTopic(value); return *this;}
    inline GlacierJobDescription& WithSNSTopic(Aws::String&& value) { SetSNSTopic(std::move(value)); return *this;}
    inline GlacierJobDescription& WithSNSTopic(const char* value) { SetSNSTopic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC time that the job request completed. While the job is in progress,
     * the value is null.</p>
     */
    inline const Aws::String& GetCompletionDate() const{ return m_completionDate; }
    inline bool CompletionDateHasBeenSet() const { return m_completionDateHasBeenSet; }
    inline void SetCompletionDate(const Aws::String& value) { m_completionDateHasBeenSet = true; m_completionDate = value; }
    inline void SetCompletionDate(Aws::String&& value) { m_completionDateHasBeenSet = true; m_completionDate = std::move(value); }
    inline void SetCompletionDate(const char* value) { m_completionDateHasBeenSet = true; m_completionDate.assign(value); }
    inline GlacierJobDescription& WithCompletionDate(const Aws::String& value) { SetCompletionDate(value); return *this;}
    inline GlacierJobDescription& WithCompletionDate(Aws::String&& value) { SetCompletionDate(std::move(value)); return *this;}
    inline GlacierJobDescription& WithCompletionDate(const char* value) { SetCompletionDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For an archive retrieval job, this value is the checksum of the archive.
     * Otherwise, this value is null.</p> <p>The SHA256 tree hash value for the
     * requested range of an archive. If the <b>InitiateJob</b> request for an archive
     * specified a tree-hash aligned range, then this field returns a value.</p> <p>If
     * the whole archive is retrieved, this value is the same as the
     * ArchiveSHA256TreeHash value.</p> <p>This field is null for the following:</p>
     * <ul> <li> <p>Archive retrieval jobs that specify a range that is not tree-hash
     * aligned</p> </li> </ul> <ul> <li> <p>Archival jobs that specify a range that is
     * equal to the whole archive, when the job status is <code>InProgress</code> </p>
     * </li> </ul> <ul> <li> <p>Inventory jobs</p> </li> <li> <p>Select jobs</p> </li>
     * </ul>
     */
    inline const Aws::String& GetSHA256TreeHash() const{ return m_sHA256TreeHash; }
    inline bool SHA256TreeHashHasBeenSet() const { return m_sHA256TreeHashHasBeenSet; }
    inline void SetSHA256TreeHash(const Aws::String& value) { m_sHA256TreeHashHasBeenSet = true; m_sHA256TreeHash = value; }
    inline void SetSHA256TreeHash(Aws::String&& value) { m_sHA256TreeHashHasBeenSet = true; m_sHA256TreeHash = std::move(value); }
    inline void SetSHA256TreeHash(const char* value) { m_sHA256TreeHashHasBeenSet = true; m_sHA256TreeHash.assign(value); }
    inline GlacierJobDescription& WithSHA256TreeHash(const Aws::String& value) { SetSHA256TreeHash(value); return *this;}
    inline GlacierJobDescription& WithSHA256TreeHash(Aws::String&& value) { SetSHA256TreeHash(std::move(value)); return *this;}
    inline GlacierJobDescription& WithSHA256TreeHash(const char* value) { SetSHA256TreeHash(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SHA256 tree hash of the entire archive for an archive retrieval. For
     * inventory retrieval or select jobs, this field is null.</p>
     */
    inline const Aws::String& GetArchiveSHA256TreeHash() const{ return m_archiveSHA256TreeHash; }
    inline bool ArchiveSHA256TreeHashHasBeenSet() const { return m_archiveSHA256TreeHashHasBeenSet; }
    inline void SetArchiveSHA256TreeHash(const Aws::String& value) { m_archiveSHA256TreeHashHasBeenSet = true; m_archiveSHA256TreeHash = value; }
    inline void SetArchiveSHA256TreeHash(Aws::String&& value) { m_archiveSHA256TreeHashHasBeenSet = true; m_archiveSHA256TreeHash = std::move(value); }
    inline void SetArchiveSHA256TreeHash(const char* value) { m_archiveSHA256TreeHashHasBeenSet = true; m_archiveSHA256TreeHash.assign(value); }
    inline GlacierJobDescription& WithArchiveSHA256TreeHash(const Aws::String& value) { SetArchiveSHA256TreeHash(value); return *this;}
    inline GlacierJobDescription& WithArchiveSHA256TreeHash(Aws::String&& value) { SetArchiveSHA256TreeHash(std::move(value)); return *this;}
    inline GlacierJobDescription& WithArchiveSHA256TreeHash(const char* value) { SetArchiveSHA256TreeHash(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retrieved byte range for archive retrieval jobs in the form
     * <i>StartByteValue</i>-<i>EndByteValue</i>. If no range was specified in the
     * archive retrieval, then the whole archive is retrieved. In this case,
     * <i>StartByteValue</i> equals 0 and <i>EndByteValue</i> equals the size of the
     * archive minus 1. For inventory retrieval or select jobs, this field is null.
     * </p>
     */
    inline const Aws::String& GetRetrievalByteRange() const{ return m_retrievalByteRange; }
    inline bool RetrievalByteRangeHasBeenSet() const { return m_retrievalByteRangeHasBeenSet; }
    inline void SetRetrievalByteRange(const Aws::String& value) { m_retrievalByteRangeHasBeenSet = true; m_retrievalByteRange = value; }
    inline void SetRetrievalByteRange(Aws::String&& value) { m_retrievalByteRangeHasBeenSet = true; m_retrievalByteRange = std::move(value); }
    inline void SetRetrievalByteRange(const char* value) { m_retrievalByteRangeHasBeenSet = true; m_retrievalByteRange.assign(value); }
    inline GlacierJobDescription& WithRetrievalByteRange(const Aws::String& value) { SetRetrievalByteRange(value); return *this;}
    inline GlacierJobDescription& WithRetrievalByteRange(Aws::String&& value) { SetRetrievalByteRange(std::move(value)); return *this;}
    inline GlacierJobDescription& WithRetrievalByteRange(const char* value) { SetRetrievalByteRange(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tier to use for a select or an archive retrieval. Valid values are
     * <code>Expedited</code>, <code>Standard</code>, or <code>Bulk</code>.
     * <code>Standard</code> is the default.</p>
     */
    inline const Aws::String& GetTier() const{ return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    inline void SetTier(const Aws::String& value) { m_tierHasBeenSet = true; m_tier = value; }
    inline void SetTier(Aws::String&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }
    inline void SetTier(const char* value) { m_tierHasBeenSet = true; m_tier.assign(value); }
    inline GlacierJobDescription& WithTier(const Aws::String& value) { SetTier(value); return *this;}
    inline GlacierJobDescription& WithTier(Aws::String&& value) { SetTier(std::move(value)); return *this;}
    inline GlacierJobDescription& WithTier(const char* value) { SetTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters used for range inventory retrieval.</p>
     */
    inline const InventoryRetrievalJobDescription& GetInventoryRetrievalParameters() const{ return m_inventoryRetrievalParameters; }
    inline bool InventoryRetrievalParametersHasBeenSet() const { return m_inventoryRetrievalParametersHasBeenSet; }
    inline void SetInventoryRetrievalParameters(const InventoryRetrievalJobDescription& value) { m_inventoryRetrievalParametersHasBeenSet = true; m_inventoryRetrievalParameters = value; }
    inline void SetInventoryRetrievalParameters(InventoryRetrievalJobDescription&& value) { m_inventoryRetrievalParametersHasBeenSet = true; m_inventoryRetrievalParameters = std::move(value); }
    inline GlacierJobDescription& WithInventoryRetrievalParameters(const InventoryRetrievalJobDescription& value) { SetInventoryRetrievalParameters(value); return *this;}
    inline GlacierJobDescription& WithInventoryRetrievalParameters(InventoryRetrievalJobDescription&& value) { SetInventoryRetrievalParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the job output location.</p>
     */
    inline const Aws::String& GetJobOutputPath() const{ return m_jobOutputPath; }
    inline bool JobOutputPathHasBeenSet() const { return m_jobOutputPathHasBeenSet; }
    inline void SetJobOutputPath(const Aws::String& value) { m_jobOutputPathHasBeenSet = true; m_jobOutputPath = value; }
    inline void SetJobOutputPath(Aws::String&& value) { m_jobOutputPathHasBeenSet = true; m_jobOutputPath = std::move(value); }
    inline void SetJobOutputPath(const char* value) { m_jobOutputPathHasBeenSet = true; m_jobOutputPath.assign(value); }
    inline GlacierJobDescription& WithJobOutputPath(const Aws::String& value) { SetJobOutputPath(value); return *this;}
    inline GlacierJobDescription& WithJobOutputPath(Aws::String&& value) { SetJobOutputPath(std::move(value)); return *this;}
    inline GlacierJobDescription& WithJobOutputPath(const char* value) { SetJobOutputPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the parameters used for a select.</p>
     */
    inline const SelectParameters& GetSelectParameters() const{ return m_selectParameters; }
    inline bool SelectParametersHasBeenSet() const { return m_selectParametersHasBeenSet; }
    inline void SetSelectParameters(const SelectParameters& value) { m_selectParametersHasBeenSet = true; m_selectParameters = value; }
    inline void SetSelectParameters(SelectParameters&& value) { m_selectParametersHasBeenSet = true; m_selectParameters = std::move(value); }
    inline GlacierJobDescription& WithSelectParameters(const SelectParameters& value) { SetSelectParameters(value); return *this;}
    inline GlacierJobDescription& WithSelectParameters(SelectParameters&& value) { SetSelectParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the location where the data from the select job is stored.</p>
     */
    inline const OutputLocation& GetOutputLocation() const{ return m_outputLocation; }
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }
    inline void SetOutputLocation(const OutputLocation& value) { m_outputLocationHasBeenSet = true; m_outputLocation = value; }
    inline void SetOutputLocation(OutputLocation&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::move(value); }
    inline GlacierJobDescription& WithOutputLocation(const OutputLocation& value) { SetOutputLocation(value); return *this;}
    inline GlacierJobDescription& WithOutputLocation(OutputLocation&& value) { SetOutputLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline GlacierJobDescription& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GlacierJobDescription& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GlacierJobDescription& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_jobDescription;
    bool m_jobDescriptionHasBeenSet = false;

    ActionCode m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_archiveId;
    bool m_archiveIdHasBeenSet = false;

    Aws::String m_vaultARN;
    bool m_vaultARNHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    bool m_completed;
    bool m_completedHasBeenSet = false;

    StatusCode m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    long long m_archiveSizeInBytes;
    bool m_archiveSizeInBytesHasBeenSet = false;

    long long m_inventorySizeInBytes;
    bool m_inventorySizeInBytesHasBeenSet = false;

    Aws::String m_sNSTopic;
    bool m_sNSTopicHasBeenSet = false;

    Aws::String m_completionDate;
    bool m_completionDateHasBeenSet = false;

    Aws::String m_sHA256TreeHash;
    bool m_sHA256TreeHashHasBeenSet = false;

    Aws::String m_archiveSHA256TreeHash;
    bool m_archiveSHA256TreeHashHasBeenSet = false;

    Aws::String m_retrievalByteRange;
    bool m_retrievalByteRangeHasBeenSet = false;

    Aws::String m_tier;
    bool m_tierHasBeenSet = false;

    InventoryRetrievalJobDescription m_inventoryRetrievalParameters;
    bool m_inventoryRetrievalParametersHasBeenSet = false;

    Aws::String m_jobOutputPath;
    bool m_jobOutputPathHasBeenSet = false;

    SelectParameters m_selectParameters;
    bool m_selectParametersHasBeenSet = false;

    OutputLocation m_outputLocation;
    bool m_outputLocationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
