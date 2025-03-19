/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/Subscription.h>
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
  class DescribeAwsNetworkPerformanceMetricSubscriptionsResponse
  {
  public:
    AWS_EC2_API DescribeAwsNetworkPerformanceMetricSubscriptionsResponse() = default;
    AWS_EC2_API DescribeAwsNetworkPerformanceMetricSubscriptionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeAwsNetworkPerformanceMetricSubscriptionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeAwsNetworkPerformanceMetricSubscriptionsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the current Infrastructure Performance subscriptions.</p>
     */
    inline const Aws::Vector<Subscription>& GetSubscriptions() const { return m_subscriptions; }
    template<typename SubscriptionsT = Aws::Vector<Subscription>>
    void SetSubscriptions(SubscriptionsT&& value) { m_subscriptionsHasBeenSet = true; m_subscriptions = std::forward<SubscriptionsT>(value); }
    template<typename SubscriptionsT = Aws::Vector<Subscription>>
    DescribeAwsNetworkPerformanceMetricSubscriptionsResponse& WithSubscriptions(SubscriptionsT&& value) { SetSubscriptions(std::forward<SubscriptionsT>(value)); return *this;}
    template<typename SubscriptionsT = Subscription>
    DescribeAwsNetworkPerformanceMetricSubscriptionsResponse& AddSubscriptions(SubscriptionsT&& value) { m_subscriptionsHasBeenSet = true; m_subscriptions.emplace_back(std::forward<SubscriptionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeAwsNetworkPerformanceMetricSubscriptionsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Subscription> m_subscriptions;
    bool m_subscriptionsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
