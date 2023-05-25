/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
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
namespace KafkaConnect
{
namespace Model
{

  /**
   * <p>The description of the details about delivering logs to Amazon
   * S3.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/S3LogDeliveryDescription">AWS
   * API Reference</a></p>
   */
  class S3LogDeliveryDescription
  {
  public:
    AWS_KAFKACONNECT_API S3LogDeliveryDescription();
    AWS_KAFKACONNECT_API S3LogDeliveryDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API S3LogDeliveryDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the S3 bucket that is the destination for log delivery.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The name of the S3 bucket that is the destination for log delivery.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The name of the S3 bucket that is the destination for log delivery.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The name of the S3 bucket that is the destination for log delivery.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The name of the S3 bucket that is the destination for log delivery.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The name of the S3 bucket that is the destination for log delivery.</p>
     */
    inline S3LogDeliveryDescription& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The name of the S3 bucket that is the destination for log delivery.</p>
     */
    inline S3LogDeliveryDescription& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The name of the S3 bucket that is the destination for log delivery.</p>
     */
    inline S3LogDeliveryDescription& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>Specifies whether connector logs get sent to the specified Amazon S3
     * destination.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether connector logs get sent to the specified Amazon S3
     * destination.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies whether connector logs get sent to the specified Amazon S3
     * destination.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether connector logs get sent to the specified Amazon S3
     * destination.</p>
     */
    inline S3LogDeliveryDescription& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The S3 prefix that is the destination for log delivery.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>The S3 prefix that is the destination for log delivery.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>The S3 prefix that is the destination for log delivery.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>The S3 prefix that is the destination for log delivery.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>The S3 prefix that is the destination for log delivery.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>The S3 prefix that is the destination for log delivery.</p>
     */
    inline S3LogDeliveryDescription& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>The S3 prefix that is the destination for log delivery.</p>
     */
    inline S3LogDeliveryDescription& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>The S3 prefix that is the destination for log delivery.</p>
     */
    inline S3LogDeliveryDescription& WithPrefix(const char* value) { SetPrefix(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
