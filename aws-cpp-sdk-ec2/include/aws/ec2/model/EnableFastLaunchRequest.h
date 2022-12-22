/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/FastLaunchSnapshotConfigurationRequest.h>
#include <aws/ec2/model/FastLaunchLaunchTemplateSpecificationRequest.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class EnableFastLaunchRequest : public EC2Request
  {
  public:
    AWS_EC2_API EnableFastLaunchRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableFastLaunch"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the image for which you’re enabling faster launching.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The ID of the image for which you’re enabling faster launching.</p>
     */
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }

    /**
     * <p>The ID of the image for which you’re enabling faster launching.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The ID of the image for which you’re enabling faster launching.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>The ID of the image for which you’re enabling faster launching.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>The ID of the image for which you’re enabling faster launching.</p>
     */
    inline EnableFastLaunchRequest& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The ID of the image for which you’re enabling faster launching.</p>
     */
    inline EnableFastLaunchRequest& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the image for which you’re enabling faster launching.</p>
     */
    inline EnableFastLaunchRequest& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>The type of resource to use for pre-provisioning the Windows AMI for faster
     * launching. Supported values include: <code>snapshot</code>, which is the default
     * value.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource to use for pre-provisioning the Windows AMI for faster
     * launching. Supported values include: <code>snapshot</code>, which is the default
     * value.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource to use for pre-provisioning the Windows AMI for faster
     * launching. Supported values include: <code>snapshot</code>, which is the default
     * value.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource to use for pre-provisioning the Windows AMI for faster
     * launching. Supported values include: <code>snapshot</code>, which is the default
     * value.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource to use for pre-provisioning the Windows AMI for faster
     * launching. Supported values include: <code>snapshot</code>, which is the default
     * value.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of resource to use for pre-provisioning the Windows AMI for faster
     * launching. Supported values include: <code>snapshot</code>, which is the default
     * value.</p>
     */
    inline EnableFastLaunchRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource to use for pre-provisioning the Windows AMI for faster
     * launching. Supported values include: <code>snapshot</code>, which is the default
     * value.</p>
     */
    inline EnableFastLaunchRequest& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of resource to use for pre-provisioning the Windows AMI for faster
     * launching. Supported values include: <code>snapshot</code>, which is the default
     * value.</p>
     */
    inline EnableFastLaunchRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>Configuration settings for creating and managing the snapshots that are used
     * for pre-provisioning the Windows AMI for faster launching. The associated
     * <code>ResourceType</code> must be <code>snapshot</code>.</p>
     */
    inline const FastLaunchSnapshotConfigurationRequest& GetSnapshotConfiguration() const{ return m_snapshotConfiguration; }

    /**
     * <p>Configuration settings for creating and managing the snapshots that are used
     * for pre-provisioning the Windows AMI for faster launching. The associated
     * <code>ResourceType</code> must be <code>snapshot</code>.</p>
     */
    inline bool SnapshotConfigurationHasBeenSet() const { return m_snapshotConfigurationHasBeenSet; }

    /**
     * <p>Configuration settings for creating and managing the snapshots that are used
     * for pre-provisioning the Windows AMI for faster launching. The associated
     * <code>ResourceType</code> must be <code>snapshot</code>.</p>
     */
    inline void SetSnapshotConfiguration(const FastLaunchSnapshotConfigurationRequest& value) { m_snapshotConfigurationHasBeenSet = true; m_snapshotConfiguration = value; }

    /**
     * <p>Configuration settings for creating and managing the snapshots that are used
     * for pre-provisioning the Windows AMI for faster launching. The associated
     * <code>ResourceType</code> must be <code>snapshot</code>.</p>
     */
    inline void SetSnapshotConfiguration(FastLaunchSnapshotConfigurationRequest&& value) { m_snapshotConfigurationHasBeenSet = true; m_snapshotConfiguration = std::move(value); }

    /**
     * <p>Configuration settings for creating and managing the snapshots that are used
     * for pre-provisioning the Windows AMI for faster launching. The associated
     * <code>ResourceType</code> must be <code>snapshot</code>.</p>
     */
    inline EnableFastLaunchRequest& WithSnapshotConfiguration(const FastLaunchSnapshotConfigurationRequest& value) { SetSnapshotConfiguration(value); return *this;}

    /**
     * <p>Configuration settings for creating and managing the snapshots that are used
     * for pre-provisioning the Windows AMI for faster launching. The associated
     * <code>ResourceType</code> must be <code>snapshot</code>.</p>
     */
    inline EnableFastLaunchRequest& WithSnapshotConfiguration(FastLaunchSnapshotConfigurationRequest&& value) { SetSnapshotConfiguration(std::move(value)); return *this;}


    /**
     * <p>The launch template to use when launching Windows instances from
     * pre-provisioned snapshots. Launch template parameters can include either the
     * name or ID of the launch template, but not both.</p>
     */
    inline const FastLaunchLaunchTemplateSpecificationRequest& GetLaunchTemplate() const{ return m_launchTemplate; }

    /**
     * <p>The launch template to use when launching Windows instances from
     * pre-provisioned snapshots. Launch template parameters can include either the
     * name or ID of the launch template, but not both.</p>
     */
    inline bool LaunchTemplateHasBeenSet() const { return m_launchTemplateHasBeenSet; }

    /**
     * <p>The launch template to use when launching Windows instances from
     * pre-provisioned snapshots. Launch template parameters can include either the
     * name or ID of the launch template, but not both.</p>
     */
    inline void SetLaunchTemplate(const FastLaunchLaunchTemplateSpecificationRequest& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = value; }

    /**
     * <p>The launch template to use when launching Windows instances from
     * pre-provisioned snapshots. Launch template parameters can include either the
     * name or ID of the launch template, but not both.</p>
     */
    inline void SetLaunchTemplate(FastLaunchLaunchTemplateSpecificationRequest&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::move(value); }

    /**
     * <p>The launch template to use when launching Windows instances from
     * pre-provisioned snapshots. Launch template parameters can include either the
     * name or ID of the launch template, but not both.</p>
     */
    inline EnableFastLaunchRequest& WithLaunchTemplate(const FastLaunchLaunchTemplateSpecificationRequest& value) { SetLaunchTemplate(value); return *this;}

    /**
     * <p>The launch template to use when launching Windows instances from
     * pre-provisioned snapshots. Launch template parameters can include either the
     * name or ID of the launch template, but not both.</p>
     */
    inline EnableFastLaunchRequest& WithLaunchTemplate(FastLaunchLaunchTemplateSpecificationRequest&& value) { SetLaunchTemplate(std::move(value)); return *this;}


    /**
     * <p>The maximum number of parallel instances to launch for creating resources.
     * Value must be <code>6</code> or greater. </p>
     */
    inline int GetMaxParallelLaunches() const{ return m_maxParallelLaunches; }

    /**
     * <p>The maximum number of parallel instances to launch for creating resources.
     * Value must be <code>6</code> or greater. </p>
     */
    inline bool MaxParallelLaunchesHasBeenSet() const { return m_maxParallelLaunchesHasBeenSet; }

    /**
     * <p>The maximum number of parallel instances to launch for creating resources.
     * Value must be <code>6</code> or greater. </p>
     */
    inline void SetMaxParallelLaunches(int value) { m_maxParallelLaunchesHasBeenSet = true; m_maxParallelLaunches = value; }

    /**
     * <p>The maximum number of parallel instances to launch for creating resources.
     * Value must be <code>6</code> or greater. </p>
     */
    inline EnableFastLaunchRequest& WithMaxParallelLaunches(int value) { SetMaxParallelLaunches(value); return *this;}


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
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

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
    inline EnableFastLaunchRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    FastLaunchSnapshotConfigurationRequest m_snapshotConfiguration;
    bool m_snapshotConfigurationHasBeenSet = false;

    FastLaunchLaunchTemplateSpecificationRequest m_launchTemplate;
    bool m_launchTemplateHasBeenSet = false;

    int m_maxParallelLaunches;
    bool m_maxParallelLaunchesHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
