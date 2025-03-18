/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/PriceScheduleSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for CreateReservedInstancesListing.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateReservedInstancesListingRequest">AWS
   * API Reference</a></p>
   */
  class CreateReservedInstancesListingRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateReservedInstancesListingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReservedInstancesListing"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the active Standard Reserved Instance.</p>
     */
    inline const Aws::String& GetReservedInstancesId() const { return m_reservedInstancesId; }
    inline bool ReservedInstancesIdHasBeenSet() const { return m_reservedInstancesIdHasBeenSet; }
    template<typename ReservedInstancesIdT = Aws::String>
    void SetReservedInstancesId(ReservedInstancesIdT&& value) { m_reservedInstancesIdHasBeenSet = true; m_reservedInstancesId = std::forward<ReservedInstancesIdT>(value); }
    template<typename ReservedInstancesIdT = Aws::String>
    CreateReservedInstancesListingRequest& WithReservedInstancesId(ReservedInstancesIdT&& value) { SetReservedInstancesId(std::forward<ReservedInstancesIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances that are a part of a Reserved Instance account to be
     * listed in the Reserved Instance Marketplace. This number should be less than or
     * equal to the instance count associated with the Reserved Instance ID specified
     * in this call.</p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline CreateReservedInstancesListingRequest& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list specifying the price of the Standard Reserved Instance for each month
     * remaining in the Reserved Instance term.</p>
     */
    inline const Aws::Vector<PriceScheduleSpecification>& GetPriceSchedules() const { return m_priceSchedules; }
    inline bool PriceSchedulesHasBeenSet() const { return m_priceSchedulesHasBeenSet; }
    template<typename PriceSchedulesT = Aws::Vector<PriceScheduleSpecification>>
    void SetPriceSchedules(PriceSchedulesT&& value) { m_priceSchedulesHasBeenSet = true; m_priceSchedules = std::forward<PriceSchedulesT>(value); }
    template<typename PriceSchedulesT = Aws::Vector<PriceScheduleSpecification>>
    CreateReservedInstancesListingRequest& WithPriceSchedules(PriceSchedulesT&& value) { SetPriceSchedules(std::forward<PriceSchedulesT>(value)); return *this;}
    template<typename PriceSchedulesT = PriceScheduleSpecification>
    CreateReservedInstancesListingRequest& AddPriceSchedules(PriceSchedulesT&& value) { m_priceSchedulesHasBeenSet = true; m_priceSchedules.emplace_back(std::forward<PriceSchedulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of your
     * listings. This helps avoid duplicate listings. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateReservedInstancesListingRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reservedInstancesId;
    bool m_reservedInstancesIdHasBeenSet = false;

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;

    Aws::Vector<PriceScheduleSpecification> m_priceSchedules;
    bool m_priceSchedulesHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
