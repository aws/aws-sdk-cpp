/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SecurityLake
{
namespace Model
{
  class CreateSubscriberResult
  {
  public:
    AWS_SECURITYLAKE_API CreateSubscriberResult();
    AWS_SECURITYLAKE_API CreateSubscriberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API CreateSubscriberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) created by the user to provide to the
     * subscriber. For more information about ARNs and how to use them in policies, see
     * IAM identifiers in the IAM User Guide.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) created by the user to provide to the
     * subscriber. For more information about ARNs and how to use them in policies, see
     * IAM identifiers in the IAM User Guide.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) created by the user to provide to the
     * subscriber. For more information about ARNs and how to use them in policies, see
     * IAM identifiers in the IAM User Guide.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) created by the user to provide to the
     * subscriber. For more information about ARNs and how to use them in policies, see
     * IAM identifiers in the IAM User Guide.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) created by the user to provide to the
     * subscriber. For more information about ARNs and how to use them in policies, see
     * IAM identifiers in the IAM User Guide.</p>
     */
    inline CreateSubscriberResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) created by the user to provide to the
     * subscriber. For more information about ARNs and how to use them in policies, see
     * IAM identifiers in the IAM User Guide.</p>
     */
    inline CreateSubscriberResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) created by the user to provide to the
     * subscriber. For more information about ARNs and how to use them in policies, see
     * IAM identifiers in the IAM User Guide.</p>
     */
    inline CreateSubscriberResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon S3 bucket. </p>
     */
    inline const Aws::String& GetS3BucketArn() const{ return m_s3BucketArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon S3 bucket. </p>
     */
    inline void SetS3BucketArn(const Aws::String& value) { m_s3BucketArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon S3 bucket. </p>
     */
    inline void SetS3BucketArn(Aws::String&& value) { m_s3BucketArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon S3 bucket. </p>
     */
    inline void SetS3BucketArn(const char* value) { m_s3BucketArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon S3 bucket. </p>
     */
    inline CreateSubscriberResult& WithS3BucketArn(const Aws::String& value) { SetS3BucketArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon S3 bucket. </p>
     */
    inline CreateSubscriberResult& WithS3BucketArn(Aws::String&& value) { SetS3BucketArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon S3 bucket. </p>
     */
    inline CreateSubscriberResult& WithS3BucketArn(const char* value) { SetS3BucketArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon Simple Notification
     * Service.</p>
     */
    inline const Aws::String& GetSnsArn() const{ return m_snsArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon Simple Notification
     * Service.</p>
     */
    inline void SetSnsArn(const Aws::String& value) { m_snsArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon Simple Notification
     * Service.</p>
     */
    inline void SetSnsArn(Aws::String&& value) { m_snsArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon Simple Notification
     * Service.</p>
     */
    inline void SetSnsArn(const char* value) { m_snsArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon Simple Notification
     * Service.</p>
     */
    inline CreateSubscriberResult& WithSnsArn(const Aws::String& value) { SetSnsArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon Simple Notification
     * Service.</p>
     */
    inline CreateSubscriberResult& WithSnsArn(Aws::String&& value) { SetSnsArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon Simple Notification
     * Service.</p>
     */
    inline CreateSubscriberResult& WithSnsArn(const char* value) { SetSnsArn(value); return *this;}


    /**
     * <p>The <code>subscriptionId</code> that was created by the
     * <code>CreateSubscriber</code> API call.</p>
     */
    inline const Aws::String& GetSubscriptionId() const{ return m_subscriptionId; }

    /**
     * <p>The <code>subscriptionId</code> that was created by the
     * <code>CreateSubscriber</code> API call.</p>
     */
    inline void SetSubscriptionId(const Aws::String& value) { m_subscriptionId = value; }

    /**
     * <p>The <code>subscriptionId</code> that was created by the
     * <code>CreateSubscriber</code> API call.</p>
     */
    inline void SetSubscriptionId(Aws::String&& value) { m_subscriptionId = std::move(value); }

    /**
     * <p>The <code>subscriptionId</code> that was created by the
     * <code>CreateSubscriber</code> API call.</p>
     */
    inline void SetSubscriptionId(const char* value) { m_subscriptionId.assign(value); }

    /**
     * <p>The <code>subscriptionId</code> that was created by the
     * <code>CreateSubscriber</code> API call.</p>
     */
    inline CreateSubscriberResult& WithSubscriptionId(const Aws::String& value) { SetSubscriptionId(value); return *this;}

    /**
     * <p>The <code>subscriptionId</code> that was created by the
     * <code>CreateSubscriber</code> API call.</p>
     */
    inline CreateSubscriberResult& WithSubscriptionId(Aws::String&& value) { SetSubscriptionId(std::move(value)); return *this;}

    /**
     * <p>The <code>subscriptionId</code> that was created by the
     * <code>CreateSubscriber</code> API call.</p>
     */
    inline CreateSubscriberResult& WithSubscriptionId(const char* value) { SetSubscriptionId(value); return *this;}

  private:

    Aws::String m_roleArn;

    Aws::String m_s3BucketArn;

    Aws::String m_snsArn;

    Aws::String m_subscriptionId;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
