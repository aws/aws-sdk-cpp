/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AttachStaticIpRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API AttachStaticIpRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AttachStaticIp"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the static IP.</p>
     */
    inline const Aws::String& GetStaticIpName() const{ return m_staticIpName; }
    inline bool StaticIpNameHasBeenSet() const { return m_staticIpNameHasBeenSet; }
    inline void SetStaticIpName(const Aws::String& value) { m_staticIpNameHasBeenSet = true; m_staticIpName = value; }
    inline void SetStaticIpName(Aws::String&& value) { m_staticIpNameHasBeenSet = true; m_staticIpName = std::move(value); }
    inline void SetStaticIpName(const char* value) { m_staticIpNameHasBeenSet = true; m_staticIpName.assign(value); }
    inline AttachStaticIpRequest& WithStaticIpName(const Aws::String& value) { SetStaticIpName(value); return *this;}
    inline AttachStaticIpRequest& WithStaticIpName(Aws::String&& value) { SetStaticIpName(std::move(value)); return *this;}
    inline AttachStaticIpRequest& WithStaticIpName(const char* value) { SetStaticIpName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance name to which you want to attach the static IP address.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::move(value); }
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }
    inline AttachStaticIpRequest& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}
    inline AttachStaticIpRequest& WithInstanceName(Aws::String&& value) { SetInstanceName(std::move(value)); return *this;}
    inline AttachStaticIpRequest& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}
    ///@}
  private:

    Aws::String m_staticIpName;
    bool m_staticIpNameHasBeenSet = false;

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
