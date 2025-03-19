/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/health/HealthRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Health
{
namespace Model
{

  /**
   */
  class DescribeEntityAggregatesForOrganizationRequest : public HealthRequest
  {
  public:
    AWS_HEALTH_API DescribeEntityAggregatesForOrganizationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEntityAggregatesForOrganization"; }

    AWS_HEALTH_API Aws::String SerializePayload() const override;

    AWS_HEALTH_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetEventArns() const { return m_eventArns; }
    inline bool EventArnsHasBeenSet() const { return m_eventArnsHasBeenSet; }
    template<typename EventArnsT = Aws::Vector<Aws::String>>
    void SetEventArns(EventArnsT&& value) { m_eventArnsHasBeenSet = true; m_eventArns = std::forward<EventArnsT>(value); }
    template<typename EventArnsT = Aws::Vector<Aws::String>>
    DescribeEntityAggregatesForOrganizationRequest& WithEventArns(EventArnsT&& value) { SetEventArns(std::forward<EventArnsT>(value)); return *this;}
    template<typename EventArnsT = Aws::String>
    DescribeEntityAggregatesForOrganizationRequest& AddEventArns(EventArnsT&& value) { m_eventArnsHasBeenSet = true; m_eventArns.emplace_back(std::forward<EventArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of 12-digit Amazon Web Services account numbers that contains the
     * affected entities.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAwsAccountIds() const { return m_awsAccountIds; }
    inline bool AwsAccountIdsHasBeenSet() const { return m_awsAccountIdsHasBeenSet; }
    template<typename AwsAccountIdsT = Aws::Vector<Aws::String>>
    void SetAwsAccountIds(AwsAccountIdsT&& value) { m_awsAccountIdsHasBeenSet = true; m_awsAccountIds = std::forward<AwsAccountIdsT>(value); }
    template<typename AwsAccountIdsT = Aws::Vector<Aws::String>>
    DescribeEntityAggregatesForOrganizationRequest& WithAwsAccountIds(AwsAccountIdsT&& value) { SetAwsAccountIds(std::forward<AwsAccountIdsT>(value)); return *this;}
    template<typename AwsAccountIdsT = Aws::String>
    DescribeEntityAggregatesForOrganizationRequest& AddAwsAccountIds(AwsAccountIdsT&& value) { m_awsAccountIdsHasBeenSet = true; m_awsAccountIds.emplace_back(std::forward<AwsAccountIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_eventArns;
    bool m_eventArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_awsAccountIds;
    bool m_awsAccountIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
