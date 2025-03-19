/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/SpotFleetRequestConfig.h>
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
   * <p>Contains the output of DescribeSpotFleetRequests.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotFleetRequestsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeSpotFleetRequestsResponse
  {
  public:
    AWS_EC2_API DescribeSpotFleetRequestsResponse() = default;
    AWS_EC2_API DescribeSpotFleetRequestsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeSpotFleetRequestsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeSpotFleetRequestsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the configuration of your Spot Fleet.</p>
     */
    inline const Aws::Vector<SpotFleetRequestConfig>& GetSpotFleetRequestConfigs() const { return m_spotFleetRequestConfigs; }
    template<typename SpotFleetRequestConfigsT = Aws::Vector<SpotFleetRequestConfig>>
    void SetSpotFleetRequestConfigs(SpotFleetRequestConfigsT&& value) { m_spotFleetRequestConfigsHasBeenSet = true; m_spotFleetRequestConfigs = std::forward<SpotFleetRequestConfigsT>(value); }
    template<typename SpotFleetRequestConfigsT = Aws::Vector<SpotFleetRequestConfig>>
    DescribeSpotFleetRequestsResponse& WithSpotFleetRequestConfigs(SpotFleetRequestConfigsT&& value) { SetSpotFleetRequestConfigs(std::forward<SpotFleetRequestConfigsT>(value)); return *this;}
    template<typename SpotFleetRequestConfigsT = SpotFleetRequestConfig>
    DescribeSpotFleetRequestsResponse& AddSpotFleetRequestConfigs(SpotFleetRequestConfigsT&& value) { m_spotFleetRequestConfigsHasBeenSet = true; m_spotFleetRequestConfigs.emplace_back(std::forward<SpotFleetRequestConfigsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeSpotFleetRequestsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<SpotFleetRequestConfig> m_spotFleetRequestConfigs;
    bool m_spotFleetRequestConfigsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
