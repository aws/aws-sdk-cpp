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
  class AWS_EC2_API CancelSpotFleetRequestsResponse
  {
  public:
    CancelSpotFleetRequestsResponse();
    CancelSpotFleetRequestsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CancelSpotFleetRequestsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the Spot Fleet requests that are successfully canceled.</p>
     */
    inline const Aws::Vector<CancelSpotFleetRequestsSuccessItem>& GetSuccessfulFleetRequests() const{ return m_successfulFleetRequests; }

    /**
     * <p>Information about the Spot Fleet requests that are successfully canceled.</p>
     */
    inline void SetSuccessfulFleetRequests(const Aws::Vector<CancelSpotFleetRequestsSuccessItem>& value) { m_successfulFleetRequests = value; }

    /**
     * <p>Information about the Spot Fleet requests that are successfully canceled.</p>
     */
    inline void SetSuccessfulFleetRequests(Aws::Vector<CancelSpotFleetRequestsSuccessItem>&& value) { m_successfulFleetRequests = std::move(value); }

    /**
     * <p>Information about the Spot Fleet requests that are successfully canceled.</p>
     */
    inline CancelSpotFleetRequestsResponse& WithSuccessfulFleetRequests(const Aws::Vector<CancelSpotFleetRequestsSuccessItem>& value) { SetSuccessfulFleetRequests(value); return *this;}

    /**
     * <p>Information about the Spot Fleet requests that are successfully canceled.</p>
     */
    inline CancelSpotFleetRequestsResponse& WithSuccessfulFleetRequests(Aws::Vector<CancelSpotFleetRequestsSuccessItem>&& value) { SetSuccessfulFleetRequests(std::move(value)); return *this;}

    /**
     * <p>Information about the Spot Fleet requests that are successfully canceled.</p>
     */
    inline CancelSpotFleetRequestsResponse& AddSuccessfulFleetRequests(const CancelSpotFleetRequestsSuccessItem& value) { m_successfulFleetRequests.push_back(value); return *this; }

    /**
     * <p>Information about the Spot Fleet requests that are successfully canceled.</p>
     */
    inline CancelSpotFleetRequestsResponse& AddSuccessfulFleetRequests(CancelSpotFleetRequestsSuccessItem&& value) { m_successfulFleetRequests.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the Spot Fleet requests that are not successfully
     * canceled.</p>
     */
    inline const Aws::Vector<CancelSpotFleetRequestsErrorItem>& GetUnsuccessfulFleetRequests() const{ return m_unsuccessfulFleetRequests; }

    /**
     * <p>Information about the Spot Fleet requests that are not successfully
     * canceled.</p>
     */
    inline void SetUnsuccessfulFleetRequests(const Aws::Vector<CancelSpotFleetRequestsErrorItem>& value) { m_unsuccessfulFleetRequests = value; }

    /**
     * <p>Information about the Spot Fleet requests that are not successfully
     * canceled.</p>
     */
    inline void SetUnsuccessfulFleetRequests(Aws::Vector<CancelSpotFleetRequestsErrorItem>&& value) { m_unsuccessfulFleetRequests = std::move(value); }

    /**
     * <p>Information about the Spot Fleet requests that are not successfully
     * canceled.</p>
     */
    inline CancelSpotFleetRequestsResponse& WithUnsuccessfulFleetRequests(const Aws::Vector<CancelSpotFleetRequestsErrorItem>& value) { SetUnsuccessfulFleetRequests(value); return *this;}

    /**
     * <p>Information about the Spot Fleet requests that are not successfully
     * canceled.</p>
     */
    inline CancelSpotFleetRequestsResponse& WithUnsuccessfulFleetRequests(Aws::Vector<CancelSpotFleetRequestsErrorItem>&& value) { SetUnsuccessfulFleetRequests(std::move(value)); return *this;}

    /**
     * <p>Information about the Spot Fleet requests that are not successfully
     * canceled.</p>
     */
    inline CancelSpotFleetRequestsResponse& AddUnsuccessfulFleetRequests(const CancelSpotFleetRequestsErrorItem& value) { m_unsuccessfulFleetRequests.push_back(value); return *this; }

    /**
     * <p>Information about the Spot Fleet requests that are not successfully
     * canceled.</p>
     */
    inline CancelSpotFleetRequestsResponse& AddUnsuccessfulFleetRequests(CancelSpotFleetRequestsErrorItem&& value) { m_unsuccessfulFleetRequests.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CancelSpotFleetRequestsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CancelSpotFleetRequestsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<CancelSpotFleetRequestsSuccessItem> m_successfulFleetRequests;

    Aws::Vector<CancelSpotFleetRequestsErrorItem> m_unsuccessfulFleetRequests;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
