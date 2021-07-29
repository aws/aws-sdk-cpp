/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53-recovery-readiness/model/Recommendation.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{
  class AWS_ROUTE53RECOVERYREADINESS_API GetArchitectureRecommendationsResult
  {
  public:
    GetArchitectureRecommendationsResult();
    GetArchitectureRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetArchitectureRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The time a Recovery Group was last assessed for recommendations in UTC ISO-8601
     * format.
     */
    inline const Aws::Utils::DateTime& GetLastAuditTimestamp() const{ return m_lastAuditTimestamp; }

    /**
     * The time a Recovery Group was last assessed for recommendations in UTC ISO-8601
     * format.
     */
    inline void SetLastAuditTimestamp(const Aws::Utils::DateTime& value) { m_lastAuditTimestamp = value; }

    /**
     * The time a Recovery Group was last assessed for recommendations in UTC ISO-8601
     * format.
     */
    inline void SetLastAuditTimestamp(Aws::Utils::DateTime&& value) { m_lastAuditTimestamp = std::move(value); }

    /**
     * The time a Recovery Group was last assessed for recommendations in UTC ISO-8601
     * format.
     */
    inline GetArchitectureRecommendationsResult& WithLastAuditTimestamp(const Aws::Utils::DateTime& value) { SetLastAuditTimestamp(value); return *this;}

    /**
     * The time a Recovery Group was last assessed for recommendations in UTC ISO-8601
     * format.
     */
    inline GetArchitectureRecommendationsResult& WithLastAuditTimestamp(Aws::Utils::DateTime&& value) { SetLastAuditTimestamp(std::move(value)); return *this;}


    /**
     * A token that can be used to resume pagination from the end of the collection
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * A token that can be used to resume pagination from the end of the collection
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * A token that can be used to resume pagination from the end of the collection
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * A token that can be used to resume pagination from the end of the collection
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * A token that can be used to resume pagination from the end of the collection
     */
    inline GetArchitectureRecommendationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A token that can be used to resume pagination from the end of the collection
     */
    inline GetArchitectureRecommendationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * A token that can be used to resume pagination from the end of the collection
     */
    inline GetArchitectureRecommendationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * A list of recommendations for the customer's application
     */
    inline const Aws::Vector<Recommendation>& GetRecommendations() const{ return m_recommendations; }

    /**
     * A list of recommendations for the customer's application
     */
    inline void SetRecommendations(const Aws::Vector<Recommendation>& value) { m_recommendations = value; }

    /**
     * A list of recommendations for the customer's application
     */
    inline void SetRecommendations(Aws::Vector<Recommendation>&& value) { m_recommendations = std::move(value); }

    /**
     * A list of recommendations for the customer's application
     */
    inline GetArchitectureRecommendationsResult& WithRecommendations(const Aws::Vector<Recommendation>& value) { SetRecommendations(value); return *this;}

    /**
     * A list of recommendations for the customer's application
     */
    inline GetArchitectureRecommendationsResult& WithRecommendations(Aws::Vector<Recommendation>&& value) { SetRecommendations(std::move(value)); return *this;}

    /**
     * A list of recommendations for the customer's application
     */
    inline GetArchitectureRecommendationsResult& AddRecommendations(const Recommendation& value) { m_recommendations.push_back(value); return *this; }

    /**
     * A list of recommendations for the customer's application
     */
    inline GetArchitectureRecommendationsResult& AddRecommendations(Recommendation&& value) { m_recommendations.push_back(std::move(value)); return *this; }

  private:

    Aws::Utils::DateTime m_lastAuditTimestamp;

    Aws::String m_nextToken;

    Aws::Vector<Recommendation> m_recommendations;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
