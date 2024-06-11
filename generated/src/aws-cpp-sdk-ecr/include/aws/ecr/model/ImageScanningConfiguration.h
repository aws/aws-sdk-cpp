/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>

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
namespace ECR
{
namespace Model
{

  /**
   * <p>The image scanning configuration for a repository.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ImageScanningConfiguration">AWS
   * API Reference</a></p>
   */
  class ImageScanningConfiguration
  {
  public:
    AWS_ECR_API ImageScanningConfiguration();
    AWS_ECR_API ImageScanningConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API ImageScanningConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The setting that determines whether images are scanned after being pushed to
     * a repository. If set to <code>true</code>, images will be scanned after being
     * pushed. If this parameter is not specified, it will default to
     * <code>false</code> and images will not be scanned unless a scan is manually
     * started with the <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/APIReference/API_StartImageScan.html">API_StartImageScan</a>
     * API.</p>
     */
    inline bool GetScanOnPush() const{ return m_scanOnPush; }
    inline bool ScanOnPushHasBeenSet() const { return m_scanOnPushHasBeenSet; }
    inline void SetScanOnPush(bool value) { m_scanOnPushHasBeenSet = true; m_scanOnPush = value; }
    inline ImageScanningConfiguration& WithScanOnPush(bool value) { SetScanOnPush(value); return *this;}
    ///@}
  private:

    bool m_scanOnPush;
    bool m_scanOnPushHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
