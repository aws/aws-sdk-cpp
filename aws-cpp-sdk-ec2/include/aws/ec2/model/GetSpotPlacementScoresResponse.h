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
    AWS_EC2_API GetSpotPlacementScoresResponse();
    AWS_EC2_API GetSpotPlacementScoresResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetSpotPlacementScoresResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline const Aws::Vector<SpotPlacementScore>& GetSpotPlacementScores() const{ return m_spotPlacementScores; }

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
    inline void SetSpotPlacementScores(const Aws::Vector<SpotPlacementScore>& value) { m_spotPlacementScores = value; }

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
    inline void SetSpotPlacementScores(Aws::Vector<SpotPlacementScore>&& value) { m_spotPlacementScores = std::move(value); }

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
    inline GetSpotPlacementScoresResponse& WithSpotPlacementScores(const Aws::Vector<SpotPlacementScore>& value) { SetSpotPlacementScores(value); return *this;}

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
    inline GetSpotPlacementScoresResponse& WithSpotPlacementScores(Aws::Vector<SpotPlacementScore>&& value) { SetSpotPlacementScores(std::move(value)); return *this;}

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
    inline GetSpotPlacementScoresResponse& AddSpotPlacementScores(const SpotPlacementScore& value) { m_spotPlacementScores.push_back(value); return *this; }

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
    inline GetSpotPlacementScoresResponse& AddSpotPlacementScores(SpotPlacementScore&& value) { m_spotPlacementScores.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline GetSpotPlacementScoresResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline GetSpotPlacementScoresResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline GetSpotPlacementScoresResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetSpotPlacementScoresResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetSpotPlacementScoresResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<SpotPlacementScore> m_spotPlacementScores;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
