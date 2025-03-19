/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/BatchStopJobRunSuccessfulSubmission.h>
#include <aws/glue/model/BatchStopJobRunError.h>
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
namespace Glue
{
namespace Model
{
  class BatchStopJobRunResult
  {
  public:
    AWS_GLUE_API BatchStopJobRunResult() = default;
    AWS_GLUE_API BatchStopJobRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchStopJobRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the JobRuns that were successfully submitted for stopping.</p>
     */
    inline const Aws::Vector<BatchStopJobRunSuccessfulSubmission>& GetSuccessfulSubmissions() const { return m_successfulSubmissions; }
    template<typename SuccessfulSubmissionsT = Aws::Vector<BatchStopJobRunSuccessfulSubmission>>
    void SetSuccessfulSubmissions(SuccessfulSubmissionsT&& value) { m_successfulSubmissionsHasBeenSet = true; m_successfulSubmissions = std::forward<SuccessfulSubmissionsT>(value); }
    template<typename SuccessfulSubmissionsT = Aws::Vector<BatchStopJobRunSuccessfulSubmission>>
    BatchStopJobRunResult& WithSuccessfulSubmissions(SuccessfulSubmissionsT&& value) { SetSuccessfulSubmissions(std::forward<SuccessfulSubmissionsT>(value)); return *this;}
    template<typename SuccessfulSubmissionsT = BatchStopJobRunSuccessfulSubmission>
    BatchStopJobRunResult& AddSuccessfulSubmissions(SuccessfulSubmissionsT&& value) { m_successfulSubmissionsHasBeenSet = true; m_successfulSubmissions.emplace_back(std::forward<SuccessfulSubmissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the errors that were encountered in trying to stop
     * <code>JobRuns</code>, including the <code>JobRunId</code> for which each error
     * was encountered and details about the error.</p>
     */
    inline const Aws::Vector<BatchStopJobRunError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<BatchStopJobRunError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<BatchStopJobRunError>>
    BatchStopJobRunResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = BatchStopJobRunError>
    BatchStopJobRunResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchStopJobRunResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchStopJobRunSuccessfulSubmission> m_successfulSubmissions;
    bool m_successfulSubmissionsHasBeenSet = false;

    Aws::Vector<BatchStopJobRunError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
