/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/internetmonitor/model/LogDeliveryStatus.h>
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
namespace InternetMonitor
{
namespace Model
{

  /**
   * <p>The configuration for publishing Amazon CloudWatch Internet Monitor internet
   * measurements to Amazon S3. The configuration includes the bucket name and
   * (optionally) prefix for the S3 bucket to store the measurements, and the
   * delivery status. The delivery status is <code>ENABLED</code> or
   * <code>DISABLED</code>, depending on whether you choose to deliver internet
   * measurements to S3 logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/internetmonitor-2021-06-03/S3Config">AWS
   * API Reference</a></p>
   */
  class S3Config
  {
  public:
    AWS_INTERNETMONITOR_API S3Config();
    AWS_INTERNETMONITOR_API S3Config(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API S3Config& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 bucket name.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }
    inline S3Config& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}
    inline S3Config& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}
    inline S3Config& WithBucketName(const char* value) { SetBucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket prefix.</p>
     */
    inline const Aws::String& GetBucketPrefix() const{ return m_bucketPrefix; }
    inline bool BucketPrefixHasBeenSet() const { return m_bucketPrefixHasBeenSet; }
    inline void SetBucketPrefix(const Aws::String& value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix = value; }
    inline void SetBucketPrefix(Aws::String&& value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix = std::move(value); }
    inline void SetBucketPrefix(const char* value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix.assign(value); }
    inline S3Config& WithBucketPrefix(const Aws::String& value) { SetBucketPrefix(value); return *this;}
    inline S3Config& WithBucketPrefix(Aws::String&& value) { SetBucketPrefix(std::move(value)); return *this;}
    inline S3Config& WithBucketPrefix(const char* value) { SetBucketPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of publishing Internet Monitor internet measurements to an Amazon
     * S3 bucket.</p>
     */
    inline const LogDeliveryStatus& GetLogDeliveryStatus() const{ return m_logDeliveryStatus; }
    inline bool LogDeliveryStatusHasBeenSet() const { return m_logDeliveryStatusHasBeenSet; }
    inline void SetLogDeliveryStatus(const LogDeliveryStatus& value) { m_logDeliveryStatusHasBeenSet = true; m_logDeliveryStatus = value; }
    inline void SetLogDeliveryStatus(LogDeliveryStatus&& value) { m_logDeliveryStatusHasBeenSet = true; m_logDeliveryStatus = std::move(value); }
    inline S3Config& WithLogDeliveryStatus(const LogDeliveryStatus& value) { SetLogDeliveryStatus(value); return *this;}
    inline S3Config& WithLogDeliveryStatus(LogDeliveryStatus&& value) { SetLogDeliveryStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_bucketPrefix;
    bool m_bucketPrefixHasBeenSet = false;

    LogDeliveryStatus m_logDeliveryStatus;
    bool m_logDeliveryStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
