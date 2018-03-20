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
  class AWS_COSTEXPLORER_API GetReservationPurchaseRecommendationResult
  {
  public:
    GetReservationPurchaseRecommendationResult();
    GetReservationPurchaseRecommendationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetReservationPurchaseRecommendationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about this specific recommendation call, such as the time stamp
     * for when Cost Explorer generated this recommendation.</p>
     */
    inline const ReservationPurchaseRecommendationMetadata& GetMetadata() const{ return m_metadata; }

    /**
     * <p>Information about this specific recommendation call, such as the time stamp
     * for when Cost Explorer generated this recommendation.</p>
     */
    inline void SetMetadata(const ReservationPurchaseRecommendationMetadata& value) { m_metadata = value; }

    /**
     * <p>Information about this specific recommendation call, such as the time stamp
     * for when Cost Explorer generated this recommendation.</p>
     */
    inline void SetMetadata(ReservationPurchaseRecommendationMetadata&& value) { m_metadata = std::move(value); }

    /**
     * <p>Information about this specific recommendation call, such as the time stamp
     * for when Cost Explorer generated this recommendation.</p>
     */
    inline GetReservationPurchaseRecommendationResult& WithMetadata(const ReservationPurchaseRecommendationMetadata& value) { SetMetadata(value); return *this;}

    /**
     * <p>Information about this specific recommendation call, such as the time stamp
     * for when Cost Explorer generated this recommendation.</p>
     */
    inline GetReservationPurchaseRecommendationResult& WithMetadata(ReservationPurchaseRecommendationMetadata&& value) { SetMetadata(std::move(value)); return *this;}


    /**
     * <p>Recommendations for reservations to purchase.</p>
     */
    inline const Aws::Vector<ReservationPurchaseRecommendation>& GetRecommendations() const{ return m_recommendations; }

    /**
     * <p>Recommendations for reservations to purchase.</p>
     */
    inline void SetRecommendations(const Aws::Vector<ReservationPurchaseRecommendation>& value) { m_recommendations = value; }

    /**
     * <p>Recommendations for reservations to purchase.</p>
     */
    inline void SetRecommendations(Aws::Vector<ReservationPurchaseRecommendation>&& value) { m_recommendations = std::move(value); }

    /**
     * <p>Recommendations for reservations to purchase.</p>
     */
    inline GetReservationPurchaseRecommendationResult& WithRecommendations(const Aws::Vector<ReservationPurchaseRecommendation>& value) { SetRecommendations(value); return *this;}

    /**
     * <p>Recommendations for reservations to purchase.</p>
     */
    inline GetReservationPurchaseRecommendationResult& WithRecommendations(Aws::Vector<ReservationPurchaseRecommendation>&& value) { SetRecommendations(std::move(value)); return *this;}

    /**
     * <p>Recommendations for reservations to purchase.</p>
     */
    inline GetReservationPurchaseRecommendationResult& AddRecommendations(const ReservationPurchaseRecommendation& value) { m_recommendations.push_back(value); return *this; }

    /**
     * <p>Recommendations for reservations to purchase.</p>
     */
    inline GetReservationPurchaseRecommendationResult& AddRecommendations(ReservationPurchaseRecommendation&& value) { m_recommendations.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token for the next set of retrievable results.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The pagination token for the next set of retrievable results.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The pagination token for the next set of retrievable results.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The pagination token for the next set of retrievable results.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The pagination token for the next set of retrievable results.</p>
     */
    inline GetReservationPurchaseRecommendationResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The pagination token for the next set of retrievable results.</p>
     */
    inline GetReservationPurchaseRecommendationResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token for the next set of retrievable results.</p>
     */
    inline GetReservationPurchaseRecommendationResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    ReservationPurchaseRecommendationMetadata m_metadata;

    Aws::Vector<ReservationPurchaseRecommendation> m_recommendations;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
