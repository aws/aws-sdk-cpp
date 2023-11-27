/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-data-exports/model/S3OutputConfigurations.h>
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
namespace BCMDataExports
{
namespace Model
{

  /**
   * <p>Describes the destination Amazon Simple Storage Service (Amazon S3) bucket
   * name and object keys of a data exports file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-data-exports-2023-11-26/S3Destination">AWS
   * API Reference</a></p>
   */
  class S3Destination
  {
  public:
    AWS_BCMDATAEXPORTS_API S3Destination();
    AWS_BCMDATAEXPORTS_API S3Destination(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API S3Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Amazon S3 bucket used as the destination of a data export
     * file.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>The name of the Amazon S3 bucket used as the destination of a data export
     * file.</p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket used as the destination of a data export
     * file.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>The name of the Amazon S3 bucket used as the destination of a data export
     * file.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket used as the destination of a data export
     * file.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket used as the destination of a data export
     * file.</p>
     */
    inline S3Destination& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket used as the destination of a data export
     * file.</p>
     */
    inline S3Destination& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket used as the destination of a data export
     * file.</p>
     */
    inline S3Destination& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p>The output configuration for the data export.</p>
     */
    inline const S3OutputConfigurations& GetS3OutputConfigurations() const{ return m_s3OutputConfigurations; }

    /**
     * <p>The output configuration for the data export.</p>
     */
    inline bool S3OutputConfigurationsHasBeenSet() const { return m_s3OutputConfigurationsHasBeenSet; }

    /**
     * <p>The output configuration for the data export.</p>
     */
    inline void SetS3OutputConfigurations(const S3OutputConfigurations& value) { m_s3OutputConfigurationsHasBeenSet = true; m_s3OutputConfigurations = value; }

    /**
     * <p>The output configuration for the data export.</p>
     */
    inline void SetS3OutputConfigurations(S3OutputConfigurations&& value) { m_s3OutputConfigurationsHasBeenSet = true; m_s3OutputConfigurations = std::move(value); }

    /**
     * <p>The output configuration for the data export.</p>
     */
    inline S3Destination& WithS3OutputConfigurations(const S3OutputConfigurations& value) { SetS3OutputConfigurations(value); return *this;}

    /**
     * <p>The output configuration for the data export.</p>
     */
    inline S3Destination& WithS3OutputConfigurations(S3OutputConfigurations&& value) { SetS3OutputConfigurations(std::move(value)); return *this;}


    /**
     * <p>The S3 path prefix you want prepended to the name of your data export.</p>
     */
    inline const Aws::String& GetS3Prefix() const{ return m_s3Prefix; }

    /**
     * <p>The S3 path prefix you want prepended to the name of your data export.</p>
     */
    inline bool S3PrefixHasBeenSet() const { return m_s3PrefixHasBeenSet; }

    /**
     * <p>The S3 path prefix you want prepended to the name of your data export.</p>
     */
    inline void SetS3Prefix(const Aws::String& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = value; }

    /**
     * <p>The S3 path prefix you want prepended to the name of your data export.</p>
     */
    inline void SetS3Prefix(Aws::String&& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = std::move(value); }

    /**
     * <p>The S3 path prefix you want prepended to the name of your data export.</p>
     */
    inline void SetS3Prefix(const char* value) { m_s3PrefixHasBeenSet = true; m_s3Prefix.assign(value); }

    /**
     * <p>The S3 path prefix you want prepended to the name of your data export.</p>
     */
    inline S3Destination& WithS3Prefix(const Aws::String& value) { SetS3Prefix(value); return *this;}

    /**
     * <p>The S3 path prefix you want prepended to the name of your data export.</p>
     */
    inline S3Destination& WithS3Prefix(Aws::String&& value) { SetS3Prefix(std::move(value)); return *this;}

    /**
     * <p>The S3 path prefix you want prepended to the name of your data export.</p>
     */
    inline S3Destination& WithS3Prefix(const char* value) { SetS3Prefix(value); return *this;}


    /**
     * <p>The S3 bucket Region.</p>
     */
    inline const Aws::String& GetS3Region() const{ return m_s3Region; }

    /**
     * <p>The S3 bucket Region.</p>
     */
    inline bool S3RegionHasBeenSet() const { return m_s3RegionHasBeenSet; }

    /**
     * <p>The S3 bucket Region.</p>
     */
    inline void SetS3Region(const Aws::String& value) { m_s3RegionHasBeenSet = true; m_s3Region = value; }

    /**
     * <p>The S3 bucket Region.</p>
     */
    inline void SetS3Region(Aws::String&& value) { m_s3RegionHasBeenSet = true; m_s3Region = std::move(value); }

    /**
     * <p>The S3 bucket Region.</p>
     */
    inline void SetS3Region(const char* value) { m_s3RegionHasBeenSet = true; m_s3Region.assign(value); }

    /**
     * <p>The S3 bucket Region.</p>
     */
    inline S3Destination& WithS3Region(const Aws::String& value) { SetS3Region(value); return *this;}

    /**
     * <p>The S3 bucket Region.</p>
     */
    inline S3Destination& WithS3Region(Aws::String&& value) { SetS3Region(std::move(value)); return *this;}

    /**
     * <p>The S3 bucket Region.</p>
     */
    inline S3Destination& WithS3Region(const char* value) { SetS3Region(value); return *this;}

  private:

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    S3OutputConfigurations m_s3OutputConfigurations;
    bool m_s3OutputConfigurationsHasBeenSet = false;

    Aws::String m_s3Prefix;
    bool m_s3PrefixHasBeenSet = false;

    Aws::String m_s3Region;
    bool m_s3RegionHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
