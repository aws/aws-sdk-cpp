/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/S3ManifestConfig.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>Specifies the manifest that you want DataSync to use and where it's hosted.
   * For more information and configuration examples, see <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/transferring-with-manifest.html">Specifying
   * what DataSync transfers by using a manifest</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/SourceManifestConfig">AWS
   * API Reference</a></p>
   */
  class SourceManifestConfig
  {
  public:
    AWS_DATASYNC_API SourceManifestConfig() = default;
    AWS_DATASYNC_API SourceManifestConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API SourceManifestConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the S3 bucket where you're hosting your manifest.</p>
     */
    inline const S3ManifestConfig& GetS3() const { return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    template<typename S3T = S3ManifestConfig>
    void SetS3(S3T&& value) { m_s3HasBeenSet = true; m_s3 = std::forward<S3T>(value); }
    template<typename S3T = S3ManifestConfig>
    SourceManifestConfig& WithS3(S3T&& value) { SetS3(std::forward<S3T>(value)); return *this;}
    ///@}
  private:

    S3ManifestConfig m_s3;
    bool m_s3HasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
