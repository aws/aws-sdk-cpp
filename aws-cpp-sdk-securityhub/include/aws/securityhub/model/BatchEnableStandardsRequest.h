/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/StandardsSubscriptionRequest.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class BatchEnableStandardsRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API BatchEnableStandardsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchEnableStandards"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    /**
     * <p>The list of standards checks to enable.</p>
     */
    inline const Aws::Vector<StandardsSubscriptionRequest>& GetStandardsSubscriptionRequests() const{ return m_standardsSubscriptionRequests; }

    /**
     * <p>The list of standards checks to enable.</p>
     */
    inline bool StandardsSubscriptionRequestsHasBeenSet() const { return m_standardsSubscriptionRequestsHasBeenSet; }

    /**
     * <p>The list of standards checks to enable.</p>
     */
    inline void SetStandardsSubscriptionRequests(const Aws::Vector<StandardsSubscriptionRequest>& value) { m_standardsSubscriptionRequestsHasBeenSet = true; m_standardsSubscriptionRequests = value; }

    /**
     * <p>The list of standards checks to enable.</p>
     */
    inline void SetStandardsSubscriptionRequests(Aws::Vector<StandardsSubscriptionRequest>&& value) { m_standardsSubscriptionRequestsHasBeenSet = true; m_standardsSubscriptionRequests = std::move(value); }

    /**
     * <p>The list of standards checks to enable.</p>
     */
    inline BatchEnableStandardsRequest& WithStandardsSubscriptionRequests(const Aws::Vector<StandardsSubscriptionRequest>& value) { SetStandardsSubscriptionRequests(value); return *this;}

    /**
     * <p>The list of standards checks to enable.</p>
     */
    inline BatchEnableStandardsRequest& WithStandardsSubscriptionRequests(Aws::Vector<StandardsSubscriptionRequest>&& value) { SetStandardsSubscriptionRequests(std::move(value)); return *this;}

    /**
     * <p>The list of standards checks to enable.</p>
     */
    inline BatchEnableStandardsRequest& AddStandardsSubscriptionRequests(const StandardsSubscriptionRequest& value) { m_standardsSubscriptionRequestsHasBeenSet = true; m_standardsSubscriptionRequests.push_back(value); return *this; }

    /**
     * <p>The list of standards checks to enable.</p>
     */
    inline BatchEnableStandardsRequest& AddStandardsSubscriptionRequests(StandardsSubscriptionRequest&& value) { m_standardsSubscriptionRequestsHasBeenSet = true; m_standardsSubscriptionRequests.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<StandardsSubscriptionRequest> m_standardsSubscriptionRequests;
    bool m_standardsSubscriptionRequestsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
