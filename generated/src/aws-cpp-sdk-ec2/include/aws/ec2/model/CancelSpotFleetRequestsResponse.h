/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/CancelSpotFleetRequestsSuccessItem.h>
#include <aws/ec2/model/CancelSpotFleetRequestsErrorItem.h>
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
   * <p>Contains the output of CancelSpotFleetRequests.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelSpotFleetRequestsResponse">AWS
   * API Reference</a></p>
   */
  class CancelSpotFleetRequestsResponse
  {
  public:
    AWS_EC2_API CancelSpotFleetRequestsResponse() = default;
    AWS_EC2_API CancelSpotFleetRequestsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CancelSpotFleetRequestsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the Spot Fleet requests that are successfully canceled.</p>
     */
    inline const Aws::Vector<CancelSpotFleetRequestsSuccessItem>& GetSuccessfulFleetRequests() const { return m_successfulFleetRequests; }
    template<typename SuccessfulFleetRequestsT = Aws::Vector<CancelSpotFleetRequestsSuccessItem>>
    void SetSuccessfulFleetRequests(SuccessfulFleetRequestsT&& value) { m_successfulFleetRequestsHasBeenSet = true; m_successfulFleetRequests = std::forward<SuccessfulFleetRequestsT>(value); }
    template<typename SuccessfulFleetRequestsT = Aws::Vector<CancelSpotFleetRequestsSuccessItem>>
    CancelSpotFleetRequestsResponse& WithSuccessfulFleetRequests(SuccessfulFleetRequestsT&& value) { SetSuccessfulFleetRequests(std::forward<SuccessfulFleetRequestsT>(value)); return *this;}
    template<typename SuccessfulFleetRequestsT = CancelSpotFleetRequestsSuccessItem>
    CancelSpotFleetRequestsResponse& AddSuccessfulFleetRequests(SuccessfulFleetRequestsT&& value) { m_successfulFleetRequestsHasBeenSet = true; m_successfulFleetRequests.emplace_back(std::forward<SuccessfulFleetRequestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the Spot Fleet requests that are not successfully
     * canceled.</p>
     */
    inline const Aws::Vector<CancelSpotFleetRequestsErrorItem>& GetUnsuccessfulFleetRequests() const { return m_unsuccessfulFleetRequests; }
    template<typename UnsuccessfulFleetRequestsT = Aws::Vector<CancelSpotFleetRequestsErrorItem>>
    void SetUnsuccessfulFleetRequests(UnsuccessfulFleetRequestsT&& value) { m_unsuccessfulFleetRequestsHasBeenSet = true; m_unsuccessfulFleetRequests = std::forward<UnsuccessfulFleetRequestsT>(value); }
    template<typename UnsuccessfulFleetRequestsT = Aws::Vector<CancelSpotFleetRequestsErrorItem>>
    CancelSpotFleetRequestsResponse& WithUnsuccessfulFleetRequests(UnsuccessfulFleetRequestsT&& value) { SetUnsuccessfulFleetRequests(std::forward<UnsuccessfulFleetRequestsT>(value)); return *this;}
    template<typename UnsuccessfulFleetRequestsT = CancelSpotFleetRequestsErrorItem>
    CancelSpotFleetRequestsResponse& AddUnsuccessfulFleetRequests(UnsuccessfulFleetRequestsT&& value) { m_unsuccessfulFleetRequestsHasBeenSet = true; m_unsuccessfulFleetRequests.emplace_back(std::forward<UnsuccessfulFleetRequestsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CancelSpotFleetRequestsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CancelSpotFleetRequestsSuccessItem> m_successfulFleetRequests;
    bool m_successfulFleetRequestsHasBeenSet = false;

    Aws::Vector<CancelSpotFleetRequestsErrorItem> m_unsuccessfulFleetRequests;
    bool m_unsuccessfulFleetRequestsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
