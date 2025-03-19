/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/RepositoryTriggerExecutionFailure.h>
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
namespace CodeCommit
{
namespace Model
{
  /**
   * <p>Represents the output of a test repository triggers operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/TestRepositoryTriggersOutput">AWS
   * API Reference</a></p>
   */
  class TestRepositoryTriggersResult
  {
  public:
    AWS_CODECOMMIT_API TestRepositoryTriggersResult() = default;
    AWS_CODECOMMIT_API TestRepositoryTriggersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API TestRepositoryTriggersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of triggers that were successfully tested. This list provides the
     * names of the triggers that were successfully tested, separated by commas.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSuccessfulExecutions() const { return m_successfulExecutions; }
    template<typename SuccessfulExecutionsT = Aws::Vector<Aws::String>>
    void SetSuccessfulExecutions(SuccessfulExecutionsT&& value) { m_successfulExecutionsHasBeenSet = true; m_successfulExecutions = std::forward<SuccessfulExecutionsT>(value); }
    template<typename SuccessfulExecutionsT = Aws::Vector<Aws::String>>
    TestRepositoryTriggersResult& WithSuccessfulExecutions(SuccessfulExecutionsT&& value) { SetSuccessfulExecutions(std::forward<SuccessfulExecutionsT>(value)); return *this;}
    template<typename SuccessfulExecutionsT = Aws::String>
    TestRepositoryTriggersResult& AddSuccessfulExecutions(SuccessfulExecutionsT&& value) { m_successfulExecutionsHasBeenSet = true; m_successfulExecutions.emplace_back(std::forward<SuccessfulExecutionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of triggers that were not tested. This list provides the names of
     * the triggers that could not be tested, separated by commas.</p>
     */
    inline const Aws::Vector<RepositoryTriggerExecutionFailure>& GetFailedExecutions() const { return m_failedExecutions; }
    template<typename FailedExecutionsT = Aws::Vector<RepositoryTriggerExecutionFailure>>
    void SetFailedExecutions(FailedExecutionsT&& value) { m_failedExecutionsHasBeenSet = true; m_failedExecutions = std::forward<FailedExecutionsT>(value); }
    template<typename FailedExecutionsT = Aws::Vector<RepositoryTriggerExecutionFailure>>
    TestRepositoryTriggersResult& WithFailedExecutions(FailedExecutionsT&& value) { SetFailedExecutions(std::forward<FailedExecutionsT>(value)); return *this;}
    template<typename FailedExecutionsT = RepositoryTriggerExecutionFailure>
    TestRepositoryTriggersResult& AddFailedExecutions(FailedExecutionsT&& value) { m_failedExecutionsHasBeenSet = true; m_failedExecutions.emplace_back(std::forward<FailedExecutionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    TestRepositoryTriggersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_successfulExecutions;
    bool m_successfulExecutionsHasBeenSet = false;

    Aws::Vector<RepositoryTriggerExecutionFailure> m_failedExecutions;
    bool m_failedExecutionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
