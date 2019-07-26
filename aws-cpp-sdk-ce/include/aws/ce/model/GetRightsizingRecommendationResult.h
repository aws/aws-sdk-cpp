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
#include <aws/ce/model/RightsizingRecommendationMetadata.h>
#include <aws/ce/model/RightsizingRecommendationSummary.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_COSTEXPLORER_API GetRightsizingRecommendationResult
  {
  public:
    GetRightsizingRecommendationResult();
    GetRightsizingRecommendationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetRightsizingRecommendationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information regarding this specific recommendation set.</p>
     */
    inline const RightsizingRecommendationMetadata& GetMetadata() const{ return m_metadata; }

    /**
     * <p>Information regarding this specific recommendation set.</p>
     */
    inline void SetMetadata(const RightsizingRecommendationMetadata& value) { m_metadata = value; }

    /**
     * <p>Information regarding this specific recommendation set.</p>
     */
    inline void SetMetadata(RightsizingRecommendationMetadata&& value) { m_metadata = std::move(value); }

    /**
     * <p>Information regarding this specific recommendation set.</p>
     */
    inline GetRightsizingRecommendationResult& WithMetadata(const RightsizingRecommendationMetadata& value) { SetMetadata(value); return *this;}

    /**
     * <p>Information regarding this specific recommendation set.</p>
     */
    inline GetRightsizingRecommendationResult& WithMetadata(RightsizingRecommendationMetadata&& value) { SetMetadata(std::move(value)); return *this;}


    /**
     * <p>Summary of this recommendation set.</p>
     */
    inline const RightsizingRecommendationSummary& GetSummary() const{ return m_summary; }

    /**
     * <p>Summary of this recommendation set.</p>
     */
    inline void SetSummary(const RightsizingRecommendationSummary& value) { m_summary = value; }

    /**
     * <p>Summary of this recommendation set.</p>
     */
    inline void SetSummary(RightsizingRecommendationSummary&& value) { m_summary = std::move(value); }

    /**
     * <p>Summary of this recommendation set.</p>
     */
    inline GetRightsizingRecommendationResult& WithSummary(const RightsizingRecommendationSummary& value) { SetSummary(value); return *this;}

    /**
     * <p>Summary of this recommendation set.</p>
     */
    inline GetRightsizingRecommendationResult& WithSummary(RightsizingRecommendationSummary&& value) { SetSummary(std::move(value)); return *this;}


    /**
     * <p>Recommendations to rightsize resources.</p>
     */
    inline const Aws::Vector<RightsizingRecommendation>& GetRightsizingRecommendations() const{ return m_rightsizingRecommendations; }

    /**
     * <p>Recommendations to rightsize resources.</p>
     */
    inline void SetRightsizingRecommendations(const Aws::Vector<RightsizingRecommendation>& value) { m_rightsizingRecommendations = value; }

    /**
     * <p>Recommendations to rightsize resources.</p>
     */
    inline void SetRightsizingRecommendations(Aws::Vector<RightsizingRecommendation>&& value) { m_rightsizingRecommendations = std::move(value); }

    /**
     * <p>Recommendations to rightsize resources.</p>
     */
    inline GetRightsizingRecommendationResult& WithRightsizingRecommendations(const Aws::Vector<RightsizingRecommendation>& value) { SetRightsizingRecommendations(value); return *this;}

    /**
     * <p>Recommendations to rightsize resources.</p>
     */
    inline GetRightsizingRecommendationResult& WithRightsizingRecommendations(Aws::Vector<RightsizingRecommendation>&& value) { SetRightsizingRecommendations(std::move(value)); return *this;}

    /**
     * <p>Recommendations to rightsize resources.</p>
     */
    inline GetRightsizingRecommendationResult& AddRightsizingRecommendations(const RightsizingRecommendation& value) { m_rightsizingRecommendations.push_back(value); return *this; }

    /**
     * <p>Recommendations to rightsize resources.</p>
     */
    inline GetRightsizingRecommendationResult& AddRightsizingRecommendations(RightsizingRecommendation&& value) { m_rightsizingRecommendations.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline GetRightsizingRecommendationResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline GetRightsizingRecommendationResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline GetRightsizingRecommendationResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    RightsizingRecommendationMetadata m_metadata;

    RightsizingRecommendationSummary m_summary;

    Aws::Vector<RightsizingRecommendation> m_rightsizingRecommendations;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
