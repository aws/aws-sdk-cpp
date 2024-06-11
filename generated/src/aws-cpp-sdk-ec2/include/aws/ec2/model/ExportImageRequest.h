/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/DiskImageFormat.h>
#include <aws/ec2/model/ExportTaskS3LocationRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ExportImageRequest : public EC2Request
  {
  public:
    AWS_EC2_API ExportImageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExportImage"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Token to enable idempotency for export image requests.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline ExportImageRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline ExportImageRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline ExportImageRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the image being exported. The maximum length is 255
     * characters.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ExportImageRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ExportImageRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ExportImageRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The disk image format.</p>
     */
    inline const DiskImageFormat& GetDiskImageFormat() const{ return m_diskImageFormat; }
    inline bool DiskImageFormatHasBeenSet() const { return m_diskImageFormatHasBeenSet; }
    inline void SetDiskImageFormat(const DiskImageFormat& value) { m_diskImageFormatHasBeenSet = true; m_diskImageFormat = value; }
    inline void SetDiskImageFormat(DiskImageFormat&& value) { m_diskImageFormatHasBeenSet = true; m_diskImageFormat = std::move(value); }
    inline ExportImageRequest& WithDiskImageFormat(const DiskImageFormat& value) { SetDiskImageFormat(value); return *this;}
    inline ExportImageRequest& WithDiskImageFormat(DiskImageFormat&& value) { SetDiskImageFormat(std::move(value)); return *this;}
    ///@}

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
    inline ExportImageRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the image.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }
    inline ExportImageRequest& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}
    inline ExportImageRequest& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}
    inline ExportImageRequest& WithImageId(const char* value) { SetImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket for the destination image. The destination bucket must
     * exist.</p>
     */
    inline const ExportTaskS3LocationRequest& GetS3ExportLocation() const{ return m_s3ExportLocation; }
    inline bool S3ExportLocationHasBeenSet() const { return m_s3ExportLocationHasBeenSet; }
    inline void SetS3ExportLocation(const ExportTaskS3LocationRequest& value) { m_s3ExportLocationHasBeenSet = true; m_s3ExportLocation = value; }
    inline void SetS3ExportLocation(ExportTaskS3LocationRequest&& value) { m_s3ExportLocationHasBeenSet = true; m_s3ExportLocation = std::move(value); }
    inline ExportImageRequest& WithS3ExportLocation(const ExportTaskS3LocationRequest& value) { SetS3ExportLocation(value); return *this;}
    inline ExportImageRequest& WithS3ExportLocation(ExportTaskS3LocationRequest&& value) { SetS3ExportLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the role that grants VM Import/Export permission to export images
     * to your Amazon S3 bucket. If this parameter is not specified, the default role
     * is named 'vmimport'.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }
    inline ExportImageRequest& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}
    inline ExportImageRequest& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}
    inline ExportImageRequest& WithRoleName(const char* value) { SetRoleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the export image task during creation.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }
    inline ExportImageRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}
    inline ExportImageRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}
    inline ExportImageRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }
    inline ExportImageRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DiskImageFormat m_diskImageFormat;
    bool m_diskImageFormatHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    ExportTaskS3LocationRequest m_s3ExportLocation;
    bool m_s3ExportLocationHasBeenSet = false;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
