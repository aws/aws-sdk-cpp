/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class BatchDisableStandardsRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API BatchDisableStandardsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDisableStandards"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARNs of the standards subscriptions to disable.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStandardsSubscriptionArns() const{ return m_standardsSubscriptionArns; }

    /**
     * <p>The ARNs of the standards subscriptions to disable.</p>
     */
    inline bool StandardsSubscriptionArnsHasBeenSet() const { return m_standardsSubscriptionArnsHasBeenSet; }

    /**
     * <p>The ARNs of the standards subscriptions to disable.</p>
     */
    inline void SetStandardsSubscriptionArns(const Aws::Vector<Aws::String>& value) { m_standardsSubscriptionArnsHasBeenSet = true; m_standardsSubscriptionArns = value; }

    /**
     * <p>The ARNs of the standards subscriptions to disable.</p>
     */
    inline void SetStandardsSubscriptionArns(Aws::Vector<Aws::String>&& value) { m_standardsSubscriptionArnsHasBeenSet = true; m_standardsSubscriptionArns = std::move(value); }

    /**
     * <p>The ARNs of the standards subscriptions to disable.</p>
     */
    inline BatchDisableStandardsRequest& WithStandardsSubscriptionArns(const Aws::Vector<Aws::String>& value) { SetStandardsSubscriptionArns(value); return *this;}

    /**
     * <p>The ARNs of the standards subscriptions to disable.</p>
     */
    inline BatchDisableStandardsRequest& WithStandardsSubscriptionArns(Aws::Vector<Aws::String>&& value) { SetStandardsSubscriptionArns(std::move(value)); return *this;}

    /**
     * <p>The ARNs of the standards subscriptions to disable.</p>
     */
    inline BatchDisableStandardsRequest& AddStandardsSubscriptionArns(const Aws::String& value) { m_standardsSubscriptionArnsHasBeenSet = true; m_standardsSubscriptionArns.push_back(value); return *this; }

    /**
     * <p>The ARNs of the standards subscriptions to disable.</p>
     */
    inline BatchDisableStandardsRequest& AddStandardsSubscriptionArns(Aws::String&& value) { m_standardsSubscriptionArnsHasBeenSet = true; m_standardsSubscriptionArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARNs of the standards subscriptions to disable.</p>
     */
    inline BatchDisableStandardsRequest& AddStandardsSubscriptionArns(const char* value) { m_standardsSubscriptionArnsHasBeenSet = true; m_standardsSubscriptionArns.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_standardsSubscriptionArns;
    bool m_standardsSubscriptionArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
