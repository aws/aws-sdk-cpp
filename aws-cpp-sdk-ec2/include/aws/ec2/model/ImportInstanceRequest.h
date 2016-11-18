/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/ImportInstanceLaunchSpecification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/PlatformValues.h>
#include <aws/ec2/model/DiskImage.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for ImportInstance.</p>
   */
  class AWS_EC2_API ImportInstanceRequest : public EC2Request
  {
  public:
    ImportInstanceRequest();
    Aws::String SerializePayload() const override;

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
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

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
    inline ImportInstanceRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the instance being imported.</p>
     */
    inline ImportInstanceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

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
    inline void SetLaunchSpecification(ImportInstanceLaunchSpecification&& value) { m_launchSpecificationHasBeenSet = true; m_launchSpecification = value; }

    /**
     * <p>The launch specification.</p>
     */
    inline ImportInstanceRequest& WithLaunchSpecification(const ImportInstanceLaunchSpecification& value) { SetLaunchSpecification(value); return *this;}

    /**
     * <p>The launch specification.</p>
     */
    inline ImportInstanceRequest& WithLaunchSpecification(ImportInstanceLaunchSpecification&& value) { SetLaunchSpecification(value); return *this;}

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
    inline void SetDiskImages(Aws::Vector<DiskImage>&& value) { m_diskImagesHasBeenSet = true; m_diskImages = value; }

    /**
     * <p>The disk image.</p>
     */
    inline ImportInstanceRequest& WithDiskImages(const Aws::Vector<DiskImage>& value) { SetDiskImages(value); return *this;}

    /**
     * <p>The disk image.</p>
     */
    inline ImportInstanceRequest& WithDiskImages(Aws::Vector<DiskImage>&& value) { SetDiskImages(value); return *this;}

    /**
     * <p>The disk image.</p>
     */
    inline ImportInstanceRequest& AddDiskImages(const DiskImage& value) { m_diskImagesHasBeenSet = true; m_diskImages.push_back(value); return *this; }

    /**
     * <p>The disk image.</p>
     */
    inline ImportInstanceRequest& AddDiskImages(DiskImage&& value) { m_diskImagesHasBeenSet = true; m_diskImages.push_back(value); return *this; }

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
    inline void SetPlatform(PlatformValues&& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The instance operating system.</p>
     */
    inline ImportInstanceRequest& WithPlatform(const PlatformValues& value) { SetPlatform(value); return *this;}

    /**
     * <p>The instance operating system.</p>
     */
    inline ImportInstanceRequest& WithPlatform(PlatformValues&& value) { SetPlatform(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    ImportInstanceLaunchSpecification m_launchSpecification;
    bool m_launchSpecificationHasBeenSet;
    Aws::Vector<DiskImage> m_diskImages;
    bool m_diskImagesHasBeenSet;
    PlatformValues m_platform;
    bool m_platformHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
