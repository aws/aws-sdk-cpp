/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/SavingsPlansPurchaseRecommendationMetadata.h>
#include <aws/ce/model/SavingsPlansPurchaseRecommendation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetSavingsPlansPurchaseRecommendationResult
  {
  public:
    AWS_COSTEXPLORER_API GetSavingsPlansPurchaseRecommendationResult() = default;
    AWS_COSTEXPLORER_API GetSavingsPlansPurchaseRecommendationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetSavingsPlansPurchaseRecommendationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information that regards this specific recommendation set.</p>
     */
    inline const SavingsPlansPurchaseRecommendationMetadata& GetMetadata() const { return m_metadata; }
    template<typename MetadataT = SavingsPlansPurchaseRecommendationMetadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = SavingsPlansPurchaseRecommendationMetadata>
    GetSavingsPlansPurchaseRecommendationResult& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains your request parameters, Savings Plan Recommendations Summary, and
     * Details.</p>
     */
    inline const SavingsPlansPurchaseRecommendation& GetSavingsPlansPurchaseRecommendation() const { return m_savingsPlansPurchaseRecommendation; }
    template<typename SavingsPlansPurchaseRecommendationT = SavingsPlansPurchaseRecommendation>
    void SetSavingsPlansPurchaseRecommendation(SavingsPlansPurchaseRecommendationT&& value) { m_savingsPlansPurchaseRecommendationHasBeenSet = true; m_savingsPlansPurchaseRecommendation = std::forward<SavingsPlansPurchaseRecommendationT>(value); }
    template<typename SavingsPlansPurchaseRecommendationT = SavingsPlansPurchaseRecommendation>
    GetSavingsPlansPurchaseRecommendationResult& WithSavingsPlansPurchaseRecommendation(SavingsPlansPurchaseRecommendationT&& value) { SetSavingsPlansPurchaseRecommendation(std::forward<SavingsPlansPurchaseRecommendationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    GetSavingsPlansPurchaseRecommendationResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSavingsPlansPurchaseRecommendationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SavingsPlansPurchaseRecommendationMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    SavingsPlansPurchaseRecommendation m_savingsPlansPurchaseRecommendation;
    bool m_savingsPlansPurchaseRecommendationHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
