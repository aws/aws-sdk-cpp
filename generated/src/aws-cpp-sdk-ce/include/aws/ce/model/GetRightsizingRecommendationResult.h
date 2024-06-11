﻿/**
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
    AWS_COSTEXPLORER_API GetRightsizingRecommendationResult();
    AWS_COSTEXPLORER_API GetRightsizingRecommendationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetRightsizingRecommendationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information regarding this specific recommendation set.</p>
     */
    inline const RightsizingRecommendationMetadata& GetMetadata() const{ return m_metadata; }
    inline void SetMetadata(const RightsizingRecommendationMetadata& value) { m_metadata = value; }
    inline void SetMetadata(RightsizingRecommendationMetadata&& value) { m_metadata = std::move(value); }
    inline GetRightsizingRecommendationResult& WithMetadata(const RightsizingRecommendationMetadata& value) { SetMetadata(value); return *this;}
    inline GetRightsizingRecommendationResult& WithMetadata(RightsizingRecommendationMetadata&& value) { SetMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summary of this recommendation set.</p>
     */
    inline const RightsizingRecommendationSummary& GetSummary() const{ return m_summary; }
    inline void SetSummary(const RightsizingRecommendationSummary& value) { m_summary = value; }
    inline void SetSummary(RightsizingRecommendationSummary&& value) { m_summary = std::move(value); }
    inline GetRightsizingRecommendationResult& WithSummary(const RightsizingRecommendationSummary& value) { SetSummary(value); return *this;}
    inline GetRightsizingRecommendationResult& WithSummary(RightsizingRecommendationSummary&& value) { SetSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Recommendations to rightsize resources.</p>
     */
    inline const Aws::Vector<RightsizingRecommendation>& GetRightsizingRecommendations() const{ return m_rightsizingRecommendations; }
    inline void SetRightsizingRecommendations(const Aws::Vector<RightsizingRecommendation>& value) { m_rightsizingRecommendations = value; }
    inline void SetRightsizingRecommendations(Aws::Vector<RightsizingRecommendation>&& value) { m_rightsizingRecommendations = std::move(value); }
    inline GetRightsizingRecommendationResult& WithRightsizingRecommendations(const Aws::Vector<RightsizingRecommendation>& value) { SetRightsizingRecommendations(value); return *this;}
    inline GetRightsizingRecommendationResult& WithRightsizingRecommendations(Aws::Vector<RightsizingRecommendation>&& value) { SetRightsizingRecommendations(std::move(value)); return *this;}
    inline GetRightsizingRecommendationResult& AddRightsizingRecommendations(const RightsizingRecommendation& value) { m_rightsizingRecommendations.push_back(value); return *this; }
    inline GetRightsizingRecommendationResult& AddRightsizingRecommendations(RightsizingRecommendation&& value) { m_rightsizingRecommendations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }
    inline GetRightsizingRecommendationResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline GetRightsizingRecommendationResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline GetRightsizingRecommendationResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can use Configuration to customize recommendations across two attributes.
     * You can choose to view recommendations for instances within the same instance
     * families or across different instance families. You can also choose to view your
     * estimated savings that are associated with recommendations with consideration of
     * existing Savings Plans or RI benefits, or neither. </p>
     */
    inline const RightsizingRecommendationConfiguration& GetConfiguration() const{ return m_configuration; }
    inline void SetConfiguration(const RightsizingRecommendationConfiguration& value) { m_configuration = value; }
    inline void SetConfiguration(RightsizingRecommendationConfiguration&& value) { m_configuration = std::move(value); }
    inline GetRightsizingRecommendationResult& WithConfiguration(const RightsizingRecommendationConfiguration& value) { SetConfiguration(value); return *this;}
    inline GetRightsizingRecommendationResult& WithConfiguration(RightsizingRecommendationConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRightsizingRecommendationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRightsizingRecommendationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRightsizingRecommendationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    RightsizingRecommendationMetadata m_metadata;

    RightsizingRecommendationSummary m_summary;

    Aws::Vector<RightsizingRecommendation> m_rightsizingRecommendations;

    Aws::String m_nextPageToken;

    RightsizingRecommendationConfiguration m_configuration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
