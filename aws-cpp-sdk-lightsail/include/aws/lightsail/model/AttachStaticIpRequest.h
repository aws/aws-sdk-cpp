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
  class AWS_LIGHTSAIL_API AttachStaticIpRequest : public LightsailRequest
  {
  public:
    AttachStaticIpRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AttachStaticIp"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the static IP.</p>
     */
    inline const Aws::String& GetStaticIpName() const{ return m_staticIpName; }

    /**
     * <p>The name of the static IP.</p>
     */
    inline bool StaticIpNameHasBeenSet() const { return m_staticIpNameHasBeenSet; }

    /**
     * <p>The name of the static IP.</p>
     */
    inline void SetStaticIpName(const Aws::String& value) { m_staticIpNameHasBeenSet = true; m_staticIpName = value; }

    /**
     * <p>The name of the static IP.</p>
     */
    inline void SetStaticIpName(Aws::String&& value) { m_staticIpNameHasBeenSet = true; m_staticIpName = std::move(value); }

    /**
     * <p>The name of the static IP.</p>
     */
    inline void SetStaticIpName(const char* value) { m_staticIpNameHasBeenSet = true; m_staticIpName.assign(value); }

    /**
     * <p>The name of the static IP.</p>
     */
    inline AttachStaticIpRequest& WithStaticIpName(const Aws::String& value) { SetStaticIpName(value); return *this;}

    /**
     * <p>The name of the static IP.</p>
     */
    inline AttachStaticIpRequest& WithStaticIpName(Aws::String&& value) { SetStaticIpName(std::move(value)); return *this;}

    /**
     * <p>The name of the static IP.</p>
     */
    inline AttachStaticIpRequest& WithStaticIpName(const char* value) { SetStaticIpName(value); return *this;}


    /**
     * <p>The instance name to which you want to attach the static IP address.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }

    /**
     * <p>The instance name to which you want to attach the static IP address.</p>
     */
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }

    /**
     * <p>The instance name to which you want to attach the static IP address.</p>
     */
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }

    /**
     * <p>The instance name to which you want to attach the static IP address.</p>
     */
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::move(value); }

    /**
     * <p>The instance name to which you want to attach the static IP address.</p>
     */
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }

    /**
     * <p>The instance name to which you want to attach the static IP address.</p>
     */
    inline AttachStaticIpRequest& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}

    /**
     * <p>The instance name to which you want to attach the static IP address.</p>
     */
    inline AttachStaticIpRequest& WithInstanceName(Aws::String&& value) { SetInstanceName(std::move(value)); return *this;}

    /**
     * <p>The instance name to which you want to attach the static IP address.</p>
     */
    inline AttachStaticIpRequest& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}

  private:

    Aws::String m_staticIpName;
    bool m_staticIpNameHasBeenSet;

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
