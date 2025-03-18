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
    AWS_APPLICATIONSIGNALS_API ListServiceLevelObjectiveExclusionWindowsResult() = default;
    AWS_APPLICATIONSIGNALS_API ListServiceLevelObjectiveExclusionWindowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONSIGNALS_API ListServiceLevelObjectiveExclusionWindowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of exclusion windows configured for the SLO.</p>
     */
    inline const Aws::Vector<ExclusionWindow>& GetExclusionWindows() const { return m_exclusionWindows; }
    template<typename ExclusionWindowsT = Aws::Vector<ExclusionWindow>>
    void SetExclusionWindows(ExclusionWindowsT&& value) { m_exclusionWindowsHasBeenSet = true; m_exclusionWindows = std::forward<ExclusionWindowsT>(value); }
    template<typename ExclusionWindowsT = Aws::Vector<ExclusionWindow>>
    ListServiceLevelObjectiveExclusionWindowsResult& WithExclusionWindows(ExclusionWindowsT&& value) { SetExclusionWindows(std::forward<ExclusionWindowsT>(value)); return *this;}
    template<typename ExclusionWindowsT = ExclusionWindow>
    ListServiceLevelObjectiveExclusionWindowsResult& AddExclusionWindows(ExclusionWindowsT&& value) { m_exclusionWindowsHasBeenSet = true; m_exclusionWindows.emplace_back(std::forward<ExclusionWindowsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Include this value, if it was returned by the previous operation, to get the
     * next set of service level objectives. <pre><code> &lt;/p&gt; </code></pre>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListServiceLevelObjectiveExclusionWindowsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListServiceLevelObjectiveExclusionWindowsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ExclusionWindow> m_exclusionWindows;
    bool m_exclusionWindowsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
