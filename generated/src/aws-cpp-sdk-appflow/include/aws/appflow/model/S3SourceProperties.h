/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/S3InputFormatConfig.h>
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
   * <p> The properties that are applied when Amazon S3 is being used as the flow
   * source. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/S3SourceProperties">AWS
   * API Reference</a></p>
   */
  class S3SourceProperties
  {
  public:
    AWS_APPFLOW_API S3SourceProperties() = default;
    AWS_APPFLOW_API S3SourceProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API S3SourceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon S3 bucket name where the source files are stored. </p>
     */
    inline const Aws::String& GetBucketName() const { return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    template<typename BucketNameT = Aws::String>
    void SetBucketName(BucketNameT&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::forward<BucketNameT>(value); }
    template<typename BucketNameT = Aws::String>
    S3SourceProperties& WithBucketName(BucketNameT&& value) { SetBucketName(std::forward<BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The object key for the Amazon S3 bucket in which the source files are
     * stored. </p>
     */
    inline const Aws::String& GetBucketPrefix() const { return m_bucketPrefix; }
    inline bool BucketPrefixHasBeenSet() const { return m_bucketPrefixHasBeenSet; }
    template<typename BucketPrefixT = Aws::String>
    void SetBucketPrefix(BucketPrefixT&& value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix = std::forward<BucketPrefixT>(value); }
    template<typename BucketPrefixT = Aws::String>
    S3SourceProperties& WithBucketPrefix(BucketPrefixT&& value) { SetBucketPrefix(std::forward<BucketPrefixT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const S3InputFormatConfig& GetS3InputFormatConfig() const { return m_s3InputFormatConfig; }
    inline bool S3InputFormatConfigHasBeenSet() const { return m_s3InputFormatConfigHasBeenSet; }
    template<typename S3InputFormatConfigT = S3InputFormatConfig>
    void SetS3InputFormatConfig(S3InputFormatConfigT&& value) { m_s3InputFormatConfigHasBeenSet = true; m_s3InputFormatConfig = std::forward<S3InputFormatConfigT>(value); }
    template<typename S3InputFormatConfigT = S3InputFormatConfig>
    S3SourceProperties& WithS3InputFormatConfig(S3InputFormatConfigT&& value) { SetS3InputFormatConfig(std::forward<S3InputFormatConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_bucketPrefix;
    bool m_bucketPrefixHasBeenSet = false;

    S3InputFormatConfig m_s3InputFormatConfig;
    bool m_s3InputFormatConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
