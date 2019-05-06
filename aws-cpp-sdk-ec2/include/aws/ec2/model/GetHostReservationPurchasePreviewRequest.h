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
#include <utility>

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

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetHostReservationPurchasePreview"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The IDs of the Dedicated Hosts with which the reservation is associated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHostIdSet() const{ return m_hostIdSet; }

    /**
     * <p>The IDs of the Dedicated Hosts with which the reservation is associated.</p>
     */
    inline bool HostIdSetHasBeenSet() const { return m_hostIdSetHasBeenSet; }

    /**
     * <p>The IDs of the Dedicated Hosts with which the reservation is associated.</p>
     */
    inline void SetHostIdSet(const Aws::Vector<Aws::String>& value) { m_hostIdSetHasBeenSet = true; m_hostIdSet = value; }

    /**
     * <p>The IDs of the Dedicated Hosts with which the reservation is associated.</p>
     */
    inline void SetHostIdSet(Aws::Vector<Aws::String>&& value) { m_hostIdSetHasBeenSet = true; m_hostIdSet = std::move(value); }

    /**
     * <p>The IDs of the Dedicated Hosts with which the reservation is associated.</p>
     */
    inline GetHostReservationPurchasePreviewRequest& WithHostIdSet(const Aws::Vector<Aws::String>& value) { SetHostIdSet(value); return *this;}

    /**
     * <p>The IDs of the Dedicated Hosts with which the reservation is associated.</p>
     */
    inline GetHostReservationPurchasePreviewRequest& WithHostIdSet(Aws::Vector<Aws::String>&& value) { SetHostIdSet(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Dedicated Hosts with which the reservation is associated.</p>
     */
    inline GetHostReservationPurchasePreviewRequest& AddHostIdSet(const Aws::String& value) { m_hostIdSetHasBeenSet = true; m_hostIdSet.push_back(value); return *this; }

    /**
     * <p>The IDs of the Dedicated Hosts with which the reservation is associated.</p>
     */
    inline GetHostReservationPurchasePreviewRequest& AddHostIdSet(Aws::String&& value) { m_hostIdSetHasBeenSet = true; m_hostIdSet.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the Dedicated Hosts with which the reservation is associated.</p>
     */
    inline GetHostReservationPurchasePreviewRequest& AddHostIdSet(const char* value) { m_hostIdSetHasBeenSet = true; m_hostIdSet.push_back(value); return *this; }


    /**
     * <p>The offering ID of the reservation.</p>
     */
    inline const Aws::String& GetOfferingId() const{ return m_offeringId; }

    /**
     * <p>The offering ID of the reservation.</p>
     */
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }

    /**
     * <p>The offering ID of the reservation.</p>
     */
    inline void SetOfferingId(const Aws::String& value) { m_offeringIdHasBeenSet = true; m_offeringId = value; }

    /**
     * <p>The offering ID of the reservation.</p>
     */
    inline void SetOfferingId(Aws::String&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::move(value); }

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
    inline GetHostReservationPurchasePreviewRequest& WithOfferingId(Aws::String&& value) { SetOfferingId(std::move(value)); return *this;}

    /**
     * <p>The offering ID of the reservation.</p>
     */
    inline GetHostReservationPurchasePreviewRequest& WithOfferingId(const char* value) { SetOfferingId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_hostIdSet;
    bool m_hostIdSetHasBeenSet;

    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
