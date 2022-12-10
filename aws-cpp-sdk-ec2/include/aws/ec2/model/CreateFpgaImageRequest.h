/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/StorageLocation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateFpgaImageRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateFpgaImageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFpgaImage"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline CreateFpgaImageRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The location of the encrypted design checkpoint in Amazon S3. The input must
     * be a tarball.</p>
     */
    inline const StorageLocation& GetInputStorageLocation() const{ return m_inputStorageLocation; }

    /**
     * <p>The location of the encrypted design checkpoint in Amazon S3. The input must
     * be a tarball.</p>
     */
    inline bool InputStorageLocationHasBeenSet() const { return m_inputStorageLocationHasBeenSet; }

    /**
     * <p>The location of the encrypted design checkpoint in Amazon S3. The input must
     * be a tarball.</p>
     */
    inline void SetInputStorageLocation(const StorageLocation& value) { m_inputStorageLocationHasBeenSet = true; m_inputStorageLocation = value; }

    /**
     * <p>The location of the encrypted design checkpoint in Amazon S3. The input must
     * be a tarball.</p>
     */
    inline void SetInputStorageLocation(StorageLocation&& value) { m_inputStorageLocationHasBeenSet = true; m_inputStorageLocation = std::move(value); }

    /**
     * <p>The location of the encrypted design checkpoint in Amazon S3. The input must
     * be a tarball.</p>
     */
    inline CreateFpgaImageRequest& WithInputStorageLocation(const StorageLocation& value) { SetInputStorageLocation(value); return *this;}

    /**
     * <p>The location of the encrypted design checkpoint in Amazon S3. The input must
     * be a tarball.</p>
     */
    inline CreateFpgaImageRequest& WithInputStorageLocation(StorageLocation&& value) { SetInputStorageLocation(std::move(value)); return *this;}


    /**
     * <p>The location in Amazon S3 for the output logs.</p>
     */
    inline const StorageLocation& GetLogsStorageLocation() const{ return m_logsStorageLocation; }

    /**
     * <p>The location in Amazon S3 for the output logs.</p>
     */
    inline bool LogsStorageLocationHasBeenSet() const { return m_logsStorageLocationHasBeenSet; }

    /**
     * <p>The location in Amazon S3 for the output logs.</p>
     */
    inline void SetLogsStorageLocation(const StorageLocation& value) { m_logsStorageLocationHasBeenSet = true; m_logsStorageLocation = value; }

    /**
     * <p>The location in Amazon S3 for the output logs.</p>
     */
    inline void SetLogsStorageLocation(StorageLocation&& value) { m_logsStorageLocationHasBeenSet = true; m_logsStorageLocation = std::move(value); }

    /**
     * <p>The location in Amazon S3 for the output logs.</p>
     */
    inline CreateFpgaImageRequest& WithLogsStorageLocation(const StorageLocation& value) { SetLogsStorageLocation(value); return *this;}

    /**
     * <p>The location in Amazon S3 for the output logs.</p>
     */
    inline CreateFpgaImageRequest& WithLogsStorageLocation(StorageLocation&& value) { SetLogsStorageLocation(std::move(value)); return *this;}


    /**
     * <p>A description for the AFI.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the AFI.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the AFI.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the AFI.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the AFI.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the AFI.</p>
     */
    inline CreateFpgaImageRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the AFI.</p>
     */
    inline CreateFpgaImageRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the AFI.</p>
     */
    inline CreateFpgaImageRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A name for the AFI.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the AFI.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the AFI.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the AFI.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the AFI.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the AFI.</p>
     */
    inline CreateFpgaImageRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the AFI.</p>
     */
    inline CreateFpgaImageRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the AFI.</p>
     */
    inline CreateFpgaImageRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline CreateFpgaImageRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline CreateFpgaImageRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline CreateFpgaImageRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The tags to apply to the FPGA image during creation.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to apply to the FPGA image during creation.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to apply to the FPGA image during creation.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to apply to the FPGA image during creation.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to apply to the FPGA image during creation.</p>
     */
    inline CreateFpgaImageRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to apply to the FPGA image during creation.</p>
     */
    inline CreateFpgaImageRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the FPGA image during creation.</p>
     */
    inline CreateFpgaImageRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the FPGA image during creation.</p>
     */
    inline CreateFpgaImageRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    StorageLocation m_inputStorageLocation;
    bool m_inputStorageLocationHasBeenSet = false;

    StorageLocation m_logsStorageLocation;
    bool m_logsStorageLocationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
