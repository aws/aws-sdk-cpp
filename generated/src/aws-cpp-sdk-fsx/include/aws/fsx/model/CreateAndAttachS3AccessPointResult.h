/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/S3AccessPointAttachment.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace FSx
{
namespace Model
{
  class CreateAndAttachS3AccessPointResult
  {
  public:
    AWS_FSX_API CreateAndAttachS3AccessPointResult() = default;
    AWS_FSX_API CreateAndAttachS3AccessPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API CreateAndAttachS3AccessPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Describes the configuration of the S3 access point created.</p>
     */
    inline const S3AccessPointAttachment& GetS3AccessPointAttachment() const { return m_s3AccessPointAttachment; }
    template<typename S3AccessPointAttachmentT = S3AccessPointAttachment>
    void SetS3AccessPointAttachment(S3AccessPointAttachmentT&& value) { m_s3AccessPointAttachmentHasBeenSet = true; m_s3AccessPointAttachment = std::forward<S3AccessPointAttachmentT>(value); }
    template<typename S3AccessPointAttachmentT = S3AccessPointAttachment>
    CreateAndAttachS3AccessPointResult& WithS3AccessPointAttachment(S3AccessPointAttachmentT&& value) { SetS3AccessPointAttachment(std::forward<S3AccessPointAttachmentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAndAttachS3AccessPointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    S3AccessPointAttachment m_s3AccessPointAttachment;
    bool m_s3AccessPointAttachmentHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
