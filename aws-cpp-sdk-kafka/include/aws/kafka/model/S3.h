/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
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
namespace Kafka
{
namespace Model
{

  class S3
  {
  public:
    AWS_KAFKA_API S3();
    AWS_KAFKA_API S3(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API S3& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    
    inline S3& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    
    inline S3& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    
    inline S3& WithBucket(const char* value) { SetBucket(value); return *this;}


    
    inline bool GetEnabled() const{ return m_enabled; }

    
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    
    inline S3& WithEnabled(bool value) { SetEnabled(value); return *this;}


    
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    
    inline S3& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    
    inline S3& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    
    inline S3& WithPrefix(const char* value) { SetPrefix(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
