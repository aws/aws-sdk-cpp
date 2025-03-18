/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ModifyInstanceCreditSpecificationRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyInstanceCreditSpecificationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyInstanceCreditSpecification"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the operation, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ModifyInstanceCreditSpecificationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    ModifyInstanceCreditSpecificationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the credit option for CPU usage.</p>
     */
    inline const Aws::Vector<InstanceCreditSpecificationRequest>& GetInstanceCreditSpecifications() const { return m_instanceCreditSpecifications; }
    inline bool InstanceCreditSpecificationsHasBeenSet() const { return m_instanceCreditSpecificationsHasBeenSet; }
    template<typename InstanceCreditSpecificationsT = Aws::Vector<InstanceCreditSpecificationRequest>>
    void SetInstanceCreditSpecifications(InstanceCreditSpecificationsT&& value) { m_instanceCreditSpecificationsHasBeenSet = true; m_instanceCreditSpecifications = std::forward<InstanceCreditSpecificationsT>(value); }
    template<typename InstanceCreditSpecificationsT = Aws::Vector<InstanceCreditSpecificationRequest>>
    ModifyInstanceCreditSpecificationRequest& WithInstanceCreditSpecifications(InstanceCreditSpecificationsT&& value) { SetInstanceCreditSpecifications(std::forward<InstanceCreditSpecificationsT>(value)); return *this;}
    template<typename InstanceCreditSpecificationsT = InstanceCreditSpecificationRequest>
    ModifyInstanceCreditSpecificationRequest& AddInstanceCreditSpecifications(InstanceCreditSpecificationsT&& value) { m_instanceCreditSpecificationsHasBeenSet = true; m_instanceCreditSpecifications.emplace_back(std::forward<InstanceCreditSpecificationsT>(value)); return *this; }
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<InstanceCreditSpecificationRequest> m_instanceCreditSpecifications;
    bool m_instanceCreditSpecificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
