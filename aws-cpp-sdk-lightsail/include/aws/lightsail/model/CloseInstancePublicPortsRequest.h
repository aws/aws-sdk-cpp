﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class AWS_LIGHTSAIL_API CloseInstancePublicPortsRequest : public LightsailRequest
  {
  public:
    CloseInstancePublicPortsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Information about the public port you are trying to close.</p>
     */
    inline const PortInfo& GetPortInfo() const{ return m_portInfo; }

    /**
     * <p>Information about the public port you are trying to close.</p>
     */
    inline void SetPortInfo(const PortInfo& value) { m_portInfoHasBeenSet = true; m_portInfo = value; }

    /**
     * <p>Information about the public port you are trying to close.</p>
     */
    inline void SetPortInfo(PortInfo&& value) { m_portInfoHasBeenSet = true; m_portInfo = value; }

    /**
     * <p>Information about the public port you are trying to close.</p>
     */
    inline CloseInstancePublicPortsRequest& WithPortInfo(const PortInfo& value) { SetPortInfo(value); return *this;}

    /**
     * <p>Information about the public port you are trying to close.</p>
     */
    inline CloseInstancePublicPortsRequest& WithPortInfo(PortInfo&& value) { SetPortInfo(value); return *this;}

    /**
     * <p>The name of the instance on which you're attempting to close the public
     * ports.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }

    /**
     * <p>The name of the instance on which you're attempting to close the public
     * ports.</p>
     */
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }

    /**
     * <p>The name of the instance on which you're attempting to close the public
     * ports.</p>
     */
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }

    /**
     * <p>The name of the instance on which you're attempting to close the public
     * ports.</p>
     */
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }

    /**
     * <p>The name of the instance on which you're attempting to close the public
     * ports.</p>
     */
    inline CloseInstancePublicPortsRequest& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}

    /**
     * <p>The name of the instance on which you're attempting to close the public
     * ports.</p>
     */
    inline CloseInstancePublicPortsRequest& WithInstanceName(Aws::String&& value) { SetInstanceName(value); return *this;}

    /**
     * <p>The name of the instance on which you're attempting to close the public
     * ports.</p>
     */
    inline CloseInstancePublicPortsRequest& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}

  private:
    PortInfo m_portInfo;
    bool m_portInfoHasBeenSet;
    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
