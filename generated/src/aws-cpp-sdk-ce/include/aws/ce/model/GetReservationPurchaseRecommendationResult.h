/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/ReservationPurchaseRecommendationMetadata.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/ReservationPurchaseRecommendation.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CostExplorer
{
namespace Model
{
  class GetReservationPurchaseRecommendationResult
  {
  public:
    AWS_COSTEXPLORER_API GetReservationPurchaseRecommendationResult() = default;
    AWS_COSTEXPLORER_API GetReservationPurchaseRecommendationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetReservationPurchaseRecommendationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about this specific recommendation call, such as the time stamp
     * for when Cost Explorer generated this recommendation.</p>
     */
    inline const ReservationPurchaseRecommendationMetadata& GetMetadata() const { return m_metadata; }
    template<typename MetadataT = ReservationPurchaseRecommendationMetadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = ReservationPurchaseRecommendationMetadata>
    GetReservationPurchaseRecommendationResult& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Recommendations for reservations to purchase.</p>
     */
    inline const Aws::Vector<ReservationPurchaseRecommendation>& GetRecommendations() const { return m_recommendations; }
    template<typename RecommendationsT = Aws::Vector<ReservationPurchaseRecommendation>>
    void SetRecommendations(RecommendationsT&& value) { m_recommendationsHasBeenSet = true; m_recommendations = std::forward<RecommendationsT>(value); }
    template<typename RecommendationsT = Aws::Vector<ReservationPurchaseRecommendation>>
    GetReservationPurchaseRecommendationResult& WithRecommendations(RecommendationsT&& value) { SetRecommendations(std::forward<RecommendationsT>(value)); return *this;}
    template<typename RecommendationsT = ReservationPurchaseRecommendation>
    GetReservationPurchaseRecommendationResult& AddRecommendations(RecommendationsT&& value) { m_recommendationsHasBeenSet = true; m_recommendations.emplace_back(std::forward<RecommendationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token for the next set of retrievable results.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    GetReservationPurchaseRecommendationResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetReservationPurchaseRecommendationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ReservationPurchaseRecommendationMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::Vector<ReservationPurchaseRecommendation> m_recommendations;
    bool m_recommendationsHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
