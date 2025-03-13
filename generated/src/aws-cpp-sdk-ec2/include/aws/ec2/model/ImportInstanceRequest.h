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
    AWS_EC2_API ImportInstanceRequest() = default;

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
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ImportInstanceRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the instance being imported.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ImportInstanceRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch specification.</p>
     */
    inline const ImportInstanceLaunchSpecification& GetLaunchSpecification() const { return m_launchSpecification; }
    inline bool LaunchSpecificationHasBeenSet() const { return m_launchSpecificationHasBeenSet; }
    template<typename LaunchSpecificationT = ImportInstanceLaunchSpecification>
    void SetLaunchSpecification(LaunchSpecificationT&& value) { m_launchSpecificationHasBeenSet = true; m_launchSpecification = std::forward<LaunchSpecificationT>(value); }
    template<typename LaunchSpecificationT = ImportInstanceLaunchSpecification>
    ImportInstanceRequest& WithLaunchSpecification(LaunchSpecificationT&& value) { SetLaunchSpecification(std::forward<LaunchSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The disk image.</p>
     */
    inline const Aws::Vector<DiskImage>& GetDiskImages() const { return m_diskImages; }
    inline bool DiskImagesHasBeenSet() const { return m_diskImagesHasBeenSet; }
    template<typename DiskImagesT = Aws::Vector<DiskImage>>
    void SetDiskImages(DiskImagesT&& value) { m_diskImagesHasBeenSet = true; m_diskImages = std::forward<DiskImagesT>(value); }
    template<typename DiskImagesT = Aws::Vector<DiskImage>>
    ImportInstanceRequest& WithDiskImages(DiskImagesT&& value) { SetDiskImages(std::forward<DiskImagesT>(value)); return *this;}
    template<typename DiskImagesT = DiskImage>
    ImportInstanceRequest& AddDiskImages(DiskImagesT&& value) { m_diskImagesHasBeenSet = true; m_diskImages.emplace_back(std::forward<DiskImagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The instance operating system.</p>
     */
    inline PlatformValues GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(PlatformValues value) { m_platformHasBeenSet = true; m_platform = value; }
    inline ImportInstanceRequest& WithPlatform(PlatformValues value) { SetPlatform(value); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ImportInstanceLaunchSpecification m_launchSpecification;
    bool m_launchSpecificationHasBeenSet = false;

    Aws::Vector<DiskImage> m_diskImages;
    bool m_diskImagesHasBeenSet = false;

    PlatformValues m_platform{PlatformValues::NOT_SET};
    bool m_platformHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
