/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Information about the <code>AccessLog</code> attribute.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/AccessLog">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICLOADBALANCING_API AccessLog
  {
  public:
    AccessLog();
    AccessLog(const Aws::Utils::Xml::XmlNode& xmlNode);
    AccessLog& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Specifies whether access logs are enabled for the load balancer.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether access logs are enabled for the load balancer.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies whether access logs are enabled for the load balancer.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether access logs are enabled for the load balancer.</p>
     */
    inline AccessLog& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The name of the Amazon S3 bucket where the access logs are stored.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The name of the Amazon S3 bucket where the access logs are stored.</p>
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket where the access logs are stored.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The name of the Amazon S3 bucket where the access logs are stored.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket where the access logs are stored.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket where the access logs are stored.</p>
     */
    inline AccessLog& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket where the access logs are stored.</p>
     */
    inline AccessLog& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket where the access logs are stored.</p>
     */
    inline AccessLog& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


    /**
     * <p>The interval for publishing the access logs. You can specify an interval of
     * either 5 minutes or 60 minutes.</p> <p>Default: 60 minutes</p>
     */
    inline int GetEmitInterval() const{ return m_emitInterval; }

    /**
     * <p>The interval for publishing the access logs. You can specify an interval of
     * either 5 minutes or 60 minutes.</p> <p>Default: 60 minutes</p>
     */
    inline bool EmitIntervalHasBeenSet() const { return m_emitIntervalHasBeenSet; }

    /**
     * <p>The interval for publishing the access logs. You can specify an interval of
     * either 5 minutes or 60 minutes.</p> <p>Default: 60 minutes</p>
     */
    inline void SetEmitInterval(int value) { m_emitIntervalHasBeenSet = true; m_emitInterval = value; }

    /**
     * <p>The interval for publishing the access logs. You can specify an interval of
     * either 5 minutes or 60 minutes.</p> <p>Default: 60 minutes</p>
     */
    inline AccessLog& WithEmitInterval(int value) { SetEmitInterval(value); return *this;}


    /**
     * <p>The logical hierarchy you created for your Amazon S3 bucket, for example
     * <code>my-bucket-prefix/prod</code>. If the prefix is not provided, the log is
     * placed at the root level of the bucket.</p>
     */
    inline const Aws::String& GetS3BucketPrefix() const{ return m_s3BucketPrefix; }

    /**
     * <p>The logical hierarchy you created for your Amazon S3 bucket, for example
     * <code>my-bucket-prefix/prod</code>. If the prefix is not provided, the log is
     * placed at the root level of the bucket.</p>
     */
    inline bool S3BucketPrefixHasBeenSet() const { return m_s3BucketPrefixHasBeenSet; }

    /**
     * <p>The logical hierarchy you created for your Amazon S3 bucket, for example
     * <code>my-bucket-prefix/prod</code>. If the prefix is not provided, the log is
     * placed at the root level of the bucket.</p>
     */
    inline void SetS3BucketPrefix(const Aws::String& value) { m_s3BucketPrefixHasBeenSet = true; m_s3BucketPrefix = value; }

    /**
     * <p>The logical hierarchy you created for your Amazon S3 bucket, for example
     * <code>my-bucket-prefix/prod</code>. If the prefix is not provided, the log is
     * placed at the root level of the bucket.</p>
     */
    inline void SetS3BucketPrefix(Aws::String&& value) { m_s3BucketPrefixHasBeenSet = true; m_s3BucketPrefix = std::move(value); }

    /**
     * <p>The logical hierarchy you created for your Amazon S3 bucket, for example
     * <code>my-bucket-prefix/prod</code>. If the prefix is not provided, the log is
     * placed at the root level of the bucket.</p>
     */
    inline void SetS3BucketPrefix(const char* value) { m_s3BucketPrefixHasBeenSet = true; m_s3BucketPrefix.assign(value); }

    /**
     * <p>The logical hierarchy you created for your Amazon S3 bucket, for example
     * <code>my-bucket-prefix/prod</code>. If the prefix is not provided, the log is
     * placed at the root level of the bucket.</p>
     */
    inline AccessLog& WithS3BucketPrefix(const Aws::String& value) { SetS3BucketPrefix(value); return *this;}

    /**
     * <p>The logical hierarchy you created for your Amazon S3 bucket, for example
     * <code>my-bucket-prefix/prod</code>. If the prefix is not provided, the log is
     * placed at the root level of the bucket.</p>
     */
    inline AccessLog& WithS3BucketPrefix(Aws::String&& value) { SetS3BucketPrefix(std::move(value)); return *this;}

    /**
     * <p>The logical hierarchy you created for your Amazon S3 bucket, for example
     * <code>my-bucket-prefix/prod</code>. If the prefix is not provided, the log is
     * placed at the root level of the bucket.</p>
     */
    inline AccessLog& WithS3BucketPrefix(const char* value) { SetS3BucketPrefix(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet;

    int m_emitInterval;
    bool m_emitIntervalHasBeenSet;

    Aws::String m_s3BucketPrefix;
    bool m_s3BucketPrefixHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
