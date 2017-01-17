﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/InventoryFormat.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{

  class AWS_S3_API InventoryS3BucketDestination
  {
  public:
    InventoryS3BucketDestination();
    InventoryS3BucketDestination(const Aws::Utils::Xml::XmlNode& xmlNode);
    InventoryS3BucketDestination& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * The ID of the account that owns the destination bucket.
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * The ID of the account that owns the destination bucket.
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * The ID of the account that owns the destination bucket.
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * The ID of the account that owns the destination bucket.
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * The ID of the account that owns the destination bucket.
     */
    inline InventoryS3BucketDestination& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * The ID of the account that owns the destination bucket.
     */
    inline InventoryS3BucketDestination& WithAccountId(Aws::String&& value) { SetAccountId(value); return *this;}

    /**
     * The ID of the account that owns the destination bucket.
     */
    inline InventoryS3BucketDestination& WithAccountId(const char* value) { SetAccountId(value); return *this;}

    /**
     * The Amazon resource name (ARN) of the bucket where inventory results will be
     * published.
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * The Amazon resource name (ARN) of the bucket where inventory results will be
     * published.
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * The Amazon resource name (ARN) of the bucket where inventory results will be
     * published.
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * The Amazon resource name (ARN) of the bucket where inventory results will be
     * published.
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * The Amazon resource name (ARN) of the bucket where inventory results will be
     * published.
     */
    inline InventoryS3BucketDestination& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * The Amazon resource name (ARN) of the bucket where inventory results will be
     * published.
     */
    inline InventoryS3BucketDestination& WithBucket(Aws::String&& value) { SetBucket(value); return *this;}

    /**
     * The Amazon resource name (ARN) of the bucket where inventory results will be
     * published.
     */
    inline InventoryS3BucketDestination& WithBucket(const char* value) { SetBucket(value); return *this;}

    /**
     * Specifies the output format of the inventory results.
     */
    inline const InventoryFormat& GetFormat() const{ return m_format; }

    /**
     * Specifies the output format of the inventory results.
     */
    inline void SetFormat(const InventoryFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * Specifies the output format of the inventory results.
     */
    inline void SetFormat(InventoryFormat&& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * Specifies the output format of the inventory results.
     */
    inline InventoryS3BucketDestination& WithFormat(const InventoryFormat& value) { SetFormat(value); return *this;}

    /**
     * Specifies the output format of the inventory results.
     */
    inline InventoryS3BucketDestination& WithFormat(InventoryFormat&& value) { SetFormat(value); return *this;}

    /**
     * The prefix that is prepended to all inventory results.
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * The prefix that is prepended to all inventory results.
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * The prefix that is prepended to all inventory results.
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * The prefix that is prepended to all inventory results.
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * The prefix that is prepended to all inventory results.
     */
    inline InventoryS3BucketDestination& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * The prefix that is prepended to all inventory results.
     */
    inline InventoryS3BucketDestination& WithPrefix(Aws::String&& value) { SetPrefix(value); return *this;}

    /**
     * The prefix that is prepended to all inventory results.
     */
    inline InventoryS3BucketDestination& WithPrefix(const char* value) { SetPrefix(value); return *this;}

  private:
    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;
    Aws::String m_bucket;
    bool m_bucketHasBeenSet;
    InventoryFormat m_format;
    bool m_formatHasBeenSet;
    Aws::String m_prefix;
    bool m_prefixHasBeenSet;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
