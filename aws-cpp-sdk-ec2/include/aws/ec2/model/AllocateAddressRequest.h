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
#include <aws/ec2/model/DomainType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for AllocateAddress.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AllocateAddressRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API AllocateAddressRequest : public EC2Request
  {
  public:
    AllocateAddressRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AllocateAddress"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline void SetDomain(DomainType&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>Set to <code>vpc</code> to allocate the address for use with instances in a
     * VPC.</p> <p>Default: The address is for use with instances in EC2-Classic.</p>
     */
    inline AllocateAddressRequest& WithDomain(const DomainType& value) { SetDomain(value); return *this;}

    /**
     * <p>Set to <code>vpc</code> to allocate the address for use with instances in a
     * VPC.</p> <p>Default: The address is for use with instances in EC2-Classic.</p>
     */
    inline AllocateAddressRequest& WithDomain(DomainType&& value) { SetDomain(std::move(value)); return *this;}


    /**
     * <p>[EC2-VPC] The Elastic IP address to recover.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }

    /**
     * <p>[EC2-VPC] The Elastic IP address to recover.</p>
     */
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>[EC2-VPC] The Elastic IP address to recover.</p>
     */
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    /**
     * <p>[EC2-VPC] The Elastic IP address to recover.</p>
     */
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }

    /**
     * <p>[EC2-VPC] The Elastic IP address to recover.</p>
     */
    inline AllocateAddressRequest& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    /**
     * <p>[EC2-VPC] The Elastic IP address to recover.</p>
     */
    inline AllocateAddressRequest& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}

    /**
     * <p>[EC2-VPC] The Elastic IP address to recover.</p>
     */
    inline AllocateAddressRequest& WithAddress(const char* value) { SetAddress(value); return *this;}


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

  private:

    DomainType m_domain;
    bool m_domainHasBeenSet;

    Aws::String m_address;
    bool m_addressHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
