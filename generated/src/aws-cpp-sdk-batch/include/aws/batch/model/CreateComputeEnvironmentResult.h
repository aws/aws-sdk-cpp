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
  class CreateComputeEnvironmentResult
  {
  public:
    AWS_BATCH_API CreateComputeEnvironmentResult();
    AWS_BATCH_API CreateComputeEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BATCH_API CreateComputeEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the compute environment. It can be up to 128 characters long. It
     * can contain uppercase and lowercase letters, numbers, hyphens (-), and
     * underscores (_).</p>
     */
    inline const Aws::String& GetComputeEnvironmentName() const{ return m_computeEnvironmentName; }
    inline void SetComputeEnvironmentName(const Aws::String& value) { m_computeEnvironmentName = value; }
    inline void SetComputeEnvironmentName(Aws::String&& value) { m_computeEnvironmentName = std::move(value); }
    inline void SetComputeEnvironmentName(const char* value) { m_computeEnvironmentName.assign(value); }
    inline CreateComputeEnvironmentResult& WithComputeEnvironmentName(const Aws::String& value) { SetComputeEnvironmentName(value); return *this;}
    inline CreateComputeEnvironmentResult& WithComputeEnvironmentName(Aws::String&& value) { SetComputeEnvironmentName(std::move(value)); return *this;}
    inline CreateComputeEnvironmentResult& WithComputeEnvironmentName(const char* value) { SetComputeEnvironmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment.</p>
     */
    inline const Aws::String& GetComputeEnvironmentArn() const{ return m_computeEnvironmentArn; }
    inline void SetComputeEnvironmentArn(const Aws::String& value) { m_computeEnvironmentArn = value; }
    inline void SetComputeEnvironmentArn(Aws::String&& value) { m_computeEnvironmentArn = std::move(value); }
    inline void SetComputeEnvironmentArn(const char* value) { m_computeEnvironmentArn.assign(value); }
    inline CreateComputeEnvironmentResult& WithComputeEnvironmentArn(const Aws::String& value) { SetComputeEnvironmentArn(value); return *this;}
    inline CreateComputeEnvironmentResult& WithComputeEnvironmentArn(Aws::String&& value) { SetComputeEnvironmentArn(std::move(value)); return *this;}
    inline CreateComputeEnvironmentResult& WithComputeEnvironmentArn(const char* value) { SetComputeEnvironmentArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateComputeEnvironmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateComputeEnvironmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateComputeEnvironmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_computeEnvironmentName;

    Aws::String m_computeEnvironmentArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
