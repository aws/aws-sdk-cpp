/**
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
    AWS_GLACIER_API GlacierJobDescription() = default;
    AWS_GLACIER_API GlacierJobDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API GlacierJobDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An opaque string that identifies an Amazon S3 Glacier job.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    GlacierJobDescription& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job description provided when initiating the job.</p>
     */
    inline const Aws::String& GetJobDescription() const { return m_jobDescription; }
    inline bool JobDescriptionHasBeenSet() const { return m_jobDescriptionHasBeenSet; }
    template<typename JobDescriptionT = Aws::String>
    void SetJobDescription(JobDescriptionT&& value) { m_jobDescriptionHasBeenSet = true; m_jobDescription = std::forward<JobDescriptionT>(value); }
    template<typename JobDescriptionT = Aws::String>
    GlacierJobDescription& WithJobDescription(JobDescriptionT&& value) { SetJobDescription(std::forward<JobDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job type. This value is either <code>ArchiveRetrieval</code>,
     * <code>InventoryRetrieval</code>, or <code>Select</code>. </p>
     */
    inline ActionCode GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(ActionCode value) { m_actionHasBeenSet = true; m_action = value; }
    inline GlacierJobDescription& WithAction(ActionCode value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The archive ID requested for a select job or archive retrieval. Otherwise,
     * this field is null.</p>
     */
    inline const Aws::String& GetArchiveId() const { return m_archiveId; }
    inline bool ArchiveIdHasBeenSet() const { return m_archiveIdHasBeenSet; }
    template<typename ArchiveIdT = Aws::String>
    void SetArchiveId(ArchiveIdT&& value) { m_archiveIdHasBeenSet = true; m_archiveId = std::forward<ArchiveIdT>(value); }
    template<typename ArchiveIdT = Aws::String>
    GlacierJobDescription& WithArchiveId(ArchiveIdT&& value) { SetArchiveId(std::forward<ArchiveIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the vault from which an archive retrieval
     * was requested.</p>
     */
    inline const Aws::String& GetVaultARN() const { return m_vaultARN; }
    inline bool VaultARNHasBeenSet() const { return m_vaultARNHasBeenSet; }
    template<typename VaultARNT = Aws::String>
    void SetVaultARN(VaultARNT&& value) { m_vaultARNHasBeenSet = true; m_vaultARN = std::forward<VaultARNT>(value); }
    template<typename VaultARNT = Aws::String>
    GlacierJobDescription& WithVaultARN(VaultARNT&& value) { SetVaultARN(std::forward<VaultARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC date when the job was created. This value is a string representation
     * of ISO 8601 date format, for example
     * <code>"2012-03-20T17:03:43.221Z"</code>.</p>
     */
    inline const Aws::String& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::String>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::String>
    GlacierJobDescription& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job status. When a job is completed, you get the job's output using Get
     * Job Output (GET output).</p>
     */
    inline bool GetCompleted() const { return m_completed; }
    inline bool CompletedHasBeenSet() const { return m_completedHasBeenSet; }
    inline void SetCompleted(bool value) { m_completedHasBeenSet = true; m_completed = value; }
    inline GlacierJobDescription& WithCompleted(bool value) { SetCompleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status code can be <code>InProgress</code>, <code>Succeeded</code>, or
     * <code>Failed</code>, and indicates the status of the job.</p>
     */
    inline StatusCode GetStatusCode() const { return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(StatusCode value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline GlacierJobDescription& WithStatusCode(StatusCode value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly message that describes the job status.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    GlacierJobDescription& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For an archive retrieval job, this value is the size in bytes of the archive
     * being requested for download. For an inventory retrieval or select job, this
     * value is null.</p>
     */
    inline long long GetArchiveSizeInBytes() const { return m_archiveSizeInBytes; }
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
    inline long long GetInventorySizeInBytes() const { return m_inventorySizeInBytes; }
    inline bool InventorySizeInBytesHasBeenSet() const { return m_inventorySizeInBytesHasBeenSet; }
    inline void SetInventorySizeInBytes(long long value) { m_inventorySizeInBytesHasBeenSet = true; m_inventorySizeInBytes = value; }
    inline GlacierJobDescription& WithInventorySizeInBytes(long long value) { SetInventorySizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon SNS topic that receives notification.</p>
     */
    inline const Aws::String& GetSNSTopic() const { return m_sNSTopic; }
    inline bool SNSTopicHasBeenSet() const { return m_sNSTopicHasBeenSet; }
    template<typename SNSTopicT = Aws::String>
    void SetSNSTopic(SNSTopicT&& value) { m_sNSTopicHasBeenSet = true; m_sNSTopic = std::forward<SNSTopicT>(value); }
    template<typename SNSTopicT = Aws::String>
    GlacierJobDescription& WithSNSTopic(SNSTopicT&& value) { SetSNSTopic(std::forward<SNSTopicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC time that the job request completed. While the job is in progress,
     * the value is null.</p>
     */
    inline const Aws::String& GetCompletionDate() const { return m_completionDate; }
    inline bool CompletionDateHasBeenSet() const { return m_completionDateHasBeenSet; }
    template<typename CompletionDateT = Aws::String>
    void SetCompletionDate(CompletionDateT&& value) { m_completionDateHasBeenSet = true; m_completionDate = std::forward<CompletionDateT>(value); }
    template<typename CompletionDateT = Aws::String>
    GlacierJobDescription& WithCompletionDate(CompletionDateT&& value) { SetCompletionDate(std::forward<CompletionDateT>(value)); return *this;}
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
    inline const Aws::String& GetSHA256TreeHash() const { return m_sHA256TreeHash; }
    inline bool SHA256TreeHashHasBeenSet() const { return m_sHA256TreeHashHasBeenSet; }
    template<typename SHA256TreeHashT = Aws::String>
    void SetSHA256TreeHash(SHA256TreeHashT&& value) { m_sHA256TreeHashHasBeenSet = true; m_sHA256TreeHash = std::forward<SHA256TreeHashT>(value); }
    template<typename SHA256TreeHashT = Aws::String>
    GlacierJobDescription& WithSHA256TreeHash(SHA256TreeHashT&& value) { SetSHA256TreeHash(std::forward<SHA256TreeHashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SHA256 tree hash of the entire archive for an archive retrieval. For
     * inventory retrieval or select jobs, this field is null.</p>
     */
    inline const Aws::String& GetArchiveSHA256TreeHash() const { return m_archiveSHA256TreeHash; }
    inline bool ArchiveSHA256TreeHashHasBeenSet() const { return m_archiveSHA256TreeHashHasBeenSet; }
    template<typename ArchiveSHA256TreeHashT = Aws::String>
    void SetArchiveSHA256TreeHash(ArchiveSHA256TreeHashT&& value) { m_archiveSHA256TreeHashHasBeenSet = true; m_archiveSHA256TreeHash = std::forward<ArchiveSHA256TreeHashT>(value); }
    template<typename ArchiveSHA256TreeHashT = Aws::String>
    GlacierJobDescription& WithArchiveSHA256TreeHash(ArchiveSHA256TreeHashT&& value) { SetArchiveSHA256TreeHash(std::forward<ArchiveSHA256TreeHashT>(value)); return *this;}
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
    inline const Aws::String& GetRetrievalByteRange() const { return m_retrievalByteRange; }
    inline bool RetrievalByteRangeHasBeenSet() const { return m_retrievalByteRangeHasBeenSet; }
    template<typename RetrievalByteRangeT = Aws::String>
    void SetRetrievalByteRange(RetrievalByteRangeT&& value) { m_retrievalByteRangeHasBeenSet = true; m_retrievalByteRange = std::forward<RetrievalByteRangeT>(value); }
    template<typename RetrievalByteRangeT = Aws::String>
    GlacierJobDescription& WithRetrievalByteRange(RetrievalByteRangeT&& value) { SetRetrievalByteRange(std::forward<RetrievalByteRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tier to use for a select or an archive retrieval. Valid values are
     * <code>Expedited</code>, <code>Standard</code>, or <code>Bulk</code>.
     * <code>Standard</code> is the default.</p>
     */
    inline const Aws::String& GetTier() const { return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    template<typename TierT = Aws::String>
    void SetTier(TierT&& value) { m_tierHasBeenSet = true; m_tier = std::forward<TierT>(value); }
    template<typename TierT = Aws::String>
    GlacierJobDescription& WithTier(TierT&& value) { SetTier(std::forward<TierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters used for range inventory retrieval.</p>
     */
    inline const InventoryRetrievalJobDescription& GetInventoryRetrievalParameters() const { return m_inventoryRetrievalParameters; }
    inline bool InventoryRetrievalParametersHasBeenSet() const { return m_inventoryRetrievalParametersHasBeenSet; }
    template<typename InventoryRetrievalParametersT = InventoryRetrievalJobDescription>
    void SetInventoryRetrievalParameters(InventoryRetrievalParametersT&& value) { m_inventoryRetrievalParametersHasBeenSet = true; m_inventoryRetrievalParameters = std::forward<InventoryRetrievalParametersT>(value); }
    template<typename InventoryRetrievalParametersT = InventoryRetrievalJobDescription>
    GlacierJobDescription& WithInventoryRetrievalParameters(InventoryRetrievalParametersT&& value) { SetInventoryRetrievalParameters(std::forward<InventoryRetrievalParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the job output location.</p>
     */
    inline const Aws::String& GetJobOutputPath() const { return m_jobOutputPath; }
    inline bool JobOutputPathHasBeenSet() const { return m_jobOutputPathHasBeenSet; }
    template<typename JobOutputPathT = Aws::String>
    void SetJobOutputPath(JobOutputPathT&& value) { m_jobOutputPathHasBeenSet = true; m_jobOutputPath = std::forward<JobOutputPathT>(value); }
    template<typename JobOutputPathT = Aws::String>
    GlacierJobDescription& WithJobOutputPath(JobOutputPathT&& value) { SetJobOutputPath(std::forward<JobOutputPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the parameters used for a select.</p>
     */
    inline const SelectParameters& GetSelectParameters() const { return m_selectParameters; }
    inline bool SelectParametersHasBeenSet() const { return m_selectParametersHasBeenSet; }
    template<typename SelectParametersT = SelectParameters>
    void SetSelectParameters(SelectParametersT&& value) { m_selectParametersHasBeenSet = true; m_selectParameters = std::forward<SelectParametersT>(value); }
    template<typename SelectParametersT = SelectParameters>
    GlacierJobDescription& WithSelectParameters(SelectParametersT&& value) { SetSelectParameters(std::forward<SelectParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the location where the data from the select job is stored.</p>
     */
    inline const OutputLocation& GetOutputLocation() const { return m_outputLocation; }
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }
    template<typename OutputLocationT = OutputLocation>
    void SetOutputLocation(OutputLocationT&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::forward<OutputLocationT>(value); }
    template<typename OutputLocationT = OutputLocation>
    GlacierJobDescription& WithOutputLocation(OutputLocationT&& value) { SetOutputLocation(std::forward<OutputLocationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GlacierJobDescription& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_jobDescription;
    bool m_jobDescriptionHasBeenSet = false;

    ActionCode m_action{ActionCode::NOT_SET};
    bool m_actionHasBeenSet = false;

    Aws::String m_archiveId;
    bool m_archiveIdHasBeenSet = false;

    Aws::String m_vaultARN;
    bool m_vaultARNHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    bool m_completed{false};
    bool m_completedHasBeenSet = false;

    StatusCode m_statusCode{StatusCode::NOT_SET};
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    long long m_archiveSizeInBytes{0};
    bool m_archiveSizeInBytesHasBeenSet = false;

    long long m_inventorySizeInBytes{0};
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
