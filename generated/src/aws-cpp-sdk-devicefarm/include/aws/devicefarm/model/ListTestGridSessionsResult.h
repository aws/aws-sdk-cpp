/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/TestGridSession.h>
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
namespace DeviceFarm
{
namespace Model
{
  class ListTestGridSessionsResult
  {
  public:
    AWS_DEVICEFARM_API ListTestGridSessionsResult() = default;
    AWS_DEVICEFARM_API ListTestGridSessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API ListTestGridSessionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The sessions that match the criteria in a <a>ListTestGridSessionsRequest</a>.
     * </p>
     */
    inline const Aws::Vector<TestGridSession>& GetTestGridSessions() const { return m_testGridSessions; }
    template<typename TestGridSessionsT = Aws::Vector<TestGridSession>>
    void SetTestGridSessions(TestGridSessionsT&& value) { m_testGridSessionsHasBeenSet = true; m_testGridSessions = std::forward<TestGridSessionsT>(value); }
    template<typename TestGridSessionsT = Aws::Vector<TestGridSession>>
    ListTestGridSessionsResult& WithTestGridSessions(TestGridSessionsT&& value) { SetTestGridSessions(std::forward<TestGridSessionsT>(value)); return *this;}
    template<typename TestGridSessionsT = TestGridSession>
    ListTestGridSessionsResult& AddTestGridSessions(TestGridSessionsT&& value) { m_testGridSessionsHasBeenSet = true; m_testGridSessions.emplace_back(std::forward<TestGridSessionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTestGridSessionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTestGridSessionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TestGridSession> m_testGridSessions;
    bool m_testGridSessionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
