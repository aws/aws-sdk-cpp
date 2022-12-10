/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/RemediationExceptionResourceKey.h>
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
   * <p>List of each of the failed delete remediation exceptions with specific
   * reasons.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/FailedDeleteRemediationExceptionsBatch">AWS
   * API Reference</a></p>
   */
  class FailedDeleteRemediationExceptionsBatch
  {
  public:
    AWS_CONFIGSERVICE_API FailedDeleteRemediationExceptionsBatch();
    AWS_CONFIGSERVICE_API FailedDeleteRemediationExceptionsBatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API FailedDeleteRemediationExceptionsBatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Returns a failure message for delete remediation exception. For example,
     * Config creates an exception due to an internal error.</p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }

    /**
     * <p>Returns a failure message for delete remediation exception. For example,
     * Config creates an exception due to an internal error.</p>
     */
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }

    /**
     * <p>Returns a failure message for delete remediation exception. For example,
     * Config creates an exception due to an internal error.</p>
     */
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessageHasBeenSet = true; m_failureMessage = value; }

    /**
     * <p>Returns a failure message for delete remediation exception. For example,
     * Config creates an exception due to an internal error.</p>
     */
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::move(value); }

    /**
     * <p>Returns a failure message for delete remediation exception. For example,
     * Config creates an exception due to an internal error.</p>
     */
    inline void SetFailureMessage(const char* value) { m_failureMessageHasBeenSet = true; m_failureMessage.assign(value); }

    /**
     * <p>Returns a failure message for delete remediation exception. For example,
     * Config creates an exception due to an internal error.</p>
     */
    inline FailedDeleteRemediationExceptionsBatch& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}

    /**
     * <p>Returns a failure message for delete remediation exception. For example,
     * Config creates an exception due to an internal error.</p>
     */
    inline FailedDeleteRemediationExceptionsBatch& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}

    /**
     * <p>Returns a failure message for delete remediation exception. For example,
     * Config creates an exception due to an internal error.</p>
     */
    inline FailedDeleteRemediationExceptionsBatch& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}


    /**
     * <p>Returns remediation exception resource key object of the failed items.</p>
     */
    inline const Aws::Vector<RemediationExceptionResourceKey>& GetFailedItems() const{ return m_failedItems; }

    /**
     * <p>Returns remediation exception resource key object of the failed items.</p>
     */
    inline bool FailedItemsHasBeenSet() const { return m_failedItemsHasBeenSet; }

    /**
     * <p>Returns remediation exception resource key object of the failed items.</p>
     */
    inline void SetFailedItems(const Aws::Vector<RemediationExceptionResourceKey>& value) { m_failedItemsHasBeenSet = true; m_failedItems = value; }

    /**
     * <p>Returns remediation exception resource key object of the failed items.</p>
     */
    inline void SetFailedItems(Aws::Vector<RemediationExceptionResourceKey>&& value) { m_failedItemsHasBeenSet = true; m_failedItems = std::move(value); }

    /**
     * <p>Returns remediation exception resource key object of the failed items.</p>
     */
    inline FailedDeleteRemediationExceptionsBatch& WithFailedItems(const Aws::Vector<RemediationExceptionResourceKey>& value) { SetFailedItems(value); return *this;}

    /**
     * <p>Returns remediation exception resource key object of the failed items.</p>
     */
    inline FailedDeleteRemediationExceptionsBatch& WithFailedItems(Aws::Vector<RemediationExceptionResourceKey>&& value) { SetFailedItems(std::move(value)); return *this;}

    /**
     * <p>Returns remediation exception resource key object of the failed items.</p>
     */
    inline FailedDeleteRemediationExceptionsBatch& AddFailedItems(const RemediationExceptionResourceKey& value) { m_failedItemsHasBeenSet = true; m_failedItems.push_back(value); return *this; }

    /**
     * <p>Returns remediation exception resource key object of the failed items.</p>
     */
    inline FailedDeleteRemediationExceptionsBatch& AddFailedItems(RemediationExceptionResourceKey&& value) { m_failedItemsHasBeenSet = true; m_failedItems.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

    Aws::Vector<RemediationExceptionResourceKey> m_failedItems;
    bool m_failedItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
