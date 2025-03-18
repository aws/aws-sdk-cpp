/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/S3OutputFormatConfig.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> The properties that are applied when Amazon S3 is used as a destination.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/S3DestinationProperties">AWS
   * API Reference</a></p>
   */
  class S3DestinationProperties
  {
  public:
    AWS_APPFLOW_API S3DestinationProperties() = default;
    AWS_APPFLOW_API S3DestinationProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API S3DestinationProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon S3 bucket name in which Amazon AppFlow places the transferred
     * data. </p>
     */
    inline const Aws::String& GetBucketName() const { return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    template<typename BucketNameT = Aws::String>
    void SetBucketName(BucketNameT&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::forward<BucketNameT>(value); }
    template<typename BucketNameT = Aws::String>
    S3DestinationProperties& WithBucketName(BucketNameT&& value) { SetBucketName(std::forward<BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The object key for the destination bucket in which Amazon AppFlow places the
     * files. </p>
     */
    inline const Aws::String& GetBucketPrefix() const { return m_bucketPrefix; }
    inline bool BucketPrefixHasBeenSet() const { return m_bucketPrefixHasBeenSet; }
    template<typename BucketPrefixT = Aws::String>
    void SetBucketPrefix(BucketPrefixT&& value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix = std::forward<BucketPrefixT>(value); }
    template<typename BucketPrefixT = Aws::String>
    S3DestinationProperties& WithBucketPrefix(BucketPrefixT&& value) { SetBucketPrefix(std::forward<BucketPrefixT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const S3OutputFormatConfig& GetS3OutputFormatConfig() const { return m_s3OutputFormatConfig; }
    inline bool S3OutputFormatConfigHasBeenSet() const { return m_s3OutputFormatConfigHasBeenSet; }
    template<typename S3OutputFormatConfigT = S3OutputFormatConfig>
    void SetS3OutputFormatConfig(S3OutputFormatConfigT&& value) { m_s3OutputFormatConfigHasBeenSet = true; m_s3OutputFormatConfig = std::forward<S3OutputFormatConfigT>(value); }
    template<typename S3OutputFormatConfigT = S3OutputFormatConfig>
    S3DestinationProperties& WithS3OutputFormatConfig(S3OutputFormatConfigT&& value) { SetS3OutputFormatConfig(std::forward<S3OutputFormatConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_bucketPrefix;
    bool m_bucketPrefixHasBeenSet = false;

    S3OutputFormatConfig m_s3OutputFormatConfig;
    bool m_s3OutputFormatConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
