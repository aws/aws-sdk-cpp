/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/RemediationException.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>List of each of the failed remediation exceptions with specific
   * reasons.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/FailedRemediationExceptionBatch">AWS
   * API Reference</a></p>
   */
  class FailedRemediationExceptionBatch
  {
  public:
    AWS_CONFIGSERVICE_API FailedRemediationExceptionBatch();
    AWS_CONFIGSERVICE_API FailedRemediationExceptionBatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API FailedRemediationExceptionBatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Returns a failure message. For example, the auto-remediation has failed.</p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }

    /**
     * <p>Returns a failure message. For example, the auto-remediation has failed.</p>
     */
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }

    /**
     * <p>Returns a failure message. For example, the auto-remediation has failed.</p>
     */
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessageHasBeenSet = true; m_failureMessage = value; }

    /**
     * <p>Returns a failure message. For example, the auto-remediation has failed.</p>
     */
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::move(value); }

    /**
     * <p>Returns a failure message. For example, the auto-remediation has failed.</p>
     */
    inline void SetFailureMessage(const char* value) { m_failureMessageHasBeenSet = true; m_failureMessage.assign(value); }

    /**
     * <p>Returns a failure message. For example, the auto-remediation has failed.</p>
     */
    inline FailedRemediationExceptionBatch& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}

    /**
     * <p>Returns a failure message. For example, the auto-remediation has failed.</p>
     */
    inline FailedRemediationExceptionBatch& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}

    /**
     * <p>Returns a failure message. For example, the auto-remediation has failed.</p>
     */
    inline FailedRemediationExceptionBatch& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}


    /**
     * <p>Returns remediation exception resource key object of the failed items.</p>
     */
    inline const Aws::Vector<RemediationException>& GetFailedItems() const{ return m_failedItems; }

    /**
     * <p>Returns remediation exception resource key object of the failed items.</p>
     */
    inline bool FailedItemsHasBeenSet() const { return m_failedItemsHasBeenSet; }

    /**
     * <p>Returns remediation exception resource key object of the failed items.</p>
     */
    inline void SetFailedItems(const Aws::Vector<RemediationException>& value) { m_failedItemsHasBeenSet = true; m_failedItems = value; }

    /**
     * <p>Returns remediation exception resource key object of the failed items.</p>
     */
    inline void SetFailedItems(Aws::Vector<RemediationException>&& value) { m_failedItemsHasBeenSet = true; m_failedItems = std::move(value); }

    /**
     * <p>Returns remediation exception resource key object of the failed items.</p>
     */
    inline FailedRemediationExceptionBatch& WithFailedItems(const Aws::Vector<RemediationException>& value) { SetFailedItems(value); return *this;}

    /**
     * <p>Returns remediation exception resource key object of the failed items.</p>
     */
    inline FailedRemediationExceptionBatch& WithFailedItems(Aws::Vector<RemediationException>&& value) { SetFailedItems(std::move(value)); return *this;}

    /**
     * <p>Returns remediation exception resource key object of the failed items.</p>
     */
    inline FailedRemediationExceptionBatch& AddFailedItems(const RemediationException& value) { m_failedItemsHasBeenSet = true; m_failedItems.push_back(value); return *this; }

    /**
     * <p>Returns remediation exception resource key object of the failed items.</p>
     */
    inline FailedRemediationExceptionBatch& AddFailedItems(RemediationException&& value) { m_failedItemsHasBeenSet = true; m_failedItems.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

    Aws::Vector<RemediationException> m_failedItems;
    bool m_failedItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
