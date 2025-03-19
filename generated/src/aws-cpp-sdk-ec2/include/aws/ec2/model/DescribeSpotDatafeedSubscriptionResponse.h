/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/SpotDatafeedSubscription.h>
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
  /**
   * <p>Contains the output of DescribeSpotDatafeedSubscription.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotDatafeedSubscriptionResult">AWS
   * API Reference</a></p>
   */
  class DescribeSpotDatafeedSubscriptionResponse
  {
  public:
    AWS_EC2_API DescribeSpotDatafeedSubscriptionResponse() = default;
    AWS_EC2_API DescribeSpotDatafeedSubscriptionResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeSpotDatafeedSubscriptionResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Spot Instance data feed subscription.</p>
     */
    inline const SpotDatafeedSubscription& GetSpotDatafeedSubscription() const { return m_spotDatafeedSubscription; }
    template<typename SpotDatafeedSubscriptionT = SpotDatafeedSubscription>
    void SetSpotDatafeedSubscription(SpotDatafeedSubscriptionT&& value) { m_spotDatafeedSubscriptionHasBeenSet = true; m_spotDatafeedSubscription = std::forward<SpotDatafeedSubscriptionT>(value); }
    template<typename SpotDatafeedSubscriptionT = SpotDatafeedSubscription>
    DescribeSpotDatafeedSubscriptionResponse& WithSpotDatafeedSubscription(SpotDatafeedSubscriptionT&& value) { SetSpotDatafeedSubscription(std::forward<SpotDatafeedSubscriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeSpotDatafeedSubscriptionResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    SpotDatafeedSubscription m_spotDatafeedSubscription;
    bool m_spotDatafeedSubscriptionHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
