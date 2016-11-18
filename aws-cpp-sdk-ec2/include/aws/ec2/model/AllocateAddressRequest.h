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
#include <aws/ec2/model/DomainType.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for AllocateAddress.</p>
   */
  class AWS_EC2_API AllocateAddressRequest : public EC2Request
  {
  public:
    AllocateAddressRequest();
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
    inline AllocateAddressRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>Set to <code>vpc</code> to allocate the address for use with instances in a
     * VPC.</p> <p>Default: The address is for use with instances in EC2-Classic.</p>
     */
    inline const DomainType& GetDomain() const{ return m_domain; }

    /**
     * <p>Set to <code>vpc</code> to allocate the address for use with instances in a
     * VPC.</p> <p>Default: The address is for use with instances in EC2-Classic.</p>
     */
    inline void SetDomain(const DomainType& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>Set to <code>vpc</code> to allocate the address for use with instances in a
     * VPC.</p> <p>Default: The address is for use with instances in EC2-Classic.</p>
     */
    inline void SetDomain(DomainType&& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>Set to <code>vpc</code> to allocate the address for use with instances in a
     * VPC.</p> <p>Default: The address is for use with instances in EC2-Classic.</p>
     */
    inline AllocateAddressRequest& WithDomain(const DomainType& value) { SetDomain(value); return *this;}

    /**
     * <p>Set to <code>vpc</code> to allocate the address for use with instances in a
     * VPC.</p> <p>Default: The address is for use with instances in EC2-Classic.</p>
     */
    inline AllocateAddressRequest& WithDomain(DomainType&& value) { SetDomain(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    DomainType m_domain;
    bool m_domainHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
