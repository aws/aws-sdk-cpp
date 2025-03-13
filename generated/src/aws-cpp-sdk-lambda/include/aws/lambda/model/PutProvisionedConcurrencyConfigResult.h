/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/ProvisionedConcurrencyStatusEnum.h>
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
namespace Lambda
{
namespace Model
{
  class PutProvisionedConcurrencyConfigResult
  {
  public:
    AWS_LAMBDA_API PutProvisionedConcurrencyConfigResult() = default;
    AWS_LAMBDA_API PutProvisionedConcurrencyConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAMBDA_API PutProvisionedConcurrencyConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The amount of provisioned concurrency requested.</p>
     */
    inline int GetRequestedProvisionedConcurrentExecutions() const { return m_requestedProvisionedConcurrentExecutions; }
    inline void SetRequestedProvisionedConcurrentExecutions(int value) { m_requestedProvisionedConcurrentExecutionsHasBeenSet = true; m_requestedProvisionedConcurrentExecutions = value; }
    inline PutProvisionedConcurrencyConfigResult& WithRequestedProvisionedConcurrentExecutions(int value) { SetRequestedProvisionedConcurrentExecutions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of provisioned concurrency available.</p>
     */
    inline int GetAvailableProvisionedConcurrentExecutions() const { return m_availableProvisionedConcurrentExecutions; }
    inline void SetAvailableProvisionedConcurrentExecutions(int value) { m_availableProvisionedConcurrentExecutionsHasBeenSet = true; m_availableProvisionedConcurrentExecutions = value; }
    inline PutProvisionedConcurrencyConfigResult& WithAvailableProvisionedConcurrentExecutions(int value) { SetAvailableProvisionedConcurrentExecutions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of provisioned concurrency allocated. When a weighted alias is
     * used during linear and canary deployments, this value fluctuates depending on
     * the amount of concurrency that is provisioned for the function versions.</p>
     */
    inline int GetAllocatedProvisionedConcurrentExecutions() const { return m_allocatedProvisionedConcurrentExecutions; }
    inline void SetAllocatedProvisionedConcurrentExecutions(int value) { m_allocatedProvisionedConcurrentExecutionsHasBeenSet = true; m_allocatedProvisionedConcurrentExecutions = value; }
    inline PutProvisionedConcurrencyConfigResult& WithAllocatedProvisionedConcurrentExecutions(int value) { SetAllocatedProvisionedConcurrentExecutions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the allocation process.</p>
     */
    inline ProvisionedConcurrencyStatusEnum GetStatus() const { return m_status; }
    inline void SetStatus(ProvisionedConcurrencyStatusEnum value) { m_statusHasBeenSet = true; m_status = value; }
    inline PutProvisionedConcurrencyConfigResult& WithStatus(ProvisionedConcurrencyStatusEnum value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For failed allocations, the reason that provisioned concurrency could not be
     * allocated.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    PutProvisionedConcurrencyConfigResult& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a user last updated the configuration, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601
     * format</a>.</p>
     */
    inline const Aws::String& GetLastModified() const { return m_lastModified; }
    template<typename LastModifiedT = Aws::String>
    void SetLastModified(LastModifiedT&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::forward<LastModifiedT>(value); }
    template<typename LastModifiedT = Aws::String>
    PutProvisionedConcurrencyConfigResult& WithLastModified(LastModifiedT&& value) { SetLastModified(std::forward<LastModifiedT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutProvisionedConcurrencyConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_requestedProvisionedConcurrentExecutions{0};
    bool m_requestedProvisionedConcurrentExecutionsHasBeenSet = false;

    int m_availableProvisionedConcurrentExecutions{0};
    bool m_availableProvisionedConcurrentExecutionsHasBeenSet = false;

    int m_allocatedProvisionedConcurrentExecutions{0};
    bool m_allocatedProvisionedConcurrentExecutionsHasBeenSet = false;

    ProvisionedConcurrencyStatusEnum m_status{ProvisionedConcurrencyStatusEnum::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_lastModified;
    bool m_lastModifiedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
