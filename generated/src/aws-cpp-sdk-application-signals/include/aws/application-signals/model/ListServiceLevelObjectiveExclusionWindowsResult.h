/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-signals/model/ExclusionWindow.h>
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
namespace ApplicationSignals
{
namespace Model
{
  class ListServiceLevelObjectiveExclusionWindowsResult
  {
  public:
    AWS_APPLICATIONSIGNALS_API ListServiceLevelObjectiveExclusionWindowsResult();
    AWS_APPLICATIONSIGNALS_API ListServiceLevelObjectiveExclusionWindowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONSIGNALS_API ListServiceLevelObjectiveExclusionWindowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of exclusion windows configured for the SLO.</p>
     */
    inline const Aws::Vector<ExclusionWindow>& GetExclusionWindows() const{ return m_exclusionWindows; }
    inline void SetExclusionWindows(const Aws::Vector<ExclusionWindow>& value) { m_exclusionWindows = value; }
    inline void SetExclusionWindows(Aws::Vector<ExclusionWindow>&& value) { m_exclusionWindows = std::move(value); }
    inline ListServiceLevelObjectiveExclusionWindowsResult& WithExclusionWindows(const Aws::Vector<ExclusionWindow>& value) { SetExclusionWindows(value); return *this;}
    inline ListServiceLevelObjectiveExclusionWindowsResult& WithExclusionWindows(Aws::Vector<ExclusionWindow>&& value) { SetExclusionWindows(std::move(value)); return *this;}
    inline ListServiceLevelObjectiveExclusionWindowsResult& AddExclusionWindows(const ExclusionWindow& value) { m_exclusionWindows.push_back(value); return *this; }
    inline ListServiceLevelObjectiveExclusionWindowsResult& AddExclusionWindows(ExclusionWindow&& value) { m_exclusionWindows.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Include this value, if it was returned by the previous operation, to get the
     * next set of service level objectives. <pre><code> &lt;/p&gt; </code></pre>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListServiceLevelObjectiveExclusionWindowsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListServiceLevelObjectiveExclusionWindowsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListServiceLevelObjectiveExclusionWindowsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListServiceLevelObjectiveExclusionWindowsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListServiceLevelObjectiveExclusionWindowsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListServiceLevelObjectiveExclusionWindowsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ExclusionWindow> m_exclusionWindows;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
