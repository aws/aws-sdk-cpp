/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/health/model/AffectedEntity.h>
#include <aws/health/model/OrganizationAffectedEntitiesErrorItem.h>
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
namespace Health
{
namespace Model
{
  class DescribeAffectedEntitiesForOrganizationResult
  {
  public:
    AWS_HEALTH_API DescribeAffectedEntitiesForOrganizationResult() = default;
    AWS_HEALTH_API DescribeAffectedEntitiesForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTH_API DescribeAffectedEntitiesForOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A JSON set of elements including the <code>awsAccountId</code> and its
     * <code>entityArn</code>, <code>entityValue</code> and its <code>entityArn</code>,
     * <code>lastUpdatedTime</code>, and <code>statusCode</code>.</p>
     */
    inline const Aws::Vector<AffectedEntity>& GetEntities() const { return m_entities; }
    template<typename EntitiesT = Aws::Vector<AffectedEntity>>
    void SetEntities(EntitiesT&& value) { m_entitiesHasBeenSet = true; m_entities = std::forward<EntitiesT>(value); }
    template<typename EntitiesT = Aws::Vector<AffectedEntity>>
    DescribeAffectedEntitiesForOrganizationResult& WithEntities(EntitiesT&& value) { SetEntities(std::forward<EntitiesT>(value)); return *this;}
    template<typename EntitiesT = AffectedEntity>
    DescribeAffectedEntitiesForOrganizationResult& AddEntities(EntitiesT&& value) { m_entitiesHasBeenSet = true; m_entities.emplace_back(std::forward<EntitiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A JSON set of elements of the failed response, including the
     * <code>awsAccountId</code>, <code>errorMessage</code>, <code>errorName</code>,
     * and <code>eventArn</code>.</p>
     */
    inline const Aws::Vector<OrganizationAffectedEntitiesErrorItem>& GetFailedSet() const { return m_failedSet; }
    template<typename FailedSetT = Aws::Vector<OrganizationAffectedEntitiesErrorItem>>
    void SetFailedSet(FailedSetT&& value) { m_failedSetHasBeenSet = true; m_failedSet = std::forward<FailedSetT>(value); }
    template<typename FailedSetT = Aws::Vector<OrganizationAffectedEntitiesErrorItem>>
    DescribeAffectedEntitiesForOrganizationResult& WithFailedSet(FailedSetT&& value) { SetFailedSet(std::forward<FailedSetT>(value)); return *this;}
    template<typename FailedSetT = OrganizationAffectedEntitiesErrorItem>
    DescribeAffectedEntitiesForOrganizationResult& AddFailedSet(FailedSetT&& value) { m_failedSetHasBeenSet = true; m_failedSet.emplace_back(std::forward<FailedSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeAffectedEntitiesForOrganizationResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAffectedEntitiesForOrganizationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AffectedEntity> m_entities;
    bool m_entitiesHasBeenSet = false;

    Aws::Vector<OrganizationAffectedEntitiesErrorItem> m_failedSet;
    bool m_failedSetHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
