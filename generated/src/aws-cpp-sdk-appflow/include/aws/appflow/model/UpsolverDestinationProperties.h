/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/UpsolverS3OutputFormatConfig.h>
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
   * <p> The properties that are applied when Upsolver is used as a destination.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/UpsolverDestinationProperties">AWS
   * API Reference</a></p>
   */
  class UpsolverDestinationProperties
  {
  public:
    AWS_APPFLOW_API UpsolverDestinationProperties();
    AWS_APPFLOW_API UpsolverDestinationProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API UpsolverDestinationProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Upsolver Amazon S3 bucket name in which Amazon AppFlow places the
     * transferred data. </p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p> The Upsolver Amazon S3 bucket name in which Amazon AppFlow places the
     * transferred data. </p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p> The Upsolver Amazon S3 bucket name in which Amazon AppFlow places the
     * transferred data. </p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p> The Upsolver Amazon S3 bucket name in which Amazon AppFlow places the
     * transferred data. </p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p> The Upsolver Amazon S3 bucket name in which Amazon AppFlow places the
     * transferred data. </p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p> The Upsolver Amazon S3 bucket name in which Amazon AppFlow places the
     * transferred data. </p>
     */
    inline UpsolverDestinationProperties& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p> The Upsolver Amazon S3 bucket name in which Amazon AppFlow places the
     * transferred data. </p>
     */
    inline UpsolverDestinationProperties& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p> The Upsolver Amazon S3 bucket name in which Amazon AppFlow places the
     * transferred data. </p>
     */
    inline UpsolverDestinationProperties& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p> The object key for the destination Upsolver Amazon S3 bucket in which Amazon
     * AppFlow places the files. </p>
     */
    inline const Aws::String& GetBucketPrefix() const{ return m_bucketPrefix; }

    /**
     * <p> The object key for the destination Upsolver Amazon S3 bucket in which Amazon
     * AppFlow places the files. </p>
     */
    inline bool BucketPrefixHasBeenSet() const { return m_bucketPrefixHasBeenSet; }

    /**
     * <p> The object key for the destination Upsolver Amazon S3 bucket in which Amazon
     * AppFlow places the files. </p>
     */
    inline void SetBucketPrefix(const Aws::String& value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix = value; }

    /**
     * <p> The object key for the destination Upsolver Amazon S3 bucket in which Amazon
     * AppFlow places the files. </p>
     */
    inline void SetBucketPrefix(Aws::String&& value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix = std::move(value); }

    /**
     * <p> The object key for the destination Upsolver Amazon S3 bucket in which Amazon
     * AppFlow places the files. </p>
     */
    inline void SetBucketPrefix(const char* value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix.assign(value); }

    /**
     * <p> The object key for the destination Upsolver Amazon S3 bucket in which Amazon
     * AppFlow places the files. </p>
     */
    inline UpsolverDestinationProperties& WithBucketPrefix(const Aws::String& value) { SetBucketPrefix(value); return *this;}

    /**
     * <p> The object key for the destination Upsolver Amazon S3 bucket in which Amazon
     * AppFlow places the files. </p>
     */
    inline UpsolverDestinationProperties& WithBucketPrefix(Aws::String&& value) { SetBucketPrefix(std::move(value)); return *this;}

    /**
     * <p> The object key for the destination Upsolver Amazon S3 bucket in which Amazon
     * AppFlow places the files. </p>
     */
    inline UpsolverDestinationProperties& WithBucketPrefix(const char* value) { SetBucketPrefix(value); return *this;}


    /**
     * <p> The configuration that determines how data is formatted when Upsolver is
     * used as the flow destination. </p>
     */
    inline const UpsolverS3OutputFormatConfig& GetS3OutputFormatConfig() const{ return m_s3OutputFormatConfig; }

    /**
     * <p> The configuration that determines how data is formatted when Upsolver is
     * used as the flow destination. </p>
     */
    inline bool S3OutputFormatConfigHasBeenSet() const { return m_s3OutputFormatConfigHasBeenSet; }

    /**
     * <p> The configuration that determines how data is formatted when Upsolver is
     * used as the flow destination. </p>
     */
    inline void SetS3OutputFormatConfig(const UpsolverS3OutputFormatConfig& value) { m_s3OutputFormatConfigHasBeenSet = true; m_s3OutputFormatConfig = value; }

    /**
     * <p> The configuration that determines how data is formatted when Upsolver is
     * used as the flow destination. </p>
     */
    inline void SetS3OutputFormatConfig(UpsolverS3OutputFormatConfig&& value) { m_s3OutputFormatConfigHasBeenSet = true; m_s3OutputFormatConfig = std::move(value); }

    /**
     * <p> The configuration that determines how data is formatted when Upsolver is
     * used as the flow destination. </p>
     */
    inline UpsolverDestinationProperties& WithS3OutputFormatConfig(const UpsolverS3OutputFormatConfig& value) { SetS3OutputFormatConfig(value); return *this;}

    /**
     * <p> The configuration that determines how data is formatted when Upsolver is
     * used as the flow destination. </p>
     */
    inline UpsolverDestinationProperties& WithS3OutputFormatConfig(UpsolverS3OutputFormatConfig&& value) { SetS3OutputFormatConfig(std::move(value)); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_bucketPrefix;
    bool m_bucketPrefixHasBeenSet = false;

    UpsolverS3OutputFormatConfig m_s3OutputFormatConfig;
    bool m_s3OutputFormatConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
