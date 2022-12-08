/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p> Contains information about the data store that you manage, which stores data
   * used by IoT SiteWise. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/IotSiteWiseCustomerManagedDatastoreS3StorageSummary">AWS
   * API Reference</a></p>
   */
  class IotSiteWiseCustomerManagedDatastoreS3StorageSummary
  {
  public:
    AWS_IOTANALYTICS_API IotSiteWiseCustomerManagedDatastoreS3StorageSummary();
    AWS_IOTANALYTICS_API IotSiteWiseCustomerManagedDatastoreS3StorageSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API IotSiteWiseCustomerManagedDatastoreS3StorageSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the Amazon S3 bucket where your data is stored. </p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p> The name of the Amazon S3 bucket where your data is stored. </p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p> The name of the Amazon S3 bucket where your data is stored. </p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p> The name of the Amazon S3 bucket where your data is stored. </p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p> The name of the Amazon S3 bucket where your data is stored. </p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p> The name of the Amazon S3 bucket where your data is stored. </p>
     */
    inline IotSiteWiseCustomerManagedDatastoreS3StorageSummary& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p> The name of the Amazon S3 bucket where your data is stored. </p>
     */
    inline IotSiteWiseCustomerManagedDatastoreS3StorageSummary& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p> The name of the Amazon S3 bucket where your data is stored. </p>
     */
    inline IotSiteWiseCustomerManagedDatastoreS3StorageSummary& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p> (Optional) The prefix used to create the keys of the data store data
     * objects. Each object in an Amazon S3 bucket has a key that is its unique
     * identifier in the bucket. Each object in a bucket has exactly one key. The
     * prefix must end with a forward slash (/). </p>
     */
    inline const Aws::String& GetKeyPrefix() const{ return m_keyPrefix; }

    /**
     * <p> (Optional) The prefix used to create the keys of the data store data
     * objects. Each object in an Amazon S3 bucket has a key that is its unique
     * identifier in the bucket. Each object in a bucket has exactly one key. The
     * prefix must end with a forward slash (/). </p>
     */
    inline bool KeyPrefixHasBeenSet() const { return m_keyPrefixHasBeenSet; }

    /**
     * <p> (Optional) The prefix used to create the keys of the data store data
     * objects. Each object in an Amazon S3 bucket has a key that is its unique
     * identifier in the bucket. Each object in a bucket has exactly one key. The
     * prefix must end with a forward slash (/). </p>
     */
    inline void SetKeyPrefix(const Aws::String& value) { m_keyPrefixHasBeenSet = true; m_keyPrefix = value; }

    /**
     * <p> (Optional) The prefix used to create the keys of the data store data
     * objects. Each object in an Amazon S3 bucket has a key that is its unique
     * identifier in the bucket. Each object in a bucket has exactly one key. The
     * prefix must end with a forward slash (/). </p>
     */
    inline void SetKeyPrefix(Aws::String&& value) { m_keyPrefixHasBeenSet = true; m_keyPrefix = std::move(value); }

    /**
     * <p> (Optional) The prefix used to create the keys of the data store data
     * objects. Each object in an Amazon S3 bucket has a key that is its unique
     * identifier in the bucket. Each object in a bucket has exactly one key. The
     * prefix must end with a forward slash (/). </p>
     */
    inline void SetKeyPrefix(const char* value) { m_keyPrefixHasBeenSet = true; m_keyPrefix.assign(value); }

    /**
     * <p> (Optional) The prefix used to create the keys of the data store data
     * objects. Each object in an Amazon S3 bucket has a key that is its unique
     * identifier in the bucket. Each object in a bucket has exactly one key. The
     * prefix must end with a forward slash (/). </p>
     */
    inline IotSiteWiseCustomerManagedDatastoreS3StorageSummary& WithKeyPrefix(const Aws::String& value) { SetKeyPrefix(value); return *this;}

    /**
     * <p> (Optional) The prefix used to create the keys of the data store data
     * objects. Each object in an Amazon S3 bucket has a key that is its unique
     * identifier in the bucket. Each object in a bucket has exactly one key. The
     * prefix must end with a forward slash (/). </p>
     */
    inline IotSiteWiseCustomerManagedDatastoreS3StorageSummary& WithKeyPrefix(Aws::String&& value) { SetKeyPrefix(std::move(value)); return *this;}

    /**
     * <p> (Optional) The prefix used to create the keys of the data store data
     * objects. Each object in an Amazon S3 bucket has a key that is its unique
     * identifier in the bucket. Each object in a bucket has exactly one key. The
     * prefix must end with a forward slash (/). </p>
     */
    inline IotSiteWiseCustomerManagedDatastoreS3StorageSummary& WithKeyPrefix(const char* value) { SetKeyPrefix(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_keyPrefix;
    bool m_keyPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
