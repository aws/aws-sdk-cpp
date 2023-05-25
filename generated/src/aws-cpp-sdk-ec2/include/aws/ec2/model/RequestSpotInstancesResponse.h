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
    AWS_EC2_API RequestSpotInstancesResponse();
    AWS_EC2_API RequestSpotInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API RequestSpotInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>One or more Spot Instance requests.</p>
     */
    inline const Aws::Vector<SpotInstanceRequest>& GetSpotInstanceRequests() const{ return m_spotInstanceRequests; }

    /**
     * <p>One or more Spot Instance requests.</p>
     */
    inline void SetSpotInstanceRequests(const Aws::Vector<SpotInstanceRequest>& value) { m_spotInstanceRequests = value; }

    /**
     * <p>One or more Spot Instance requests.</p>
     */
    inline void SetSpotInstanceRequests(Aws::Vector<SpotInstanceRequest>&& value) { m_spotInstanceRequests = std::move(value); }

    /**
     * <p>One or more Spot Instance requests.</p>
     */
    inline RequestSpotInstancesResponse& WithSpotInstanceRequests(const Aws::Vector<SpotInstanceRequest>& value) { SetSpotInstanceRequests(value); return *this;}

    /**
     * <p>One or more Spot Instance requests.</p>
     */
    inline RequestSpotInstancesResponse& WithSpotInstanceRequests(Aws::Vector<SpotInstanceRequest>&& value) { SetSpotInstanceRequests(std::move(value)); return *this;}

    /**
     * <p>One or more Spot Instance requests.</p>
     */
    inline RequestSpotInstancesResponse& AddSpotInstanceRequests(const SpotInstanceRequest& value) { m_spotInstanceRequests.push_back(value); return *this; }

    /**
     * <p>One or more Spot Instance requests.</p>
     */
    inline RequestSpotInstancesResponse& AddSpotInstanceRequests(SpotInstanceRequest&& value) { m_spotInstanceRequests.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline RequestSpotInstancesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline RequestSpotInstancesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<SpotInstanceRequest> m_spotInstanceRequests;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
