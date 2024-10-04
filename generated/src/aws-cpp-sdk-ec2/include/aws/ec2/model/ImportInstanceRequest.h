/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ImportInstanceLaunchSpecification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/PlatformValues.h>
#include <aws/ec2/model/DiskImage.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ImportInstanceRequest : public EC2Request
  {
  public:
    AWS_EC2_API ImportInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportInstance"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ImportInstanceRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the instance being imported.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ImportInstanceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ImportInstanceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ImportInstanceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch specification.</p>
     */
    inline const ImportInstanceLaunchSpecification& GetLaunchSpecification() const{ return m_launchSpecification; }
    inline bool LaunchSpecificationHasBeenSet() const { return m_launchSpecificationHasBeenSet; }
    inline void SetLaunchSpecification(const ImportInstanceLaunchSpecification& value) { m_launchSpecificationHasBeenSet = true; m_launchSpecification = value; }
    inline void SetLaunchSpecification(ImportInstanceLaunchSpecification&& value) { m_launchSpecificationHasBeenSet = true; m_launchSpecification = std::move(value); }
    inline ImportInstanceRequest& WithLaunchSpecification(const ImportInstanceLaunchSpecification& value) { SetLaunchSpecification(value); return *this;}
    inline ImportInstanceRequest& WithLaunchSpecification(ImportInstanceLaunchSpecification&& value) { SetLaunchSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The disk image.</p>
     */
    inline const Aws::Vector<DiskImage>& GetDiskImages() const{ return m_diskImages; }
    inline bool DiskImagesHasBeenSet() const { return m_diskImagesHasBeenSet; }
    inline void SetDiskImages(const Aws::Vector<DiskImage>& value) { m_diskImagesHasBeenSet = true; m_diskImages = value; }
    inline void SetDiskImages(Aws::Vector<DiskImage>&& value) { m_diskImagesHasBeenSet = true; m_diskImages = std::move(value); }
    inline ImportInstanceRequest& WithDiskImages(const Aws::Vector<DiskImage>& value) { SetDiskImages(value); return *this;}
    inline ImportInstanceRequest& WithDiskImages(Aws::Vector<DiskImage>&& value) { SetDiskImages(std::move(value)); return *this;}
    inline ImportInstanceRequest& AddDiskImages(const DiskImage& value) { m_diskImagesHasBeenSet = true; m_diskImages.push_back(value); return *this; }
    inline ImportInstanceRequest& AddDiskImages(DiskImage&& value) { m_diskImagesHasBeenSet = true; m_diskImages.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The instance operating system.</p>
     */
    inline const PlatformValues& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const PlatformValues& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(PlatformValues&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline ImportInstanceRequest& WithPlatform(const PlatformValues& value) { SetPlatform(value); return *this;}
    inline ImportInstanceRequest& WithPlatform(PlatformValues&& value) { SetPlatform(std::move(value)); return *this;}
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ImportInstanceLaunchSpecification m_launchSpecification;
    bool m_launchSpecificationHasBeenSet = false;

    Aws::Vector<DiskImage> m_diskImages;
    bool m_diskImagesHasBeenSet = false;

    PlatformValues m_platform;
    bool m_platformHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
