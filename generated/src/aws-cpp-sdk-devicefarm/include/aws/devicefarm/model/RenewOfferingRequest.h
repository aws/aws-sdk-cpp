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
   * <p>A request that represents an offering renewal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/RenewOfferingRequest">AWS
   * API Reference</a></p>
   */
  class RenewOfferingRequest : public DeviceFarmRequest
  {
  public:
    AWS_DEVICEFARM_API RenewOfferingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RenewOffering"; }

    AWS_DEVICEFARM_API Aws::String SerializePayload() const override;

    AWS_DEVICEFARM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of a request to renew an offering.</p>
     */
    inline const Aws::String& GetOfferingId() const{ return m_offeringId; }

    /**
     * <p>The ID of a request to renew an offering.</p>
     */
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }

    /**
     * <p>The ID of a request to renew an offering.</p>
     */
    inline void SetOfferingId(const Aws::String& value) { m_offeringIdHasBeenSet = true; m_offeringId = value; }

    /**
     * <p>The ID of a request to renew an offering.</p>
     */
    inline void SetOfferingId(Aws::String&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::move(value); }

    /**
     * <p>The ID of a request to renew an offering.</p>
     */
    inline void SetOfferingId(const char* value) { m_offeringIdHasBeenSet = true; m_offeringId.assign(value); }

    /**
     * <p>The ID of a request to renew an offering.</p>
     */
    inline RenewOfferingRequest& WithOfferingId(const Aws::String& value) { SetOfferingId(value); return *this;}

    /**
     * <p>The ID of a request to renew an offering.</p>
     */
    inline RenewOfferingRequest& WithOfferingId(Aws::String&& value) { SetOfferingId(std::move(value)); return *this;}

    /**
     * <p>The ID of a request to renew an offering.</p>
     */
    inline RenewOfferingRequest& WithOfferingId(const char* value) { SetOfferingId(value); return *this;}


    /**
     * <p>The quantity requested in an offering renewal.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The quantity requested in an offering renewal.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The quantity requested in an offering renewal.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The quantity requested in an offering renewal.</p>
     */
    inline RenewOfferingRequest& WithQuantity(int value) { SetQuantity(value); return *this;}

  private:

    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet = false;

    int m_quantity;
    bool m_quantityHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
