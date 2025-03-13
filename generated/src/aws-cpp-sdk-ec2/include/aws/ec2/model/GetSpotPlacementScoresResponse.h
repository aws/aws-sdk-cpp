/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/SpotPlacementScore.h>
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
  class GetSpotPlacementScoresResponse
  {
  public:
    AWS_EC2_API GetSpotPlacementScoresResponse() = default;
    AWS_EC2_API GetSpotPlacementScoresResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetSpotPlacementScoresResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Spot placement score for the top 10 Regions or Availability Zones, scored
     * on a scale from 1 to 10. Each score&#x2028; reflects how likely it is that each
     * Region or Availability Zone will succeed at fulfilling the specified target
     * capacity&#x2028; <i>at the time of the Spot placement score request</i>. A score
     * of <code>10</code> means that your Spot capacity request is highly likely to
     * succeed in that Region or Availability Zone. </p> <p>If you request a Spot
     * placement score for Regions, a high score assumes that your fleet request will
     * be configured to use all Availability Zones and the
     * <code>capacity-optimized</code> allocation strategy. If you request a Spot
     * placement score for Availability Zones, a high score assumes that your fleet
     * request will be configured to use a single Availability Zone and the
     * <code>capacity-optimized</code> allocation strategy.</p> <p>Different&#x2028;
     * Regions or Availability Zones might return the same score.</p>  <p>The
     * Spot placement score serves as a recommendation only. No score guarantees that
     * your Spot request will be fully or partially fulfilled.</p> 
     */
    inline const Aws::Vector<SpotPlacementScore>& GetSpotPlacementScores() const { return m_spotPlacementScores; }
    template<typename SpotPlacementScoresT = Aws::Vector<SpotPlacementScore>>
    void SetSpotPlacementScores(SpotPlacementScoresT&& value) { m_spotPlacementScoresHasBeenSet = true; m_spotPlacementScores = std::forward<SpotPlacementScoresT>(value); }
    template<typename SpotPlacementScoresT = Aws::Vector<SpotPlacementScore>>
    GetSpotPlacementScoresResponse& WithSpotPlacementScores(SpotPlacementScoresT&& value) { SetSpotPlacementScores(std::forward<SpotPlacementScoresT>(value)); return *this;}
    template<typename SpotPlacementScoresT = SpotPlacementScore>
    GetSpotPlacementScoresResponse& AddSpotPlacementScores(SpotPlacementScoresT&& value) { m_spotPlacementScoresHasBeenSet = true; m_spotPlacementScores.emplace_back(std::forward<SpotPlacementScoresT>(value)); return *this; }
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
    GetSpotPlacementScoresResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetSpotPlacementScoresResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SpotPlacementScore> m_spotPlacementScores;
    bool m_spotPlacementScoresHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
