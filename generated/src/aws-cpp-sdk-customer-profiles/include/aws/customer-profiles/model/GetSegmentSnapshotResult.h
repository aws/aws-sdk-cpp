/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/SegmentSnapshotStatus.h>
#include <aws/customer-profiles/model/DataFormat.h>
#include <utility>

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
namespace CustomerProfiles
{
namespace Model
{
  class GetSegmentSnapshotResult
  {
  public:
    AWS_CUSTOMERPROFILES_API GetSegmentSnapshotResult();
    AWS_CUSTOMERPROFILES_API GetSegmentSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API GetSegmentSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the segment snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotId = value; }
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotId = std::move(value); }
    inline void SetSnapshotId(const char* value) { m_snapshotId.assign(value); }
    inline GetSegmentSnapshotResult& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}
    inline GetSegmentSnapshotResult& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}
    inline GetSegmentSnapshotResult& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the asynchronous job for exporting the segment snapshot.</p>
     */
    inline const SegmentSnapshotStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const SegmentSnapshotStatus& value) { m_status = value; }
    inline void SetStatus(SegmentSnapshotStatus&& value) { m_status = std::move(value); }
    inline GetSegmentSnapshotResult& WithStatus(const SegmentSnapshotStatus& value) { SetStatus(value); return *this;}
    inline GetSegmentSnapshotResult& WithStatus(SegmentSnapshotStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message of the asynchronous job for exporting the segment
     * snapshot.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline GetSegmentSnapshotResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline GetSegmentSnapshotResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline GetSegmentSnapshotResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format in which the segment will be exported.</p>
     */
    inline const DataFormat& GetDataFormat() const{ return m_dataFormat; }
    inline void SetDataFormat(const DataFormat& value) { m_dataFormat = value; }
    inline void SetDataFormat(DataFormat&& value) { m_dataFormat = std::move(value); }
    inline GetSegmentSnapshotResult& WithDataFormat(const DataFormat& value) { SetDataFormat(value); return *this;}
    inline GetSegmentSnapshotResult& WithDataFormat(DataFormat&& value) { SetDataFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt the exported
     * segment.</p>
     */
    inline const Aws::String& GetEncryptionKey() const{ return m_encryptionKey; }
    inline void SetEncryptionKey(const Aws::String& value) { m_encryptionKey = value; }
    inline void SetEncryptionKey(Aws::String&& value) { m_encryptionKey = std::move(value); }
    inline void SetEncryptionKey(const char* value) { m_encryptionKey.assign(value); }
    inline GetSegmentSnapshotResult& WithEncryptionKey(const Aws::String& value) { SetEncryptionKey(value); return *this;}
    inline GetSegmentSnapshotResult& WithEncryptionKey(Aws::String&& value) { SetEncryptionKey(std::move(value)); return *this;}
    inline GetSegmentSnapshotResult& WithEncryptionKey(const char* value) { SetEncryptionKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that allows Customer Profiles
     * service principal to assume the role for conducting KMS and S3 operations.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline GetSegmentSnapshotResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline GetSegmentSnapshotResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline GetSegmentSnapshotResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination to which the segment will be exported. This field must be
     * provided if the request is not submitted from the Amazon Connect Admin
     * Website.</p>
     */
    inline const Aws::String& GetDestinationUri() const{ return m_destinationUri; }
    inline void SetDestinationUri(const Aws::String& value) { m_destinationUri = value; }
    inline void SetDestinationUri(Aws::String&& value) { m_destinationUri = std::move(value); }
    inline void SetDestinationUri(const char* value) { m_destinationUri.assign(value); }
    inline GetSegmentSnapshotResult& WithDestinationUri(const Aws::String& value) { SetDestinationUri(value); return *this;}
    inline GetSegmentSnapshotResult& WithDestinationUri(Aws::String&& value) { SetDestinationUri(std::move(value)); return *this;}
    inline GetSegmentSnapshotResult& WithDestinationUri(const char* value) { SetDestinationUri(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSegmentSnapshotResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSegmentSnapshotResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSegmentSnapshotResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_snapshotId;

    SegmentSnapshotStatus m_status;

    Aws::String m_statusMessage;

    DataFormat m_dataFormat;

    Aws::String m_encryptionKey;

    Aws::String m_roleArn;

    Aws::String m_destinationUri;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
