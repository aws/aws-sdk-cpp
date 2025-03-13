/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/RemediationConfiguration.h>
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
   * <p>List of each of the failed remediations with specific reasons.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/FailedRemediationBatch">AWS
   * API Reference</a></p>
   */
  class FailedRemediationBatch
  {
  public:
    AWS_CONFIGSERVICE_API FailedRemediationBatch() = default;
    AWS_CONFIGSERVICE_API FailedRemediationBatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API FailedRemediationBatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Returns a failure message. For example, the resource is already
     * compliant.</p>
     */
    inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    template<typename FailureMessageT = Aws::String>
    void SetFailureMessage(FailureMessageT&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::forward<FailureMessageT>(value); }
    template<typename FailureMessageT = Aws::String>
    FailedRemediationBatch& WithFailureMessage(FailureMessageT&& value) { SetFailureMessage(std::forward<FailureMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns remediation configurations of the failed items.</p>
     */
    inline const Aws::Vector<RemediationConfiguration>& GetFailedItems() const { return m_failedItems; }
    inline bool FailedItemsHasBeenSet() const { return m_failedItemsHasBeenSet; }
    template<typename FailedItemsT = Aws::Vector<RemediationConfiguration>>
    void SetFailedItems(FailedItemsT&& value) { m_failedItemsHasBeenSet = true; m_failedItems = std::forward<FailedItemsT>(value); }
    template<typename FailedItemsT = Aws::Vector<RemediationConfiguration>>
    FailedRemediationBatch& WithFailedItems(FailedItemsT&& value) { SetFailedItems(std::forward<FailedItemsT>(value)); return *this;}
    template<typename FailedItemsT = RemediationConfiguration>
    FailedRemediationBatch& AddFailedItems(FailedItemsT&& value) { m_failedItemsHasBeenSet = true; m_failedItems.emplace_back(std::forward<FailedItemsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

    Aws::Vector<RemediationConfiguration> m_failedItems;
    bool m_failedItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
