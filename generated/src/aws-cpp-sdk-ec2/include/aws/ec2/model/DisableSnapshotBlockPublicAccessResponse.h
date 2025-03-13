/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/SnapshotBlockPublicAccessState.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
namespace EC2
{
namespace Model
{
  class DisableSnapshotBlockPublicAccessResponse
  {
  public:
    AWS_EC2_API DisableSnapshotBlockPublicAccessResponse() = default;
    AWS_EC2_API DisableSnapshotBlockPublicAccessResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DisableSnapshotBlockPublicAccessResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Returns <code>unblocked</code> if the request succeeds.</p>
     */
    inline SnapshotBlockPublicAccessState GetState() const { return m_state; }
    inline void SetState(SnapshotBlockPublicAccessState value) { m_stateHasBeenSet = true; m_state = value; }
    inline DisableSnapshotBlockPublicAccessResponse& WithState(SnapshotBlockPublicAccessState value) { SetState(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DisableSnapshotBlockPublicAccessResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    SnapshotBlockPublicAccessState m_state{SnapshotBlockPublicAccessState::NOT_SET};
    bool m_stateHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
