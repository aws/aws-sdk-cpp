/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateEventSubscriptionMessage">AWS
   * API Reference</a></p>
   */
  class CreateEventSubscriptionRequest : public RDSRequest
  {
  public:
    AWS_RDS_API CreateEventSubscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEventSubscription"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the subscription.</p> <p>Constraints: The name must be less than
     * 255 characters.</p>
     */
    inline const Aws::String& GetSubscriptionName() const{ return m_subscriptionName; }

    /**
     * <p>The name of the subscription.</p> <p>Constraints: The name must be less than
     * 255 characters.</p>
     */
    inline bool SubscriptionNameHasBeenSet() const { return m_subscriptionNameHasBeenSet; }

    /**
     * <p>The name of the subscription.</p> <p>Constraints: The name must be less than
     * 255 characters.</p>
     */
    inline void SetSubscriptionName(const Aws::String& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = value; }

    /**
     * <p>The name of the subscription.</p> <p>Constraints: The name must be less than
     * 255 characters.</p>
     */
    inline void SetSubscriptionName(Aws::String&& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = std::move(value); }

    /**
     * <p>The name of the subscription.</p> <p>Constraints: The name must be less than
     * 255 characters.</p>
     */
    inline void SetSubscriptionName(const char* value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName.assign(value); }

    /**
     * <p>The name of the subscription.</p> <p>Constraints: The name must be less than
     * 255 characters.</p>
     */
    inline CreateEventSubscriptionRequest& WithSubscriptionName(const Aws::String& value) { SetSubscriptionName(value); return *this;}

    /**
     * <p>The name of the subscription.</p> <p>Constraints: The name must be less than
     * 255 characters.</p>
     */
    inline CreateEventSubscriptionRequest& WithSubscriptionName(Aws::String&& value) { SetSubscriptionName(std::move(value)); return *this;}

    /**
     * <p>The name of the subscription.</p> <p>Constraints: The name must be less than
     * 255 characters.</p>
     */
    inline CreateEventSubscriptionRequest& WithSubscriptionName(const char* value) { SetSubscriptionName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the SNS topic created for event
     * notification. The ARN is created by Amazon SNS when you create a topic and
     * subscribe to it.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SNS topic created for event
     * notification. The ARN is created by Amazon SNS when you create a topic and
     * subscribe to it.</p>
     */
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SNS topic created for event
     * notification. The ARN is created by Amazon SNS when you create a topic and
     * subscribe to it.</p>
     */
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SNS topic created for event
     * notification. The ARN is created by Amazon SNS when you create a topic and
     * subscribe to it.</p>
     */
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the SNS topic created for event
     * notification. The ARN is created by Amazon SNS when you create a topic and
     * subscribe to it.</p>
     */
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the SNS topic created for event
     * notification. The ARN is created by Amazon SNS when you create a topic and
     * subscribe to it.</p>
     */
    inline CreateEventSubscriptionRequest& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the SNS topic created for event
     * notification. The ARN is created by Amazon SNS when you create a topic and
     * subscribe to it.</p>
     */
    inline CreateEventSubscriptionRequest& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the SNS topic created for event
     * notification. The ARN is created by Amazon SNS when you create a topic and
     * subscribe to it.</p>
     */
    inline CreateEventSubscriptionRequest& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}


    /**
     * <p>The type of source that is generating the events. For example, if you want to
     * be notified of events generated by a DB instance, you set this parameter to
     * <code>db-instance</code>. For RDS Proxy events, specify <code>db-proxy</code>.
     * If this value isn't specified, all events are returned.</p> <p>Valid values:
     * <code>db-instance</code> | <code>db-cluster</code> |
     * <code>db-parameter-group</code> | <code>db-security-group</code> |
     * <code>db-snapshot</code> | <code>db-cluster-snapshot</code> |
     * <code>db-proxy</code> </p>
     */
    inline const Aws::String& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The type of source that is generating the events. For example, if you want to
     * be notified of events generated by a DB instance, you set this parameter to
     * <code>db-instance</code>. For RDS Proxy events, specify <code>db-proxy</code>.
     * If this value isn't specified, all events are returned.</p> <p>Valid values:
     * <code>db-instance</code> | <code>db-cluster</code> |
     * <code>db-parameter-group</code> | <code>db-security-group</code> |
     * <code>db-snapshot</code> | <code>db-cluster-snapshot</code> |
     * <code>db-proxy</code> </p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>The type of source that is generating the events. For example, if you want to
     * be notified of events generated by a DB instance, you set this parameter to
     * <code>db-instance</code>. For RDS Proxy events, specify <code>db-proxy</code>.
     * If this value isn't specified, all events are returned.</p> <p>Valid values:
     * <code>db-instance</code> | <code>db-cluster</code> |
     * <code>db-parameter-group</code> | <code>db-security-group</code> |
     * <code>db-snapshot</code> | <code>db-cluster-snapshot</code> |
     * <code>db-proxy</code> </p>
     */
    inline void SetSourceType(const Aws::String& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The type of source that is generating the events. For example, if you want to
     * be notified of events generated by a DB instance, you set this parameter to
     * <code>db-instance</code>. For RDS Proxy events, specify <code>db-proxy</code>.
     * If this value isn't specified, all events are returned.</p> <p>Valid values:
     * <code>db-instance</code> | <code>db-cluster</code> |
     * <code>db-parameter-group</code> | <code>db-security-group</code> |
     * <code>db-snapshot</code> | <code>db-cluster-snapshot</code> |
     * <code>db-proxy</code> </p>
     */
    inline void SetSourceType(Aws::String&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>The type of source that is generating the events. For example, if you want to
     * be notified of events generated by a DB instance, you set this parameter to
     * <code>db-instance</code>. For RDS Proxy events, specify <code>db-proxy</code>.
     * If this value isn't specified, all events are returned.</p> <p>Valid values:
     * <code>db-instance</code> | <code>db-cluster</code> |
     * <code>db-parameter-group</code> | <code>db-security-group</code> |
     * <code>db-snapshot</code> | <code>db-cluster-snapshot</code> |
     * <code>db-proxy</code> </p>
     */
    inline void SetSourceType(const char* value) { m_sourceTypeHasBeenSet = true; m_sourceType.assign(value); }

    /**
     * <p>The type of source that is generating the events. For example, if you want to
     * be notified of events generated by a DB instance, you set this parameter to
     * <code>db-instance</code>. For RDS Proxy events, specify <code>db-proxy</code>.
     * If this value isn't specified, all events are returned.</p> <p>Valid values:
     * <code>db-instance</code> | <code>db-cluster</code> |
     * <code>db-parameter-group</code> | <code>db-security-group</code> |
     * <code>db-snapshot</code> | <code>db-cluster-snapshot</code> |
     * <code>db-proxy</code> </p>
     */
    inline CreateEventSubscriptionRequest& WithSourceType(const Aws::String& value) { SetSourceType(value); return *this;}

    /**
     * <p>The type of source that is generating the events. For example, if you want to
     * be notified of events generated by a DB instance, you set this parameter to
     * <code>db-instance</code>. For RDS Proxy events, specify <code>db-proxy</code>.
     * If this value isn't specified, all events are returned.</p> <p>Valid values:
     * <code>db-instance</code> | <code>db-cluster</code> |
     * <code>db-parameter-group</code> | <code>db-security-group</code> |
     * <code>db-snapshot</code> | <code>db-cluster-snapshot</code> |
     * <code>db-proxy</code> </p>
     */
    inline CreateEventSubscriptionRequest& WithSourceType(Aws::String&& value) { SetSourceType(std::move(value)); return *this;}

    /**
     * <p>The type of source that is generating the events. For example, if you want to
     * be notified of events generated by a DB instance, you set this parameter to
     * <code>db-instance</code>. For RDS Proxy events, specify <code>db-proxy</code>.
     * If this value isn't specified, all events are returned.</p> <p>Valid values:
     * <code>db-instance</code> | <code>db-cluster</code> |
     * <code>db-parameter-group</code> | <code>db-security-group</code> |
     * <code>db-snapshot</code> | <code>db-cluster-snapshot</code> |
     * <code>db-proxy</code> </p>
     */
    inline CreateEventSubscriptionRequest& WithSourceType(const char* value) { SetSourceType(value); return *this;}


    /**
     * <p>A list of event categories for a particular source type
     * (<code>SourceType</code>) that you want to subscribe to. You can see a list of
     * the categories for a given source type in the "Amazon RDS event categories and
     * event messages" section of the <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.Messages.html">
     * <i>Amazon RDS User Guide</i> </a> or the <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_Events.Messages.html">
     * <i>Amazon Aurora User Guide</i> </a>. You can also see this list by using the
     * <code>DescribeEventCategories</code> operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventCategories() const{ return m_eventCategories; }

    /**
     * <p>A list of event categories for a particular source type
     * (<code>SourceType</code>) that you want to subscribe to. You can see a list of
     * the categories for a given source type in the "Amazon RDS event categories and
     * event messages" section of the <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.Messages.html">
     * <i>Amazon RDS User Guide</i> </a> or the <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_Events.Messages.html">
     * <i>Amazon Aurora User Guide</i> </a>. You can also see this list by using the
     * <code>DescribeEventCategories</code> operation.</p>
     */
    inline bool EventCategoriesHasBeenSet() const { return m_eventCategoriesHasBeenSet; }

    /**
     * <p>A list of event categories for a particular source type
     * (<code>SourceType</code>) that you want to subscribe to. You can see a list of
     * the categories for a given source type in the "Amazon RDS event categories and
     * event messages" section of the <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.Messages.html">
     * <i>Amazon RDS User Guide</i> </a> or the <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_Events.Messages.html">
     * <i>Amazon Aurora User Guide</i> </a>. You can also see this list by using the
     * <code>DescribeEventCategories</code> operation.</p>
     */
    inline void SetEventCategories(const Aws::Vector<Aws::String>& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories = value; }

    /**
     * <p>A list of event categories for a particular source type
     * (<code>SourceType</code>) that you want to subscribe to. You can see a list of
     * the categories for a given source type in the "Amazon RDS event categories and
     * event messages" section of the <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.Messages.html">
     * <i>Amazon RDS User Guide</i> </a> or the <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_Events.Messages.html">
     * <i>Amazon Aurora User Guide</i> </a>. You can also see this list by using the
     * <code>DescribeEventCategories</code> operation.</p>
     */
    inline void SetEventCategories(Aws::Vector<Aws::String>&& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories = std::move(value); }

    /**
     * <p>A list of event categories for a particular source type
     * (<code>SourceType</code>) that you want to subscribe to. You can see a list of
     * the categories for a given source type in the "Amazon RDS event categories and
     * event messages" section of the <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.Messages.html">
     * <i>Amazon RDS User Guide</i> </a> or the <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_Events.Messages.html">
     * <i>Amazon Aurora User Guide</i> </a>. You can also see this list by using the
     * <code>DescribeEventCategories</code> operation.</p>
     */
    inline CreateEventSubscriptionRequest& WithEventCategories(const Aws::Vector<Aws::String>& value) { SetEventCategories(value); return *this;}

    /**
     * <p>A list of event categories for a particular source type
     * (<code>SourceType</code>) that you want to subscribe to. You can see a list of
     * the categories for a given source type in the "Amazon RDS event categories and
     * event messages" section of the <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.Messages.html">
     * <i>Amazon RDS User Guide</i> </a> or the <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_Events.Messages.html">
     * <i>Amazon Aurora User Guide</i> </a>. You can also see this list by using the
     * <code>DescribeEventCategories</code> operation.</p>
     */
    inline CreateEventSubscriptionRequest& WithEventCategories(Aws::Vector<Aws::String>&& value) { SetEventCategories(std::move(value)); return *this;}

    /**
     * <p>A list of event categories for a particular source type
     * (<code>SourceType</code>) that you want to subscribe to. You can see a list of
     * the categories for a given source type in the "Amazon RDS event categories and
     * event messages" section of the <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.Messages.html">
     * <i>Amazon RDS User Guide</i> </a> or the <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_Events.Messages.html">
     * <i>Amazon Aurora User Guide</i> </a>. You can also see this list by using the
     * <code>DescribeEventCategories</code> operation.</p>
     */
    inline CreateEventSubscriptionRequest& AddEventCategories(const Aws::String& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.push_back(value); return *this; }

    /**
     * <p>A list of event categories for a particular source type
     * (<code>SourceType</code>) that you want to subscribe to. You can see a list of
     * the categories for a given source type in the "Amazon RDS event categories and
     * event messages" section of the <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.Messages.html">
     * <i>Amazon RDS User Guide</i> </a> or the <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_Events.Messages.html">
     * <i>Amazon Aurora User Guide</i> </a>. You can also see this list by using the
     * <code>DescribeEventCategories</code> operation.</p>
     */
    inline CreateEventSubscriptionRequest& AddEventCategories(Aws::String&& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of event categories for a particular source type
     * (<code>SourceType</code>) that you want to subscribe to. You can see a list of
     * the categories for a given source type in the "Amazon RDS event categories and
     * event messages" section of the <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.Messages.html">
     * <i>Amazon RDS User Guide</i> </a> or the <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_Events.Messages.html">
     * <i>Amazon Aurora User Guide</i> </a>. You can also see this list by using the
     * <code>DescribeEventCategories</code> operation.</p>
     */
    inline CreateEventSubscriptionRequest& AddEventCategories(const char* value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.push_back(value); return *this; }


    /**
     * <p>The list of identifiers of the event sources for which events are returned.
     * If not specified, then all sources are included in the response. An identifier
     * must begin with a letter and must contain only ASCII letters, digits, and
     * hyphens. It can't end with a hyphen or contain two consecutive hyphens.</p>
     * <p>Constraints:</p> <ul> <li> <p>If <code>SourceIds</code> are supplied,
     * <code>SourceType</code> must also be provided.</p> </li> <li> <p>If the source
     * type is a DB instance, a <code>DBInstanceIdentifier</code> value must be
     * supplied.</p> </li> <li> <p>If the source type is a DB cluster, a
     * <code>DBClusterIdentifier</code> value must be supplied.</p> </li> <li> <p>If
     * the source type is a DB parameter group, a <code>DBParameterGroupName</code>
     * value must be supplied.</p> </li> <li> <p>If the source type is a DB security
     * group, a <code>DBSecurityGroupName</code> value must be supplied.</p> </li> <li>
     * <p>If the source type is a DB snapshot, a <code>DBSnapshotIdentifier</code>
     * value must be supplied.</p> </li> <li> <p>If the source type is a DB cluster
     * snapshot, a <code>DBClusterSnapshotIdentifier</code> value must be supplied.</p>
     * </li> <li> <p>If the source type is an RDS Proxy, a <code>DBProxyName</code>
     * value must be supplied.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetSourceIds() const{ return m_sourceIds; }

    /**
     * <p>The list of identifiers of the event sources for which events are returned.
     * If not specified, then all sources are included in the response. An identifier
     * must begin with a letter and must contain only ASCII letters, digits, and
     * hyphens. It can't end with a hyphen or contain two consecutive hyphens.</p>
     * <p>Constraints:</p> <ul> <li> <p>If <code>SourceIds</code> are supplied,
     * <code>SourceType</code> must also be provided.</p> </li> <li> <p>If the source
     * type is a DB instance, a <code>DBInstanceIdentifier</code> value must be
     * supplied.</p> </li> <li> <p>If the source type is a DB cluster, a
     * <code>DBClusterIdentifier</code> value must be supplied.</p> </li> <li> <p>If
     * the source type is a DB parameter group, a <code>DBParameterGroupName</code>
     * value must be supplied.</p> </li> <li> <p>If the source type is a DB security
     * group, a <code>DBSecurityGroupName</code> value must be supplied.</p> </li> <li>
     * <p>If the source type is a DB snapshot, a <code>DBSnapshotIdentifier</code>
     * value must be supplied.</p> </li> <li> <p>If the source type is a DB cluster
     * snapshot, a <code>DBClusterSnapshotIdentifier</code> value must be supplied.</p>
     * </li> <li> <p>If the source type is an RDS Proxy, a <code>DBProxyName</code>
     * value must be supplied.</p> </li> </ul>
     */
    inline bool SourceIdsHasBeenSet() const { return m_sourceIdsHasBeenSet; }

    /**
     * <p>The list of identifiers of the event sources for which events are returned.
     * If not specified, then all sources are included in the response. An identifier
     * must begin with a letter and must contain only ASCII letters, digits, and
     * hyphens. It can't end with a hyphen or contain two consecutive hyphens.</p>
     * <p>Constraints:</p> <ul> <li> <p>If <code>SourceIds</code> are supplied,
     * <code>SourceType</code> must also be provided.</p> </li> <li> <p>If the source
     * type is a DB instance, a <code>DBInstanceIdentifier</code> value must be
     * supplied.</p> </li> <li> <p>If the source type is a DB cluster, a
     * <code>DBClusterIdentifier</code> value must be supplied.</p> </li> <li> <p>If
     * the source type is a DB parameter group, a <code>DBParameterGroupName</code>
     * value must be supplied.</p> </li> <li> <p>If the source type is a DB security
     * group, a <code>DBSecurityGroupName</code> value must be supplied.</p> </li> <li>
     * <p>If the source type is a DB snapshot, a <code>DBSnapshotIdentifier</code>
     * value must be supplied.</p> </li> <li> <p>If the source type is a DB cluster
     * snapshot, a <code>DBClusterSnapshotIdentifier</code> value must be supplied.</p>
     * </li> <li> <p>If the source type is an RDS Proxy, a <code>DBProxyName</code>
     * value must be supplied.</p> </li> </ul>
     */
    inline void SetSourceIds(const Aws::Vector<Aws::String>& value) { m_sourceIdsHasBeenSet = true; m_sourceIds = value; }

    /**
     * <p>The list of identifiers of the event sources for which events are returned.
     * If not specified, then all sources are included in the response. An identifier
     * must begin with a letter and must contain only ASCII letters, digits, and
     * hyphens. It can't end with a hyphen or contain two consecutive hyphens.</p>
     * <p>Constraints:</p> <ul> <li> <p>If <code>SourceIds</code> are supplied,
     * <code>SourceType</code> must also be provided.</p> </li> <li> <p>If the source
     * type is a DB instance, a <code>DBInstanceIdentifier</code> value must be
     * supplied.</p> </li> <li> <p>If the source type is a DB cluster, a
     * <code>DBClusterIdentifier</code> value must be supplied.</p> </li> <li> <p>If
     * the source type is a DB parameter group, a <code>DBParameterGroupName</code>
     * value must be supplied.</p> </li> <li> <p>If the source type is a DB security
     * group, a <code>DBSecurityGroupName</code> value must be supplied.</p> </li> <li>
     * <p>If the source type is a DB snapshot, a <code>DBSnapshotIdentifier</code>
     * value must be supplied.</p> </li> <li> <p>If the source type is a DB cluster
     * snapshot, a <code>DBClusterSnapshotIdentifier</code> value must be supplied.</p>
     * </li> <li> <p>If the source type is an RDS Proxy, a <code>DBProxyName</code>
     * value must be supplied.</p> </li> </ul>
     */
    inline void SetSourceIds(Aws::Vector<Aws::String>&& value) { m_sourceIdsHasBeenSet = true; m_sourceIds = std::move(value); }

    /**
     * <p>The list of identifiers of the event sources for which events are returned.
     * If not specified, then all sources are included in the response. An identifier
     * must begin with a letter and must contain only ASCII letters, digits, and
     * hyphens. It can't end with a hyphen or contain two consecutive hyphens.</p>
     * <p>Constraints:</p> <ul> <li> <p>If <code>SourceIds</code> are supplied,
     * <code>SourceType</code> must also be provided.</p> </li> <li> <p>If the source
     * type is a DB instance, a <code>DBInstanceIdentifier</code> value must be
     * supplied.</p> </li> <li> <p>If the source type is a DB cluster, a
     * <code>DBClusterIdentifier</code> value must be supplied.</p> </li> <li> <p>If
     * the source type is a DB parameter group, a <code>DBParameterGroupName</code>
     * value must be supplied.</p> </li> <li> <p>If the source type is a DB security
     * group, a <code>DBSecurityGroupName</code> value must be supplied.</p> </li> <li>
     * <p>If the source type is a DB snapshot, a <code>DBSnapshotIdentifier</code>
     * value must be supplied.</p> </li> <li> <p>If the source type is a DB cluster
     * snapshot, a <code>DBClusterSnapshotIdentifier</code> value must be supplied.</p>
     * </li> <li> <p>If the source type is an RDS Proxy, a <code>DBProxyName</code>
     * value must be supplied.</p> </li> </ul>
     */
    inline CreateEventSubscriptionRequest& WithSourceIds(const Aws::Vector<Aws::String>& value) { SetSourceIds(value); return *this;}

    /**
     * <p>The list of identifiers of the event sources for which events are returned.
     * If not specified, then all sources are included in the response. An identifier
     * must begin with a letter and must contain only ASCII letters, digits, and
     * hyphens. It can't end with a hyphen or contain two consecutive hyphens.</p>
     * <p>Constraints:</p> <ul> <li> <p>If <code>SourceIds</code> are supplied,
     * <code>SourceType</code> must also be provided.</p> </li> <li> <p>If the source
     * type is a DB instance, a <code>DBInstanceIdentifier</code> value must be
     * supplied.</p> </li> <li> <p>If the source type is a DB cluster, a
     * <code>DBClusterIdentifier</code> value must be supplied.</p> </li> <li> <p>If
     * the source type is a DB parameter group, a <code>DBParameterGroupName</code>
     * value must be supplied.</p> </li> <li> <p>If the source type is a DB security
     * group, a <code>DBSecurityGroupName</code> value must be supplied.</p> </li> <li>
     * <p>If the source type is a DB snapshot, a <code>DBSnapshotIdentifier</code>
     * value must be supplied.</p> </li> <li> <p>If the source type is a DB cluster
     * snapshot, a <code>DBClusterSnapshotIdentifier</code> value must be supplied.</p>
     * </li> <li> <p>If the source type is an RDS Proxy, a <code>DBProxyName</code>
     * value must be supplied.</p> </li> </ul>
     */
    inline CreateEventSubscriptionRequest& WithSourceIds(Aws::Vector<Aws::String>&& value) { SetSourceIds(std::move(value)); return *this;}

    /**
     * <p>The list of identifiers of the event sources for which events are returned.
     * If not specified, then all sources are included in the response. An identifier
     * must begin with a letter and must contain only ASCII letters, digits, and
     * hyphens. It can't end with a hyphen or contain two consecutive hyphens.</p>
     * <p>Constraints:</p> <ul> <li> <p>If <code>SourceIds</code> are supplied,
     * <code>SourceType</code> must also be provided.</p> </li> <li> <p>If the source
     * type is a DB instance, a <code>DBInstanceIdentifier</code> value must be
     * supplied.</p> </li> <li> <p>If the source type is a DB cluster, a
     * <code>DBClusterIdentifier</code> value must be supplied.</p> </li> <li> <p>If
     * the source type is a DB parameter group, a <code>DBParameterGroupName</code>
     * value must be supplied.</p> </li> <li> <p>If the source type is a DB security
     * group, a <code>DBSecurityGroupName</code> value must be supplied.</p> </li> <li>
     * <p>If the source type is a DB snapshot, a <code>DBSnapshotIdentifier</code>
     * value must be supplied.</p> </li> <li> <p>If the source type is a DB cluster
     * snapshot, a <code>DBClusterSnapshotIdentifier</code> value must be supplied.</p>
     * </li> <li> <p>If the source type is an RDS Proxy, a <code>DBProxyName</code>
     * value must be supplied.</p> </li> </ul>
     */
    inline CreateEventSubscriptionRequest& AddSourceIds(const Aws::String& value) { m_sourceIdsHasBeenSet = true; m_sourceIds.push_back(value); return *this; }

    /**
     * <p>The list of identifiers of the event sources for which events are returned.
     * If not specified, then all sources are included in the response. An identifier
     * must begin with a letter and must contain only ASCII letters, digits, and
     * hyphens. It can't end with a hyphen or contain two consecutive hyphens.</p>
     * <p>Constraints:</p> <ul> <li> <p>If <code>SourceIds</code> are supplied,
     * <code>SourceType</code> must also be provided.</p> </li> <li> <p>If the source
     * type is a DB instance, a <code>DBInstanceIdentifier</code> value must be
     * supplied.</p> </li> <li> <p>If the source type is a DB cluster, a
     * <code>DBClusterIdentifier</code> value must be supplied.</p> </li> <li> <p>If
     * the source type is a DB parameter group, a <code>DBParameterGroupName</code>
     * value must be supplied.</p> </li> <li> <p>If the source type is a DB security
     * group, a <code>DBSecurityGroupName</code> value must be supplied.</p> </li> <li>
     * <p>If the source type is a DB snapshot, a <code>DBSnapshotIdentifier</code>
     * value must be supplied.</p> </li> <li> <p>If the source type is a DB cluster
     * snapshot, a <code>DBClusterSnapshotIdentifier</code> value must be supplied.</p>
     * </li> <li> <p>If the source type is an RDS Proxy, a <code>DBProxyName</code>
     * value must be supplied.</p> </li> </ul>
     */
    inline CreateEventSubscriptionRequest& AddSourceIds(Aws::String&& value) { m_sourceIdsHasBeenSet = true; m_sourceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of identifiers of the event sources for which events are returned.
     * If not specified, then all sources are included in the response. An identifier
     * must begin with a letter and must contain only ASCII letters, digits, and
     * hyphens. It can't end with a hyphen or contain two consecutive hyphens.</p>
     * <p>Constraints:</p> <ul> <li> <p>If <code>SourceIds</code> are supplied,
     * <code>SourceType</code> must also be provided.</p> </li> <li> <p>If the source
     * type is a DB instance, a <code>DBInstanceIdentifier</code> value must be
     * supplied.</p> </li> <li> <p>If the source type is a DB cluster, a
     * <code>DBClusterIdentifier</code> value must be supplied.</p> </li> <li> <p>If
     * the source type is a DB parameter group, a <code>DBParameterGroupName</code>
     * value must be supplied.</p> </li> <li> <p>If the source type is a DB security
     * group, a <code>DBSecurityGroupName</code> value must be supplied.</p> </li> <li>
     * <p>If the source type is a DB snapshot, a <code>DBSnapshotIdentifier</code>
     * value must be supplied.</p> </li> <li> <p>If the source type is a DB cluster
     * snapshot, a <code>DBClusterSnapshotIdentifier</code> value must be supplied.</p>
     * </li> <li> <p>If the source type is an RDS Proxy, a <code>DBProxyName</code>
     * value must be supplied.</p> </li> </ul>
     */
    inline CreateEventSubscriptionRequest& AddSourceIds(const char* value) { m_sourceIdsHasBeenSet = true; m_sourceIds.push_back(value); return *this; }


    /**
     * <p>A value that indicates whether to activate the subscription. If the event
     * notification subscription isn't activated, the subscription is created but not
     * active.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>A value that indicates whether to activate the subscription. If the event
     * notification subscription isn't activated, the subscription is created but not
     * active.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>A value that indicates whether to activate the subscription. If the event
     * notification subscription isn't activated, the subscription is created but not
     * active.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>A value that indicates whether to activate the subscription. If the event
     * notification subscription isn't activated, the subscription is created but not
     * active.</p>
     */
    inline CreateEventSubscriptionRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CreateEventSubscriptionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CreateEventSubscriptionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateEventSubscriptionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline CreateEventSubscriptionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_subscriptionName;
    bool m_subscriptionNameHasBeenSet = false;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventCategories;
    bool m_eventCategoriesHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceIds;
    bool m_sourceIdsHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
