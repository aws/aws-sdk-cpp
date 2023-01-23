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
  class DetachStaticIpRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API DetachStaticIpRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetachStaticIp"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the static IP to detach from the instance.</p>
     */
    inline const Aws::String& GetStaticIpName() const{ return m_staticIpName; }

    /**
     * <p>The name of the static IP to detach from the instance.</p>
     */
    inline bool StaticIpNameHasBeenSet() const { return m_staticIpNameHasBeenSet; }

    /**
     * <p>The name of the static IP to detach from the instance.</p>
     */
    inline void SetStaticIpName(const Aws::String& value) { m_staticIpNameHasBeenSet = true; m_staticIpName = value; }

    /**
     * <p>The name of the static IP to detach from the instance.</p>
     */
    inline void SetStaticIpName(Aws::String&& value) { m_staticIpNameHasBeenSet = true; m_staticIpName = std::move(value); }

    /**
     * <p>The name of the static IP to detach from the instance.</p>
     */
    inline void SetStaticIpName(const char* value) { m_staticIpNameHasBeenSet = true; m_staticIpName.assign(value); }

    /**
     * <p>The name of the static IP to detach from the instance.</p>
     */
    inline DetachStaticIpRequest& WithStaticIpName(const Aws::String& value) { SetStaticIpName(value); return *this;}

    /**
     * <p>The name of the static IP to detach from the instance.</p>
     */
    inline DetachStaticIpRequest& WithStaticIpName(Aws::String&& value) { SetStaticIpName(std::move(value)); return *this;}

    /**
     * <p>The name of the static IP to detach from the instance.</p>
     */
    inline DetachStaticIpRequest& WithStaticIpName(const char* value) { SetStaticIpName(value); return *this;}

  private:

    Aws::String m_staticIpName;
    bool m_staticIpNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
