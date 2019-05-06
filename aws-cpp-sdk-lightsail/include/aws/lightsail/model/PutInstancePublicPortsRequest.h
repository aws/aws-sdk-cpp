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
  class AWS_LIGHTSAIL_API PutInstancePublicPortsRequest : public LightsailRequest
  {
  public:
    PutInstancePublicPortsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutInstancePublicPorts"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies information about the public port(s).</p>
     */
    inline const Aws::Vector<PortInfo>& GetPortInfos() const{ return m_portInfos; }

    /**
     * <p>Specifies information about the public port(s).</p>
     */
    inline bool PortInfosHasBeenSet() const { return m_portInfosHasBeenSet; }

    /**
     * <p>Specifies information about the public port(s).</p>
     */
    inline void SetPortInfos(const Aws::Vector<PortInfo>& value) { m_portInfosHasBeenSet = true; m_portInfos = value; }

    /**
     * <p>Specifies information about the public port(s).</p>
     */
    inline void SetPortInfos(Aws::Vector<PortInfo>&& value) { m_portInfosHasBeenSet = true; m_portInfos = std::move(value); }

    /**
     * <p>Specifies information about the public port(s).</p>
     */
    inline PutInstancePublicPortsRequest& WithPortInfos(const Aws::Vector<PortInfo>& value) { SetPortInfos(value); return *this;}

    /**
     * <p>Specifies information about the public port(s).</p>
     */
    inline PutInstancePublicPortsRequest& WithPortInfos(Aws::Vector<PortInfo>&& value) { SetPortInfos(std::move(value)); return *this;}

    /**
     * <p>Specifies information about the public port(s).</p>
     */
    inline PutInstancePublicPortsRequest& AddPortInfos(const PortInfo& value) { m_portInfosHasBeenSet = true; m_portInfos.push_back(value); return *this; }

    /**
     * <p>Specifies information about the public port(s).</p>
     */
    inline PutInstancePublicPortsRequest& AddPortInfos(PortInfo&& value) { m_portInfosHasBeenSet = true; m_portInfos.push_back(std::move(value)); return *this; }


    /**
     * <p>The Lightsail instance name of the public port(s) you are setting.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }

    /**
     * <p>The Lightsail instance name of the public port(s) you are setting.</p>
     */
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }

    /**
     * <p>The Lightsail instance name of the public port(s) you are setting.</p>
     */
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }

    /**
     * <p>The Lightsail instance name of the public port(s) you are setting.</p>
     */
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::move(value); }

    /**
     * <p>The Lightsail instance name of the public port(s) you are setting.</p>
     */
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }

    /**
     * <p>The Lightsail instance name of the public port(s) you are setting.</p>
     */
    inline PutInstancePublicPortsRequest& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}

    /**
     * <p>The Lightsail instance name of the public port(s) you are setting.</p>
     */
    inline PutInstancePublicPortsRequest& WithInstanceName(Aws::String&& value) { SetInstanceName(std::move(value)); return *this;}

    /**
     * <p>The Lightsail instance name of the public port(s) you are setting.</p>
     */
    inline PutInstancePublicPortsRequest& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}

  private:

    Aws::Vector<PortInfo> m_portInfos;
    bool m_portInfosHasBeenSet;

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
