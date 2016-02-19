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

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API CopyImageRequest : public EC2Request
  {
  public:
    CopyImageRequest();
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
    inline CopyImageRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>The name of the region that contains the AMI to copy.</p>
     */
    inline const Aws::String& GetSourceRegion() const{ return m_sourceRegion; }

    /**
     * <p>The name of the region that contains the AMI to copy.</p>
     */
    inline void SetSourceRegion(const Aws::String& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = value; }

    /**
     * <p>The name of the region that contains the AMI to copy.</p>
     */
    inline void SetSourceRegion(Aws::String&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = value; }

    /**
     * <p>The name of the region that contains the AMI to copy.</p>
     */
    inline void SetSourceRegion(const char* value) { m_sourceRegionHasBeenSet = true; m_sourceRegion.assign(value); }

    /**
     * <p>The name of the region that contains the AMI to copy.</p>
     */
    inline CopyImageRequest& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}

    /**
     * <p>The name of the region that contains the AMI to copy.</p>
     */
    inline CopyImageRequest& WithSourceRegion(Aws::String&& value) { SetSourceRegion(value); return *this;}

    /**
     * <p>The name of the region that contains the AMI to copy.</p>
     */
    inline CopyImageRequest& WithSourceRegion(const char* value) { SetSourceRegion(value); return *this;}

    /**
     * <p>The ID of the AMI to copy.</p>
     */
    inline const Aws::String& GetSourceImageId() const{ return m_sourceImageId; }

    /**
     * <p>The ID of the AMI to copy.</p>
     */
    inline void SetSourceImageId(const Aws::String& value) { m_sourceImageIdHasBeenSet = true; m_sourceImageId = value; }

    /**
     * <p>The ID of the AMI to copy.</p>
     */
    inline void SetSourceImageId(Aws::String&& value) { m_sourceImageIdHasBeenSet = true; m_sourceImageId = value; }

    /**
     * <p>The ID of the AMI to copy.</p>
     */
    inline void SetSourceImageId(const char* value) { m_sourceImageIdHasBeenSet = true; m_sourceImageId.assign(value); }

    /**
     * <p>The ID of the AMI to copy.</p>
     */
    inline CopyImageRequest& WithSourceImageId(const Aws::String& value) { SetSourceImageId(value); return *this;}

    /**
     * <p>The ID of the AMI to copy.</p>
     */
    inline CopyImageRequest& WithSourceImageId(Aws::String&& value) { SetSourceImageId(value); return *this;}

    /**
     * <p>The ID of the AMI to copy.</p>
     */
    inline CopyImageRequest& WithSourceImageId(const char* value) { SetSourceImageId(value); return *this;}

    /**
     * <p>The name of the new AMI in the destination region.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the new AMI in the destination region.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the new AMI in the destination region.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the new AMI in the destination region.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the new AMI in the destination region.</p>
     */
    inline CopyImageRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the new AMI in the destination region.</p>
     */
    inline CopyImageRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the new AMI in the destination region.</p>
     */
    inline CopyImageRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>A description for the new AMI in the destination region.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the new AMI in the destination region.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the new AMI in the destination region.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the new AMI in the destination region.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the new AMI in the destination region.</p>
     */
    inline CopyImageRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the new AMI in the destination region.</p>
     */
    inline CopyImageRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the new AMI in the destination region.</p>
     */
    inline CopyImageRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline CopyImageRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline CopyImageRequest& WithClientToken(Aws::String&& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide</i>.</p>
     */
    inline CopyImageRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet;
    Aws::String m_sourceImageId;
    bool m_sourceImageIdHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
