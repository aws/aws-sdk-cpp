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
   * <p>Contains the parameters for DisassociateAddress.</p>
   */
  class AWS_EC2_API DisassociateAddressRequest : public EC2Request
  {
  public:
    DisassociateAddressRequest();
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
    inline DisassociateAddressRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

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
    inline void SetPublicIp(Aws::String&& value) { m_publicIpHasBeenSet = true; m_publicIp = value; }

    /**
     * <p>[EC2-Classic] The Elastic IP address. Required for EC2-Classic.</p>
     */
    inline void SetPublicIp(const char* value) { m_publicIpHasBeenSet = true; m_publicIp.assign(value); }

    /**
     * <p>[EC2-Classic] The Elastic IP address. Required for EC2-Classic.</p>
     */
    inline DisassociateAddressRequest& WithPublicIp(const Aws::String& value) { SetPublicIp(value); return *this;}

    /**
     * <p>[EC2-Classic] The Elastic IP address. Required for EC2-Classic.</p>
     */
    inline DisassociateAddressRequest& WithPublicIp(Aws::String&& value) { SetPublicIp(value); return *this;}

    /**
     * <p>[EC2-Classic] The Elastic IP address. Required for EC2-Classic.</p>
     */
    inline DisassociateAddressRequest& WithPublicIp(const char* value) { SetPublicIp(value); return *this;}

    /**
     * <p>[EC2-VPC] The association ID. Required for EC2-VPC.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>[EC2-VPC] The association ID. Required for EC2-VPC.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>[EC2-VPC] The association ID. Required for EC2-VPC.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>[EC2-VPC] The association ID. Required for EC2-VPC.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>[EC2-VPC] The association ID. Required for EC2-VPC.</p>
     */
    inline DisassociateAddressRequest& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>[EC2-VPC] The association ID. Required for EC2-VPC.</p>
     */
    inline DisassociateAddressRequest& WithAssociationId(Aws::String&& value) { SetAssociationId(value); return *this;}

    /**
     * <p>[EC2-VPC] The association ID. Required for EC2-VPC.</p>
     */
    inline DisassociateAddressRequest& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_publicIp;
    bool m_publicIpHasBeenSet;
    Aws::String m_associationId;
    bool m_associationIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
