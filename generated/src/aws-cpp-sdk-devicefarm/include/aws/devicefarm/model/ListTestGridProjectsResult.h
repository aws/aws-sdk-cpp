/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/TestGridProject.h>
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
  class ListTestGridProjectsResult
  {
  public:
    AWS_DEVICEFARM_API ListTestGridProjectsResult() = default;
    AWS_DEVICEFARM_API ListTestGridProjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API ListTestGridProjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of TestGridProjects, based on a
     * <a>ListTestGridProjectsRequest</a>.</p>
     */
    inline const Aws::Vector<TestGridProject>& GetTestGridProjects() const { return m_testGridProjects; }
    template<typename TestGridProjectsT = Aws::Vector<TestGridProject>>
    void SetTestGridProjects(TestGridProjectsT&& value) { m_testGridProjectsHasBeenSet = true; m_testGridProjects = std::forward<TestGridProjectsT>(value); }
    template<typename TestGridProjectsT = Aws::Vector<TestGridProject>>
    ListTestGridProjectsResult& WithTestGridProjects(TestGridProjectsT&& value) { SetTestGridProjects(std::forward<TestGridProjectsT>(value)); return *this;}
    template<typename TestGridProjectsT = TestGridProject>
    ListTestGridProjectsResult& AddTestGridProjects(TestGridProjectsT&& value) { m_testGridProjectsHasBeenSet = true; m_testGridProjects.emplace_back(std::forward<TestGridProjectsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Used for pagination. Pass into <a>ListTestGridProjects</a> to get more
     * results in a paginated request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTestGridProjectsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTestGridProjectsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TestGridProject> m_testGridProjects;
    bool m_testGridProjectsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
