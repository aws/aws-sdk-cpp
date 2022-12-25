/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/greengrassv2/GreengrassV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/greengrassv2/model/ConnectivityInfo.h>
#include <utility>

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

  /**
   */
  class UpdateConnectivityInfoRequest : public GreengrassV2Request
  {
  public:
    AWS_GREENGRASSV2_API UpdateConnectivityInfoRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConnectivityInfo"; }

    AWS_GREENGRASSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline UpdateConnectivityInfoRequest& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline UpdateConnectivityInfoRequest& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline UpdateConnectivityInfoRequest& WithThingName(const char* value) { SetThingName(value); return *this;}


    /**
     * <p>The connectivity information for the core device.</p>
     */
    inline const Aws::Vector<ConnectivityInfo>& GetConnectivityInfo() const{ return m_connectivityInfo; }

    /**
     * <p>The connectivity information for the core device.</p>
     */
    inline bool ConnectivityInfoHasBeenSet() const { return m_connectivityInfoHasBeenSet; }

    /**
     * <p>The connectivity information for the core device.</p>
     */
    inline void SetConnectivityInfo(const Aws::Vector<ConnectivityInfo>& value) { m_connectivityInfoHasBeenSet = true; m_connectivityInfo = value; }

    /**
     * <p>The connectivity information for the core device.</p>
     */
    inline void SetConnectivityInfo(Aws::Vector<ConnectivityInfo>&& value) { m_connectivityInfoHasBeenSet = true; m_connectivityInfo = std::move(value); }

    /**
     * <p>The connectivity information for the core device.</p>
     */
    inline UpdateConnectivityInfoRequest& WithConnectivityInfo(const Aws::Vector<ConnectivityInfo>& value) { SetConnectivityInfo(value); return *this;}

    /**
     * <p>The connectivity information for the core device.</p>
     */
    inline UpdateConnectivityInfoRequest& WithConnectivityInfo(Aws::Vector<ConnectivityInfo>&& value) { SetConnectivityInfo(std::move(value)); return *this;}

    /**
     * <p>The connectivity information for the core device.</p>
     */
    inline UpdateConnectivityInfoRequest& AddConnectivityInfo(const ConnectivityInfo& value) { m_connectivityInfoHasBeenSet = true; m_connectivityInfo.push_back(value); return *this; }

    /**
     * <p>The connectivity information for the core device.</p>
     */
    inline UpdateConnectivityInfoRequest& AddConnectivityInfo(ConnectivityInfo&& value) { m_connectivityInfoHasBeenSet = true; m_connectivityInfo.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    Aws::Vector<ConnectivityInfo> m_connectivityInfo;
    bool m_connectivityInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
