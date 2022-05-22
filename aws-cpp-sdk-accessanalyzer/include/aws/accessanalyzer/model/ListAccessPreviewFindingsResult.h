/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/AccessPreviewFinding.h>
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
namespace AccessAnalyzer
{
namespace Model
{
  class AWS_ACCESSANALYZER_API ListAccessPreviewFindingsResult
  {
  public:
    ListAccessPreviewFindingsResult();
    ListAccessPreviewFindingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListAccessPreviewFindingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of access preview findings that match the specified filter
     * criteria.</p>
     */
    inline const Aws::Vector<AccessPreviewFinding>& GetFindings() const{ return m_findings; }

    /**
     * <p>A list of access preview findings that match the specified filter
     * criteria.</p>
     */
    inline void SetFindings(const Aws::Vector<AccessPreviewFinding>& value) { m_findings = value; }

    /**
     * <p>A list of access preview findings that match the specified filter
     * criteria.</p>
     */
    inline void SetFindings(Aws::Vector<AccessPreviewFinding>&& value) { m_findings = std::move(value); }

    /**
     * <p>A list of access preview findings that match the specified filter
     * criteria.</p>
     */
    inline ListAccessPreviewFindingsResult& WithFindings(const Aws::Vector<AccessPreviewFinding>& value) { SetFindings(value); return *this;}

    /**
     * <p>A list of access preview findings that match the specified filter
     * criteria.</p>
     */
    inline ListAccessPreviewFindingsResult& WithFindings(Aws::Vector<AccessPreviewFinding>&& value) { SetFindings(std::move(value)); return *this;}

    /**
     * <p>A list of access preview findings that match the specified filter
     * criteria.</p>
     */
    inline ListAccessPreviewFindingsResult& AddFindings(const AccessPreviewFinding& value) { m_findings.push_back(value); return *this; }

    /**
     * <p>A list of access preview findings that match the specified filter
     * criteria.</p>
     */
    inline ListAccessPreviewFindingsResult& AddFindings(AccessPreviewFinding&& value) { m_findings.push_back(std::move(value)); return *this; }


    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline ListAccessPreviewFindingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline ListAccessPreviewFindingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline ListAccessPreviewFindingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AccessPreviewFinding> m_findings;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
