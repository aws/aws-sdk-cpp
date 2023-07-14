﻿/**
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
  class AWS_LIGHTSAIL_API ReleaseStaticIpRequest : public LightsailRequest
  {
  public:
    ReleaseStaticIpRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReleaseStaticIp"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the static IP to delete.</p>
     */
    inline const Aws::String& GetStaticIpName() const{ return m_staticIpName; }

    /**
     * <p>The name of the static IP to delete.</p>
     */
    inline bool StaticIpNameHasBeenSet() const { return m_staticIpNameHasBeenSet; }

    /**
     * <p>The name of the static IP to delete.</p>
     */
    inline void SetStaticIpName(const Aws::String& value) { m_staticIpNameHasBeenSet = true; m_staticIpName = value; }

    /**
     * <p>The name of the static IP to delete.</p>
     */
    inline void SetStaticIpName(Aws::String&& value) { m_staticIpNameHasBeenSet = true; m_staticIpName = std::move(value); }

    /**
     * <p>The name of the static IP to delete.</p>
     */
    inline void SetStaticIpName(const char* value) { m_staticIpNameHasBeenSet = true; m_staticIpName.assign(value); }

    /**
     * <p>The name of the static IP to delete.</p>
     */
    inline ReleaseStaticIpRequest& WithStaticIpName(const Aws::String& value) { SetStaticIpName(value); return *this;}

    /**
     * <p>The name of the static IP to delete.</p>
     */
    inline ReleaseStaticIpRequest& WithStaticIpName(Aws::String&& value) { SetStaticIpName(std::move(value)); return *this;}

    /**
     * <p>The name of the static IP to delete.</p>
     */
    inline ReleaseStaticIpRequest& WithStaticIpName(const char* value) { SetStaticIpName(value); return *this;}

  private:

    Aws::String m_staticIpName;
    bool m_staticIpNameHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
