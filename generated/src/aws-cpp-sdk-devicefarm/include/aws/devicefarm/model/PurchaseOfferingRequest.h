/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents a request for a purchase offering.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/PurchaseOfferingRequest">AWS
   * API Reference</a></p>
   */
  class PurchaseOfferingRequest : public DeviceFarmRequest
  {
  public:
    AWS_DEVICEFARM_API PurchaseOfferingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PurchaseOffering"; }

    AWS_DEVICEFARM_API Aws::String SerializePayload() const override;

    AWS_DEVICEFARM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the offering.</p>
     */
    inline const Aws::String& GetOfferingId() const{ return m_offeringId; }
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }
    inline void SetOfferingId(const Aws::String& value) { m_offeringIdHasBeenSet = true; m_offeringId = value; }
    inline void SetOfferingId(Aws::String&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::move(value); }
    inline void SetOfferingId(const char* value) { m_offeringIdHasBeenSet = true; m_offeringId.assign(value); }
    inline PurchaseOfferingRequest& WithOfferingId(const Aws::String& value) { SetOfferingId(value); return *this;}
    inline PurchaseOfferingRequest& WithOfferingId(Aws::String&& value) { SetOfferingId(std::move(value)); return *this;}
    inline PurchaseOfferingRequest& WithOfferingId(const char* value) { SetOfferingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of device slots to purchase in an offering request.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }
    inline PurchaseOfferingRequest& WithQuantity(int value) { SetQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the offering promotion to be applied to the purchase.</p>
     */
    inline const Aws::String& GetOfferingPromotionId() const{ return m_offeringPromotionId; }
    inline bool OfferingPromotionIdHasBeenSet() const { return m_offeringPromotionIdHasBeenSet; }
    inline void SetOfferingPromotionId(const Aws::String& value) { m_offeringPromotionIdHasBeenSet = true; m_offeringPromotionId = value; }
    inline void SetOfferingPromotionId(Aws::String&& value) { m_offeringPromotionIdHasBeenSet = true; m_offeringPromotionId = std::move(value); }
    inline void SetOfferingPromotionId(const char* value) { m_offeringPromotionIdHasBeenSet = true; m_offeringPromotionId.assign(value); }
    inline PurchaseOfferingRequest& WithOfferingPromotionId(const Aws::String& value) { SetOfferingPromotionId(value); return *this;}
    inline PurchaseOfferingRequest& WithOfferingPromotionId(Aws::String&& value) { SetOfferingPromotionId(std::move(value)); return *this;}
    inline PurchaseOfferingRequest& WithOfferingPromotionId(const char* value) { SetOfferingPromotionId(value); return *this;}
    ///@}
  private:

    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet = false;

    int m_quantity;
    bool m_quantityHasBeenSet = false;

    Aws::String m_offeringPromotionId;
    bool m_offeringPromotionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
