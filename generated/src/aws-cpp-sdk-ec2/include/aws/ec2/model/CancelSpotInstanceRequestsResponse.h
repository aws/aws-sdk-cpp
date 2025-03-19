/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/CancelledSpotInstanceRequest.h>
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
  /**
   * <p>Contains the output of CancelSpotInstanceRequests.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelSpotInstanceRequestsResult">AWS
   * API Reference</a></p>
   */
  class CancelSpotInstanceRequestsResponse
  {
  public:
    AWS_EC2_API CancelSpotInstanceRequestsResponse() = default;
    AWS_EC2_API CancelSpotInstanceRequestsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CancelSpotInstanceRequestsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Spot Instance requests.</p>
     */
    inline const Aws::Vector<CancelledSpotInstanceRequest>& GetCancelledSpotInstanceRequests() const { return m_cancelledSpotInstanceRequests; }
    template<typename CancelledSpotInstanceRequestsT = Aws::Vector<CancelledSpotInstanceRequest>>
    void SetCancelledSpotInstanceRequests(CancelledSpotInstanceRequestsT&& value) { m_cancelledSpotInstanceRequestsHasBeenSet = true; m_cancelledSpotInstanceRequests = std::forward<CancelledSpotInstanceRequestsT>(value); }
    template<typename CancelledSpotInstanceRequestsT = Aws::Vector<CancelledSpotInstanceRequest>>
    CancelSpotInstanceRequestsResponse& WithCancelledSpotInstanceRequests(CancelledSpotInstanceRequestsT&& value) { SetCancelledSpotInstanceRequests(std::forward<CancelledSpotInstanceRequestsT>(value)); return *this;}
    template<typename CancelledSpotInstanceRequestsT = CancelledSpotInstanceRequest>
    CancelSpotInstanceRequestsResponse& AddCancelledSpotInstanceRequests(CancelledSpotInstanceRequestsT&& value) { m_cancelledSpotInstanceRequestsHasBeenSet = true; m_cancelledSpotInstanceRequests.emplace_back(std::forward<CancelledSpotInstanceRequestsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CancelSpotInstanceRequestsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CancelledSpotInstanceRequest> m_cancelledSpotInstanceRequests;
    bool m_cancelledSpotInstanceRequestsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
