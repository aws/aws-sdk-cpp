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
    AWS_CONFIGSERVICE_API FailedRemediationBatch();
    AWS_CONFIGSERVICE_API FailedRemediationBatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API FailedRemediationBatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Returns a failure message. For example, the resource is already
     * compliant.</p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessageHasBeenSet = true; m_failureMessage = value; }
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::move(value); }
    inline void SetFailureMessage(const char* value) { m_failureMessageHasBeenSet = true; m_failureMessage.assign(value); }
    inline FailedRemediationBatch& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}
    inline FailedRemediationBatch& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}
    inline FailedRemediationBatch& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns remediation configurations of the failed items.</p>
     */
    inline const Aws::Vector<RemediationConfiguration>& GetFailedItems() const{ return m_failedItems; }
    inline bool FailedItemsHasBeenSet() const { return m_failedItemsHasBeenSet; }
    inline void SetFailedItems(const Aws::Vector<RemediationConfiguration>& value) { m_failedItemsHasBeenSet = true; m_failedItems = value; }
    inline void SetFailedItems(Aws::Vector<RemediationConfiguration>&& value) { m_failedItemsHasBeenSet = true; m_failedItems = std::move(value); }
    inline FailedRemediationBatch& WithFailedItems(const Aws::Vector<RemediationConfiguration>& value) { SetFailedItems(value); return *this;}
    inline FailedRemediationBatch& WithFailedItems(Aws::Vector<RemediationConfiguration>&& value) { SetFailedItems(std::move(value)); return *this;}
    inline FailedRemediationBatch& AddFailedItems(const RemediationConfiguration& value) { m_failedItemsHasBeenSet = true; m_failedItems.push_back(value); return *this; }
    inline FailedRemediationBatch& AddFailedItems(RemediationConfiguration&& value) { m_failedItemsHasBeenSet = true; m_failedItems.push_back(std::move(value)); return *this; }
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
