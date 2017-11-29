/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EC2_API CancelSpotInstanceRequestsResponse
  {
  public:
    CancelSpotInstanceRequestsResponse();
    CancelSpotInstanceRequestsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CancelSpotInstanceRequestsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>One or more Spot Instance requests.</p>
     */
    inline const Aws::Vector<CancelledSpotInstanceRequest>& GetCancelledSpotInstanceRequests() const{ return m_cancelledSpotInstanceRequests; }

    /**
     * <p>One or more Spot Instance requests.</p>
     */
    inline void SetCancelledSpotInstanceRequests(const Aws::Vector<CancelledSpotInstanceRequest>& value) { m_cancelledSpotInstanceRequests = value; }

    /**
     * <p>One or more Spot Instance requests.</p>
     */
    inline void SetCancelledSpotInstanceRequests(Aws::Vector<CancelledSpotInstanceRequest>&& value) { m_cancelledSpotInstanceRequests = std::move(value); }

    /**
     * <p>One or more Spot Instance requests.</p>
     */
    inline CancelSpotInstanceRequestsResponse& WithCancelledSpotInstanceRequests(const Aws::Vector<CancelledSpotInstanceRequest>& value) { SetCancelledSpotInstanceRequests(value); return *this;}

    /**
     * <p>One or more Spot Instance requests.</p>
     */
    inline CancelSpotInstanceRequestsResponse& WithCancelledSpotInstanceRequests(Aws::Vector<CancelledSpotInstanceRequest>&& value) { SetCancelledSpotInstanceRequests(std::move(value)); return *this;}

    /**
     * <p>One or more Spot Instance requests.</p>
     */
    inline CancelSpotInstanceRequestsResponse& AddCancelledSpotInstanceRequests(const CancelledSpotInstanceRequest& value) { m_cancelledSpotInstanceRequests.push_back(value); return *this; }

    /**
     * <p>One or more Spot Instance requests.</p>
     */
    inline CancelSpotInstanceRequestsResponse& AddCancelledSpotInstanceRequests(CancelledSpotInstanceRequest&& value) { m_cancelledSpotInstanceRequests.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CancelSpotInstanceRequestsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CancelSpotInstanceRequestsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<CancelledSpotInstanceRequest> m_cancelledSpotInstanceRequests;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
