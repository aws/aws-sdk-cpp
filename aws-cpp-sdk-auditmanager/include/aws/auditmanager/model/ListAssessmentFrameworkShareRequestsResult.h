/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/AssessmentFrameworkShareRequest.h>
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
  class ListAssessmentFrameworkShareRequestsResult
  {
  public:
    AWS_AUDITMANAGER_API ListAssessmentFrameworkShareRequestsResult();
    AWS_AUDITMANAGER_API ListAssessmentFrameworkShareRequestsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API ListAssessmentFrameworkShareRequestsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The list of share requests that the
     * <code>ListAssessmentFrameworkShareRequests</code> API returned. </p>
     */
    inline const Aws::Vector<AssessmentFrameworkShareRequest>& GetAssessmentFrameworkShareRequests() const{ return m_assessmentFrameworkShareRequests; }

    /**
     * <p> The list of share requests that the
     * <code>ListAssessmentFrameworkShareRequests</code> API returned. </p>
     */
    inline void SetAssessmentFrameworkShareRequests(const Aws::Vector<AssessmentFrameworkShareRequest>& value) { m_assessmentFrameworkShareRequests = value; }

    /**
     * <p> The list of share requests that the
     * <code>ListAssessmentFrameworkShareRequests</code> API returned. </p>
     */
    inline void SetAssessmentFrameworkShareRequests(Aws::Vector<AssessmentFrameworkShareRequest>&& value) { m_assessmentFrameworkShareRequests = std::move(value); }

    /**
     * <p> The list of share requests that the
     * <code>ListAssessmentFrameworkShareRequests</code> API returned. </p>
     */
    inline ListAssessmentFrameworkShareRequestsResult& WithAssessmentFrameworkShareRequests(const Aws::Vector<AssessmentFrameworkShareRequest>& value) { SetAssessmentFrameworkShareRequests(value); return *this;}

    /**
     * <p> The list of share requests that the
     * <code>ListAssessmentFrameworkShareRequests</code> API returned. </p>
     */
    inline ListAssessmentFrameworkShareRequestsResult& WithAssessmentFrameworkShareRequests(Aws::Vector<AssessmentFrameworkShareRequest>&& value) { SetAssessmentFrameworkShareRequests(std::move(value)); return *this;}

    /**
     * <p> The list of share requests that the
     * <code>ListAssessmentFrameworkShareRequests</code> API returned. </p>
     */
    inline ListAssessmentFrameworkShareRequestsResult& AddAssessmentFrameworkShareRequests(const AssessmentFrameworkShareRequest& value) { m_assessmentFrameworkShareRequests.push_back(value); return *this; }

    /**
     * <p> The list of share requests that the
     * <code>ListAssessmentFrameworkShareRequests</code> API returned. </p>
     */
    inline ListAssessmentFrameworkShareRequestsResult& AddAssessmentFrameworkShareRequests(AssessmentFrameworkShareRequest&& value) { m_assessmentFrameworkShareRequests.push_back(std::move(value)); return *this; }


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
    inline ListAssessmentFrameworkShareRequestsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListAssessmentFrameworkShareRequestsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListAssessmentFrameworkShareRequestsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AssessmentFrameworkShareRequest> m_assessmentFrameworkShareRequests;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
