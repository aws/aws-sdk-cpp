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
    AWS_HEALTH_API DescribeEntityAggregatesForOrganizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEntityAggregatesForOrganization"; }

    AWS_HEALTH_API Aws::String SerializePayload() const override;

    AWS_HEALTH_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetEventArns() const{ return m_eventArns; }

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline bool EventArnsHasBeenSet() const { return m_eventArnsHasBeenSet; }

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline void SetEventArns(const Aws::Vector<Aws::String>& value) { m_eventArnsHasBeenSet = true; m_eventArns = value; }

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline void SetEventArns(Aws::Vector<Aws::String>&& value) { m_eventArnsHasBeenSet = true; m_eventArns = std::move(value); }

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline DescribeEntityAggregatesForOrganizationRequest& WithEventArns(const Aws::Vector<Aws::String>& value) { SetEventArns(value); return *this;}

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline DescribeEntityAggregatesForOrganizationRequest& WithEventArns(Aws::Vector<Aws::String>&& value) { SetEventArns(std::move(value)); return *this;}

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline DescribeEntityAggregatesForOrganizationRequest& AddEventArns(const Aws::String& value) { m_eventArnsHasBeenSet = true; m_eventArns.push_back(value); return *this; }

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline DescribeEntityAggregatesForOrganizationRequest& AddEventArns(Aws::String&& value) { m_eventArnsHasBeenSet = true; m_eventArns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline DescribeEntityAggregatesForOrganizationRequest& AddEventArns(const char* value) { m_eventArnsHasBeenSet = true; m_eventArns.push_back(value); return *this; }


    /**
     * <p>A list of 12-digit Amazon Web Services account numbers that contains the
     * affected entities.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAwsAccountIds() const{ return m_awsAccountIds; }

    /**
     * <p>A list of 12-digit Amazon Web Services account numbers that contains the
     * affected entities.</p>
     */
    inline bool AwsAccountIdsHasBeenSet() const { return m_awsAccountIdsHasBeenSet; }

    /**
     * <p>A list of 12-digit Amazon Web Services account numbers that contains the
     * affected entities.</p>
     */
    inline void SetAwsAccountIds(const Aws::Vector<Aws::String>& value) { m_awsAccountIdsHasBeenSet = true; m_awsAccountIds = value; }

    /**
     * <p>A list of 12-digit Amazon Web Services account numbers that contains the
     * affected entities.</p>
     */
    inline void SetAwsAccountIds(Aws::Vector<Aws::String>&& value) { m_awsAccountIdsHasBeenSet = true; m_awsAccountIds = std::move(value); }

    /**
     * <p>A list of 12-digit Amazon Web Services account numbers that contains the
     * affected entities.</p>
     */
    inline DescribeEntityAggregatesForOrganizationRequest& WithAwsAccountIds(const Aws::Vector<Aws::String>& value) { SetAwsAccountIds(value); return *this;}

    /**
     * <p>A list of 12-digit Amazon Web Services account numbers that contains the
     * affected entities.</p>
     */
    inline DescribeEntityAggregatesForOrganizationRequest& WithAwsAccountIds(Aws::Vector<Aws::String>&& value) { SetAwsAccountIds(std::move(value)); return *this;}

    /**
     * <p>A list of 12-digit Amazon Web Services account numbers that contains the
     * affected entities.</p>
     */
    inline DescribeEntityAggregatesForOrganizationRequest& AddAwsAccountIds(const Aws::String& value) { m_awsAccountIdsHasBeenSet = true; m_awsAccountIds.push_back(value); return *this; }

    /**
     * <p>A list of 12-digit Amazon Web Services account numbers that contains the
     * affected entities.</p>
     */
    inline DescribeEntityAggregatesForOrganizationRequest& AddAwsAccountIds(Aws::String&& value) { m_awsAccountIdsHasBeenSet = true; m_awsAccountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of 12-digit Amazon Web Services account numbers that contains the
     * affected entities.</p>
     */
    inline DescribeEntityAggregatesForOrganizationRequest& AddAwsAccountIds(const char* value) { m_awsAccountIdsHasBeenSet = true; m_awsAccountIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_eventArns;
    bool m_eventArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_awsAccountIds;
    bool m_awsAccountIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
