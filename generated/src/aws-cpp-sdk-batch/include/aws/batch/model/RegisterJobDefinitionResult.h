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
  class RegisterJobDefinitionResult
  {
  public:
    AWS_BATCH_API RegisterJobDefinitionResult() = default;
    AWS_BATCH_API RegisterJobDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BATCH_API RegisterJobDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the job definition.</p>
     */
    inline const Aws::String& GetJobDefinitionName() const { return m_jobDefinitionName; }
    template<typename JobDefinitionNameT = Aws::String>
    void SetJobDefinitionName(JobDefinitionNameT&& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = std::forward<JobDefinitionNameT>(value); }
    template<typename JobDefinitionNameT = Aws::String>
    RegisterJobDefinitionResult& WithJobDefinitionName(JobDefinitionNameT&& value) { SetJobDefinitionName(std::forward<JobDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the job definition.</p>
     */
    inline const Aws::String& GetJobDefinitionArn() const { return m_jobDefinitionArn; }
    template<typename JobDefinitionArnT = Aws::String>
    void SetJobDefinitionArn(JobDefinitionArnT&& value) { m_jobDefinitionArnHasBeenSet = true; m_jobDefinitionArn = std::forward<JobDefinitionArnT>(value); }
    template<typename JobDefinitionArnT = Aws::String>
    RegisterJobDefinitionResult& WithJobDefinitionArn(JobDefinitionArnT&& value) { SetJobDefinitionArn(std::forward<JobDefinitionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the job definition.</p>
     */
    inline int GetRevision() const { return m_revision; }
    inline void SetRevision(int value) { m_revisionHasBeenSet = true; m_revision = value; }
    inline RegisterJobDefinitionResult& WithRevision(int value) { SetRevision(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RegisterJobDefinitionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobDefinitionName;
    bool m_jobDefinitionNameHasBeenSet = false;

    Aws::String m_jobDefinitionArn;
    bool m_jobDefinitionArnHasBeenSet = false;

    int m_revision{0};
    bool m_revisionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
