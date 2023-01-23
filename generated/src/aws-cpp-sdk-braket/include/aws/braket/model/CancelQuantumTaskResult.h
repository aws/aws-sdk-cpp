/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/model/CancellationStatus.h>
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
  class CancelQuantumTaskResult
  {
  public:
    AWS_BRAKET_API CancelQuantumTaskResult();
    AWS_BRAKET_API CancelQuantumTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BRAKET_API CancelQuantumTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the cancellation request.</p>
     */
    inline const CancellationStatus& GetCancellationStatus() const{ return m_cancellationStatus; }

    /**
     * <p>The status of the cancellation request.</p>
     */
    inline void SetCancellationStatus(const CancellationStatus& value) { m_cancellationStatus = value; }

    /**
     * <p>The status of the cancellation request.</p>
     */
    inline void SetCancellationStatus(CancellationStatus&& value) { m_cancellationStatus = std::move(value); }

    /**
     * <p>The status of the cancellation request.</p>
     */
    inline CancelQuantumTaskResult& WithCancellationStatus(const CancellationStatus& value) { SetCancellationStatus(value); return *this;}

    /**
     * <p>The status of the cancellation request.</p>
     */
    inline CancelQuantumTaskResult& WithCancellationStatus(CancellationStatus&& value) { SetCancellationStatus(std::move(value)); return *this;}


    /**
     * <p>The ARN of the task.</p>
     */
    inline const Aws::String& GetQuantumTaskArn() const{ return m_quantumTaskArn; }

    /**
     * <p>The ARN of the task.</p>
     */
    inline void SetQuantumTaskArn(const Aws::String& value) { m_quantumTaskArn = value; }

    /**
     * <p>The ARN of the task.</p>
     */
    inline void SetQuantumTaskArn(Aws::String&& value) { m_quantumTaskArn = std::move(value); }

    /**
     * <p>The ARN of the task.</p>
     */
    inline void SetQuantumTaskArn(const char* value) { m_quantumTaskArn.assign(value); }

    /**
     * <p>The ARN of the task.</p>
     */
    inline CancelQuantumTaskResult& WithQuantumTaskArn(const Aws::String& value) { SetQuantumTaskArn(value); return *this;}

    /**
     * <p>The ARN of the task.</p>
     */
    inline CancelQuantumTaskResult& WithQuantumTaskArn(Aws::String&& value) { SetQuantumTaskArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the task.</p>
     */
    inline CancelQuantumTaskResult& WithQuantumTaskArn(const char* value) { SetQuantumTaskArn(value); return *this;}

  private:

    CancellationStatus m_cancellationStatus;

    Aws::String m_quantumTaskArn;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
