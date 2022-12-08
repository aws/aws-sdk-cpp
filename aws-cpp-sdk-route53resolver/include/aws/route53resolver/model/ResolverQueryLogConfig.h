/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/ResolverQueryLogConfigStatus.h>
#include <aws/route53resolver/model/ShareStatus.h>
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
namespace Route53Resolver
{
namespace Model
{

  /**
   * <p>In the response to a <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_CreateResolverQueryLogConfig.html">CreateResolverQueryLogConfig</a>,
   * <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_DeleteResolverQueryLogConfig.html">DeleteResolverQueryLogConfig</a>,
   * <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverQueryLogConfig.html">GetResolverQueryLogConfig</a>,
   * or <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverQueryLogConfigs.html">ListResolverQueryLogConfigs</a>
   * request, a complex type that contains settings for one query logging
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ResolverQueryLogConfig">AWS
   * API Reference</a></p>
   */
  class ResolverQueryLogConfig
  {
  public:
    AWS_ROUTE53RESOLVER_API ResolverQueryLogConfig();
    AWS_ROUTE53RESOLVER_API ResolverQueryLogConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API ResolverQueryLogConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID for the query logging configuration.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID for the query logging configuration.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID for the query logging configuration.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID for the query logging configuration.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID for the query logging configuration.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID for the query logging configuration.</p>
     */
    inline ResolverQueryLogConfig& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID for the query logging configuration.</p>
     */
    inline ResolverQueryLogConfig& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID for the query logging configuration.</p>
     */
    inline ResolverQueryLogConfig& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID for the account that created the query
     * logging configuration. </p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The Amazon Web Services account ID for the account that created the query
     * logging configuration. </p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID for the account that created the query
     * logging configuration. </p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The Amazon Web Services account ID for the account that created the query
     * logging configuration. </p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID for the account that created the query
     * logging configuration. </p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID for the account that created the query
     * logging configuration. </p>
     */
    inline ResolverQueryLogConfig& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID for the account that created the query
     * logging configuration. </p>
     */
    inline ResolverQueryLogConfig& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID for the account that created the query
     * logging configuration. </p>
     */
    inline ResolverQueryLogConfig& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The status of the specified query logging configuration. Valid values include
     * the following:</p> <ul> <li> <p> <code>CREATING</code>: Resolver is creating the
     * query logging configuration.</p> </li> <li> <p> <code>CREATED</code>: The query
     * logging configuration was successfully created. Resolver is logging queries that
     * originate in the specified VPC.</p> </li> <li> <p> <code>DELETING</code>:
     * Resolver is deleting this query logging configuration.</p> </li> <li> <p>
     * <code>FAILED</code>: Resolver can't deliver logs to the location that is
     * specified in the query logging configuration. Here are two common causes:</p>
     * <ul> <li> <p>The specified destination (for example, an Amazon S3 bucket) was
     * deleted.</p> </li> <li> <p>Permissions don't allow sending logs to the
     * destination.</p> </li> </ul> </li> </ul>
     */
    inline const ResolverQueryLogConfigStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the specified query logging configuration. Valid values include
     * the following:</p> <ul> <li> <p> <code>CREATING</code>: Resolver is creating the
     * query logging configuration.</p> </li> <li> <p> <code>CREATED</code>: The query
     * logging configuration was successfully created. Resolver is logging queries that
     * originate in the specified VPC.</p> </li> <li> <p> <code>DELETING</code>:
     * Resolver is deleting this query logging configuration.</p> </li> <li> <p>
     * <code>FAILED</code>: Resolver can't deliver logs to the location that is
     * specified in the query logging configuration. Here are two common causes:</p>
     * <ul> <li> <p>The specified destination (for example, an Amazon S3 bucket) was
     * deleted.</p> </li> <li> <p>Permissions don't allow sending logs to the
     * destination.</p> </li> </ul> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the specified query logging configuration. Valid values include
     * the following:</p> <ul> <li> <p> <code>CREATING</code>: Resolver is creating the
     * query logging configuration.</p> </li> <li> <p> <code>CREATED</code>: The query
     * logging configuration was successfully created. Resolver is logging queries that
     * originate in the specified VPC.</p> </li> <li> <p> <code>DELETING</code>:
     * Resolver is deleting this query logging configuration.</p> </li> <li> <p>
     * <code>FAILED</code>: Resolver can't deliver logs to the location that is
     * specified in the query logging configuration. Here are two common causes:</p>
     * <ul> <li> <p>The specified destination (for example, an Amazon S3 bucket) was
     * deleted.</p> </li> <li> <p>Permissions don't allow sending logs to the
     * destination.</p> </li> </ul> </li> </ul>
     */
    inline void SetStatus(const ResolverQueryLogConfigStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the specified query logging configuration. Valid values include
     * the following:</p> <ul> <li> <p> <code>CREATING</code>: Resolver is creating the
     * query logging configuration.</p> </li> <li> <p> <code>CREATED</code>: The query
     * logging configuration was successfully created. Resolver is logging queries that
     * originate in the specified VPC.</p> </li> <li> <p> <code>DELETING</code>:
     * Resolver is deleting this query logging configuration.</p> </li> <li> <p>
     * <code>FAILED</code>: Resolver can't deliver logs to the location that is
     * specified in the query logging configuration. Here are two common causes:</p>
     * <ul> <li> <p>The specified destination (for example, an Amazon S3 bucket) was
     * deleted.</p> </li> <li> <p>Permissions don't allow sending logs to the
     * destination.</p> </li> </ul> </li> </ul>
     */
    inline void SetStatus(ResolverQueryLogConfigStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the specified query logging configuration. Valid values include
     * the following:</p> <ul> <li> <p> <code>CREATING</code>: Resolver is creating the
     * query logging configuration.</p> </li> <li> <p> <code>CREATED</code>: The query
     * logging configuration was successfully created. Resolver is logging queries that
     * originate in the specified VPC.</p> </li> <li> <p> <code>DELETING</code>:
     * Resolver is deleting this query logging configuration.</p> </li> <li> <p>
     * <code>FAILED</code>: Resolver can't deliver logs to the location that is
     * specified in the query logging configuration. Here are two common causes:</p>
     * <ul> <li> <p>The specified destination (for example, an Amazon S3 bucket) was
     * deleted.</p> </li> <li> <p>Permissions don't allow sending logs to the
     * destination.</p> </li> </ul> </li> </ul>
     */
    inline ResolverQueryLogConfig& WithStatus(const ResolverQueryLogConfigStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the specified query logging configuration. Valid values include
     * the following:</p> <ul> <li> <p> <code>CREATING</code>: Resolver is creating the
     * query logging configuration.</p> </li> <li> <p> <code>CREATED</code>: The query
     * logging configuration was successfully created. Resolver is logging queries that
     * originate in the specified VPC.</p> </li> <li> <p> <code>DELETING</code>:
     * Resolver is deleting this query logging configuration.</p> </li> <li> <p>
     * <code>FAILED</code>: Resolver can't deliver logs to the location that is
     * specified in the query logging configuration. Here are two common causes:</p>
     * <ul> <li> <p>The specified destination (for example, an Amazon S3 bucket) was
     * deleted.</p> </li> <li> <p>Permissions don't allow sending logs to the
     * destination.</p> </li> </ul> </li> </ul>
     */
    inline ResolverQueryLogConfig& WithStatus(ResolverQueryLogConfigStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>An indication of whether the query logging configuration is shared with other
     * Amazon Web Services accounts, or was shared with the current account by another
     * Amazon Web Services account. Sharing is configured through Resource Access
     * Manager (RAM).</p>
     */
    inline const ShareStatus& GetShareStatus() const{ return m_shareStatus; }

    /**
     * <p>An indication of whether the query logging configuration is shared with other
     * Amazon Web Services accounts, or was shared with the current account by another
     * Amazon Web Services account. Sharing is configured through Resource Access
     * Manager (RAM).</p>
     */
    inline bool ShareStatusHasBeenSet() const { return m_shareStatusHasBeenSet; }

    /**
     * <p>An indication of whether the query logging configuration is shared with other
     * Amazon Web Services accounts, or was shared with the current account by another
     * Amazon Web Services account. Sharing is configured through Resource Access
     * Manager (RAM).</p>
     */
    inline void SetShareStatus(const ShareStatus& value) { m_shareStatusHasBeenSet = true; m_shareStatus = value; }

    /**
     * <p>An indication of whether the query logging configuration is shared with other
     * Amazon Web Services accounts, or was shared with the current account by another
     * Amazon Web Services account. Sharing is configured through Resource Access
     * Manager (RAM).</p>
     */
    inline void SetShareStatus(ShareStatus&& value) { m_shareStatusHasBeenSet = true; m_shareStatus = std::move(value); }

    /**
     * <p>An indication of whether the query logging configuration is shared with other
     * Amazon Web Services accounts, or was shared with the current account by another
     * Amazon Web Services account. Sharing is configured through Resource Access
     * Manager (RAM).</p>
     */
    inline ResolverQueryLogConfig& WithShareStatus(const ShareStatus& value) { SetShareStatus(value); return *this;}

    /**
     * <p>An indication of whether the query logging configuration is shared with other
     * Amazon Web Services accounts, or was shared with the current account by another
     * Amazon Web Services account. Sharing is configured through Resource Access
     * Manager (RAM).</p>
     */
    inline ResolverQueryLogConfig& WithShareStatus(ShareStatus&& value) { SetShareStatus(std::move(value)); return *this;}


    /**
     * <p>The number of VPCs that are associated with the query logging
     * configuration.</p>
     */
    inline int GetAssociationCount() const{ return m_associationCount; }

    /**
     * <p>The number of VPCs that are associated with the query logging
     * configuration.</p>
     */
    inline bool AssociationCountHasBeenSet() const { return m_associationCountHasBeenSet; }

    /**
     * <p>The number of VPCs that are associated with the query logging
     * configuration.</p>
     */
    inline void SetAssociationCount(int value) { m_associationCountHasBeenSet = true; m_associationCount = value; }

    /**
     * <p>The number of VPCs that are associated with the query logging
     * configuration.</p>
     */
    inline ResolverQueryLogConfig& WithAssociationCount(int value) { SetAssociationCount(value); return *this;}


    /**
     * <p>The ARN for the query logging configuration.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN for the query logging configuration.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN for the query logging configuration.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN for the query logging configuration.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN for the query logging configuration.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN for the query logging configuration.</p>
     */
    inline ResolverQueryLogConfig& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN for the query logging configuration.</p>
     */
    inline ResolverQueryLogConfig& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the query logging configuration.</p>
     */
    inline ResolverQueryLogConfig& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the query logging configuration. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the query logging configuration. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the query logging configuration. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the query logging configuration. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the query logging configuration. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the query logging configuration. </p>
     */
    inline ResolverQueryLogConfig& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the query logging configuration. </p>
     */
    inline ResolverQueryLogConfig& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the query logging configuration. </p>
     */
    inline ResolverQueryLogConfig& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the resource that you want Resolver to send query logs: an Amazon
     * S3 bucket, a CloudWatch Logs log group, or a Kinesis Data Firehose delivery
     * stream.</p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }

    /**
     * <p>The ARN of the resource that you want Resolver to send query logs: an Amazon
     * S3 bucket, a CloudWatch Logs log group, or a Kinesis Data Firehose delivery
     * stream.</p>
     */
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }

    /**
     * <p>The ARN of the resource that you want Resolver to send query logs: an Amazon
     * S3 bucket, a CloudWatch Logs log group, or a Kinesis Data Firehose delivery
     * stream.</p>
     */
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }

    /**
     * <p>The ARN of the resource that you want Resolver to send query logs: an Amazon
     * S3 bucket, a CloudWatch Logs log group, or a Kinesis Data Firehose delivery
     * stream.</p>
     */
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::move(value); }

    /**
     * <p>The ARN of the resource that you want Resolver to send query logs: an Amazon
     * S3 bucket, a CloudWatch Logs log group, or a Kinesis Data Firehose delivery
     * stream.</p>
     */
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }

    /**
     * <p>The ARN of the resource that you want Resolver to send query logs: an Amazon
     * S3 bucket, a CloudWatch Logs log group, or a Kinesis Data Firehose delivery
     * stream.</p>
     */
    inline ResolverQueryLogConfig& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}

    /**
     * <p>The ARN of the resource that you want Resolver to send query logs: an Amazon
     * S3 bucket, a CloudWatch Logs log group, or a Kinesis Data Firehose delivery
     * stream.</p>
     */
    inline ResolverQueryLogConfig& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the resource that you want Resolver to send query logs: an Amazon
     * S3 bucket, a CloudWatch Logs log group, or a Kinesis Data Firehose delivery
     * stream.</p>
     */
    inline ResolverQueryLogConfig& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}


    /**
     * <p>A unique string that identifies the request that created the query logging
     * configuration. The <code>CreatorRequestId</code> allows failed requests to be
     * retried without the risk of running the operation twice.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>A unique string that identifies the request that created the query logging
     * configuration. The <code>CreatorRequestId</code> allows failed requests to be
     * retried without the risk of running the operation twice.</p>
     */
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }

    /**
     * <p>A unique string that identifies the request that created the query logging
     * configuration. The <code>CreatorRequestId</code> allows failed requests to be
     * retried without the risk of running the operation twice.</p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * <p>A unique string that identifies the request that created the query logging
     * configuration. The <code>CreatorRequestId</code> allows failed requests to be
     * retried without the risk of running the operation twice.</p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * <p>A unique string that identifies the request that created the query logging
     * configuration. The <code>CreatorRequestId</code> allows failed requests to be
     * retried without the risk of running the operation twice.</p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * <p>A unique string that identifies the request that created the query logging
     * configuration. The <code>CreatorRequestId</code> allows failed requests to be
     * retried without the risk of running the operation twice.</p>
     */
    inline ResolverQueryLogConfig& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>A unique string that identifies the request that created the query logging
     * configuration. The <code>CreatorRequestId</code> allows failed requests to be
     * retried without the risk of running the operation twice.</p>
     */
    inline ResolverQueryLogConfig& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the request that created the query logging
     * configuration. The <code>CreatorRequestId</code> allows failed requests to be
     * retried without the risk of running the operation twice.</p>
     */
    inline ResolverQueryLogConfig& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * <p>The date and time that the query logging configuration was created, in Unix
     * time format and Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time that the query logging configuration was created, in Unix
     * time format and Coordinated Universal Time (UTC).</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time that the query logging configuration was created, in Unix
     * time format and Coordinated Universal Time (UTC).</p>
     */
    inline void SetCreationTime(const Aws::String& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time that the query logging configuration was created, in Unix
     * time format and Coordinated Universal Time (UTC).</p>
     */
    inline void SetCreationTime(Aws::String&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time that the query logging configuration was created, in Unix
     * time format and Coordinated Universal Time (UTC).</p>
     */
    inline void SetCreationTime(const char* value) { m_creationTimeHasBeenSet = true; m_creationTime.assign(value); }

    /**
     * <p>The date and time that the query logging configuration was created, in Unix
     * time format and Coordinated Universal Time (UTC).</p>
     */
    inline ResolverQueryLogConfig& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time that the query logging configuration was created, in Unix
     * time format and Coordinated Universal Time (UTC).</p>
     */
    inline ResolverQueryLogConfig& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}

    /**
     * <p>The date and time that the query logging configuration was created, in Unix
     * time format and Coordinated Universal Time (UTC).</p>
     */
    inline ResolverQueryLogConfig& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    ResolverQueryLogConfigStatus m_status;
    bool m_statusHasBeenSet = false;

    ShareStatus m_shareStatus;
    bool m_shareStatusHasBeenSet = false;

    int m_associationCount;
    bool m_associationCountHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    Aws::String m_creationTime;
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
