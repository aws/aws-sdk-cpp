/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/SpotPrice.h>
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
   * <p>Contains the output of DescribeSpotPriceHistory.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotPriceHistoryResult">AWS
   * API Reference</a></p>
   */
  class DescribeSpotPriceHistoryResponse
  {
  public:
    AWS_EC2_API DescribeSpotPriceHistoryResponse() = default;
    AWS_EC2_API DescribeSpotPriceHistoryResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeSpotPriceHistoryResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is an empty string (<code>""</code>) or <code>null</code> when there are
     * no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeSpotPriceHistoryResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The historical Spot prices.</p>
     */
    inline const Aws::Vector<SpotPrice>& GetSpotPriceHistory() const { return m_spotPriceHistory; }
    template<typename SpotPriceHistoryT = Aws::Vector<SpotPrice>>
    void SetSpotPriceHistory(SpotPriceHistoryT&& value) { m_spotPriceHistoryHasBeenSet = true; m_spotPriceHistory = std::forward<SpotPriceHistoryT>(value); }
    template<typename SpotPriceHistoryT = Aws::Vector<SpotPrice>>
    DescribeSpotPriceHistoryResponse& WithSpotPriceHistory(SpotPriceHistoryT&& value) { SetSpotPriceHistory(std::forward<SpotPriceHistoryT>(value)); return *this;}
    template<typename SpotPriceHistoryT = SpotPrice>
    DescribeSpotPriceHistoryResponse& AddSpotPriceHistory(SpotPriceHistoryT&& value) { m_spotPriceHistoryHasBeenSet = true; m_spotPriceHistory.emplace_back(std::forward<SpotPriceHistoryT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeSpotPriceHistoryResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<SpotPrice> m_spotPriceHistory;
    bool m_spotPriceHistoryHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
