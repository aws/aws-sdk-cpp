/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class CreateResolverQueryLogConfigRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API CreateResolverQueryLogConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateResolverQueryLogConfig"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name that you want to give the query logging configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name that you want to give the query logging configuration.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name that you want to give the query logging configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name that you want to give the query logging configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name that you want to give the query logging configuration.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name that you want to give the query logging configuration.</p>
     */
    inline CreateResolverQueryLogConfigRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name that you want to give the query logging configuration.</p>
     */
    inline CreateResolverQueryLogConfigRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name that you want to give the query logging configuration.</p>
     */
    inline CreateResolverQueryLogConfigRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the resource that you want Resolver to send query logs. You can
     * send query logs to an S3 bucket, a CloudWatch Logs log group, or a Kinesis Data
     * Firehose delivery stream. Examples of valid values include the following:</p>
     * <ul> <li> <p> <b>S3 bucket</b>: </p> <p> <code>arn:aws:s3:::examplebucket</code>
     * </p> <p>You can optionally append a file prefix to the end of the ARN.</p> <p>
     * <code>arn:aws:s3:::examplebucket/development/</code> </p> </li> <li> <p>
     * <b>CloudWatch Logs log group</b>: </p> <p>
     * <code>arn:aws:logs:us-west-1:123456789012:log-group:/mystack-testgroup-12ABC1AB12A1:*</code>
     * </p> </li> <li> <p> <b>Kinesis Data Firehose delivery stream</b>:</p> <p>
     * <code>arn:aws:kinesis:us-east-2:0123456789:stream/my_stream_name</code> </p>
     * </li> </ul>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }

    /**
     * <p>The ARN of the resource that you want Resolver to send query logs. You can
     * send query logs to an S3 bucket, a CloudWatch Logs log group, or a Kinesis Data
     * Firehose delivery stream. Examples of valid values include the following:</p>
     * <ul> <li> <p> <b>S3 bucket</b>: </p> <p> <code>arn:aws:s3:::examplebucket</code>
     * </p> <p>You can optionally append a file prefix to the end of the ARN.</p> <p>
     * <code>arn:aws:s3:::examplebucket/development/</code> </p> </li> <li> <p>
     * <b>CloudWatch Logs log group</b>: </p> <p>
     * <code>arn:aws:logs:us-west-1:123456789012:log-group:/mystack-testgroup-12ABC1AB12A1:*</code>
     * </p> </li> <li> <p> <b>Kinesis Data Firehose delivery stream</b>:</p> <p>
     * <code>arn:aws:kinesis:us-east-2:0123456789:stream/my_stream_name</code> </p>
     * </li> </ul>
     */
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }

    /**
     * <p>The ARN of the resource that you want Resolver to send query logs. You can
     * send query logs to an S3 bucket, a CloudWatch Logs log group, or a Kinesis Data
     * Firehose delivery stream. Examples of valid values include the following:</p>
     * <ul> <li> <p> <b>S3 bucket</b>: </p> <p> <code>arn:aws:s3:::examplebucket</code>
     * </p> <p>You can optionally append a file prefix to the end of the ARN.</p> <p>
     * <code>arn:aws:s3:::examplebucket/development/</code> </p> </li> <li> <p>
     * <b>CloudWatch Logs log group</b>: </p> <p>
     * <code>arn:aws:logs:us-west-1:123456789012:log-group:/mystack-testgroup-12ABC1AB12A1:*</code>
     * </p> </li> <li> <p> <b>Kinesis Data Firehose delivery stream</b>:</p> <p>
     * <code>arn:aws:kinesis:us-east-2:0123456789:stream/my_stream_name</code> </p>
     * </li> </ul>
     */
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }

    /**
     * <p>The ARN of the resource that you want Resolver to send query logs. You can
     * send query logs to an S3 bucket, a CloudWatch Logs log group, or a Kinesis Data
     * Firehose delivery stream. Examples of valid values include the following:</p>
     * <ul> <li> <p> <b>S3 bucket</b>: </p> <p> <code>arn:aws:s3:::examplebucket</code>
     * </p> <p>You can optionally append a file prefix to the end of the ARN.</p> <p>
     * <code>arn:aws:s3:::examplebucket/development/</code> </p> </li> <li> <p>
     * <b>CloudWatch Logs log group</b>: </p> <p>
     * <code>arn:aws:logs:us-west-1:123456789012:log-group:/mystack-testgroup-12ABC1AB12A1:*</code>
     * </p> </li> <li> <p> <b>Kinesis Data Firehose delivery stream</b>:</p> <p>
     * <code>arn:aws:kinesis:us-east-2:0123456789:stream/my_stream_name</code> </p>
     * </li> </ul>
     */
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::move(value); }

    /**
     * <p>The ARN of the resource that you want Resolver to send query logs. You can
     * send query logs to an S3 bucket, a CloudWatch Logs log group, or a Kinesis Data
     * Firehose delivery stream. Examples of valid values include the following:</p>
     * <ul> <li> <p> <b>S3 bucket</b>: </p> <p> <code>arn:aws:s3:::examplebucket</code>
     * </p> <p>You can optionally append a file prefix to the end of the ARN.</p> <p>
     * <code>arn:aws:s3:::examplebucket/development/</code> </p> </li> <li> <p>
     * <b>CloudWatch Logs log group</b>: </p> <p>
     * <code>arn:aws:logs:us-west-1:123456789012:log-group:/mystack-testgroup-12ABC1AB12A1:*</code>
     * </p> </li> <li> <p> <b>Kinesis Data Firehose delivery stream</b>:</p> <p>
     * <code>arn:aws:kinesis:us-east-2:0123456789:stream/my_stream_name</code> </p>
     * </li> </ul>
     */
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }

    /**
     * <p>The ARN of the resource that you want Resolver to send query logs. You can
     * send query logs to an S3 bucket, a CloudWatch Logs log group, or a Kinesis Data
     * Firehose delivery stream. Examples of valid values include the following:</p>
     * <ul> <li> <p> <b>S3 bucket</b>: </p> <p> <code>arn:aws:s3:::examplebucket</code>
     * </p> <p>You can optionally append a file prefix to the end of the ARN.</p> <p>
     * <code>arn:aws:s3:::examplebucket/development/</code> </p> </li> <li> <p>
     * <b>CloudWatch Logs log group</b>: </p> <p>
     * <code>arn:aws:logs:us-west-1:123456789012:log-group:/mystack-testgroup-12ABC1AB12A1:*</code>
     * </p> </li> <li> <p> <b>Kinesis Data Firehose delivery stream</b>:</p> <p>
     * <code>arn:aws:kinesis:us-east-2:0123456789:stream/my_stream_name</code> </p>
     * </li> </ul>
     */
    inline CreateResolverQueryLogConfigRequest& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}

    /**
     * <p>The ARN of the resource that you want Resolver to send query logs. You can
     * send query logs to an S3 bucket, a CloudWatch Logs log group, or a Kinesis Data
     * Firehose delivery stream. Examples of valid values include the following:</p>
     * <ul> <li> <p> <b>S3 bucket</b>: </p> <p> <code>arn:aws:s3:::examplebucket</code>
     * </p> <p>You can optionally append a file prefix to the end of the ARN.</p> <p>
     * <code>arn:aws:s3:::examplebucket/development/</code> </p> </li> <li> <p>
     * <b>CloudWatch Logs log group</b>: </p> <p>
     * <code>arn:aws:logs:us-west-1:123456789012:log-group:/mystack-testgroup-12ABC1AB12A1:*</code>
     * </p> </li> <li> <p> <b>Kinesis Data Firehose delivery stream</b>:</p> <p>
     * <code>arn:aws:kinesis:us-east-2:0123456789:stream/my_stream_name</code> </p>
     * </li> </ul>
     */
    inline CreateResolverQueryLogConfigRequest& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the resource that you want Resolver to send query logs. You can
     * send query logs to an S3 bucket, a CloudWatch Logs log group, or a Kinesis Data
     * Firehose delivery stream. Examples of valid values include the following:</p>
     * <ul> <li> <p> <b>S3 bucket</b>: </p> <p> <code>arn:aws:s3:::examplebucket</code>
     * </p> <p>You can optionally append a file prefix to the end of the ARN.</p> <p>
     * <code>arn:aws:s3:::examplebucket/development/</code> </p> </li> <li> <p>
     * <b>CloudWatch Logs log group</b>: </p> <p>
     * <code>arn:aws:logs:us-west-1:123456789012:log-group:/mystack-testgroup-12ABC1AB12A1:*</code>
     * </p> </li> <li> <p> <b>Kinesis Data Firehose delivery stream</b>:</p> <p>
     * <code>arn:aws:kinesis:us-east-2:0123456789:stream/my_stream_name</code> </p>
     * </li> </ul>
     */
    inline CreateResolverQueryLogConfigRequest& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}


    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline CreateResolverQueryLogConfigRequest& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline CreateResolverQueryLogConfigRequest& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline CreateResolverQueryLogConfigRequest& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * <p>A list of the tag keys and values that you want to associate with the query
     * logging configuration.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of the tag keys and values that you want to associate with the query
     * logging configuration.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of the tag keys and values that you want to associate with the query
     * logging configuration.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of the tag keys and values that you want to associate with the query
     * logging configuration.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of the tag keys and values that you want to associate with the query
     * logging configuration.</p>
     */
    inline CreateResolverQueryLogConfigRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of the tag keys and values that you want to associate with the query
     * logging configuration.</p>
     */
    inline CreateResolverQueryLogConfigRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of the tag keys and values that you want to associate with the query
     * logging configuration.</p>
     */
    inline CreateResolverQueryLogConfigRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of the tag keys and values that you want to associate with the query
     * logging configuration.</p>
     */
    inline CreateResolverQueryLogConfigRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
