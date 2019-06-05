/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_GLUE_API BatchStopJobRunResult
  {
  public:
    BatchStopJobRunResult();
    BatchStopJobRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchStopJobRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the JobRuns that were successfully submitted for stopping.</p>
     */
    inline const Aws::Vector<BatchStopJobRunSuccessfulSubmission>& GetSuccessfulSubmissions() const{ return m_successfulSubmissions; }

    /**
     * <p>A list of the JobRuns that were successfully submitted for stopping.</p>
     */
    inline void SetSuccessfulSubmissions(const Aws::Vector<BatchStopJobRunSuccessfulSubmission>& value) { m_successfulSubmissions = value; }

    /**
     * <p>A list of the JobRuns that were successfully submitted for stopping.</p>
     */
    inline void SetSuccessfulSubmissions(Aws::Vector<BatchStopJobRunSuccessfulSubmission>&& value) { m_successfulSubmissions = std::move(value); }

    /**
     * <p>A list of the JobRuns that were successfully submitted for stopping.</p>
     */
    inline BatchStopJobRunResult& WithSuccessfulSubmissions(const Aws::Vector<BatchStopJobRunSuccessfulSubmission>& value) { SetSuccessfulSubmissions(value); return *this;}

    /**
     * <p>A list of the JobRuns that were successfully submitted for stopping.</p>
     */
    inline BatchStopJobRunResult& WithSuccessfulSubmissions(Aws::Vector<BatchStopJobRunSuccessfulSubmission>&& value) { SetSuccessfulSubmissions(std::move(value)); return *this;}

    /**
     * <p>A list of the JobRuns that were successfully submitted for stopping.</p>
     */
    inline BatchStopJobRunResult& AddSuccessfulSubmissions(const BatchStopJobRunSuccessfulSubmission& value) { m_successfulSubmissions.push_back(value); return *this; }

    /**
     * <p>A list of the JobRuns that were successfully submitted for stopping.</p>
     */
    inline BatchStopJobRunResult& AddSuccessfulSubmissions(BatchStopJobRunSuccessfulSubmission&& value) { m_successfulSubmissions.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of the errors that were encountered in trying to stop
     * <code>JobRuns</code>, including the <code>JobRunId</code> for which each error
     * was encountered and details about the error.</p>
     */
    inline const Aws::Vector<BatchStopJobRunError>& GetErrors() const{ return m_errors; }

    /**
     * <p>A list of the errors that were encountered in trying to stop
     * <code>JobRuns</code>, including the <code>JobRunId</code> for which each error
     * was encountered and details about the error.</p>
     */
    inline void SetErrors(const Aws::Vector<BatchStopJobRunError>& value) { m_errors = value; }

    /**
     * <p>A list of the errors that were encountered in trying to stop
     * <code>JobRuns</code>, including the <code>JobRunId</code> for which each error
     * was encountered and details about the error.</p>
     */
    inline void SetErrors(Aws::Vector<BatchStopJobRunError>&& value) { m_errors = std::move(value); }

    /**
     * <p>A list of the errors that were encountered in trying to stop
     * <code>JobRuns</code>, including the <code>JobRunId</code> for which each error
     * was encountered and details about the error.</p>
     */
    inline BatchStopJobRunResult& WithErrors(const Aws::Vector<BatchStopJobRunError>& value) { SetErrors(value); return *this;}

    /**
     * <p>A list of the errors that were encountered in trying to stop
     * <code>JobRuns</code>, including the <code>JobRunId</code> for which each error
     * was encountered and details about the error.</p>
     */
    inline BatchStopJobRunResult& WithErrors(Aws::Vector<BatchStopJobRunError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>A list of the errors that were encountered in trying to stop
     * <code>JobRuns</code>, including the <code>JobRunId</code> for which each error
     * was encountered and details about the error.</p>
     */
    inline BatchStopJobRunResult& AddErrors(const BatchStopJobRunError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>A list of the errors that were encountered in trying to stop
     * <code>JobRuns</code>, including the <code>JobRunId</code> for which each error
     * was encountered and details about the error.</p>
     */
    inline BatchStopJobRunResult& AddErrors(BatchStopJobRunError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchStopJobRunSuccessfulSubmission> m_successfulSubmissions;

    Aws::Vector<BatchStopJobRunError> m_errors;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
