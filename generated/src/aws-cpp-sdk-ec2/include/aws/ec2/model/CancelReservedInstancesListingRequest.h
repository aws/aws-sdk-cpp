/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for CancelReservedInstancesListing.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelReservedInstancesListingRequest">AWS
   * API Reference</a></p>
   */
  class CancelReservedInstancesListingRequest : public EC2Request
  {
  public:
    AWS_EC2_API CancelReservedInstancesListingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelReservedInstancesListing"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the Reserved Instance listing.</p>
     */
    inline const Aws::String& GetReservedInstancesListingId() const { return m_reservedInstancesListingId; }
    inline bool ReservedInstancesListingIdHasBeenSet() const { return m_reservedInstancesListingIdHasBeenSet; }
    template<typename ReservedInstancesListingIdT = Aws::String>
    void SetReservedInstancesListingId(ReservedInstancesListingIdT&& value) { m_reservedInstancesListingIdHasBeenSet = true; m_reservedInstancesListingId = std::forward<ReservedInstancesListingIdT>(value); }
    template<typename ReservedInstancesListingIdT = Aws::String>
    CancelReservedInstancesListingRequest& WithReservedInstancesListingId(ReservedInstancesListingIdT&& value) { SetReservedInstancesListingId(std::forward<ReservedInstancesListingIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reservedInstancesListingId;
    bool m_reservedInstancesListingIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
