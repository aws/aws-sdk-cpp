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
    AWS_CUSTOMERPROFILES_API GetSegmentSnapshotResult() = default;
    AWS_CUSTOMERPROFILES_API GetSegmentSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API GetSegmentSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the segment snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
    template<typename SnapshotIdT = Aws::String>
    void SetSnapshotId(SnapshotIdT&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::forward<SnapshotIdT>(value); }
    template<typename SnapshotIdT = Aws::String>
    GetSegmentSnapshotResult& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the asynchronous job for exporting the segment snapshot.</p>
     */
    inline SegmentSnapshotStatus GetStatus() const { return m_status; }
    inline void SetStatus(SegmentSnapshotStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetSegmentSnapshotResult& WithStatus(SegmentSnapshotStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message of the asynchronous job for exporting the segment
     * snapshot.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    GetSegmentSnapshotResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format in which the segment will be exported.</p>
     */
    inline DataFormat GetDataFormat() const { return m_dataFormat; }
    inline void SetDataFormat(DataFormat value) { m_dataFormatHasBeenSet = true; m_dataFormat = value; }
    inline GetSegmentSnapshotResult& WithDataFormat(DataFormat value) { SetDataFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt the exported
     * segment.</p>
     */
    inline const Aws::String& GetEncryptionKey() const { return m_encryptionKey; }
    template<typename EncryptionKeyT = Aws::String>
    void SetEncryptionKey(EncryptionKeyT&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::forward<EncryptionKeyT>(value); }
    template<typename EncryptionKeyT = Aws::String>
    GetSegmentSnapshotResult& WithEncryptionKey(EncryptionKeyT&& value) { SetEncryptionKey(std::forward<EncryptionKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that allows Customer Profiles
     * service principal to assume the role for conducting KMS and S3 operations.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    GetSegmentSnapshotResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination to which the segment will be exported. This field must be
     * provided if the request is not submitted from the Amazon Connect Admin
     * Website.</p>
     */
    inline const Aws::String& GetDestinationUri() const { return m_destinationUri; }
    template<typename DestinationUriT = Aws::String>
    void SetDestinationUri(DestinationUriT&& value) { m_destinationUriHasBeenSet = true; m_destinationUri = std::forward<DestinationUriT>(value); }
    template<typename DestinationUriT = Aws::String>
    GetSegmentSnapshotResult& WithDestinationUri(DestinationUriT&& value) { SetDestinationUri(std::forward<DestinationUriT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSegmentSnapshotResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    SegmentSnapshotStatus m_status{SegmentSnapshotStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    DataFormat m_dataFormat{DataFormat::NOT_SET};
    bool m_dataFormatHasBeenSet = false;

    Aws::String m_encryptionKey;
    bool m_encryptionKeyHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_destinationUri;
    bool m_destinationUriHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
