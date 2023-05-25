/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
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
namespace Braket
{
namespace Model
{
  class CreateQuantumTaskResult
  {
  public:
    AWS_BRAKET_API CreateQuantumTaskResult();
    AWS_BRAKET_API CreateQuantumTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BRAKET_API CreateQuantumTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the task created by the request.</p>
     */
    inline const Aws::String& GetQuantumTaskArn() const{ return m_quantumTaskArn; }

    /**
     * <p>The ARN of the task created by the request.</p>
     */
    inline void SetQuantumTaskArn(const Aws::String& value) { m_quantumTaskArn = value; }

    /**
     * <p>The ARN of the task created by the request.</p>
     */
    inline void SetQuantumTaskArn(Aws::String&& value) { m_quantumTaskArn = std::move(value); }

    /**
     * <p>The ARN of the task created by the request.</p>
     */
    inline void SetQuantumTaskArn(const char* value) { m_quantumTaskArn.assign(value); }

    /**
     * <p>The ARN of the task created by the request.</p>
     */
    inline CreateQuantumTaskResult& WithQuantumTaskArn(const Aws::String& value) { SetQuantumTaskArn(value); return *this;}

    /**
     * <p>The ARN of the task created by the request.</p>
     */
    inline CreateQuantumTaskResult& WithQuantumTaskArn(Aws::String&& value) { SetQuantumTaskArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the task created by the request.</p>
     */
    inline CreateQuantumTaskResult& WithQuantumTaskArn(const char* value) { SetQuantumTaskArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateQuantumTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateQuantumTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateQuantumTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_quantumTaskArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
