/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/S3AccessPointAttachment.h>
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
  class DescribeS3AccessPointAttachmentsResult
  {
  public:
    AWS_FSX_API DescribeS3AccessPointAttachmentsResult() = default;
    AWS_FSX_API DescribeS3AccessPointAttachmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DescribeS3AccessPointAttachmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Array of S3 access point attachments returned after a successful
     * <code>DescribeS3AccessPointAttachments</code> operation.</p>
     */
    inline const Aws::Vector<S3AccessPointAttachment>& GetS3AccessPointAttachments() const { return m_s3AccessPointAttachments; }
    template<typename S3AccessPointAttachmentsT = Aws::Vector<S3AccessPointAttachment>>
    void SetS3AccessPointAttachments(S3AccessPointAttachmentsT&& value) { m_s3AccessPointAttachmentsHasBeenSet = true; m_s3AccessPointAttachments = std::forward<S3AccessPointAttachmentsT>(value); }
    template<typename S3AccessPointAttachmentsT = Aws::Vector<S3AccessPointAttachment>>
    DescribeS3AccessPointAttachmentsResult& WithS3AccessPointAttachments(S3AccessPointAttachmentsT&& value) { SetS3AccessPointAttachments(std::forward<S3AccessPointAttachmentsT>(value)); return *this;}
    template<typename S3AccessPointAttachmentsT = S3AccessPointAttachment>
    DescribeS3AccessPointAttachmentsResult& AddS3AccessPointAttachments(S3AccessPointAttachmentsT&& value) { m_s3AccessPointAttachmentsHasBeenSet = true; m_s3AccessPointAttachments.emplace_back(std::forward<S3AccessPointAttachmentsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeS3AccessPointAttachmentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeS3AccessPointAttachmentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<S3AccessPointAttachment> m_s3AccessPointAttachments;
    bool m_s3AccessPointAttachmentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
