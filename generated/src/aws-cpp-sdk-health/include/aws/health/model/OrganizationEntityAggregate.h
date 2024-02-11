/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/health/model/EntityStatusCode.h>
#include <aws/health/model/AccountEntityAggregate.h>
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
namespace Health
{
namespace Model
{

  /**
   * <p>The aggregate results of entities affected by the specified event in your
   * organization. The results are aggregated by the entity status codes for the
   * specified set of accountsIDs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/OrganizationEntityAggregate">AWS
   * API Reference</a></p>
   */
  class OrganizationEntityAggregate
  {
  public:
    AWS_HEALTH_API OrganizationEntityAggregate();
    AWS_HEALTH_API OrganizationEntityAggregate(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API OrganizationEntityAggregate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline const Aws::String& GetEventArn() const{ return m_eventArn; }

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline bool EventArnHasBeenSet() const { return m_eventArnHasBeenSet; }

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline void SetEventArn(const Aws::String& value) { m_eventArnHasBeenSet = true; m_eventArn = value; }

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline void SetEventArn(Aws::String&& value) { m_eventArnHasBeenSet = true; m_eventArn = std::move(value); }

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline void SetEventArn(const char* value) { m_eventArnHasBeenSet = true; m_eventArn.assign(value); }

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline OrganizationEntityAggregate& WithEventArn(const Aws::String& value) { SetEventArn(value); return *this;}

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline OrganizationEntityAggregate& WithEventArn(Aws::String&& value) { SetEventArn(std::move(value)); return *this;}

    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline OrganizationEntityAggregate& WithEventArn(const char* value) { SetEventArn(value); return *this;}


    /**
     * <p>The number of entities for the organization that match the filter criteria
     * for the specified events.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number of entities for the organization that match the filter criteria
     * for the specified events.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The number of entities for the organization that match the filter criteria
     * for the specified events.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of entities for the organization that match the filter criteria
     * for the specified events.</p>
     */
    inline OrganizationEntityAggregate& WithCount(int value) { SetCount(value); return *this;}


    /**
     * <p>The number of affected entities aggregated by the entitiy status codes.</p>
     */
    inline const Aws::Map<EntityStatusCode, int>& GetStatuses() const{ return m_statuses; }

    /**
     * <p>The number of affected entities aggregated by the entitiy status codes.</p>
     */
    inline bool StatusesHasBeenSet() const { return m_statusesHasBeenSet; }

    /**
     * <p>The number of affected entities aggregated by the entitiy status codes.</p>
     */
    inline void SetStatuses(const Aws::Map<EntityStatusCode, int>& value) { m_statusesHasBeenSet = true; m_statuses = value; }

    /**
     * <p>The number of affected entities aggregated by the entitiy status codes.</p>
     */
    inline void SetStatuses(Aws::Map<EntityStatusCode, int>&& value) { m_statusesHasBeenSet = true; m_statuses = std::move(value); }

    /**
     * <p>The number of affected entities aggregated by the entitiy status codes.</p>
     */
    inline OrganizationEntityAggregate& WithStatuses(const Aws::Map<EntityStatusCode, int>& value) { SetStatuses(value); return *this;}

    /**
     * <p>The number of affected entities aggregated by the entitiy status codes.</p>
     */
    inline OrganizationEntityAggregate& WithStatuses(Aws::Map<EntityStatusCode, int>&& value) { SetStatuses(std::move(value)); return *this;}

    /**
     * <p>The number of affected entities aggregated by the entitiy status codes.</p>
     */
    inline OrganizationEntityAggregate& AddStatuses(const EntityStatusCode& key, int value) { m_statusesHasBeenSet = true; m_statuses.emplace(key, value); return *this; }

    /**
     * <p>The number of affected entities aggregated by the entitiy status codes.</p>
     */
    inline OrganizationEntityAggregate& AddStatuses(EntityStatusCode&& key, int value) { m_statusesHasBeenSet = true; m_statuses.emplace(std::move(key), value); return *this; }


    /**
     * <p>A list of entity aggregates for each of the specified accounts in your
     * organization that are affected by a specific event. If there are no
     * <code>awsAccountIds</code> provided in the request, this field will be empty in
     * the response.</p>
     */
    inline const Aws::Vector<AccountEntityAggregate>& GetAccounts() const{ return m_accounts; }

    /**
     * <p>A list of entity aggregates for each of the specified accounts in your
     * organization that are affected by a specific event. If there are no
     * <code>awsAccountIds</code> provided in the request, this field will be empty in
     * the response.</p>
     */
    inline bool AccountsHasBeenSet() const { return m_accountsHasBeenSet; }

    /**
     * <p>A list of entity aggregates for each of the specified accounts in your
     * organization that are affected by a specific event. If there are no
     * <code>awsAccountIds</code> provided in the request, this field will be empty in
     * the response.</p>
     */
    inline void SetAccounts(const Aws::Vector<AccountEntityAggregate>& value) { m_accountsHasBeenSet = true; m_accounts = value; }

    /**
     * <p>A list of entity aggregates for each of the specified accounts in your
     * organization that are affected by a specific event. If there are no
     * <code>awsAccountIds</code> provided in the request, this field will be empty in
     * the response.</p>
     */
    inline void SetAccounts(Aws::Vector<AccountEntityAggregate>&& value) { m_accountsHasBeenSet = true; m_accounts = std::move(value); }

    /**
     * <p>A list of entity aggregates for each of the specified accounts in your
     * organization that are affected by a specific event. If there are no
     * <code>awsAccountIds</code> provided in the request, this field will be empty in
     * the response.</p>
     */
    inline OrganizationEntityAggregate& WithAccounts(const Aws::Vector<AccountEntityAggregate>& value) { SetAccounts(value); return *this;}

    /**
     * <p>A list of entity aggregates for each of the specified accounts in your
     * organization that are affected by a specific event. If there are no
     * <code>awsAccountIds</code> provided in the request, this field will be empty in
     * the response.</p>
     */
    inline OrganizationEntityAggregate& WithAccounts(Aws::Vector<AccountEntityAggregate>&& value) { SetAccounts(std::move(value)); return *this;}

    /**
     * <p>A list of entity aggregates for each of the specified accounts in your
     * organization that are affected by a specific event. If there are no
     * <code>awsAccountIds</code> provided in the request, this field will be empty in
     * the response.</p>
     */
    inline OrganizationEntityAggregate& AddAccounts(const AccountEntityAggregate& value) { m_accountsHasBeenSet = true; m_accounts.push_back(value); return *this; }

    /**
     * <p>A list of entity aggregates for each of the specified accounts in your
     * organization that are affected by a specific event. If there are no
     * <code>awsAccountIds</code> provided in the request, this field will be empty in
     * the response.</p>
     */
    inline OrganizationEntityAggregate& AddAccounts(AccountEntityAggregate&& value) { m_accountsHasBeenSet = true; m_accounts.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_eventArn;
    bool m_eventArnHasBeenSet = false;

    int m_count;
    bool m_countHasBeenSet = false;

    Aws::Map<EntityStatusCode, int> m_statuses;
    bool m_statusesHasBeenSet = false;

    Aws::Vector<AccountEntityAggregate> m_accounts;
    bool m_accountsHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
