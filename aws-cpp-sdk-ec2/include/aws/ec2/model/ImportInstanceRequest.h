/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ImportInstanceLaunchSpecification.h>
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
   * <p>Contains the parameters for ImportInstance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportInstanceRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ImportInstanceRequest : public EC2Request
  {
  public:
    ImportInstanceRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportInstance"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A description for the instance being imported.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the instance being imported.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the instance being imported.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the instance being imported.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the instance being imported.</p>
     */
    inline ImportInstanceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the instance being imported.</p>
     */
    inline ImportInstanceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the instance being imported.</p>
     */
    inline ImportInstanceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The disk image.</p>
     */
    inline const Aws::Vector<DiskImage>& GetDiskImages() const{ return m_diskImages; }

    /**
     * <p>The disk image.</p>
     */
    inline void SetDiskImages(const Aws::Vector<DiskImage>& value) { m_diskImagesHasBeenSet = true; m_diskImages = value; }

    /**
     * <p>The disk image.</p>
     */
    inline void SetDiskImages(Aws::Vector<DiskImage>&& value) { m_diskImagesHasBeenSet = true; m_diskImages = std::move(value); }

    /**
     * <p>The disk image.</p>
     */
    inline ImportInstanceRequest& WithDiskImages(const Aws::Vector<DiskImage>& value) { SetDiskImages(value); return *this;}

    /**
     * <p>The disk image.</p>
     */
    inline ImportInstanceRequest& WithDiskImages(Aws::Vector<DiskImage>&& value) { SetDiskImages(std::move(value)); return *this;}

    /**
     * <p>The disk image.</p>
     */
    inline ImportInstanceRequest& AddDiskImages(const DiskImage& value) { m_diskImagesHasBeenSet = true; m_diskImages.push_back(value); return *this; }

    /**
     * <p>The disk image.</p>
     */
    inline ImportInstanceRequest& AddDiskImages(DiskImage&& value) { m_diskImagesHasBeenSet = true; m_diskImages.push_back(std::move(value)); return *this; }


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline ImportInstanceRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The launch specification.</p>
     */
    inline const ImportInstanceLaunchSpecification& GetLaunchSpecification() const{ return m_launchSpecification; }

    /**
     * <p>The launch specification.</p>
     */
    inline void SetLaunchSpecification(const ImportInstanceLaunchSpecification& value) { m_launchSpecificationHasBeenSet = true; m_launchSpecification = value; }

    /**
     * <p>The launch specification.</p>
     */
    inline void SetLaunchSpecification(ImportInstanceLaunchSpecification&& value) { m_launchSpecificationHasBeenSet = true; m_launchSpecification = std::move(value); }

    /**
     * <p>The launch specification.</p>
     */
    inline ImportInstanceRequest& WithLaunchSpecification(const ImportInstanceLaunchSpecification& value) { SetLaunchSpecification(value); return *this;}

    /**
     * <p>The launch specification.</p>
     */
    inline ImportInstanceRequest& WithLaunchSpecification(ImportInstanceLaunchSpecification&& value) { SetLaunchSpecification(std::move(value)); return *this;}


    /**
     * <p>The instance operating system.</p>
     */
    inline const PlatformValues& GetPlatform() const{ return m_platform; }

    /**
     * <p>The instance operating system.</p>
     */
    inline void SetPlatform(const PlatformValues& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The instance operating system.</p>
     */
    inline void SetPlatform(PlatformValues&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The instance operating system.</p>
     */
    inline ImportInstanceRequest& WithPlatform(const PlatformValues& value) { SetPlatform(value); return *this;}

    /**
     * <p>The instance operating system.</p>
     */
    inline ImportInstanceRequest& WithPlatform(PlatformValues&& value) { SetPlatform(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<DiskImage> m_diskImages;
    bool m_diskImagesHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    ImportInstanceLaunchSpecification m_launchSpecification;
    bool m_launchSpecificationHasBeenSet;

    PlatformValues m_platform;
    bool m_platformHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
