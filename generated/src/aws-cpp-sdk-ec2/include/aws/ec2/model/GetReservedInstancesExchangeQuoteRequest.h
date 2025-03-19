/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TargetConfigurationRequest.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for GetReservedInstanceExchangeQuote.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetReservedInstancesExchangeQuoteRequest">AWS
   * API Reference</a></p>
   */
  class GetReservedInstancesExchangeQuoteRequest : public EC2Request
  {
  public:
    AWS_EC2_API GetReservedInstancesExchangeQuoteRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetReservedInstancesExchangeQuote"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline GetReservedInstancesExchangeQuoteRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the Convertible Reserved Instances to exchange.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReservedInstanceIds() const { return m_reservedInstanceIds; }
    inline bool ReservedInstanceIdsHasBeenSet() const { return m_reservedInstanceIdsHasBeenSet; }
    template<typename ReservedInstanceIdsT = Aws::Vector<Aws::String>>
    void SetReservedInstanceIds(ReservedInstanceIdsT&& value) { m_reservedInstanceIdsHasBeenSet = true; m_reservedInstanceIds = std::forward<ReservedInstanceIdsT>(value); }
    template<typename ReservedInstanceIdsT = Aws::Vector<Aws::String>>
    GetReservedInstancesExchangeQuoteRequest& WithReservedInstanceIds(ReservedInstanceIdsT&& value) { SetReservedInstanceIds(std::forward<ReservedInstanceIdsT>(value)); return *this;}
    template<typename ReservedInstanceIdsT = Aws::String>
    GetReservedInstancesExchangeQuoteRequest& AddReservedInstanceIds(ReservedInstanceIdsT&& value) { m_reservedInstanceIdsHasBeenSet = true; m_reservedInstanceIds.emplace_back(std::forward<ReservedInstanceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration of the target Convertible Reserved Instance to exchange for
     * your current Convertible Reserved Instances.</p>
     */
    inline const Aws::Vector<TargetConfigurationRequest>& GetTargetConfigurations() const { return m_targetConfigurations; }
    inline bool TargetConfigurationsHasBeenSet() const { return m_targetConfigurationsHasBeenSet; }
    template<typename TargetConfigurationsT = Aws::Vector<TargetConfigurationRequest>>
    void SetTargetConfigurations(TargetConfigurationsT&& value) { m_targetConfigurationsHasBeenSet = true; m_targetConfigurations = std::forward<TargetConfigurationsT>(value); }
    template<typename TargetConfigurationsT = Aws::Vector<TargetConfigurationRequest>>
    GetReservedInstancesExchangeQuoteRequest& WithTargetConfigurations(TargetConfigurationsT&& value) { SetTargetConfigurations(std::forward<TargetConfigurationsT>(value)); return *this;}
    template<typename TargetConfigurationsT = TargetConfigurationRequest>
    GetReservedInstancesExchangeQuoteRequest& AddTargetConfigurations(TargetConfigurationsT&& value) { m_targetConfigurationsHasBeenSet = true; m_targetConfigurations.emplace_back(std::forward<TargetConfigurationsT>(value)); return *this; }
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Aws::String> m_reservedInstanceIds;
    bool m_reservedInstanceIdsHasBeenSet = false;

    Aws::Vector<TargetConfigurationRequest> m_targetConfigurations;
    bool m_targetConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
