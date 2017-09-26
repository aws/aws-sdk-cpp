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
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for ReleaseAddress.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReleaseAddressRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ReleaseAddressRequest : public EC2Request
  {
  public:
    ReleaseAddressRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReleaseAddress"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>[EC2-VPC] The allocation ID. Required for EC2-VPC.</p>
     */
    inline const Aws::String& GetAllocationId() const{ return m_allocationId; }

    /**
     * <p>[EC2-VPC] The allocation ID. Required for EC2-VPC.</p>
     */
    inline void SetAllocationId(const Aws::String& value) { m_allocationIdHasBeenSet = true; m_allocationId = value; }

    /**
     * <p>[EC2-VPC] The allocation ID. Required for EC2-VPC.</p>
     */
    inline void SetAllocationId(Aws::String&& value) { m_allocationIdHasBeenSet = true; m_allocationId = std::move(value); }

    /**
     * <p>[EC2-VPC] The allocation ID. Required for EC2-VPC.</p>
     */
    inline void SetAllocationId(const char* value) { m_allocationIdHasBeenSet = true; m_allocationId.assign(value); }

    /**
     * <p>[EC2-VPC] The allocation ID. Required for EC2-VPC.</p>
     */
    inline ReleaseAddressRequest& WithAllocationId(const Aws::String& value) { SetAllocationId(value); return *this;}

    /**
     * <p>[EC2-VPC] The allocation ID. Required for EC2-VPC.</p>
     */
    inline ReleaseAddressRequest& WithAllocationId(Aws::String&& value) { SetAllocationId(std::move(value)); return *this;}

    /**
     * <p>[EC2-VPC] The allocation ID. Required for EC2-VPC.</p>
     */
    inline ReleaseAddressRequest& WithAllocationId(const char* value) { SetAllocationId(value); return *this;}


    /**
     * <p>[EC2-Classic] The Elastic IP address. Required for EC2-Classic.</p>
     */
    inline const Aws::String& GetPublicIp() const{ return m_publicIp; }

    /**
     * <p>[EC2-Classic] The Elastic IP address. Required for EC2-Classic.</p>
     */
    inline void SetPublicIp(const Aws::String& value) { m_publicIpHasBeenSet = true; m_publicIp = value; }

    /**
     * <p>[EC2-Classic] The Elastic IP address. Required for EC2-Classic.</p>
     */
    inline void SetPublicIp(Aws::String&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::move(value); }

    /**
     * <p>[EC2-Classic] The Elastic IP address. Required for EC2-Classic.</p>
     */
    inline void SetPublicIp(const char* value) { m_publicIpHasBeenSet = true; m_publicIp.assign(value); }

    /**
     * <p>[EC2-Classic] The Elastic IP address. Required for EC2-Classic.</p>
     */
    inline ReleaseAddressRequest& WithPublicIp(const Aws::String& value) { SetPublicIp(value); return *this;}

    /**
     * <p>[EC2-Classic] The Elastic IP address. Required for EC2-Classic.</p>
     */
    inline ReleaseAddressRequest& WithPublicIp(Aws::String&& value) { SetPublicIp(std::move(value)); return *this;}

    /**
     * <p>[EC2-Classic] The Elastic IP address. Required for EC2-Classic.</p>
     */
    inline ReleaseAddressRequest& WithPublicIp(const char* value) { SetPublicIp(value); return *this;}


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
    inline ReleaseAddressRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_allocationId;
    bool m_allocationIdHasBeenSet;

    Aws::String m_publicIp;
    bool m_publicIpHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
