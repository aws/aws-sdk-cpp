/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ConnectionNotification.h>
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
  class DescribeVpcEndpointConnectionNotificationsResponse
  {
  public:
    AWS_EC2_API DescribeVpcEndpointConnectionNotificationsResponse() = default;
    AWS_EC2_API DescribeVpcEndpointConnectionNotificationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeVpcEndpointConnectionNotificationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The notifications.</p>
     */
    inline const Aws::Vector<ConnectionNotification>& GetConnectionNotificationSet() const { return m_connectionNotificationSet; }
    template<typename ConnectionNotificationSetT = Aws::Vector<ConnectionNotification>>
    void SetConnectionNotificationSet(ConnectionNotificationSetT&& value) { m_connectionNotificationSetHasBeenSet = true; m_connectionNotificationSet = std::forward<ConnectionNotificationSetT>(value); }
    template<typename ConnectionNotificationSetT = Aws::Vector<ConnectionNotification>>
    DescribeVpcEndpointConnectionNotificationsResponse& WithConnectionNotificationSet(ConnectionNotificationSetT&& value) { SetConnectionNotificationSet(std::forward<ConnectionNotificationSetT>(value)); return *this;}
    template<typename ConnectionNotificationSetT = ConnectionNotification>
    DescribeVpcEndpointConnectionNotificationsResponse& AddConnectionNotificationSet(ConnectionNotificationSetT&& value) { m_connectionNotificationSetHasBeenSet = true; m_connectionNotificationSet.emplace_back(std::forward<ConnectionNotificationSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeVpcEndpointConnectionNotificationsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeVpcEndpointConnectionNotificationsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConnectionNotification> m_connectionNotificationSet;
    bool m_connectionNotificationSetHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
