/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Contains information about the access log configuration for the load
   * balancer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElbLoadBalancerAccessLog">AWS
   * API Reference</a></p>
   */
  class AwsElbLoadBalancerAccessLog
  {
  public:
    AWS_SECURITYHUB_API AwsElbLoadBalancerAccessLog();
    AWS_SECURITYHUB_API AwsElbLoadBalancerAccessLog(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElbLoadBalancerAccessLog& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The interval in minutes for publishing the access logs.</p> <p>You can
     * publish access logs either every 5 minutes or every 60 minutes.</p>
     */
    inline int GetEmitInterval() const{ return m_emitInterval; }

    /**
     * <p>The interval in minutes for publishing the access logs.</p> <p>You can
     * publish access logs either every 5 minutes or every 60 minutes.</p>
     */
    inline bool EmitIntervalHasBeenSet() const { return m_emitIntervalHasBeenSet; }

    /**
     * <p>The interval in minutes for publishing the access logs.</p> <p>You can
     * publish access logs either every 5 minutes or every 60 minutes.</p>
     */
    inline void SetEmitInterval(int value) { m_emitIntervalHasBeenSet = true; m_emitInterval = value; }

    /**
     * <p>The interval in minutes for publishing the access logs.</p> <p>You can
     * publish access logs either every 5 minutes or every 60 minutes.</p>
     */
    inline AwsElbLoadBalancerAccessLog& WithEmitInterval(int value) { SetEmitInterval(value); return *this;}


    /**
     * <p>Indicates whether access logs are enabled for the load balancer.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether access logs are enabled for the load balancer.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Indicates whether access logs are enabled for the load balancer.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether access logs are enabled for the load balancer.</p>
     */
    inline AwsElbLoadBalancerAccessLog& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The name of the S3 bucket where the access logs are stored.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The name of the S3 bucket where the access logs are stored.</p>
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>The name of the S3 bucket where the access logs are stored.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The name of the S3 bucket where the access logs are stored.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>The name of the S3 bucket where the access logs are stored.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>The name of the S3 bucket where the access logs are stored.</p>
     */
    inline AwsElbLoadBalancerAccessLog& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The name of the S3 bucket where the access logs are stored.</p>
     */
    inline AwsElbLoadBalancerAccessLog& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the S3 bucket where the access logs are stored.</p>
     */
    inline AwsElbLoadBalancerAccessLog& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


    /**
     * <p>The logical hierarchy that was created for the S3 bucket.</p> <p>If a prefix
     * is not provided, the log is placed at the root level of the bucket.</p>
     */
    inline const Aws::String& GetS3BucketPrefix() const{ return m_s3BucketPrefix; }

    /**
     * <p>The logical hierarchy that was created for the S3 bucket.</p> <p>If a prefix
     * is not provided, the log is placed at the root level of the bucket.</p>
     */
    inline bool S3BucketPrefixHasBeenSet() const { return m_s3BucketPrefixHasBeenSet; }

    /**
     * <p>The logical hierarchy that was created for the S3 bucket.</p> <p>If a prefix
     * is not provided, the log is placed at the root level of the bucket.</p>
     */
    inline void SetS3BucketPrefix(const Aws::String& value) { m_s3BucketPrefixHasBeenSet = true; m_s3BucketPrefix = value; }

    /**
     * <p>The logical hierarchy that was created for the S3 bucket.</p> <p>If a prefix
     * is not provided, the log is placed at the root level of the bucket.</p>
     */
    inline void SetS3BucketPrefix(Aws::String&& value) { m_s3BucketPrefixHasBeenSet = true; m_s3BucketPrefix = std::move(value); }

    /**
     * <p>The logical hierarchy that was created for the S3 bucket.</p> <p>If a prefix
     * is not provided, the log is placed at the root level of the bucket.</p>
     */
    inline void SetS3BucketPrefix(const char* value) { m_s3BucketPrefixHasBeenSet = true; m_s3BucketPrefix.assign(value); }

    /**
     * <p>The logical hierarchy that was created for the S3 bucket.</p> <p>If a prefix
     * is not provided, the log is placed at the root level of the bucket.</p>
     */
    inline AwsElbLoadBalancerAccessLog& WithS3BucketPrefix(const Aws::String& value) { SetS3BucketPrefix(value); return *this;}

    /**
     * <p>The logical hierarchy that was created for the S3 bucket.</p> <p>If a prefix
     * is not provided, the log is placed at the root level of the bucket.</p>
     */
    inline AwsElbLoadBalancerAccessLog& WithS3BucketPrefix(Aws::String&& value) { SetS3BucketPrefix(std::move(value)); return *this;}

    /**
     * <p>The logical hierarchy that was created for the S3 bucket.</p> <p>If a prefix
     * is not provided, the log is placed at the root level of the bucket.</p>
     */
    inline AwsElbLoadBalancerAccessLog& WithS3BucketPrefix(const char* value) { SetS3BucketPrefix(value); return *this;}

  private:

    int m_emitInterval;
    bool m_emitIntervalHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    Aws::String m_s3BucketPrefix;
    bool m_s3BucketPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
