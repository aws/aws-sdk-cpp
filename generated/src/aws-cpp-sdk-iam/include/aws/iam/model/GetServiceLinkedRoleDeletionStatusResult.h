/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/DeletionTaskStatusType.h>
#include <aws/iam/model/DeletionTaskFailureReasonType.h>
#include <aws/iam/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{
  class GetServiceLinkedRoleDeletionStatusResult
  {
  public:
    AWS_IAM_API GetServiceLinkedRoleDeletionStatusResult() = default;
    AWS_IAM_API GetServiceLinkedRoleDeletionStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API GetServiceLinkedRoleDeletionStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The status of the deletion.</p>
     */
    inline DeletionTaskStatusType GetStatus() const { return m_status; }
    inline void SetStatus(DeletionTaskStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetServiceLinkedRoleDeletionStatusResult& WithStatus(DeletionTaskStatusType value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about the reason the deletion failed.</p>
     */
    inline const DeletionTaskFailureReasonType& GetReason() const { return m_reason; }
    template<typename ReasonT = DeletionTaskFailureReasonType>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = DeletionTaskFailureReasonType>
    GetServiceLinkedRoleDeletionStatusResult& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetServiceLinkedRoleDeletionStatusResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    DeletionTaskStatusType m_status{DeletionTaskStatusType::NOT_SET};
    bool m_statusHasBeenSet = false;

    DeletionTaskFailureReasonType m_reason;
    bool m_reasonHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
