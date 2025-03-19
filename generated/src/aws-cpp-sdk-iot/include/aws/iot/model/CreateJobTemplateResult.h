/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{
  class CreateJobTemplateResult
  {
  public:
    AWS_IOT_API CreateJobTemplateResult() = default;
    AWS_IOT_API CreateJobTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreateJobTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the job template.</p>
     */
    inline const Aws::String& GetJobTemplateArn() const { return m_jobTemplateArn; }
    template<typename JobTemplateArnT = Aws::String>
    void SetJobTemplateArn(JobTemplateArnT&& value) { m_jobTemplateArnHasBeenSet = true; m_jobTemplateArn = std::forward<JobTemplateArnT>(value); }
    template<typename JobTemplateArnT = Aws::String>
    CreateJobTemplateResult& WithJobTemplateArn(JobTemplateArnT&& value) { SetJobTemplateArn(std::forward<JobTemplateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the job template.</p>
     */
    inline const Aws::String& GetJobTemplateId() const { return m_jobTemplateId; }
    template<typename JobTemplateIdT = Aws::String>
    void SetJobTemplateId(JobTemplateIdT&& value) { m_jobTemplateIdHasBeenSet = true; m_jobTemplateId = std::forward<JobTemplateIdT>(value); }
    template<typename JobTemplateIdT = Aws::String>
    CreateJobTemplateResult& WithJobTemplateId(JobTemplateIdT&& value) { SetJobTemplateId(std::forward<JobTemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateJobTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobTemplateArn;
    bool m_jobTemplateArnHasBeenSet = false;

    Aws::String m_jobTemplateId;
    bool m_jobTemplateIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
