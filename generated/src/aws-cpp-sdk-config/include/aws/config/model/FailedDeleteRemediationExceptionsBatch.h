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
    AWS_CONFIGSERVICE_API FailedDeleteRemediationExceptionsBatch() = default;
    AWS_CONFIGSERVICE_API FailedDeleteRemediationExceptionsBatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API FailedDeleteRemediationExceptionsBatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Returns a failure message for delete remediation exception. For example,
     * Config creates an exception due to an internal error.</p>
     */
    inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    template<typename FailureMessageT = Aws::String>
    void SetFailureMessage(FailureMessageT&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::forward<FailureMessageT>(value); }
    template<typename FailureMessageT = Aws::String>
    FailedDeleteRemediationExceptionsBatch& WithFailureMessage(FailureMessageT&& value) { SetFailureMessage(std::forward<FailureMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns remediation exception resource key object of the failed items.</p>
     */
    inline const Aws::Vector<RemediationExceptionResourceKey>& GetFailedItems() const { return m_failedItems; }
    inline bool FailedItemsHasBeenSet() const { return m_failedItemsHasBeenSet; }
    template<typename FailedItemsT = Aws::Vector<RemediationExceptionResourceKey>>
    void SetFailedItems(FailedItemsT&& value) { m_failedItemsHasBeenSet = true; m_failedItems = std::forward<FailedItemsT>(value); }
    template<typename FailedItemsT = Aws::Vector<RemediationExceptionResourceKey>>
    FailedDeleteRemediationExceptionsBatch& WithFailedItems(FailedItemsT&& value) { SetFailedItems(std::forward<FailedItemsT>(value)); return *this;}
    template<typename FailedItemsT = RemediationExceptionResourceKey>
    FailedDeleteRemediationExceptionsBatch& AddFailedItems(FailedItemsT&& value) { m_failedItemsHasBeenSet = true; m_failedItems.emplace_back(std::forward<FailedItemsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

    Aws::Vector<RemediationExceptionResourceKey> m_failedItems;
    bool m_failedItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
