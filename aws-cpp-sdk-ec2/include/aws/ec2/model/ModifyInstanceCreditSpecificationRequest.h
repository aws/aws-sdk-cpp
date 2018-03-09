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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/InstanceCreditSpecificationRequest.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API ModifyInstanceCreditSpecificationRequest : public EC2Request
  {
  public:
    ModifyInstanceCreditSpecificationRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyInstanceCreditSpecification"; }

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
    inline ModifyInstanceCreditSpecificationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline ModifyInstanceCreditSpecificationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline ModifyInstanceCreditSpecificationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline ModifyInstanceCreditSpecificationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Information about the credit option for CPU usage.</p>
     */
    inline const Aws::Vector<InstanceCreditSpecificationRequest>& GetInstanceCreditSpecifications() const{ return m_instanceCreditSpecifications; }

    /**
     * <p>Information about the credit option for CPU usage.</p>
     */
    inline void SetInstanceCreditSpecifications(const Aws::Vector<InstanceCreditSpecificationRequest>& value) { m_instanceCreditSpecificationsHasBeenSet = true; m_instanceCreditSpecifications = value; }

    /**
     * <p>Information about the credit option for CPU usage.</p>
     */
    inline void SetInstanceCreditSpecifications(Aws::Vector<InstanceCreditSpecificationRequest>&& value) { m_instanceCreditSpecificationsHasBeenSet = true; m_instanceCreditSpecifications = std::move(value); }

    /**
     * <p>Information about the credit option for CPU usage.</p>
     */
    inline ModifyInstanceCreditSpecificationRequest& WithInstanceCreditSpecifications(const Aws::Vector<InstanceCreditSpecificationRequest>& value) { SetInstanceCreditSpecifications(value); return *this;}

    /**
     * <p>Information about the credit option for CPU usage.</p>
     */
    inline ModifyInstanceCreditSpecificationRequest& WithInstanceCreditSpecifications(Aws::Vector<InstanceCreditSpecificationRequest>&& value) { SetInstanceCreditSpecifications(std::move(value)); return *this;}

    /**
     * <p>Information about the credit option for CPU usage.</p>
     */
    inline ModifyInstanceCreditSpecificationRequest& AddInstanceCreditSpecifications(const InstanceCreditSpecificationRequest& value) { m_instanceCreditSpecificationsHasBeenSet = true; m_instanceCreditSpecifications.push_back(value); return *this; }

    /**
     * <p>Information about the credit option for CPU usage.</p>
     */
    inline ModifyInstanceCreditSpecificationRequest& AddInstanceCreditSpecifications(InstanceCreditSpecificationRequest&& value) { m_instanceCreditSpecificationsHasBeenSet = true; m_instanceCreditSpecifications.push_back(std::move(value)); return *this; }

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::Vector<InstanceCreditSpecificationRequest> m_instanceCreditSpecifications;
    bool m_instanceCreditSpecificationsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
