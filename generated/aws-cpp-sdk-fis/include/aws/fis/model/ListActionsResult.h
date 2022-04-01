/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fis/model/ActionSummary.h>
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
namespace FIS
{
namespace Model
{
  class AWS_FIS_API ListActionsResult
  {
  public:
    ListActionsResult();
    ListActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The actions.</p>
     */
    inline const Aws::Vector<ActionSummary>& GetActions() const{ return m_actions; }

    /**
     * <p>The actions.</p>
     */
    inline void SetActions(const Aws::Vector<ActionSummary>& value) { m_actions = value; }

    /**
     * <p>The actions.</p>
     */
    inline void SetActions(Aws::Vector<ActionSummary>&& value) { m_actions = std::move(value); }

    /**
     * <p>The actions.</p>
     */
    inline ListActionsResult& WithActions(const Aws::Vector<ActionSummary>& value) { SetActions(value); return *this;}

    /**
     * <p>The actions.</p>
     */
    inline ListActionsResult& WithActions(Aws::Vector<ActionSummary>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The actions.</p>
     */
    inline ListActionsResult& AddActions(const ActionSummary& value) { m_actions.push_back(value); return *this; }

    /**
     * <p>The actions.</p>
     */
    inline ListActionsResult& AddActions(ActionSummary&& value) { m_actions.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListActionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListActionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListActionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ActionSummary> m_actions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
