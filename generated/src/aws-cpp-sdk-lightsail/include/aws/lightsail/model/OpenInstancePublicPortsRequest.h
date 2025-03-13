/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/lightsail/model/PortInfo.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class OpenInstancePublicPortsRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API OpenInstancePublicPortsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "OpenInstancePublicPorts"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An object to describe the ports to open for the specified instance.</p>
     */
    inline const PortInfo& GetPortInfo() const { return m_portInfo; }
    inline bool PortInfoHasBeenSet() const { return m_portInfoHasBeenSet; }
    template<typename PortInfoT = PortInfo>
    void SetPortInfo(PortInfoT&& value) { m_portInfoHasBeenSet = true; m_portInfo = std::forward<PortInfoT>(value); }
    template<typename PortInfoT = PortInfo>
    OpenInstancePublicPortsRequest& WithPortInfo(PortInfoT&& value) { SetPortInfo(std::forward<PortInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the instance for which to open ports.</p>
     */
    inline const Aws::String& GetInstanceName() const { return m_instanceName; }
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }
    template<typename InstanceNameT = Aws::String>
    void SetInstanceName(InstanceNameT&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::forward<InstanceNameT>(value); }
    template<typename InstanceNameT = Aws::String>
    OpenInstancePublicPortsRequest& WithInstanceName(InstanceNameT&& value) { SetInstanceName(std::forward<InstanceNameT>(value)); return *this;}
    ///@}
  private:

    PortInfo m_portInfo;
    bool m_portInfoHasBeenSet = false;

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
