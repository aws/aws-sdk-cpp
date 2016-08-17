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
#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glacier/model/ActionCode.h>
#include <aws/glacier/model/StatusCode.h>
#include <aws/glacier/model/InventoryRetrievalJobDescription.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glacier
{
namespace Model
{
  /**
   * <p>Describes an Amazon Glacier job.</p>
   */
  class AWS_GLACIER_API DescribeJobResult
  {
  public:
    DescribeJobResult();
    DescribeJobResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeJobResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>An opaque string that identifies an Amazon Glacier job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>An opaque string that identifies an Amazon Glacier job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>An opaque string that identifies an Amazon Glacier job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = value; }

    /**
     * <p>An opaque string that identifies an Amazon Glacier job.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>An opaque string that identifies an Amazon Glacier job.</p>
     */
    inline DescribeJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>An opaque string that identifies an Amazon Glacier job.</p>
     */
    inline DescribeJobResult& WithJobId(Aws::String&& value) { SetJobId(value); return *this;}

    /**
     * <p>An opaque string that identifies an Amazon Glacier job.</p>
     */
    inline DescribeJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}

    /**
     * <p>The job description you provided when you initiated the job.</p>
     */
    inline const Aws::String& GetJobDescription() const{ return m_jobDescription; }

    /**
     * <p>The job description you provided when you initiated the job.</p>
     */
    inline void SetJobDescription(const Aws::String& value) { m_jobDescription = value; }

    /**
     * <p>The job description you provided when you initiated the job.</p>
     */
    inline void SetJobDescription(Aws::String&& value) { m_jobDescription = value; }

    /**
     * <p>The job description you provided when you initiated the job.</p>
     */
    inline void SetJobDescription(const char* value) { m_jobDescription.assign(value); }

    /**
     * <p>The job description you provided when you initiated the job.</p>
     */
    inline DescribeJobResult& WithJobDescription(const Aws::String& value) { SetJobDescription(value); return *this;}

    /**
     * <p>The job description you provided when you initiated the job.</p>
     */
    inline DescribeJobResult& WithJobDescription(Aws::String&& value) { SetJobDescription(value); return *this;}

    /**
     * <p>The job description you provided when you initiated the job.</p>
     */
    inline DescribeJobResult& WithJobDescription(const char* value) { SetJobDescription(value); return *this;}

    /**
     * <p>The job type. It is either ArchiveRetrieval or InventoryRetrieval.</p>
     */
    inline const ActionCode& GetAction() const{ return m_action; }

    /**
     * <p>The job type. It is either ArchiveRetrieval or InventoryRetrieval.</p>
     */
    inline void SetAction(const ActionCode& value) { m_action = value; }

    /**
     * <p>The job type. It is either ArchiveRetrieval or InventoryRetrieval.</p>
     */
    inline void SetAction(ActionCode&& value) { m_action = value; }

    /**
     * <p>The job type. It is either ArchiveRetrieval or InventoryRetrieval.</p>
     */
    inline DescribeJobResult& WithAction(const ActionCode& value) { SetAction(value); return *this;}

    /**
     * <p>The job type. It is either ArchiveRetrieval or InventoryRetrieval.</p>
     */
    inline DescribeJobResult& WithAction(ActionCode&& value) { SetAction(value); return *this;}

    /**
     * <p>For an ArchiveRetrieval job, this is the archive ID requested for download.
     * Otherwise, this field is null.</p>
     */
    inline const Aws::String& GetArchiveId() const{ return m_archiveId; }

    /**
     * <p>For an ArchiveRetrieval job, this is the archive ID requested for download.
     * Otherwise, this field is null.</p>
     */
    inline void SetArchiveId(const Aws::String& value) { m_archiveId = value; }

    /**
     * <p>For an ArchiveRetrieval job, this is the archive ID requested for download.
     * Otherwise, this field is null.</p>
     */
    inline void SetArchiveId(Aws::String&& value) { m_archiveId = value; }

    /**
     * <p>For an ArchiveRetrieval job, this is the archive ID requested for download.
     * Otherwise, this field is null.</p>
     */
    inline void SetArchiveId(const char* value) { m_archiveId.assign(value); }

    /**
     * <p>For an ArchiveRetrieval job, this is the archive ID requested for download.
     * Otherwise, this field is null.</p>
     */
    inline DescribeJobResult& WithArchiveId(const Aws::String& value) { SetArchiveId(value); return *this;}

    /**
     * <p>For an ArchiveRetrieval job, this is the archive ID requested for download.
     * Otherwise, this field is null.</p>
     */
    inline DescribeJobResult& WithArchiveId(Aws::String&& value) { SetArchiveId(value); return *this;}

    /**
     * <p>For an ArchiveRetrieval job, this is the archive ID requested for download.
     * Otherwise, this field is null.</p>
     */
    inline DescribeJobResult& WithArchiveId(const char* value) { SetArchiveId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the vault from which the archive retrieval
     * was requested.</p>
     */
    inline const Aws::String& GetVaultARN() const{ return m_vaultARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the vault from which the archive retrieval
     * was requested.</p>
     */
    inline void SetVaultARN(const Aws::String& value) { m_vaultARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the vault from which the archive retrieval
     * was requested.</p>
     */
    inline void SetVaultARN(Aws::String&& value) { m_vaultARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the vault from which the archive retrieval
     * was requested.</p>
     */
    inline void SetVaultARN(const char* value) { m_vaultARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the vault from which the archive retrieval
     * was requested.</p>
     */
    inline DescribeJobResult& WithVaultARN(const Aws::String& value) { SetVaultARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the vault from which the archive retrieval
     * was requested.</p>
     */
    inline DescribeJobResult& WithVaultARN(Aws::String&& value) { SetVaultARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the vault from which the archive retrieval
     * was requested.</p>
     */
    inline DescribeJobResult& WithVaultARN(const char* value) { SetVaultARN(value); return *this;}

    /**
     * <p>The UTC date when the job was created. A string representation of ISO 8601
     * date format, for example, "2012-03-20T17:03:43.221Z".</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The UTC date when the job was created. A string representation of ISO 8601
     * date format, for example, "2012-03-20T17:03:43.221Z".</p>
     */
    inline void SetCreationDate(const Aws::String& value) { m_creationDate = value; }

    /**
     * <p>The UTC date when the job was created. A string representation of ISO 8601
     * date format, for example, "2012-03-20T17:03:43.221Z".</p>
     */
    inline void SetCreationDate(Aws::String&& value) { m_creationDate = value; }

    /**
     * <p>The UTC date when the job was created. A string representation of ISO 8601
     * date format, for example, "2012-03-20T17:03:43.221Z".</p>
     */
    inline void SetCreationDate(const char* value) { m_creationDate.assign(value); }

    /**
     * <p>The UTC date when the job was created. A string representation of ISO 8601
     * date format, for example, "2012-03-20T17:03:43.221Z".</p>
     */
    inline DescribeJobResult& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The UTC date when the job was created. A string representation of ISO 8601
     * date format, for example, "2012-03-20T17:03:43.221Z".</p>
     */
    inline DescribeJobResult& WithCreationDate(Aws::String&& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The UTC date when the job was created. A string representation of ISO 8601
     * date format, for example, "2012-03-20T17:03:43.221Z".</p>
     */
    inline DescribeJobResult& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}

    /**
     * <p>The job status. When a job is completed, you get the job's output.</p>
     */
    inline bool GetCompleted() const{ return m_completed; }

    /**
     * <p>The job status. When a job is completed, you get the job's output.</p>
     */
    inline void SetCompleted(bool value) { m_completed = value; }

    /**
     * <p>The job status. When a job is completed, you get the job's output.</p>
     */
    inline DescribeJobResult& WithCompleted(bool value) { SetCompleted(value); return *this;}

    /**
     * <p>The status code can be InProgress, Succeeded, or Failed, and indicates the
     * status of the job.</p>
     */
    inline const StatusCode& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The status code can be InProgress, Succeeded, or Failed, and indicates the
     * status of the job.</p>
     */
    inline void SetStatusCode(const StatusCode& value) { m_statusCode = value; }

    /**
     * <p>The status code can be InProgress, Succeeded, or Failed, and indicates the
     * status of the job.</p>
     */
    inline void SetStatusCode(StatusCode&& value) { m_statusCode = value; }

    /**
     * <p>The status code can be InProgress, Succeeded, or Failed, and indicates the
     * status of the job.</p>
     */
    inline DescribeJobResult& WithStatusCode(const StatusCode& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The status code can be InProgress, Succeeded, or Failed, and indicates the
     * status of the job.</p>
     */
    inline DescribeJobResult& WithStatusCode(StatusCode&& value) { SetStatusCode(value); return *this;}

    /**
     * <p>A friendly message that describes the job status.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A friendly message that describes the job status.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }

    /**
     * <p>A friendly message that describes the job status.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = value; }

    /**
     * <p>A friendly message that describes the job status.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }

    /**
     * <p>A friendly message that describes the job status.</p>
     */
    inline DescribeJobResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A friendly message that describes the job status.</p>
     */
    inline DescribeJobResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A friendly message that describes the job status.</p>
     */
    inline DescribeJobResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

    /**
     * <p>For an ArchiveRetrieval job, this is the size in bytes of the archive being
     * requested for download. For the InventoryRetrieval job, the value is null.</p>
     */
    inline long long GetArchiveSizeInBytes() const{ return m_archiveSizeInBytes; }

    /**
     * <p>For an ArchiveRetrieval job, this is the size in bytes of the archive being
     * requested for download. For the InventoryRetrieval job, the value is null.</p>
     */
    inline void SetArchiveSizeInBytes(long long value) { m_archiveSizeInBytes = value; }

    /**
     * <p>For an ArchiveRetrieval job, this is the size in bytes of the archive being
     * requested for download. For the InventoryRetrieval job, the value is null.</p>
     */
    inline DescribeJobResult& WithArchiveSizeInBytes(long long value) { SetArchiveSizeInBytes(value); return *this;}

    /**
     * <p>For an InventoryRetrieval job, this is the size in bytes of the inventory
     * requested for download. For the ArchiveRetrieval job, the value is null.</p>
     */
    inline long long GetInventorySizeInBytes() const{ return m_inventorySizeInBytes; }

    /**
     * <p>For an InventoryRetrieval job, this is the size in bytes of the inventory
     * requested for download. For the ArchiveRetrieval job, the value is null.</p>
     */
    inline void SetInventorySizeInBytes(long long value) { m_inventorySizeInBytes = value; }

    /**
     * <p>For an InventoryRetrieval job, this is the size in bytes of the inventory
     * requested for download. For the ArchiveRetrieval job, the value is null.</p>
     */
    inline DescribeJobResult& WithInventorySizeInBytes(long long value) { SetInventorySizeInBytes(value); return *this;}

    /**
     * <p>An Amazon Simple Notification Service (Amazon SNS) topic that receives
     * notification.</p>
     */
    inline const Aws::String& GetSNSTopic() const{ return m_sNSTopic; }

    /**
     * <p>An Amazon Simple Notification Service (Amazon SNS) topic that receives
     * notification.</p>
     */
    inline void SetSNSTopic(const Aws::String& value) { m_sNSTopic = value; }

    /**
     * <p>An Amazon Simple Notification Service (Amazon SNS) topic that receives
     * notification.</p>
     */
    inline void SetSNSTopic(Aws::String&& value) { m_sNSTopic = value; }

    /**
     * <p>An Amazon Simple Notification Service (Amazon SNS) topic that receives
     * notification.</p>
     */
    inline void SetSNSTopic(const char* value) { m_sNSTopic.assign(value); }

    /**
     * <p>An Amazon Simple Notification Service (Amazon SNS) topic that receives
     * notification.</p>
     */
    inline DescribeJobResult& WithSNSTopic(const Aws::String& value) { SetSNSTopic(value); return *this;}

    /**
     * <p>An Amazon Simple Notification Service (Amazon SNS) topic that receives
     * notification.</p>
     */
    inline DescribeJobResult& WithSNSTopic(Aws::String&& value) { SetSNSTopic(value); return *this;}

    /**
     * <p>An Amazon Simple Notification Service (Amazon SNS) topic that receives
     * notification.</p>
     */
    inline DescribeJobResult& WithSNSTopic(const char* value) { SetSNSTopic(value); return *this;}

    /**
     * <p>The UTC time that the archive retrieval request completed. While the job is
     * in progress, the value will be null.</p>
     */
    inline const Aws::String& GetCompletionDate() const{ return m_completionDate; }

    /**
     * <p>The UTC time that the archive retrieval request completed. While the job is
     * in progress, the value will be null.</p>
     */
    inline void SetCompletionDate(const Aws::String& value) { m_completionDate = value; }

    /**
     * <p>The UTC time that the archive retrieval request completed. While the job is
     * in progress, the value will be null.</p>
     */
    inline void SetCompletionDate(Aws::String&& value) { m_completionDate = value; }

    /**
     * <p>The UTC time that the archive retrieval request completed. While the job is
     * in progress, the value will be null.</p>
     */
    inline void SetCompletionDate(const char* value) { m_completionDate.assign(value); }

    /**
     * <p>The UTC time that the archive retrieval request completed. While the job is
     * in progress, the value will be null.</p>
     */
    inline DescribeJobResult& WithCompletionDate(const Aws::String& value) { SetCompletionDate(value); return *this;}

    /**
     * <p>The UTC time that the archive retrieval request completed. While the job is
     * in progress, the value will be null.</p>
     */
    inline DescribeJobResult& WithCompletionDate(Aws::String&& value) { SetCompletionDate(value); return *this;}

    /**
     * <p>The UTC time that the archive retrieval request completed. While the job is
     * in progress, the value will be null.</p>
     */
    inline DescribeJobResult& WithCompletionDate(const char* value) { SetCompletionDate(value); return *this;}

    /**
     * <p>For an ArchiveRetrieval job, it is the checksum of the archive. Otherwise,
     * the value is null.</p> <p> The SHA256 tree hash value for the requested range of
     * an archive. If the Initiate a Job request for an archive specified a tree-hash
     * aligned range, then this field returns a value. </p> <p> For the specific case
     * when the whole archive is retrieved, this value is the same as the
     * ArchiveSHA256TreeHash value. </p> <p> This field is null in the following
     * situations: <ul> <li><p>Archive retrieval jobs that specify a range that is not
     * tree-hash aligned.</p></li> </ul> <ul> <li><p>Archival jobs that specify a range
     * that is equal to the whole archive and the job status is InProgress.</p></li>
     * </ul> <ul> <li><p>Inventory jobs.</p></li> </ul> </p>
     */
    inline const Aws::String& GetSHA256TreeHash() const{ return m_sHA256TreeHash; }

    /**
     * <p>For an ArchiveRetrieval job, it is the checksum of the archive. Otherwise,
     * the value is null.</p> <p> The SHA256 tree hash value for the requested range of
     * an archive. If the Initiate a Job request for an archive specified a tree-hash
     * aligned range, then this field returns a value. </p> <p> For the specific case
     * when the whole archive is retrieved, this value is the same as the
     * ArchiveSHA256TreeHash value. </p> <p> This field is null in the following
     * situations: <ul> <li><p>Archive retrieval jobs that specify a range that is not
     * tree-hash aligned.</p></li> </ul> <ul> <li><p>Archival jobs that specify a range
     * that is equal to the whole archive and the job status is InProgress.</p></li>
     * </ul> <ul> <li><p>Inventory jobs.</p></li> </ul> </p>
     */
    inline void SetSHA256TreeHash(const Aws::String& value) { m_sHA256TreeHash = value; }

    /**
     * <p>For an ArchiveRetrieval job, it is the checksum of the archive. Otherwise,
     * the value is null.</p> <p> The SHA256 tree hash value for the requested range of
     * an archive. If the Initiate a Job request for an archive specified a tree-hash
     * aligned range, then this field returns a value. </p> <p> For the specific case
     * when the whole archive is retrieved, this value is the same as the
     * ArchiveSHA256TreeHash value. </p> <p> This field is null in the following
     * situations: <ul> <li><p>Archive retrieval jobs that specify a range that is not
     * tree-hash aligned.</p></li> </ul> <ul> <li><p>Archival jobs that specify a range
     * that is equal to the whole archive and the job status is InProgress.</p></li>
     * </ul> <ul> <li><p>Inventory jobs.</p></li> </ul> </p>
     */
    inline void SetSHA256TreeHash(Aws::String&& value) { m_sHA256TreeHash = value; }

    /**
     * <p>For an ArchiveRetrieval job, it is the checksum of the archive. Otherwise,
     * the value is null.</p> <p> The SHA256 tree hash value for the requested range of
     * an archive. If the Initiate a Job request for an archive specified a tree-hash
     * aligned range, then this field returns a value. </p> <p> For the specific case
     * when the whole archive is retrieved, this value is the same as the
     * ArchiveSHA256TreeHash value. </p> <p> This field is null in the following
     * situations: <ul> <li><p>Archive retrieval jobs that specify a range that is not
     * tree-hash aligned.</p></li> </ul> <ul> <li><p>Archival jobs that specify a range
     * that is equal to the whole archive and the job status is InProgress.</p></li>
     * </ul> <ul> <li><p>Inventory jobs.</p></li> </ul> </p>
     */
    inline void SetSHA256TreeHash(const char* value) { m_sHA256TreeHash.assign(value); }

    /**
     * <p>For an ArchiveRetrieval job, it is the checksum of the archive. Otherwise,
     * the value is null.</p> <p> The SHA256 tree hash value for the requested range of
     * an archive. If the Initiate a Job request for an archive specified a tree-hash
     * aligned range, then this field returns a value. </p> <p> For the specific case
     * when the whole archive is retrieved, this value is the same as the
     * ArchiveSHA256TreeHash value. </p> <p> This field is null in the following
     * situations: <ul> <li><p>Archive retrieval jobs that specify a range that is not
     * tree-hash aligned.</p></li> </ul> <ul> <li><p>Archival jobs that specify a range
     * that is equal to the whole archive and the job status is InProgress.</p></li>
     * </ul> <ul> <li><p>Inventory jobs.</p></li> </ul> </p>
     */
    inline DescribeJobResult& WithSHA256TreeHash(const Aws::String& value) { SetSHA256TreeHash(value); return *this;}

    /**
     * <p>For an ArchiveRetrieval job, it is the checksum of the archive. Otherwise,
     * the value is null.</p> <p> The SHA256 tree hash value for the requested range of
     * an archive. If the Initiate a Job request for an archive specified a tree-hash
     * aligned range, then this field returns a value. </p> <p> For the specific case
     * when the whole archive is retrieved, this value is the same as the
     * ArchiveSHA256TreeHash value. </p> <p> This field is null in the following
     * situations: <ul> <li><p>Archive retrieval jobs that specify a range that is not
     * tree-hash aligned.</p></li> </ul> <ul> <li><p>Archival jobs that specify a range
     * that is equal to the whole archive and the job status is InProgress.</p></li>
     * </ul> <ul> <li><p>Inventory jobs.</p></li> </ul> </p>
     */
    inline DescribeJobResult& WithSHA256TreeHash(Aws::String&& value) { SetSHA256TreeHash(value); return *this;}

    /**
     * <p>For an ArchiveRetrieval job, it is the checksum of the archive. Otherwise,
     * the value is null.</p> <p> The SHA256 tree hash value for the requested range of
     * an archive. If the Initiate a Job request for an archive specified a tree-hash
     * aligned range, then this field returns a value. </p> <p> For the specific case
     * when the whole archive is retrieved, this value is the same as the
     * ArchiveSHA256TreeHash value. </p> <p> This field is null in the following
     * situations: <ul> <li><p>Archive retrieval jobs that specify a range that is not
     * tree-hash aligned.</p></li> </ul> <ul> <li><p>Archival jobs that specify a range
     * that is equal to the whole archive and the job status is InProgress.</p></li>
     * </ul> <ul> <li><p>Inventory jobs.</p></li> </ul> </p>
     */
    inline DescribeJobResult& WithSHA256TreeHash(const char* value) { SetSHA256TreeHash(value); return *this;}

    /**
     * <p>The SHA256 tree hash of the entire archive for an archive retrieval. For
     * inventory retrieval jobs, this field is null. </p>
     */
    inline const Aws::String& GetArchiveSHA256TreeHash() const{ return m_archiveSHA256TreeHash; }

    /**
     * <p>The SHA256 tree hash of the entire archive for an archive retrieval. For
     * inventory retrieval jobs, this field is null. </p>
     */
    inline void SetArchiveSHA256TreeHash(const Aws::String& value) { m_archiveSHA256TreeHash = value; }

    /**
     * <p>The SHA256 tree hash of the entire archive for an archive retrieval. For
     * inventory retrieval jobs, this field is null. </p>
     */
    inline void SetArchiveSHA256TreeHash(Aws::String&& value) { m_archiveSHA256TreeHash = value; }

    /**
     * <p>The SHA256 tree hash of the entire archive for an archive retrieval. For
     * inventory retrieval jobs, this field is null. </p>
     */
    inline void SetArchiveSHA256TreeHash(const char* value) { m_archiveSHA256TreeHash.assign(value); }

    /**
     * <p>The SHA256 tree hash of the entire archive for an archive retrieval. For
     * inventory retrieval jobs, this field is null. </p>
     */
    inline DescribeJobResult& WithArchiveSHA256TreeHash(const Aws::String& value) { SetArchiveSHA256TreeHash(value); return *this;}

    /**
     * <p>The SHA256 tree hash of the entire archive for an archive retrieval. For
     * inventory retrieval jobs, this field is null. </p>
     */
    inline DescribeJobResult& WithArchiveSHA256TreeHash(Aws::String&& value) { SetArchiveSHA256TreeHash(value); return *this;}

    /**
     * <p>The SHA256 tree hash of the entire archive for an archive retrieval. For
     * inventory retrieval jobs, this field is null. </p>
     */
    inline DescribeJobResult& WithArchiveSHA256TreeHash(const char* value) { SetArchiveSHA256TreeHash(value); return *this;}

    /**
     * <p>The retrieved byte range for archive retrieval jobs in the form
     * "<i>StartByteValue</i>-<i>EndByteValue</i>" If no range was specified in the
     * archive retrieval, then the whole archive is retrieved and <i>StartByteValue</i>
     * equals 0 and <i>EndByteValue</i> equals the size of the archive minus 1. For
     * inventory retrieval jobs this field is null. </p>
     */
    inline const Aws::String& GetRetrievalByteRange() const{ return m_retrievalByteRange; }

    /**
     * <p>The retrieved byte range for archive retrieval jobs in the form
     * "<i>StartByteValue</i>-<i>EndByteValue</i>" If no range was specified in the
     * archive retrieval, then the whole archive is retrieved and <i>StartByteValue</i>
     * equals 0 and <i>EndByteValue</i> equals the size of the archive minus 1. For
     * inventory retrieval jobs this field is null. </p>
     */
    inline void SetRetrievalByteRange(const Aws::String& value) { m_retrievalByteRange = value; }

    /**
     * <p>The retrieved byte range for archive retrieval jobs in the form
     * "<i>StartByteValue</i>-<i>EndByteValue</i>" If no range was specified in the
     * archive retrieval, then the whole archive is retrieved and <i>StartByteValue</i>
     * equals 0 and <i>EndByteValue</i> equals the size of the archive minus 1. For
     * inventory retrieval jobs this field is null. </p>
     */
    inline void SetRetrievalByteRange(Aws::String&& value) { m_retrievalByteRange = value; }

    /**
     * <p>The retrieved byte range for archive retrieval jobs in the form
     * "<i>StartByteValue</i>-<i>EndByteValue</i>" If no range was specified in the
     * archive retrieval, then the whole archive is retrieved and <i>StartByteValue</i>
     * equals 0 and <i>EndByteValue</i> equals the size of the archive minus 1. For
     * inventory retrieval jobs this field is null. </p>
     */
    inline void SetRetrievalByteRange(const char* value) { m_retrievalByteRange.assign(value); }

    /**
     * <p>The retrieved byte range for archive retrieval jobs in the form
     * "<i>StartByteValue</i>-<i>EndByteValue</i>" If no range was specified in the
     * archive retrieval, then the whole archive is retrieved and <i>StartByteValue</i>
     * equals 0 and <i>EndByteValue</i> equals the size of the archive minus 1. For
     * inventory retrieval jobs this field is null. </p>
     */
    inline DescribeJobResult& WithRetrievalByteRange(const Aws::String& value) { SetRetrievalByteRange(value); return *this;}

    /**
     * <p>The retrieved byte range for archive retrieval jobs in the form
     * "<i>StartByteValue</i>-<i>EndByteValue</i>" If no range was specified in the
     * archive retrieval, then the whole archive is retrieved and <i>StartByteValue</i>
     * equals 0 and <i>EndByteValue</i> equals the size of the archive minus 1. For
     * inventory retrieval jobs this field is null. </p>
     */
    inline DescribeJobResult& WithRetrievalByteRange(Aws::String&& value) { SetRetrievalByteRange(value); return *this;}

    /**
     * <p>The retrieved byte range for archive retrieval jobs in the form
     * "<i>StartByteValue</i>-<i>EndByteValue</i>" If no range was specified in the
     * archive retrieval, then the whole archive is retrieved and <i>StartByteValue</i>
     * equals 0 and <i>EndByteValue</i> equals the size of the archive minus 1. For
     * inventory retrieval jobs this field is null. </p>
     */
    inline DescribeJobResult& WithRetrievalByteRange(const char* value) { SetRetrievalByteRange(value); return *this;}

    /**
     * <p>Parameters used for range inventory retrieval.</p>
     */
    inline const InventoryRetrievalJobDescription& GetInventoryRetrievalParameters() const{ return m_inventoryRetrievalParameters; }

    /**
     * <p>Parameters used for range inventory retrieval.</p>
     */
    inline void SetInventoryRetrievalParameters(const InventoryRetrievalJobDescription& value) { m_inventoryRetrievalParameters = value; }

    /**
     * <p>Parameters used for range inventory retrieval.</p>
     */
    inline void SetInventoryRetrievalParameters(InventoryRetrievalJobDescription&& value) { m_inventoryRetrievalParameters = value; }

    /**
     * <p>Parameters used for range inventory retrieval.</p>
     */
    inline DescribeJobResult& WithInventoryRetrievalParameters(const InventoryRetrievalJobDescription& value) { SetInventoryRetrievalParameters(value); return *this;}

    /**
     * <p>Parameters used for range inventory retrieval.</p>
     */
    inline DescribeJobResult& WithInventoryRetrievalParameters(InventoryRetrievalJobDescription&& value) { SetInventoryRetrievalParameters(value); return *this;}

  private:
    Aws::String m_jobId;
    Aws::String m_jobDescription;
    ActionCode m_action;
    Aws::String m_archiveId;
    Aws::String m_vaultARN;
    Aws::String m_creationDate;
    bool m_completed;
    StatusCode m_statusCode;
    Aws::String m_statusMessage;
    long long m_archiveSizeInBytes;
    long long m_inventorySizeInBytes;
    Aws::String m_sNSTopic;
    Aws::String m_completionDate;
    Aws::String m_sHA256TreeHash;
    Aws::String m_archiveSHA256TreeHash;
    Aws::String m_retrievalByteRange;
    InventoryRetrievalJobDescription m_inventoryRetrievalParameters;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
