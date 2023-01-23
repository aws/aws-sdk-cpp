/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/DelegationMetadata.h>
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
namespace AuditManager
{
namespace Model
{
  class GetDelegationsResult
  {
  public:
    AWS_AUDITMANAGER_API GetDelegationsResult();
    AWS_AUDITMANAGER_API GetDelegationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API GetDelegationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The list of delegations that the <code>GetDelegations</code> API returned.
     * </p>
     */
    inline const Aws::Vector<DelegationMetadata>& GetDelegations() const{ return m_delegations; }

    /**
     * <p> The list of delegations that the <code>GetDelegations</code> API returned.
     * </p>
     */
    inline void SetDelegations(const Aws::Vector<DelegationMetadata>& value) { m_delegations = value; }

    /**
     * <p> The list of delegations that the <code>GetDelegations</code> API returned.
     * </p>
     */
    inline void SetDelegations(Aws::Vector<DelegationMetadata>&& value) { m_delegations = std::move(value); }

    /**
     * <p> The list of delegations that the <code>GetDelegations</code> API returned.
     * </p>
     */
    inline GetDelegationsResult& WithDelegations(const Aws::Vector<DelegationMetadata>& value) { SetDelegations(value); return *this;}

    /**
     * <p> The list of delegations that the <code>GetDelegations</code> API returned.
     * </p>
     */
    inline GetDelegationsResult& WithDelegations(Aws::Vector<DelegationMetadata>&& value) { SetDelegations(std::move(value)); return *this;}

    /**
     * <p> The list of delegations that the <code>GetDelegations</code> API returned.
     * </p>
     */
    inline GetDelegationsResult& AddDelegations(const DelegationMetadata& value) { m_delegations.push_back(value); return *this; }

    /**
     * <p> The list of delegations that the <code>GetDelegations</code> API returned.
     * </p>
     */
    inline GetDelegationsResult& AddDelegations(DelegationMetadata&& value) { m_delegations.push_back(std::move(value)); return *this; }


    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline GetDelegationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline GetDelegationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline GetDelegationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DelegationMetadata> m_delegations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
