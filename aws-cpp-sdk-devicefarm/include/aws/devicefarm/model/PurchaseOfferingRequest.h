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
  class AWS_DEVICEFARM_API PurchaseOfferingRequest : public DeviceFarmRequest
  {
  public:
    PurchaseOfferingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PurchaseOffering"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the offering.</p>
     */
    inline const Aws::String& GetOfferingId() const{ return m_offeringId; }

    /**
     * <p>The ID of the offering.</p>
     */
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }

    /**
     * <p>The ID of the offering.</p>
     */
    inline void SetOfferingId(const Aws::String& value) { m_offeringIdHasBeenSet = true; m_offeringId = value; }

    /**
     * <p>The ID of the offering.</p>
     */
    inline void SetOfferingId(Aws::String&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::move(value); }

    /**
     * <p>The ID of the offering.</p>
     */
    inline void SetOfferingId(const char* value) { m_offeringIdHasBeenSet = true; m_offeringId.assign(value); }

    /**
     * <p>The ID of the offering.</p>
     */
    inline PurchaseOfferingRequest& WithOfferingId(const Aws::String& value) { SetOfferingId(value); return *this;}

    /**
     * <p>The ID of the offering.</p>
     */
    inline PurchaseOfferingRequest& WithOfferingId(Aws::String&& value) { SetOfferingId(std::move(value)); return *this;}

    /**
     * <p>The ID of the offering.</p>
     */
    inline PurchaseOfferingRequest& WithOfferingId(const char* value) { SetOfferingId(value); return *this;}


    /**
     * <p>The number of device slots you wish to purchase in an offering request.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The number of device slots you wish to purchase in an offering request.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The number of device slots you wish to purchase in an offering request.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The number of device slots you wish to purchase in an offering request.</p>
     */
    inline PurchaseOfferingRequest& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>The ID of the offering promotion to be applied to the purchase.</p>
     */
    inline const Aws::String& GetOfferingPromotionId() const{ return m_offeringPromotionId; }

    /**
     * <p>The ID of the offering promotion to be applied to the purchase.</p>
     */
    inline bool OfferingPromotionIdHasBeenSet() const { return m_offeringPromotionIdHasBeenSet; }

    /**
     * <p>The ID of the offering promotion to be applied to the purchase.</p>
     */
    inline void SetOfferingPromotionId(const Aws::String& value) { m_offeringPromotionIdHasBeenSet = true; m_offeringPromotionId = value; }

    /**
     * <p>The ID of the offering promotion to be applied to the purchase.</p>
     */
    inline void SetOfferingPromotionId(Aws::String&& value) { m_offeringPromotionIdHasBeenSet = true; m_offeringPromotionId = std::move(value); }

    /**
     * <p>The ID of the offering promotion to be applied to the purchase.</p>
     */
    inline void SetOfferingPromotionId(const char* value) { m_offeringPromotionIdHasBeenSet = true; m_offeringPromotionId.assign(value); }

    /**
     * <p>The ID of the offering promotion to be applied to the purchase.</p>
     */
    inline PurchaseOfferingRequest& WithOfferingPromotionId(const Aws::String& value) { SetOfferingPromotionId(value); return *this;}

    /**
     * <p>The ID of the offering promotion to be applied to the purchase.</p>
     */
    inline PurchaseOfferingRequest& WithOfferingPromotionId(Aws::String&& value) { SetOfferingPromotionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the offering promotion to be applied to the purchase.</p>
     */
    inline PurchaseOfferingRequest& WithOfferingPromotionId(const char* value) { SetOfferingPromotionId(value); return *this;}

  private:

    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet;

    int m_quantity;
    bool m_quantityHasBeenSet;

    Aws::String m_offeringPromotionId;
    bool m_offeringPromotionIdHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
