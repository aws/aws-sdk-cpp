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
   * <p>Used to store channel data in an S3 bucket that you manage.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/CustomerManagedChannelS3StorageSummary">AWS
   * API Reference</a></p>
   */
  class CustomerManagedChannelS3StorageSummary
  {
  public:
    AWS_IOTANALYTICS_API CustomerManagedChannelS3StorageSummary() = default;
    AWS_IOTANALYTICS_API CustomerManagedChannelS3StorageSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API CustomerManagedChannelS3StorageSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the S3 bucket in which channel data is stored.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    CustomerManagedChannelS3StorageSummary& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) The prefix used to create the keys of the channel data objects.
     * Each object in an S3 bucket has a key that is its unique identifier within the
     * bucket (each object in a bucket has exactly one key). The prefix must end with a
     * forward slash (/).</p>
     */
    inline const Aws::String& GetKeyPrefix() const { return m_keyPrefix; }
    inline bool KeyPrefixHasBeenSet() const { return m_keyPrefixHasBeenSet; }
    template<typename KeyPrefixT = Aws::String>
    void SetKeyPrefix(KeyPrefixT&& value) { m_keyPrefixHasBeenSet = true; m_keyPrefix = std::forward<KeyPrefixT>(value); }
    template<typename KeyPrefixT = Aws::String>
    CustomerManagedChannelS3StorageSummary& WithKeyPrefix(KeyPrefixT&& value) { SetKeyPrefix(std::forward<KeyPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role that grants IoT Analytics permission to interact with
     * your Amazon S3 resources.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CustomerManagedChannelS3StorageSummary& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_keyPrefix;
    bool m_keyPrefixHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
