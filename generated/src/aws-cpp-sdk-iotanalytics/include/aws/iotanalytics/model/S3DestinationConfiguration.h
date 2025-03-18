/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotanalytics/model/GlueConfiguration.h>
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
   * <p>Configuration information for delivery of dataset contents to Amazon Simple
   * Storage Service (Amazon S3).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/S3DestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class S3DestinationConfiguration
  {
  public:
    AWS_IOTANALYTICS_API S3DestinationConfiguration() = default;
    AWS_IOTANALYTICS_API S3DestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API S3DestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the S3 bucket to which dataset contents are delivered.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    S3DestinationConfiguration& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key of the dataset contents object in an S3 bucket. Each object has a key
     * that is a unique identifier. Each object has exactly one key.</p> <p>You can
     * create a unique key with the following options:</p> <ul> <li> <p>Use
     * <code>!{iotanalytics:scheduleTime}</code> to insert the time of a scheduled SQL
     * query run.</p> </li> <li> <p>Use <code>!{iotanalytics:versionId}</code> to
     * insert a unique hash that identifies a dataset content.</p> </li> <li> <p>Use
     * <code>!{iotanalytics:creationTime}</code> to insert the creation time of a
     * dataset content.</p> </li> </ul> <p>The following example creates a unique key
     * for a CSV file:
     * <code>dataset/mydataset/!{iotanalytics:scheduleTime}/!{iotanalytics:versionId}.csv</code>
     * </p>  <p>If you don't use <code>!{iotanalytics:versionId}</code> to
     * specify the key, you might get duplicate keys. For example, you might have two
     * dataset contents with the same <code>scheduleTime</code> but different
     * <code>versionId</code>s. This means that one dataset content overwrites the
     * other. </p> 
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    S3DestinationConfiguration& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for coordination with Glue, a fully managed
     * extract, transform and load (ETL) service.</p>
     */
    inline const GlueConfiguration& GetGlueConfiguration() const { return m_glueConfiguration; }
    inline bool GlueConfigurationHasBeenSet() const { return m_glueConfigurationHasBeenSet; }
    template<typename GlueConfigurationT = GlueConfiguration>
    void SetGlueConfiguration(GlueConfigurationT&& value) { m_glueConfigurationHasBeenSet = true; m_glueConfiguration = std::forward<GlueConfigurationT>(value); }
    template<typename GlueConfigurationT = GlueConfiguration>
    S3DestinationConfiguration& WithGlueConfiguration(GlueConfigurationT&& value) { SetGlueConfiguration(std::forward<GlueConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role that grants IoT Analytics permission to interact with
     * your Amazon S3 and Glue resources.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    S3DestinationConfiguration& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    GlueConfiguration m_glueConfiguration;
    bool m_glueConfigurationHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
