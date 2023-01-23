/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/AuditFinding.h>
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
namespace IoT
{
namespace Model
{
  class ListAuditFindingsResult
  {
  public:
    AWS_IOT_API ListAuditFindingsResult();
    AWS_IOT_API ListAuditFindingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListAuditFindingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The findings (results) of the audit.</p>
     */
    inline const Aws::Vector<AuditFinding>& GetFindings() const{ return m_findings; }

    /**
     * <p>The findings (results) of the audit.</p>
     */
    inline void SetFindings(const Aws::Vector<AuditFinding>& value) { m_findings = value; }

    /**
     * <p>The findings (results) of the audit.</p>
     */
    inline void SetFindings(Aws::Vector<AuditFinding>&& value) { m_findings = std::move(value); }

    /**
     * <p>The findings (results) of the audit.</p>
     */
    inline ListAuditFindingsResult& WithFindings(const Aws::Vector<AuditFinding>& value) { SetFindings(value); return *this;}

    /**
     * <p>The findings (results) of the audit.</p>
     */
    inline ListAuditFindingsResult& WithFindings(Aws::Vector<AuditFinding>&& value) { SetFindings(std::move(value)); return *this;}

    /**
     * <p>The findings (results) of the audit.</p>
     */
    inline ListAuditFindingsResult& AddFindings(const AuditFinding& value) { m_findings.push_back(value); return *this; }

    /**
     * <p>The findings (results) of the audit.</p>
     */
    inline ListAuditFindingsResult& AddFindings(AuditFinding&& value) { m_findings.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline ListAuditFindingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline ListAuditFindingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline ListAuditFindingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AuditFinding> m_findings;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
