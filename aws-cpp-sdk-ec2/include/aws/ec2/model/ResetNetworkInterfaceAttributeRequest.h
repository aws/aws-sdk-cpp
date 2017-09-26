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
   * <p>Contains the parameters for ResetNetworkInterfaceAttribute.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResetNetworkInterfaceAttributeRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ResetNetworkInterfaceAttributeRequest : public EC2Request
  {
  public:
    ResetNetworkInterfaceAttributeRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResetNetworkInterfaceAttribute"; }

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
    inline ResetNetworkInterfaceAttributeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline ResetNetworkInterfaceAttributeRequest& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline ResetNetworkInterfaceAttributeRequest& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline ResetNetworkInterfaceAttributeRequest& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p>The source/destination checking attribute. Resets the value to
     * <code>true</code>.</p>
     */
    inline const Aws::String& GetSourceDestCheck() const{ return m_sourceDestCheck; }

    /**
     * <p>The source/destination checking attribute. Resets the value to
     * <code>true</code>.</p>
     */
    inline void SetSourceDestCheck(const Aws::String& value) { m_sourceDestCheckHasBeenSet = true; m_sourceDestCheck = value; }

    /**
     * <p>The source/destination checking attribute. Resets the value to
     * <code>true</code>.</p>
     */
    inline void SetSourceDestCheck(Aws::String&& value) { m_sourceDestCheckHasBeenSet = true; m_sourceDestCheck = std::move(value); }

    /**
     * <p>The source/destination checking attribute. Resets the value to
     * <code>true</code>.</p>
     */
    inline void SetSourceDestCheck(const char* value) { m_sourceDestCheckHasBeenSet = true; m_sourceDestCheck.assign(value); }

    /**
     * <p>The source/destination checking attribute. Resets the value to
     * <code>true</code>.</p>
     */
    inline ResetNetworkInterfaceAttributeRequest& WithSourceDestCheck(const Aws::String& value) { SetSourceDestCheck(value); return *this;}

    /**
     * <p>The source/destination checking attribute. Resets the value to
     * <code>true</code>.</p>
     */
    inline ResetNetworkInterfaceAttributeRequest& WithSourceDestCheck(Aws::String&& value) { SetSourceDestCheck(std::move(value)); return *this;}

    /**
     * <p>The source/destination checking attribute. Resets the value to
     * <code>true</code>.</p>
     */
    inline ResetNetworkInterfaceAttributeRequest& WithSourceDestCheck(const char* value) { SetSourceDestCheck(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet;

    Aws::String m_sourceDestCheck;
    bool m_sourceDestCheckHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
