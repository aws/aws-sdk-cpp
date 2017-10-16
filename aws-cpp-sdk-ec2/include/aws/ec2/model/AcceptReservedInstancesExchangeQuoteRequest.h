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
   * <p>Contains the parameters for accepting the quote.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AcceptReservedInstancesExchangeQuoteRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API AcceptReservedInstancesExchangeQuoteRequest : public EC2Request
  {
  public:
    AcceptReservedInstancesExchangeQuoteRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AcceptReservedInstancesExchangeQuote"; }

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
    inline AcceptReservedInstancesExchangeQuoteRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The IDs of the Convertible Reserved Instances to exchange for another
     * Convertible Reserved Instance of the same or higher value.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReservedInstanceIds() const{ return m_reservedInstanceIds; }

    /**
     * <p>The IDs of the Convertible Reserved Instances to exchange for another
     * Convertible Reserved Instance of the same or higher value.</p>
     */
    inline void SetReservedInstanceIds(const Aws::Vector<Aws::String>& value) { m_reservedInstanceIdsHasBeenSet = true; m_reservedInstanceIds = value; }

    /**
     * <p>The IDs of the Convertible Reserved Instances to exchange for another
     * Convertible Reserved Instance of the same or higher value.</p>
     */
    inline void SetReservedInstanceIds(Aws::Vector<Aws::String>&& value) { m_reservedInstanceIdsHasBeenSet = true; m_reservedInstanceIds = std::move(value); }

    /**
     * <p>The IDs of the Convertible Reserved Instances to exchange for another
     * Convertible Reserved Instance of the same or higher value.</p>
     */
    inline AcceptReservedInstancesExchangeQuoteRequest& WithReservedInstanceIds(const Aws::Vector<Aws::String>& value) { SetReservedInstanceIds(value); return *this;}

    /**
     * <p>The IDs of the Convertible Reserved Instances to exchange for another
     * Convertible Reserved Instance of the same or higher value.</p>
     */
    inline AcceptReservedInstancesExchangeQuoteRequest& WithReservedInstanceIds(Aws::Vector<Aws::String>&& value) { SetReservedInstanceIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Convertible Reserved Instances to exchange for another
     * Convertible Reserved Instance of the same or higher value.</p>
     */
    inline AcceptReservedInstancesExchangeQuoteRequest& AddReservedInstanceIds(const Aws::String& value) { m_reservedInstanceIdsHasBeenSet = true; m_reservedInstanceIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the Convertible Reserved Instances to exchange for another
     * Convertible Reserved Instance of the same or higher value.</p>
     */
    inline AcceptReservedInstancesExchangeQuoteRequest& AddReservedInstanceIds(Aws::String&& value) { m_reservedInstanceIdsHasBeenSet = true; m_reservedInstanceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the Convertible Reserved Instances to exchange for another
     * Convertible Reserved Instance of the same or higher value.</p>
     */
    inline AcceptReservedInstancesExchangeQuoteRequest& AddReservedInstanceIds(const char* value) { m_reservedInstanceIdsHasBeenSet = true; m_reservedInstanceIds.push_back(value); return *this; }


    /**
     * <p>The configuration of the target Convertible Reserved Instance to exchange for
     * your current Convertible Reserved Instances.</p>
     */
    inline const Aws::Vector<TargetConfigurationRequest>& GetTargetConfigurations() const{ return m_targetConfigurations; }

    /**
     * <p>The configuration of the target Convertible Reserved Instance to exchange for
     * your current Convertible Reserved Instances.</p>
     */
    inline void SetTargetConfigurations(const Aws::Vector<TargetConfigurationRequest>& value) { m_targetConfigurationsHasBeenSet = true; m_targetConfigurations = value; }

    /**
     * <p>The configuration of the target Convertible Reserved Instance to exchange for
     * your current Convertible Reserved Instances.</p>
     */
    inline void SetTargetConfigurations(Aws::Vector<TargetConfigurationRequest>&& value) { m_targetConfigurationsHasBeenSet = true; m_targetConfigurations = std::move(value); }

    /**
     * <p>The configuration of the target Convertible Reserved Instance to exchange for
     * your current Convertible Reserved Instances.</p>
     */
    inline AcceptReservedInstancesExchangeQuoteRequest& WithTargetConfigurations(const Aws::Vector<TargetConfigurationRequest>& value) { SetTargetConfigurations(value); return *this;}

    /**
     * <p>The configuration of the target Convertible Reserved Instance to exchange for
     * your current Convertible Reserved Instances.</p>
     */
    inline AcceptReservedInstancesExchangeQuoteRequest& WithTargetConfigurations(Aws::Vector<TargetConfigurationRequest>&& value) { SetTargetConfigurations(std::move(value)); return *this;}

    /**
     * <p>The configuration of the target Convertible Reserved Instance to exchange for
     * your current Convertible Reserved Instances.</p>
     */
    inline AcceptReservedInstancesExchangeQuoteRequest& AddTargetConfigurations(const TargetConfigurationRequest& value) { m_targetConfigurationsHasBeenSet = true; m_targetConfigurations.push_back(value); return *this; }

    /**
     * <p>The configuration of the target Convertible Reserved Instance to exchange for
     * your current Convertible Reserved Instances.</p>
     */
    inline AcceptReservedInstancesExchangeQuoteRequest& AddTargetConfigurations(TargetConfigurationRequest&& value) { m_targetConfigurationsHasBeenSet = true; m_targetConfigurations.push_back(std::move(value)); return *this; }

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::Vector<Aws::String> m_reservedInstanceIds;
    bool m_reservedInstanceIdsHasBeenSet;

    Aws::Vector<TargetConfigurationRequest> m_targetConfigurations;
    bool m_targetConfigurationsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
