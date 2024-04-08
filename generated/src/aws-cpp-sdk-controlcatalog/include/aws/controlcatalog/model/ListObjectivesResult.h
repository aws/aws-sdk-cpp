/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/controlcatalog/model/ObjectiveSummary.h>
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
namespace ControlCatalog
{
namespace Model
{
  class ListObjectivesResult
  {
  public:
    AWS_CONTROLCATALOG_API ListObjectivesResult();
    AWS_CONTROLCATALOG_API ListObjectivesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLCATALOG_API ListObjectivesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline ListObjectivesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline ListObjectivesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline ListObjectivesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of objectives that the <code>ListObjectives</code> API returns.</p>
     */
    inline const Aws::Vector<ObjectiveSummary>& GetObjectives() const{ return m_objectives; }

    /**
     * <p>The list of objectives that the <code>ListObjectives</code> API returns.</p>
     */
    inline void SetObjectives(const Aws::Vector<ObjectiveSummary>& value) { m_objectives = value; }

    /**
     * <p>The list of objectives that the <code>ListObjectives</code> API returns.</p>
     */
    inline void SetObjectives(Aws::Vector<ObjectiveSummary>&& value) { m_objectives = std::move(value); }

    /**
     * <p>The list of objectives that the <code>ListObjectives</code> API returns.</p>
     */
    inline ListObjectivesResult& WithObjectives(const Aws::Vector<ObjectiveSummary>& value) { SetObjectives(value); return *this;}

    /**
     * <p>The list of objectives that the <code>ListObjectives</code> API returns.</p>
     */
    inline ListObjectivesResult& WithObjectives(Aws::Vector<ObjectiveSummary>&& value) { SetObjectives(std::move(value)); return *this;}

    /**
     * <p>The list of objectives that the <code>ListObjectives</code> API returns.</p>
     */
    inline ListObjectivesResult& AddObjectives(const ObjectiveSummary& value) { m_objectives.push_back(value); return *this; }

    /**
     * <p>The list of objectives that the <code>ListObjectives</code> API returns.</p>
     */
    inline ListObjectivesResult& AddObjectives(ObjectiveSummary&& value) { m_objectives.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListObjectivesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListObjectivesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListObjectivesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ObjectiveSummary> m_objectives;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
