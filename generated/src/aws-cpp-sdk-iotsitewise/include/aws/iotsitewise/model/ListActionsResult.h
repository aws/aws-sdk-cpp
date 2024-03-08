/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/ActionSummary.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class ListActionsResult
  {
  public:
    AWS_IOTSITEWISE_API ListActionsResult();
    AWS_IOTSITEWISE_API ListActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list that summarizes the actions associated with the specified asset.</p>
     */
    inline const Aws::Vector<ActionSummary>& GetActionSummaries() const{ return m_actionSummaries; }

    /**
     * <p>A list that summarizes the actions associated with the specified asset.</p>
     */
    inline void SetActionSummaries(const Aws::Vector<ActionSummary>& value) { m_actionSummaries = value; }

    /**
     * <p>A list that summarizes the actions associated with the specified asset.</p>
     */
    inline void SetActionSummaries(Aws::Vector<ActionSummary>&& value) { m_actionSummaries = std::move(value); }

    /**
     * <p>A list that summarizes the actions associated with the specified asset.</p>
     */
    inline ListActionsResult& WithActionSummaries(const Aws::Vector<ActionSummary>& value) { SetActionSummaries(value); return *this;}

    /**
     * <p>A list that summarizes the actions associated with the specified asset.</p>
     */
    inline ListActionsResult& WithActionSummaries(Aws::Vector<ActionSummary>&& value) { SetActionSummaries(std::move(value)); return *this;}

    /**
     * <p>A list that summarizes the actions associated with the specified asset.</p>
     */
    inline ListActionsResult& AddActionSummaries(const ActionSummary& value) { m_actionSummaries.push_back(value); return *this; }

    /**
     * <p>A list that summarizes the actions associated with the specified asset.</p>
     */
    inline ListActionsResult& AddActionSummaries(ActionSummary&& value) { m_actionSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListActionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListActionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListActionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListActionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListActionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListActionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ActionSummary> m_actionSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
