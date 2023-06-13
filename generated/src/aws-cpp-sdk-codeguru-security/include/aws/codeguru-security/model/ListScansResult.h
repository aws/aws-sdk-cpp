/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codeguru-security/model/ScanSummary.h>
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
namespace CodeGuruSecurity
{
namespace Model
{
  class ListScansResult
  {
  public:
    AWS_CODEGURUSECURITY_API ListScansResult();
    AWS_CODEGURUSECURITY_API ListScansResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUSECURITY_API ListScansResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A pagination token. You can use this in future calls to
     * <code>ListScans</code> to continue listing results after the current page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token. You can use this in future calls to
     * <code>ListScans</code> to continue listing results after the current page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token. You can use this in future calls to
     * <code>ListScans</code> to continue listing results after the current page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token. You can use this in future calls to
     * <code>ListScans</code> to continue listing results after the current page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token. You can use this in future calls to
     * <code>ListScans</code> to continue listing results after the current page.</p>
     */
    inline ListScansResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token. You can use this in future calls to
     * <code>ListScans</code> to continue listing results after the current page.</p>
     */
    inline ListScansResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token. You can use this in future calls to
     * <code>ListScans</code> to continue listing results after the current page.</p>
     */
    inline ListScansResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of <code>ScanSummary</code> objects with information about all scans
     * in an account.</p>
     */
    inline const Aws::Vector<ScanSummary>& GetSummaries() const{ return m_summaries; }

    /**
     * <p>A list of <code>ScanSummary</code> objects with information about all scans
     * in an account.</p>
     */
    inline void SetSummaries(const Aws::Vector<ScanSummary>& value) { m_summaries = value; }

    /**
     * <p>A list of <code>ScanSummary</code> objects with information about all scans
     * in an account.</p>
     */
    inline void SetSummaries(Aws::Vector<ScanSummary>&& value) { m_summaries = std::move(value); }

    /**
     * <p>A list of <code>ScanSummary</code> objects with information about all scans
     * in an account.</p>
     */
    inline ListScansResult& WithSummaries(const Aws::Vector<ScanSummary>& value) { SetSummaries(value); return *this;}

    /**
     * <p>A list of <code>ScanSummary</code> objects with information about all scans
     * in an account.</p>
     */
    inline ListScansResult& WithSummaries(Aws::Vector<ScanSummary>&& value) { SetSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of <code>ScanSummary</code> objects with information about all scans
     * in an account.</p>
     */
    inline ListScansResult& AddSummaries(const ScanSummary& value) { m_summaries.push_back(value); return *this; }

    /**
     * <p>A list of <code>ScanSummary</code> objects with information about all scans
     * in an account.</p>
     */
    inline ListScansResult& AddSummaries(ScanSummary&& value) { m_summaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListScansResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListScansResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListScansResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ScanSummary> m_summaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
