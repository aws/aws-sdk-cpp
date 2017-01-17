﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/StateMachineListItem.h>

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
namespace SFN
{
namespace Model
{
  class AWS_SFN_API ListStateMachinesResult
  {
  public:
    ListStateMachinesResult();
    ListStateMachinesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListStateMachinesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::Vector<StateMachineListItem>& GetStateMachines() const{ return m_stateMachines; }

    
    inline void SetStateMachines(const Aws::Vector<StateMachineListItem>& value) { m_stateMachines = value; }

    
    inline void SetStateMachines(Aws::Vector<StateMachineListItem>&& value) { m_stateMachines = value; }

    
    inline ListStateMachinesResult& WithStateMachines(const Aws::Vector<StateMachineListItem>& value) { SetStateMachines(value); return *this;}

    
    inline ListStateMachinesResult& WithStateMachines(Aws::Vector<StateMachineListItem>&& value) { SetStateMachines(value); return *this;}

    
    inline ListStateMachinesResult& AddStateMachines(const StateMachineListItem& value) { m_stateMachines.push_back(value); return *this; }

    
    inline ListStateMachinesResult& AddStateMachines(StateMachineListItem&& value) { m_stateMachines.push_back(value); return *this; }

    /**
     * <p>If a <code>nextToken</code> is returned, there are more results available. To
     * retrieve the next page of results, make the call again using the returned token
     * in <code>nextToken</code>. Keep all other arguments unchanged.</p> <p>The
     * configured <code>maxResults</code> determines how many results can be returned
     * in a single call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If a <code>nextToken</code> is returned, there are more results available. To
     * retrieve the next page of results, make the call again using the returned token
     * in <code>nextToken</code>. Keep all other arguments unchanged.</p> <p>The
     * configured <code>maxResults</code> determines how many results can be returned
     * in a single call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If a <code>nextToken</code> is returned, there are more results available. To
     * retrieve the next page of results, make the call again using the returned token
     * in <code>nextToken</code>. Keep all other arguments unchanged.</p> <p>The
     * configured <code>maxResults</code> determines how many results can be returned
     * in a single call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>If a <code>nextToken</code> is returned, there are more results available. To
     * retrieve the next page of results, make the call again using the returned token
     * in <code>nextToken</code>. Keep all other arguments unchanged.</p> <p>The
     * configured <code>maxResults</code> determines how many results can be returned
     * in a single call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If a <code>nextToken</code> is returned, there are more results available. To
     * retrieve the next page of results, make the call again using the returned token
     * in <code>nextToken</code>. Keep all other arguments unchanged.</p> <p>The
     * configured <code>maxResults</code> determines how many results can be returned
     * in a single call.</p>
     */
    inline ListStateMachinesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If a <code>nextToken</code> is returned, there are more results available. To
     * retrieve the next page of results, make the call again using the returned token
     * in <code>nextToken</code>. Keep all other arguments unchanged.</p> <p>The
     * configured <code>maxResults</code> determines how many results can be returned
     * in a single call.</p>
     */
    inline ListStateMachinesResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>If a <code>nextToken</code> is returned, there are more results available. To
     * retrieve the next page of results, make the call again using the returned token
     * in <code>nextToken</code>. Keep all other arguments unchanged.</p> <p>The
     * configured <code>maxResults</code> determines how many results can be returned
     * in a single call.</p>
     */
    inline ListStateMachinesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<StateMachineListItem> m_stateMachines;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
