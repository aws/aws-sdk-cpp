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
#include <aws/ec2/model/StorageLocation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API CreateFpgaImageRequest : public EC2Request
  {
  public:
    CreateFpgaImageRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFpgaImage"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

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
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline CreateFpgaImageRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline CreateFpgaImageRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline CreateFpgaImageRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    StorageLocation m_inputStorageLocation;
    bool m_inputStorageLocationHasBeenSet;

    StorageLocation m_logsStorageLocation;
    bool m_logsStorageLocationHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
