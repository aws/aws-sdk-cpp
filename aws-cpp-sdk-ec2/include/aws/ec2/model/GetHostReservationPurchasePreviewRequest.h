﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API GetHostReservationPurchasePreviewRequest : public EC2Request
  {
  public:
    GetHostReservationPurchasePreviewRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The offering ID of the reservation.</p>
     */
    inline const Aws::String& GetOfferingId() const{ return m_offeringId; }

    /**
     * <p>The offering ID of the reservation.</p>
     */
    inline void SetOfferingId(const Aws::String& value) { m_offeringIdHasBeenSet = true; m_offeringId = value; }

    /**
     * <p>The offering ID of the reservation.</p>
     */
    inline void SetOfferingId(Aws::String&& value) { m_offeringIdHasBeenSet = true; m_offeringId = value; }

    /**
     * <p>The offering ID of the reservation.</p>
     */
    inline void SetOfferingId(const char* value) { m_offeringIdHasBeenSet = true; m_offeringId.assign(value); }

    /**
     * <p>The offering ID of the reservation.</p>
     */
    inline GetHostReservationPurchasePreviewRequest& WithOfferingId(const Aws::String& value) { SetOfferingId(value); return *this;}

    /**
     * <p>The offering ID of the reservation.</p>
     */
    inline GetHostReservationPurchasePreviewRequest& WithOfferingId(Aws::String&& value) { SetOfferingId(value); return *this;}

    /**
     * <p>The offering ID of the reservation.</p>
     */
    inline GetHostReservationPurchasePreviewRequest& WithOfferingId(const char* value) { SetOfferingId(value); return *this;}

    /**
     * <p>The ID/s of the Dedicated Host/s that the reservation will be associated
     * with.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHostIdSet() const{ return m_hostIdSet; }

    /**
     * <p>The ID/s of the Dedicated Host/s that the reservation will be associated
     * with.</p>
     */
    inline void SetHostIdSet(const Aws::Vector<Aws::String>& value) { m_hostIdSetHasBeenSet = true; m_hostIdSet = value; }

    /**
     * <p>The ID/s of the Dedicated Host/s that the reservation will be associated
     * with.</p>
     */
    inline void SetHostIdSet(Aws::Vector<Aws::String>&& value) { m_hostIdSetHasBeenSet = true; m_hostIdSet = value; }

    /**
     * <p>The ID/s of the Dedicated Host/s that the reservation will be associated
     * with.</p>
     */
    inline GetHostReservationPurchasePreviewRequest& WithHostIdSet(const Aws::Vector<Aws::String>& value) { SetHostIdSet(value); return *this;}

    /**
     * <p>The ID/s of the Dedicated Host/s that the reservation will be associated
     * with.</p>
     */
    inline GetHostReservationPurchasePreviewRequest& WithHostIdSet(Aws::Vector<Aws::String>&& value) { SetHostIdSet(value); return *this;}

    /**
     * <p>The ID/s of the Dedicated Host/s that the reservation will be associated
     * with.</p>
     */
    inline GetHostReservationPurchasePreviewRequest& AddHostIdSet(const Aws::String& value) { m_hostIdSetHasBeenSet = true; m_hostIdSet.push_back(value); return *this; }

    /**
     * <p>The ID/s of the Dedicated Host/s that the reservation will be associated
     * with.</p>
     */
    inline GetHostReservationPurchasePreviewRequest& AddHostIdSet(Aws::String&& value) { m_hostIdSetHasBeenSet = true; m_hostIdSet.push_back(value); return *this; }

    /**
     * <p>The ID/s of the Dedicated Host/s that the reservation will be associated
     * with.</p>
     */
    inline GetHostReservationPurchasePreviewRequest& AddHostIdSet(const char* value) { m_hostIdSetHasBeenSet = true; m_hostIdSet.push_back(value); return *this; }

  private:
    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet;
    Aws::Vector<Aws::String> m_hostIdSet;
    bool m_hostIdSetHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
