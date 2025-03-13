/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/arc-zonal-shift/ARCZonalShiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/arc-zonal-shift/model/ZonalAutoshiftStatus.h>
#include <utility>

namespace Aws
{
namespace ARCZonalShift
{
namespace Model
{

  /**
   */
  class UpdateZonalAutoshiftConfigurationRequest : public ARCZonalShiftRequest
  {
  public:
    AWS_ARCZONALSHIFT_API UpdateZonalAutoshiftConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateZonalAutoshiftConfiguration"; }

    AWS_ARCZONALSHIFT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier for the resource that you want to update the zonal autoshift
     * configuration for. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const { return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    template<typename ResourceIdentifierT = Aws::String>
    void SetResourceIdentifier(ResourceIdentifierT&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::forward<ResourceIdentifierT>(value); }
    template<typename ResourceIdentifierT = Aws::String>
    UpdateZonalAutoshiftConfigurationRequest& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The zonal autoshift status for the resource that you want to update the zonal
     * autoshift configuration for. Choose <code>ENABLED</code> to authorize Amazon Web
     * Services to shift away resource traffic for an application from an Availability
     * Zone during events, on your behalf, to help reduce time to recovery.</p>
     */
    inline ZonalAutoshiftStatus GetZonalAutoshiftStatus() const { return m_zonalAutoshiftStatus; }
    inline bool ZonalAutoshiftStatusHasBeenSet() const { return m_zonalAutoshiftStatusHasBeenSet; }
    inline void SetZonalAutoshiftStatus(ZonalAutoshiftStatus value) { m_zonalAutoshiftStatusHasBeenSet = true; m_zonalAutoshiftStatus = value; }
    inline UpdateZonalAutoshiftConfigurationRequest& WithZonalAutoshiftStatus(ZonalAutoshiftStatus value) { SetZonalAutoshiftStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    ZonalAutoshiftStatus m_zonalAutoshiftStatus{ZonalAutoshiftStatus::NOT_SET};
    bool m_zonalAutoshiftStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
