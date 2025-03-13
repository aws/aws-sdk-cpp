/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/model/Attachment.h>
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
namespace GlobalAccelerator
{
namespace Model
{
  class CreateCrossAccountAttachmentResult
  {
  public:
    AWS_GLOBALACCELERATOR_API CreateCrossAccountAttachmentResult() = default;
    AWS_GLOBALACCELERATOR_API CreateCrossAccountAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API CreateCrossAccountAttachmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the cross-account attachment.</p>
     */
    inline const Attachment& GetCrossAccountAttachment() const { return m_crossAccountAttachment; }
    template<typename CrossAccountAttachmentT = Attachment>
    void SetCrossAccountAttachment(CrossAccountAttachmentT&& value) { m_crossAccountAttachmentHasBeenSet = true; m_crossAccountAttachment = std::forward<CrossAccountAttachmentT>(value); }
    template<typename CrossAccountAttachmentT = Attachment>
    CreateCrossAccountAttachmentResult& WithCrossAccountAttachment(CrossAccountAttachmentT&& value) { SetCrossAccountAttachment(std::forward<CrossAccountAttachmentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateCrossAccountAttachmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Attachment m_crossAccountAttachment;
    bool m_crossAccountAttachmentHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
