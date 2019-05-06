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
  class AWS_LIGHTSAIL_API OpenInstancePublicPortsRequest : public LightsailRequest
  {
  public:
    OpenInstancePublicPortsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "OpenInstancePublicPorts"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An array of key-value pairs containing information about the port
     * mappings.</p>
     */
    inline const PortInfo& GetPortInfo() const{ return m_portInfo; }

    /**
     * <p>An array of key-value pairs containing information about the port
     * mappings.</p>
     */
    inline bool PortInfoHasBeenSet() const { return m_portInfoHasBeenSet; }

    /**
     * <p>An array of key-value pairs containing information about the port
     * mappings.</p>
     */
    inline void SetPortInfo(const PortInfo& value) { m_portInfoHasBeenSet = true; m_portInfo = value; }

    /**
     * <p>An array of key-value pairs containing information about the port
     * mappings.</p>
     */
    inline void SetPortInfo(PortInfo&& value) { m_portInfoHasBeenSet = true; m_portInfo = std::move(value); }

    /**
     * <p>An array of key-value pairs containing information about the port
     * mappings.</p>
     */
    inline OpenInstancePublicPortsRequest& WithPortInfo(const PortInfo& value) { SetPortInfo(value); return *this;}

    /**
     * <p>An array of key-value pairs containing information about the port
     * mappings.</p>
     */
    inline OpenInstancePublicPortsRequest& WithPortInfo(PortInfo&& value) { SetPortInfo(std::move(value)); return *this;}


    /**
     * <p>The name of the instance for which you want to open the public ports.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }

    /**
     * <p>The name of the instance for which you want to open the public ports.</p>
     */
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }

    /**
     * <p>The name of the instance for which you want to open the public ports.</p>
     */
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }

    /**
     * <p>The name of the instance for which you want to open the public ports.</p>
     */
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::move(value); }

    /**
     * <p>The name of the instance for which you want to open the public ports.</p>
     */
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }

    /**
     * <p>The name of the instance for which you want to open the public ports.</p>
     */
    inline OpenInstancePublicPortsRequest& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}

    /**
     * <p>The name of the instance for which you want to open the public ports.</p>
     */
    inline OpenInstancePublicPortsRequest& WithInstanceName(Aws::String&& value) { SetInstanceName(std::move(value)); return *this;}

    /**
     * <p>The name of the instance for which you want to open the public ports.</p>
     */
    inline OpenInstancePublicPortsRequest& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}

  private:

    PortInfo m_portInfo;
    bool m_portInfoHasBeenSet;

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
