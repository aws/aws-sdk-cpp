﻿/**
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
  class ListActionsResult
  {
  public:
    AWS_FIS_API ListActionsResult();
    AWS_FIS_API ListActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIS_API ListActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The actions.</p>
     */
    inline const Aws::Vector<ActionSummary>& GetActions() const{ return m_actions; }
    inline void SetActions(const Aws::Vector<ActionSummary>& value) { m_actions = value; }
    inline void SetActions(Aws::Vector<ActionSummary>&& value) { m_actions = std::move(value); }
    inline ListActionsResult& WithActions(const Aws::Vector<ActionSummary>& value) { SetActions(value); return *this;}
    inline ListActionsResult& WithActions(Aws::Vector<ActionSummary>&& value) { SetActions(std::move(value)); return *this;}
    inline ListActionsResult& AddActions(const ActionSummary& value) { m_actions.push_back(value); return *this; }
    inline ListActionsResult& AddActions(ActionSummary&& value) { m_actions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListActionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListActionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListActionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListActionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListActionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListActionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ActionSummary> m_actions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
