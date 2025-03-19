/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/InferenceProfileStatus.h>
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
namespace Bedrock
{
namespace Model
{
  class CreateInferenceProfileResult
  {
  public:
    AWS_BEDROCK_API CreateInferenceProfileResult() = default;
    AWS_BEDROCK_API CreateInferenceProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API CreateInferenceProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the inference profile that you created.</p>
     */
    inline const Aws::String& GetInferenceProfileArn() const { return m_inferenceProfileArn; }
    template<typename InferenceProfileArnT = Aws::String>
    void SetInferenceProfileArn(InferenceProfileArnT&& value) { m_inferenceProfileArnHasBeenSet = true; m_inferenceProfileArn = std::forward<InferenceProfileArnT>(value); }
    template<typename InferenceProfileArnT = Aws::String>
    CreateInferenceProfileResult& WithInferenceProfileArn(InferenceProfileArnT&& value) { SetInferenceProfileArn(std::forward<InferenceProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the inference profile. <code>ACTIVE</code> means that the
     * inference profile is ready to be used.</p>
     */
    inline InferenceProfileStatus GetStatus() const { return m_status; }
    inline void SetStatus(InferenceProfileStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateInferenceProfileResult& WithStatus(InferenceProfileStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateInferenceProfileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inferenceProfileArn;
    bool m_inferenceProfileArnHasBeenSet = false;

    InferenceProfileStatus m_status{InferenceProfileStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
