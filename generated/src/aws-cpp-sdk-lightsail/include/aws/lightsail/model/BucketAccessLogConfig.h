/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the access log configuration for a bucket in the Amazon Lightsail
   * object storage service.</p> <p>For more information about bucket access logs,
   * see <a
   * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-bucket-access-logs">Logging
   * bucket requests using access logging in Amazon Lightsail</a> in the <i>Amazon
   * Lightsail Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/BucketAccessLogConfig">AWS
   * API Reference</a></p>
   */
  class BucketAccessLogConfig
  {
  public:
    AWS_LIGHTSAIL_API BucketAccessLogConfig();
    AWS_LIGHTSAIL_API BucketAccessLogConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API BucketAccessLogConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A Boolean value that indicates whether bucket access logging is enabled for
     * the bucket.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>A Boolean value that indicates whether bucket access logging is enabled for
     * the bucket.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>A Boolean value that indicates whether bucket access logging is enabled for
     * the bucket.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>A Boolean value that indicates whether bucket access logging is enabled for
     * the bucket.</p>
     */
    inline BucketAccessLogConfig& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The name of the bucket where the access logs are saved. The destination can
     * be a Lightsail bucket in the same account, and in the same Amazon Web Services
     * Region as the source bucket.</p>  <p>This parameter is required when
     * enabling the access log for a bucket, and should be omitted when disabling the
     * access log.</p> 
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * <p>The name of the bucket where the access logs are saved. The destination can
     * be a Lightsail bucket in the same account, and in the same Amazon Web Services
     * Region as the source bucket.</p>  <p>This parameter is required when
     * enabling the access log for a bucket, and should be omitted when disabling the
     * access log.</p> 
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The name of the bucket where the access logs are saved. The destination can
     * be a Lightsail bucket in the same account, and in the same Amazon Web Services
     * Region as the source bucket.</p>  <p>This parameter is required when
     * enabling the access log for a bucket, and should be omitted when disabling the
     * access log.</p> 
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The name of the bucket where the access logs are saved. The destination can
     * be a Lightsail bucket in the same account, and in the same Amazon Web Services
     * Region as the source bucket.</p>  <p>This parameter is required when
     * enabling the access log for a bucket, and should be omitted when disabling the
     * access log.</p> 
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The name of the bucket where the access logs are saved. The destination can
     * be a Lightsail bucket in the same account, and in the same Amazon Web Services
     * Region as the source bucket.</p>  <p>This parameter is required when
     * enabling the access log for a bucket, and should be omitted when disabling the
     * access log.</p> 
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * <p>The name of the bucket where the access logs are saved. The destination can
     * be a Lightsail bucket in the same account, and in the same Amazon Web Services
     * Region as the source bucket.</p>  <p>This parameter is required when
     * enabling the access log for a bucket, and should be omitted when disabling the
     * access log.</p> 
     */
    inline BucketAccessLogConfig& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p>The name of the bucket where the access logs are saved. The destination can
     * be a Lightsail bucket in the same account, and in the same Amazon Web Services
     * Region as the source bucket.</p>  <p>This parameter is required when
     * enabling the access log for a bucket, and should be omitted when disabling the
     * access log.</p> 
     */
    inline BucketAccessLogConfig& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p>The name of the bucket where the access logs are saved. The destination can
     * be a Lightsail bucket in the same account, and in the same Amazon Web Services
     * Region as the source bucket.</p>  <p>This parameter is required when
     * enabling the access log for a bucket, and should be omitted when disabling the
     * access log.</p> 
     */
    inline BucketAccessLogConfig& WithDestination(const char* value) { SetDestination(value); return *this;}


    /**
     * <p>The optional object prefix for the bucket access log.</p> <p>The prefix is an
     * optional addition to the object key that organizes your access log files in the
     * destination bucket. For example, if you specify a <code>logs/</code> prefix,
     * then each log object will begin with the <code>logs/</code> prefix in its key
     * (for example, <code>logs/2021-11-01-21-32-16-E568B2907131C0C0</code>).</p>
     *  <p>This parameter can be optionally specified when enabling the access
     * log for a bucket, and should be omitted when disabling the access log.</p>
     * 
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>The optional object prefix for the bucket access log.</p> <p>The prefix is an
     * optional addition to the object key that organizes your access log files in the
     * destination bucket. For example, if you specify a <code>logs/</code> prefix,
     * then each log object will begin with the <code>logs/</code> prefix in its key
     * (for example, <code>logs/2021-11-01-21-32-16-E568B2907131C0C0</code>).</p>
     *  <p>This parameter can be optionally specified when enabling the access
     * log for a bucket, and should be omitted when disabling the access log.</p>
     * 
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>The optional object prefix for the bucket access log.</p> <p>The prefix is an
     * optional addition to the object key that organizes your access log files in the
     * destination bucket. For example, if you specify a <code>logs/</code> prefix,
     * then each log object will begin with the <code>logs/</code> prefix in its key
     * (for example, <code>logs/2021-11-01-21-32-16-E568B2907131C0C0</code>).</p>
     *  <p>This parameter can be optionally specified when enabling the access
     * log for a bucket, and should be omitted when disabling the access log.</p>
     * 
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>The optional object prefix for the bucket access log.</p> <p>The prefix is an
     * optional addition to the object key that organizes your access log files in the
     * destination bucket. For example, if you specify a <code>logs/</code> prefix,
     * then each log object will begin with the <code>logs/</code> prefix in its key
     * (for example, <code>logs/2021-11-01-21-32-16-E568B2907131C0C0</code>).</p>
     *  <p>This parameter can be optionally specified when enabling the access
     * log for a bucket, and should be omitted when disabling the access log.</p>
     * 
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>The optional object prefix for the bucket access log.</p> <p>The prefix is an
     * optional addition to the object key that organizes your access log files in the
     * destination bucket. For example, if you specify a <code>logs/</code> prefix,
     * then each log object will begin with the <code>logs/</code> prefix in its key
     * (for example, <code>logs/2021-11-01-21-32-16-E568B2907131C0C0</code>).</p>
     *  <p>This parameter can be optionally specified when enabling the access
     * log for a bucket, and should be omitted when disabling the access log.</p>
     * 
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>The optional object prefix for the bucket access log.</p> <p>The prefix is an
     * optional addition to the object key that organizes your access log files in the
     * destination bucket. For example, if you specify a <code>logs/</code> prefix,
     * then each log object will begin with the <code>logs/</code> prefix in its key
     * (for example, <code>logs/2021-11-01-21-32-16-E568B2907131C0C0</code>).</p>
     *  <p>This parameter can be optionally specified when enabling the access
     * log for a bucket, and should be omitted when disabling the access log.</p>
     * 
     */
    inline BucketAccessLogConfig& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>The optional object prefix for the bucket access log.</p> <p>The prefix is an
     * optional addition to the object key that organizes your access log files in the
     * destination bucket. For example, if you specify a <code>logs/</code> prefix,
     * then each log object will begin with the <code>logs/</code> prefix in its key
     * (for example, <code>logs/2021-11-01-21-32-16-E568B2907131C0C0</code>).</p>
     *  <p>This parameter can be optionally specified when enabling the access
     * log for a bucket, and should be omitted when disabling the access log.</p>
     * 
     */
    inline BucketAccessLogConfig& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>The optional object prefix for the bucket access log.</p> <p>The prefix is an
     * optional addition to the object key that organizes your access log files in the
     * destination bucket. For example, if you specify a <code>logs/</code> prefix,
     * then each log object will begin with the <code>logs/</code> prefix in its key
     * (for example, <code>logs/2021-11-01-21-32-16-E568B2907131C0C0</code>).</p>
     *  <p>This parameter can be optionally specified when enabling the access
     * log for a bucket, and should be omitted when disabling the access log.</p>
     * 
     */
    inline BucketAccessLogConfig& WithPrefix(const char* value) { SetPrefix(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
