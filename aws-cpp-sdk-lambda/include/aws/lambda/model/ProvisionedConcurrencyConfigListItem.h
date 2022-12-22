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
    AWS_LAMBDA_API ProvisionedConcurrencyConfigListItem();
    AWS_LAMBDA_API ProvisionedConcurrencyConfigListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API ProvisionedConcurrencyConfigListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the alias or version.</p>
     */
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the alias or version.</p>
     */
    inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the alias or version.</p>
     */
    inline void SetFunctionArn(const Aws::String& value) { m_functionArnHasBeenSet = true; m_functionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the alias or version.</p>
     */
    inline void SetFunctionArn(Aws::String&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the alias or version.</p>
     */
    inline void SetFunctionArn(const char* value) { m_functionArnHasBeenSet = true; m_functionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the alias or version.</p>
     */
    inline ProvisionedConcurrencyConfigListItem& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the alias or version.</p>
     */
    inline ProvisionedConcurrencyConfigListItem& WithFunctionArn(Aws::String&& value) { SetFunctionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the alias or version.</p>
     */
    inline ProvisionedConcurrencyConfigListItem& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}


    /**
     * <p>The amount of provisioned concurrency requested.</p>
     */
    inline int GetRequestedProvisionedConcurrentExecutions() const{ return m_requestedProvisionedConcurrentExecutions; }

    /**
     * <p>The amount of provisioned concurrency requested.</p>
     */
    inline bool RequestedProvisionedConcurrentExecutionsHasBeenSet() const { return m_requestedProvisionedConcurrentExecutionsHasBeenSet; }

    /**
     * <p>The amount of provisioned concurrency requested.</p>
     */
    inline void SetRequestedProvisionedConcurrentExecutions(int value) { m_requestedProvisionedConcurrentExecutionsHasBeenSet = true; m_requestedProvisionedConcurrentExecutions = value; }

    /**
     * <p>The amount of provisioned concurrency requested.</p>
     */
    inline ProvisionedConcurrencyConfigListItem& WithRequestedProvisionedConcurrentExecutions(int value) { SetRequestedProvisionedConcurrentExecutions(value); return *this;}


    /**
     * <p>The amount of provisioned concurrency available.</p>
     */
    inline int GetAvailableProvisionedConcurrentExecutions() const{ return m_availableProvisionedConcurrentExecutions; }

    /**
     * <p>The amount of provisioned concurrency available.</p>
     */
    inline bool AvailableProvisionedConcurrentExecutionsHasBeenSet() const { return m_availableProvisionedConcurrentExecutionsHasBeenSet; }

    /**
     * <p>The amount of provisioned concurrency available.</p>
     */
    inline void SetAvailableProvisionedConcurrentExecutions(int value) { m_availableProvisionedConcurrentExecutionsHasBeenSet = true; m_availableProvisionedConcurrentExecutions = value; }

    /**
     * <p>The amount of provisioned concurrency available.</p>
     */
    inline ProvisionedConcurrencyConfigListItem& WithAvailableProvisionedConcurrentExecutions(int value) { SetAvailableProvisionedConcurrentExecutions(value); return *this;}


    /**
     * <p>The amount of provisioned concurrency allocated. When a weighted alias is
     * used during linear and canary deployments, this value fluctuates depending on
     * the amount of concurrency that is provisioned for the function versions.</p>
     */
    inline int GetAllocatedProvisionedConcurrentExecutions() const{ return m_allocatedProvisionedConcurrentExecutions; }

    /**
     * <p>The amount of provisioned concurrency allocated. When a weighted alias is
     * used during linear and canary deployments, this value fluctuates depending on
     * the amount of concurrency that is provisioned for the function versions.</p>
     */
    inline bool AllocatedProvisionedConcurrentExecutionsHasBeenSet() const { return m_allocatedProvisionedConcurrentExecutionsHasBeenSet; }

    /**
     * <p>The amount of provisioned concurrency allocated. When a weighted alias is
     * used during linear and canary deployments, this value fluctuates depending on
     * the amount of concurrency that is provisioned for the function versions.</p>
     */
    inline void SetAllocatedProvisionedConcurrentExecutions(int value) { m_allocatedProvisionedConcurrentExecutionsHasBeenSet = true; m_allocatedProvisionedConcurrentExecutions = value; }

    /**
     * <p>The amount of provisioned concurrency allocated. When a weighted alias is
     * used during linear and canary deployments, this value fluctuates depending on
     * the amount of concurrency that is provisioned for the function versions.</p>
     */
    inline ProvisionedConcurrencyConfigListItem& WithAllocatedProvisionedConcurrentExecutions(int value) { SetAllocatedProvisionedConcurrentExecutions(value); return *this;}


    /**
     * <p>The status of the allocation process.</p>
     */
    inline const ProvisionedConcurrencyStatusEnum& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the allocation process.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the allocation process.</p>
     */
    inline void SetStatus(const ProvisionedConcurrencyStatusEnum& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the allocation process.</p>
     */
    inline void SetStatus(ProvisionedConcurrencyStatusEnum&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the allocation process.</p>
     */
    inline ProvisionedConcurrencyConfigListItem& WithStatus(const ProvisionedConcurrencyStatusEnum& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the allocation process.</p>
     */
    inline ProvisionedConcurrencyConfigListItem& WithStatus(ProvisionedConcurrencyStatusEnum&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>For failed allocations, the reason that provisioned concurrency could not be
     * allocated.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>For failed allocations, the reason that provisioned concurrency could not be
     * allocated.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>For failed allocations, the reason that provisioned concurrency could not be
     * allocated.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>For failed allocations, the reason that provisioned concurrency could not be
     * allocated.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>For failed allocations, the reason that provisioned concurrency could not be
     * allocated.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>For failed allocations, the reason that provisioned concurrency could not be
     * allocated.</p>
     */
    inline ProvisionedConcurrencyConfigListItem& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>For failed allocations, the reason that provisioned concurrency could not be
     * allocated.</p>
     */
    inline ProvisionedConcurrencyConfigListItem& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>For failed allocations, the reason that provisioned concurrency could not be
     * allocated.</p>
     */
    inline ProvisionedConcurrencyConfigListItem& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>The date and time that a user last updated the configuration, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601
     * format</a>.</p>
     */
    inline const Aws::String& GetLastModified() const{ return m_lastModified; }

    /**
     * <p>The date and time that a user last updated the configuration, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601
     * format</a>.</p>
     */
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }

    /**
     * <p>The date and time that a user last updated the configuration, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601
     * format</a>.</p>
     */
    inline void SetLastModified(const Aws::String& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }

    /**
     * <p>The date and time that a user last updated the configuration, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601
     * format</a>.</p>
     */
    inline void SetLastModified(Aws::String&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }

    /**
     * <p>The date and time that a user last updated the configuration, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601
     * format</a>.</p>
     */
    inline void SetLastModified(const char* value) { m_lastModifiedHasBeenSet = true; m_lastModified.assign(value); }

    /**
     * <p>The date and time that a user last updated the configuration, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601
     * format</a>.</p>
     */
    inline ProvisionedConcurrencyConfigListItem& WithLastModified(const Aws::String& value) { SetLastModified(value); return *this;}

    /**
     * <p>The date and time that a user last updated the configuration, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601
     * format</a>.</p>
     */
    inline ProvisionedConcurrencyConfigListItem& WithLastModified(Aws::String&& value) { SetLastModified(std::move(value)); return *this;}

    /**
     * <p>The date and time that a user last updated the configuration, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601
     * format</a>.</p>
     */
    inline ProvisionedConcurrencyConfigListItem& WithLastModified(const char* value) { SetLastModified(value); return *this;}

  private:

    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet = false;

    int m_requestedProvisionedConcurrentExecutions;
    bool m_requestedProvisionedConcurrentExecutionsHasBeenSet = false;

    int m_availableProvisionedConcurrentExecutions;
    bool m_availableProvisionedConcurrentExecutionsHasBeenSet = false;

    int m_allocatedProvisionedConcurrentExecutions;
    bool m_allocatedProvisionedConcurrentExecutionsHasBeenSet = false;

    ProvisionedConcurrencyStatusEnum m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_lastModified;
    bool m_lastModifiedHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
