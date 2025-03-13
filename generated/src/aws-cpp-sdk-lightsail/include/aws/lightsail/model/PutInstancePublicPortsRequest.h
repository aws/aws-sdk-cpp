/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/PortInfo.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class PutInstancePublicPortsRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API PutInstancePublicPortsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutInstancePublicPorts"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An array of objects to describe the ports to open for the specified
     * instance.</p>
     */
    inline const Aws::Vector<PortInfo>& GetPortInfos() const { return m_portInfos; }
    inline bool PortInfosHasBeenSet() const { return m_portInfosHasBeenSet; }
    template<typename PortInfosT = Aws::Vector<PortInfo>>
    void SetPortInfos(PortInfosT&& value) { m_portInfosHasBeenSet = true; m_portInfos = std::forward<PortInfosT>(value); }
    template<typename PortInfosT = Aws::Vector<PortInfo>>
    PutInstancePublicPortsRequest& WithPortInfos(PortInfosT&& value) { SetPortInfos(std::forward<PortInfosT>(value)); return *this;}
    template<typename PortInfosT = PortInfo>
    PutInstancePublicPortsRequest& AddPortInfos(PortInfosT&& value) { m_portInfosHasBeenSet = true; m_portInfos.emplace_back(std::forward<PortInfosT>(value)); return *this; }
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
    PutInstancePublicPortsRequest& WithInstanceName(InstanceNameT&& value) { SetInstanceName(std::forward<InstanceNameT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PortInfo> m_portInfos;
    bool m_portInfosHasBeenSet = false;

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
