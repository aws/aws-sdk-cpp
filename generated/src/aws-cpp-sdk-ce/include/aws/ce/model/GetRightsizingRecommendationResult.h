/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/RightsizingRecommendationMetadata.h>
#include <aws/ce/model/RightsizingRecommendationSummary.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/RightsizingRecommendationConfiguration.h>
#include <aws/ce/model/RightsizingRecommendation.h>
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
  class GetRightsizingRecommendationResult
  {
  public:
    AWS_COSTEXPLORER_API GetRightsizingRecommendationResult() = default;
    AWS_COSTEXPLORER_API GetRightsizingRecommendationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetRightsizingRecommendationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information regarding this specific recommendation set.</p>
     */
    inline const RightsizingRecommendationMetadata& GetMetadata() const { return m_metadata; }
    template<typename MetadataT = RightsizingRecommendationMetadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = RightsizingRecommendationMetadata>
    GetRightsizingRecommendationResult& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summary of this recommendation set.</p>
     */
    inline const RightsizingRecommendationSummary& GetSummary() const { return m_summary; }
    template<typename SummaryT = RightsizingRecommendationSummary>
    void SetSummary(SummaryT&& value) { m_summaryHasBeenSet = true; m_summary = std::forward<SummaryT>(value); }
    template<typename SummaryT = RightsizingRecommendationSummary>
    GetRightsizingRecommendationResult& WithSummary(SummaryT&& value) { SetSummary(std::forward<SummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Recommendations to rightsize resources.</p>
     */
    inline const Aws::Vector<RightsizingRecommendation>& GetRightsizingRecommendations() const { return m_rightsizingRecommendations; }
    template<typename RightsizingRecommendationsT = Aws::Vector<RightsizingRecommendation>>
    void SetRightsizingRecommendations(RightsizingRecommendationsT&& value) { m_rightsizingRecommendationsHasBeenSet = true; m_rightsizingRecommendations = std::forward<RightsizingRecommendationsT>(value); }
    template<typename RightsizingRecommendationsT = Aws::Vector<RightsizingRecommendation>>
    GetRightsizingRecommendationResult& WithRightsizingRecommendations(RightsizingRecommendationsT&& value) { SetRightsizingRecommendations(std::forward<RightsizingRecommendationsT>(value)); return *this;}
    template<typename RightsizingRecommendationsT = RightsizingRecommendation>
    GetRightsizingRecommendationResult& AddRightsizingRecommendations(RightsizingRecommendationsT&& value) { m_rightsizingRecommendationsHasBeenSet = true; m_rightsizingRecommendations.emplace_back(std::forward<RightsizingRecommendationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    GetRightsizingRecommendationResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can use Configuration to customize recommendations across two attributes.
     * You can choose to view recommendations for instances within the same instance
     * families or across different instance families. You can also choose to view your
     * estimated savings that are associated with recommendations with consideration of
     * existing Savings Plans or RI benefits, or neither. </p>
     */
    inline const RightsizingRecommendationConfiguration& GetConfiguration() const { return m_configuration; }
    template<typename ConfigurationT = RightsizingRecommendationConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = RightsizingRecommendationConfiguration>
    GetRightsizingRecommendationResult& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRightsizingRecommendationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RightsizingRecommendationMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    RightsizingRecommendationSummary m_summary;
    bool m_summaryHasBeenSet = false;

    Aws::Vector<RightsizingRecommendation> m_rightsizingRecommendations;
    bool m_rightsizingRecommendationsHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    RightsizingRecommendationConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
