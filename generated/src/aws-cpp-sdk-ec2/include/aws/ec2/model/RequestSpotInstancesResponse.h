/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/SpotInstanceRequest.h>
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
   * <p>Contains the output of RequestSpotInstances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RequestSpotInstancesResult">AWS
   * API Reference</a></p>
   */
  class RequestSpotInstancesResponse
  {
  public:
    AWS_EC2_API RequestSpotInstancesResponse() = default;
    AWS_EC2_API RequestSpotInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API RequestSpotInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Spot Instance requests.</p>
     */
    inline const Aws::Vector<SpotInstanceRequest>& GetSpotInstanceRequests() const { return m_spotInstanceRequests; }
    template<typename SpotInstanceRequestsT = Aws::Vector<SpotInstanceRequest>>
    void SetSpotInstanceRequests(SpotInstanceRequestsT&& value) { m_spotInstanceRequestsHasBeenSet = true; m_spotInstanceRequests = std::forward<SpotInstanceRequestsT>(value); }
    template<typename SpotInstanceRequestsT = Aws::Vector<SpotInstanceRequest>>
    RequestSpotInstancesResponse& WithSpotInstanceRequests(SpotInstanceRequestsT&& value) { SetSpotInstanceRequests(std::forward<SpotInstanceRequestsT>(value)); return *this;}
    template<typename SpotInstanceRequestsT = SpotInstanceRequest>
    RequestSpotInstancesResponse& AddSpotInstanceRequests(SpotInstanceRequestsT&& value) { m_spotInstanceRequestsHasBeenSet = true; m_spotInstanceRequests.emplace_back(std::forward<SpotInstanceRequestsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    RequestSpotInstancesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SpotInstanceRequest> m_spotInstanceRequests;
    bool m_spotInstanceRequestsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
