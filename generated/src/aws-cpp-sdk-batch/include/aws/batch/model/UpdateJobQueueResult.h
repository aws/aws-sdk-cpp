/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Batch
{
namespace Model
{
  class UpdateJobQueueResult
  {
  public:
    AWS_BATCH_API UpdateJobQueueResult() = default;
    AWS_BATCH_API UpdateJobQueueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BATCH_API UpdateJobQueueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the job queue.</p>
     */
    inline const Aws::String& GetJobQueueName() const { return m_jobQueueName; }
    template<typename JobQueueNameT = Aws::String>
    void SetJobQueueName(JobQueueNameT&& value) { m_jobQueueNameHasBeenSet = true; m_jobQueueName = std::forward<JobQueueNameT>(value); }
    template<typename JobQueueNameT = Aws::String>
    UpdateJobQueueResult& WithJobQueueName(JobQueueNameT&& value) { SetJobQueueName(std::forward<JobQueueNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the job queue.</p>
     */
    inline const Aws::String& GetJobQueueArn() const { return m_jobQueueArn; }
    template<typename JobQueueArnT = Aws::String>
    void SetJobQueueArn(JobQueueArnT&& value) { m_jobQueueArnHasBeenSet = true; m_jobQueueArn = std::forward<JobQueueArnT>(value); }
    template<typename JobQueueArnT = Aws::String>
    UpdateJobQueueResult& WithJobQueueArn(JobQueueArnT&& value) { SetJobQueueArn(std::forward<JobQueueArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateJobQueueResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobQueueName;
    bool m_jobQueueNameHasBeenSet = false;

    Aws::String m_jobQueueArn;
    bool m_jobQueueArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
