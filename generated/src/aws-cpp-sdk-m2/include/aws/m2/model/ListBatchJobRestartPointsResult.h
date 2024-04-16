/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/JobStep.h>
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
namespace MainframeModernization
{
namespace Model
{
  class ListBatchJobRestartPointsResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API ListBatchJobRestartPointsResult();
    AWS_MAINFRAMEMODERNIZATION_API ListBatchJobRestartPointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API ListBatchJobRestartPointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns all the batch job steps and related information for a batch job that
     * previously ran.</p>
     */
    inline const Aws::Vector<JobStep>& GetBatchJobSteps() const{ return m_batchJobSteps; }

    /**
     * <p>Returns all the batch job steps and related information for a batch job that
     * previously ran.</p>
     */
    inline void SetBatchJobSteps(const Aws::Vector<JobStep>& value) { m_batchJobSteps = value; }

    /**
     * <p>Returns all the batch job steps and related information for a batch job that
     * previously ran.</p>
     */
    inline void SetBatchJobSteps(Aws::Vector<JobStep>&& value) { m_batchJobSteps = std::move(value); }

    /**
     * <p>Returns all the batch job steps and related information for a batch job that
     * previously ran.</p>
     */
    inline ListBatchJobRestartPointsResult& WithBatchJobSteps(const Aws::Vector<JobStep>& value) { SetBatchJobSteps(value); return *this;}

    /**
     * <p>Returns all the batch job steps and related information for a batch job that
     * previously ran.</p>
     */
    inline ListBatchJobRestartPointsResult& WithBatchJobSteps(Aws::Vector<JobStep>&& value) { SetBatchJobSteps(std::move(value)); return *this;}

    /**
     * <p>Returns all the batch job steps and related information for a batch job that
     * previously ran.</p>
     */
    inline ListBatchJobRestartPointsResult& AddBatchJobSteps(const JobStep& value) { m_batchJobSteps.push_back(value); return *this; }

    /**
     * <p>Returns all the batch job steps and related information for a batch job that
     * previously ran.</p>
     */
    inline ListBatchJobRestartPointsResult& AddBatchJobSteps(JobStep&& value) { m_batchJobSteps.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListBatchJobRestartPointsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListBatchJobRestartPointsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListBatchJobRestartPointsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<JobStep> m_batchJobSteps;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
