/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/ExecutionResult.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devicefarm/model/UniqueProblem.h>
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
  /**
   * <p>Represents the result of a list unique problems request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListUniqueProblemsResult">AWS
   * API Reference</a></p>
   */
  class ListUniqueProblemsResult
  {
  public:
    AWS_DEVICEFARM_API ListUniqueProblemsResult() = default;
    AWS_DEVICEFARM_API ListUniqueProblemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API ListUniqueProblemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the unique problems.</p> <p>Allowed values include:</p>
     * <ul> <li> <p>PENDING</p> </li> <li> <p>PASSED</p> </li> <li> <p>WARNED</p> </li>
     * <li> <p>FAILED</p> </li> <li> <p>SKIPPED</p> </li> <li> <p>ERRORED</p> </li>
     * <li> <p>STOPPED</p> </li> </ul>
     */
    inline const Aws::Map<ExecutionResult, Aws::Vector<UniqueProblem>>& GetUniqueProblems() const { return m_uniqueProblems; }
    template<typename UniqueProblemsT = Aws::Map<ExecutionResult, Aws::Vector<UniqueProblem>>>
    void SetUniqueProblems(UniqueProblemsT&& value) { m_uniqueProblemsHasBeenSet = true; m_uniqueProblems = std::forward<UniqueProblemsT>(value); }
    template<typename UniqueProblemsT = Aws::Map<ExecutionResult, Aws::Vector<UniqueProblem>>>
    ListUniqueProblemsResult& WithUniqueProblems(UniqueProblemsT&& value) { SetUniqueProblems(std::forward<UniqueProblemsT>(value)); return *this;}
    inline ListUniqueProblemsResult& AddUniqueProblems(ExecutionResult key, Aws::Vector<UniqueProblem> value) {
      m_uniqueProblemsHasBeenSet = true; m_uniqueProblems.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned. It can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListUniqueProblemsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListUniqueProblemsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<ExecutionResult, Aws::Vector<UniqueProblem>> m_uniqueProblems;
    bool m_uniqueProblemsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
