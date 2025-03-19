/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/Attachment.h>
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
namespace GlobalAccelerator
{
namespace Model
{
  class ListCrossAccountAttachmentsResult
  {
  public:
    AWS_GLOBALACCELERATOR_API ListCrossAccountAttachmentsResult() = default;
    AWS_GLOBALACCELERATOR_API ListCrossAccountAttachmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API ListCrossAccountAttachmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the cross-account attachments.</p>
     */
    inline const Aws::Vector<Attachment>& GetCrossAccountAttachments() const { return m_crossAccountAttachments; }
    template<typename CrossAccountAttachmentsT = Aws::Vector<Attachment>>
    void SetCrossAccountAttachments(CrossAccountAttachmentsT&& value) { m_crossAccountAttachmentsHasBeenSet = true; m_crossAccountAttachments = std::forward<CrossAccountAttachmentsT>(value); }
    template<typename CrossAccountAttachmentsT = Aws::Vector<Attachment>>
    ListCrossAccountAttachmentsResult& WithCrossAccountAttachments(CrossAccountAttachmentsT&& value) { SetCrossAccountAttachments(std::forward<CrossAccountAttachmentsT>(value)); return *this;}
    template<typename CrossAccountAttachmentsT = Attachment>
    ListCrossAccountAttachmentsResult& AddCrossAccountAttachments(CrossAccountAttachmentsT&& value) { m_crossAccountAttachmentsHasBeenSet = true; m_crossAccountAttachments.emplace_back(std::forward<CrossAccountAttachmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCrossAccountAttachmentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCrossAccountAttachmentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Attachment> m_crossAccountAttachments;
    bool m_crossAccountAttachmentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
