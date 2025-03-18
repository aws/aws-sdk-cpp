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
    AWS_BCMDATAEXPORTS_API S3Destination() = default;
    AWS_BCMDATAEXPORTS_API S3Destination(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API S3Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Amazon S3 bucket used as the destination of a data export
     * file.</p>
     */
    inline const Aws::String& GetS3Bucket() const { return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    template<typename S3BucketT = Aws::String>
    void SetS3Bucket(S3BucketT&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::forward<S3BucketT>(value); }
    template<typename S3BucketT = Aws::String>
    S3Destination& WithS3Bucket(S3BucketT&& value) { SetS3Bucket(std::forward<S3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output configuration for the data export.</p>
     */
    inline const S3OutputConfigurations& GetS3OutputConfigurations() const { return m_s3OutputConfigurations; }
    inline bool S3OutputConfigurationsHasBeenSet() const { return m_s3OutputConfigurationsHasBeenSet; }
    template<typename S3OutputConfigurationsT = S3OutputConfigurations>
    void SetS3OutputConfigurations(S3OutputConfigurationsT&& value) { m_s3OutputConfigurationsHasBeenSet = true; m_s3OutputConfigurations = std::forward<S3OutputConfigurationsT>(value); }
    template<typename S3OutputConfigurationsT = S3OutputConfigurations>
    S3Destination& WithS3OutputConfigurations(S3OutputConfigurationsT&& value) { SetS3OutputConfigurations(std::forward<S3OutputConfigurationsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 path prefix you want prepended to the name of your data export.</p>
     */
    inline const Aws::String& GetS3Prefix() const { return m_s3Prefix; }
    inline bool S3PrefixHasBeenSet() const { return m_s3PrefixHasBeenSet; }
    template<typename S3PrefixT = Aws::String>
    void SetS3Prefix(S3PrefixT&& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = std::forward<S3PrefixT>(value); }
    template<typename S3PrefixT = Aws::String>
    S3Destination& WithS3Prefix(S3PrefixT&& value) { SetS3Prefix(std::forward<S3PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 bucket Region.</p>
     */
    inline const Aws::String& GetS3Region() const { return m_s3Region; }
    inline bool S3RegionHasBeenSet() const { return m_s3RegionHasBeenSet; }
    template<typename S3RegionT = Aws::String>
    void SetS3Region(S3RegionT&& value) { m_s3RegionHasBeenSet = true; m_s3Region = std::forward<S3RegionT>(value); }
    template<typename S3RegionT = Aws::String>
    S3Destination& WithS3Region(S3RegionT&& value) { SetS3Region(std::forward<S3RegionT>(value)); return *this;}
    ///@}
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
