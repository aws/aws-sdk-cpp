/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/ProvisionedConcurrencyStatusEnum.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{

  /**
   * <p>Details about the provisioned concurrency configuration for a function alias
   * or version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ProvisionedConcurrencyConfigListItem">AWS
   * API Reference</a></p>
   */
  class ProvisionedConcurrencyConfigListItem
  {
  public:
    AWS_LAMBDA_API ProvisionedConcurrencyConfigListItem() = default;
    AWS_LAMBDA_API ProvisionedConcurrencyConfigListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API ProvisionedConcurrencyConfigListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the alias or version.</p>
     */
    inline const Aws::String& GetFunctionArn() const { return m_functionArn; }
    inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }
    template<typename FunctionArnT = Aws::String>
    void SetFunctionArn(FunctionArnT&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::forward<FunctionArnT>(value); }
    template<typename FunctionArnT = Aws::String>
    ProvisionedConcurrencyConfigListItem& WithFunctionArn(FunctionArnT&& value) { SetFunctionArn(std::forward<FunctionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of provisioned concurrency requested.</p>
     */
    inline int GetRequestedProvisionedConcurrentExecutions() const { return m_requestedProvisionedConcurrentExecutions; }
    inline bool RequestedProvisionedConcurrentExecutionsHasBeenSet() const { return m_requestedProvisionedConcurrentExecutionsHasBeenSet; }
    inline void SetRequestedProvisionedConcurrentExecutions(int value) { m_requestedProvisionedConcurrentExecutionsHasBeenSet = true; m_requestedProvisionedConcurrentExecutions = value; }
    inline ProvisionedConcurrencyConfigListItem& WithRequestedProvisionedConcurrentExecutions(int value) { SetRequestedProvisionedConcurrentExecutions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of provisioned concurrency available.</p>
     */
    inline int GetAvailableProvisionedConcurrentExecutions() const { return m_availableProvisionedConcurrentExecutions; }
    inline bool AvailableProvisionedConcurrentExecutionsHasBeenSet() const { return m_availableProvisionedConcurrentExecutionsHasBeenSet; }
    inline void SetAvailableProvisionedConcurrentExecutions(int value) { m_availableProvisionedConcurrentExecutionsHasBeenSet = true; m_availableProvisionedConcurrentExecutions = value; }
    inline ProvisionedConcurrencyConfigListItem& WithAvailableProvisionedConcurrentExecutions(int value) { SetAvailableProvisionedConcurrentExecutions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of provisioned concurrency allocated. When a weighted alias is
     * used during linear and canary deployments, this value fluctuates depending on
     * the amount of concurrency that is provisioned for the function versions.</p>
     */
    inline int GetAllocatedProvisionedConcurrentExecutions() const { return m_allocatedProvisionedConcurrentExecutions; }
    inline bool AllocatedProvisionedConcurrentExecutionsHasBeenSet() const { return m_allocatedProvisionedConcurrentExecutionsHasBeenSet; }
    inline void SetAllocatedProvisionedConcurrentExecutions(int value) { m_allocatedProvisionedConcurrentExecutionsHasBeenSet = true; m_allocatedProvisionedConcurrentExecutions = value; }
    inline ProvisionedConcurrencyConfigListItem& WithAllocatedProvisionedConcurrentExecutions(int value) { SetAllocatedProvisionedConcurrentExecutions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the allocation process.</p>
     */
    inline ProvisionedConcurrencyStatusEnum GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ProvisionedConcurrencyStatusEnum value) { m_statusHasBeenSet = true; m_status = value; }
    inline ProvisionedConcurrencyConfigListItem& WithStatus(ProvisionedConcurrencyStatusEnum value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For failed allocations, the reason that provisioned concurrency could not be
     * allocated.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    ProvisionedConcurrencyConfigListItem& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a user last updated the configuration, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601
     * format</a>.</p>
     */
    inline const Aws::String& GetLastModified() const { return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    template<typename LastModifiedT = Aws::String>
    void SetLastModified(LastModifiedT&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::forward<LastModifiedT>(value); }
    template<typename LastModifiedT = Aws::String>
    ProvisionedConcurrencyConfigListItem& WithLastModified(LastModifiedT&& value) { SetLastModified(std::forward<LastModifiedT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet = false;

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
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
