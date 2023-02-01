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
    AWS_LIGHTSAIL_API PutInstancePublicPortsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutInstancePublicPorts"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An array of objects to describe the ports to open for the specified
     * instance.</p>
     */
    inline const Aws::Vector<PortInfo>& GetPortInfos() const{ return m_portInfos; }

    /**
     * <p>An array of objects to describe the ports to open for the specified
     * instance.</p>
     */
    inline bool PortInfosHasBeenSet() const { return m_portInfosHasBeenSet; }

    /**
     * <p>An array of objects to describe the ports to open for the specified
     * instance.</p>
     */
    inline void SetPortInfos(const Aws::Vector<PortInfo>& value) { m_portInfosHasBeenSet = true; m_portInfos = value; }

    /**
     * <p>An array of objects to describe the ports to open for the specified
     * instance.</p>
     */
    inline void SetPortInfos(Aws::Vector<PortInfo>&& value) { m_portInfosHasBeenSet = true; m_portInfos = std::move(value); }

    /**
     * <p>An array of objects to describe the ports to open for the specified
     * instance.</p>
     */
    inline PutInstancePublicPortsRequest& WithPortInfos(const Aws::Vector<PortInfo>& value) { SetPortInfos(value); return *this;}

    /**
     * <p>An array of objects to describe the ports to open for the specified
     * instance.</p>
     */
    inline PutInstancePublicPortsRequest& WithPortInfos(Aws::Vector<PortInfo>&& value) { SetPortInfos(std::move(value)); return *this;}

    /**
     * <p>An array of objects to describe the ports to open for the specified
     * instance.</p>
     */
    inline PutInstancePublicPortsRequest& AddPortInfos(const PortInfo& value) { m_portInfosHasBeenSet = true; m_portInfos.push_back(value); return *this; }

    /**
     * <p>An array of objects to describe the ports to open for the specified
     * instance.</p>
     */
    inline PutInstancePublicPortsRequest& AddPortInfos(PortInfo&& value) { m_portInfosHasBeenSet = true; m_portInfos.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the instance for which to open ports.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }

    /**
     * <p>The name of the instance for which to open ports.</p>
     */
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }

    /**
     * <p>The name of the instance for which to open ports.</p>
     */
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }

    /**
     * <p>The name of the instance for which to open ports.</p>
     */
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::move(value); }

    /**
     * <p>The name of the instance for which to open ports.</p>
     */
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }

    /**
     * <p>The name of the instance for which to open ports.</p>
     */
    inline PutInstancePublicPortsRequest& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}

    /**
     * <p>The name of the instance for which to open ports.</p>
     */
    inline PutInstancePublicPortsRequest& WithInstanceName(Aws::String&& value) { SetInstanceName(std::move(value)); return *this;}

    /**
     * <p>The name of the instance for which to open ports.</p>
     */
    inline PutInstancePublicPortsRequest& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}

  private:

    Aws::Vector<PortInfo> m_portInfos;
    bool m_portInfosHasBeenSet = false;

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
