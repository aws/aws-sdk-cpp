/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ActiveInstance.h>
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
  class DescribeFleetInstancesResponse
  {
  public:
    AWS_EC2_API DescribeFleetInstancesResponse() = default;
    AWS_EC2_API DescribeFleetInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeFleetInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The running instances. This list is refreshed periodically and might be out
     * of date.</p>
     */
    inline const Aws::Vector<ActiveInstance>& GetActiveInstances() const { return m_activeInstances; }
    template<typename ActiveInstancesT = Aws::Vector<ActiveInstance>>
    void SetActiveInstances(ActiveInstancesT&& value) { m_activeInstancesHasBeenSet = true; m_activeInstances = std::forward<ActiveInstancesT>(value); }
    template<typename ActiveInstancesT = Aws::Vector<ActiveInstance>>
    DescribeFleetInstancesResponse& WithActiveInstances(ActiveInstancesT&& value) { SetActiveInstances(std::forward<ActiveInstancesT>(value)); return *this;}
    template<typename ActiveInstancesT = ActiveInstance>
    DescribeFleetInstancesResponse& AddActiveInstances(ActiveInstancesT&& value) { m_activeInstancesHasBeenSet = true; m_activeInstances.emplace_back(std::forward<ActiveInstancesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeFleetInstancesResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    DescribeFleetInstancesResponse& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeFleetInstancesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ActiveInstance> m_activeInstances;
    bool m_activeInstancesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
