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
    AWS_EC2_API CreateReservedInstancesListingRequest();

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
    inline const Aws::String& GetReservedInstancesId() const{ return m_reservedInstancesId; }
    inline bool ReservedInstancesIdHasBeenSet() const { return m_reservedInstancesIdHasBeenSet; }
    inline void SetReservedInstancesId(const Aws::String& value) { m_reservedInstancesIdHasBeenSet = true; m_reservedInstancesId = value; }
    inline void SetReservedInstancesId(Aws::String&& value) { m_reservedInstancesIdHasBeenSet = true; m_reservedInstancesId = std::move(value); }
    inline void SetReservedInstancesId(const char* value) { m_reservedInstancesIdHasBeenSet = true; m_reservedInstancesId.assign(value); }
    inline CreateReservedInstancesListingRequest& WithReservedInstancesId(const Aws::String& value) { SetReservedInstancesId(value); return *this;}
    inline CreateReservedInstancesListingRequest& WithReservedInstancesId(Aws::String&& value) { SetReservedInstancesId(std::move(value)); return *this;}
    inline CreateReservedInstancesListingRequest& WithReservedInstancesId(const char* value) { SetReservedInstancesId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances that are a part of a Reserved Instance account to be
     * listed in the Reserved Instance Marketplace. This number should be less than or
     * equal to the instance count associated with the Reserved Instance ID specified
     * in this call.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline CreateReservedInstancesListingRequest& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list specifying the price of the Standard Reserved Instance for each month
     * remaining in the Reserved Instance term.</p>
     */
    inline const Aws::Vector<PriceScheduleSpecification>& GetPriceSchedules() const{ return m_priceSchedules; }
    inline bool PriceSchedulesHasBeenSet() const { return m_priceSchedulesHasBeenSet; }
    inline void SetPriceSchedules(const Aws::Vector<PriceScheduleSpecification>& value) { m_priceSchedulesHasBeenSet = true; m_priceSchedules = value; }
    inline void SetPriceSchedules(Aws::Vector<PriceScheduleSpecification>&& value) { m_priceSchedulesHasBeenSet = true; m_priceSchedules = std::move(value); }
    inline CreateReservedInstancesListingRequest& WithPriceSchedules(const Aws::Vector<PriceScheduleSpecification>& value) { SetPriceSchedules(value); return *this;}
    inline CreateReservedInstancesListingRequest& WithPriceSchedules(Aws::Vector<PriceScheduleSpecification>&& value) { SetPriceSchedules(std::move(value)); return *this;}
    inline CreateReservedInstancesListingRequest& AddPriceSchedules(const PriceScheduleSpecification& value) { m_priceSchedulesHasBeenSet = true; m_priceSchedules.push_back(value); return *this; }
    inline CreateReservedInstancesListingRequest& AddPriceSchedules(PriceScheduleSpecification&& value) { m_priceSchedulesHasBeenSet = true; m_priceSchedules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of your
     * listings. This helps avoid duplicate listings. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateReservedInstancesListingRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateReservedInstancesListingRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateReservedInstancesListingRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_reservedInstancesId;
    bool m_reservedInstancesIdHasBeenSet = false;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    Aws::Vector<PriceScheduleSpecification> m_priceSchedules;
    bool m_priceSchedulesHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
