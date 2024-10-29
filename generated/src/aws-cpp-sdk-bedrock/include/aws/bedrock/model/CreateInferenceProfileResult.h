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
    AWS_BEDROCK_API CreateInferenceProfileResult();
    AWS_BEDROCK_API CreateInferenceProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API CreateInferenceProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the inference profile that you created.</p>
     */
    inline const Aws::String& GetInferenceProfileArn() const{ return m_inferenceProfileArn; }
    inline void SetInferenceProfileArn(const Aws::String& value) { m_inferenceProfileArn = value; }
    inline void SetInferenceProfileArn(Aws::String&& value) { m_inferenceProfileArn = std::move(value); }
    inline void SetInferenceProfileArn(const char* value) { m_inferenceProfileArn.assign(value); }
    inline CreateInferenceProfileResult& WithInferenceProfileArn(const Aws::String& value) { SetInferenceProfileArn(value); return *this;}
    inline CreateInferenceProfileResult& WithInferenceProfileArn(Aws::String&& value) { SetInferenceProfileArn(std::move(value)); return *this;}
    inline CreateInferenceProfileResult& WithInferenceProfileArn(const char* value) { SetInferenceProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the inference profile. <code>ACTIVE</code> means that the
     * inference profile is ready to be used.</p>
     */
    inline const InferenceProfileStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const InferenceProfileStatus& value) { m_status = value; }
    inline void SetStatus(InferenceProfileStatus&& value) { m_status = std::move(value); }
    inline CreateInferenceProfileResult& WithStatus(const InferenceProfileStatus& value) { SetStatus(value); return *this;}
    inline CreateInferenceProfileResult& WithStatus(InferenceProfileStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateInferenceProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateInferenceProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateInferenceProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_inferenceProfileArn;

    InferenceProfileStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
