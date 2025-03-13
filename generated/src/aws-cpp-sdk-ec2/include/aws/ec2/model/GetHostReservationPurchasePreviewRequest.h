/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetHostReservationPurchasePreviewRequest : public EC2Request
  {
  public:
    AWS_EC2_API GetHostReservationPurchasePreviewRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetHostReservationPurchasePreview"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The IDs of the Dedicated Hosts with which the reservation is associated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHostIdSet() const { return m_hostIdSet; }
    inline bool HostIdSetHasBeenSet() const { return m_hostIdSetHasBeenSet; }
    template<typename HostIdSetT = Aws::Vector<Aws::String>>
    void SetHostIdSet(HostIdSetT&& value) { m_hostIdSetHasBeenSet = true; m_hostIdSet = std::forward<HostIdSetT>(value); }
    template<typename HostIdSetT = Aws::Vector<Aws::String>>
    GetHostReservationPurchasePreviewRequest& WithHostIdSet(HostIdSetT&& value) { SetHostIdSet(std::forward<HostIdSetT>(value)); return *this;}
    template<typename HostIdSetT = Aws::String>
    GetHostReservationPurchasePreviewRequest& AddHostIdSet(HostIdSetT&& value) { m_hostIdSetHasBeenSet = true; m_hostIdSet.emplace_back(std::forward<HostIdSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The offering ID of the reservation.</p>
     */
    inline const Aws::String& GetOfferingId() const { return m_offeringId; }
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }
    template<typename OfferingIdT = Aws::String>
    void SetOfferingId(OfferingIdT&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::forward<OfferingIdT>(value); }
    template<typename OfferingIdT = Aws::String>
    GetHostReservationPurchasePreviewRequest& WithOfferingId(OfferingIdT&& value) { SetOfferingId(std::forward<OfferingIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_hostIdSet;
    bool m_hostIdSetHasBeenSet = false;

    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
