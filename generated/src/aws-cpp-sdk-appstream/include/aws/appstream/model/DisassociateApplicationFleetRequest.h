/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class DisassociateApplicationFleetRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API DisassociateApplicationFleetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateApplicationFleet"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the fleet.</p>
     */
    inline const Aws::String& GetFleetName() const { return m_fleetName; }
    inline bool FleetNameHasBeenSet() const { return m_fleetNameHasBeenSet; }
    template<typename FleetNameT = Aws::String>
    void SetFleetName(FleetNameT&& value) { m_fleetNameHasBeenSet = true; m_fleetName = std::forward<FleetNameT>(value); }
    template<typename FleetNameT = Aws::String>
    DisassociateApplicationFleetRequest& WithFleetName(FleetNameT&& value) { SetFleetName(std::forward<FleetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the application.</p>
     */
    inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }
    template<typename ApplicationArnT = Aws::String>
    void SetApplicationArn(ApplicationArnT&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::forward<ApplicationArnT>(value); }
    template<typename ApplicationArnT = Aws::String>
    DisassociateApplicationFleetRequest& WithApplicationArn(ApplicationArnT&& value) { SetApplicationArn(std::forward<ApplicationArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fleetName;
    bool m_fleetNameHasBeenSet = false;

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
