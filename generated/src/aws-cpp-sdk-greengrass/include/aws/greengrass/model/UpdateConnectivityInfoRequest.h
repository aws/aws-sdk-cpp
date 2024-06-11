/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/ConnectivityInfo.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   * Connectivity information.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateConnectivityInfoRequest">AWS
   * API Reference</a></p>
   */
  class UpdateConnectivityInfoRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API UpdateConnectivityInfoRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConnectivityInfo"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * A list of connectivity info.
     */
    inline const Aws::Vector<ConnectivityInfo>& GetConnectivityInfo() const{ return m_connectivityInfo; }
    inline bool ConnectivityInfoHasBeenSet() const { return m_connectivityInfoHasBeenSet; }
    inline void SetConnectivityInfo(const Aws::Vector<ConnectivityInfo>& value) { m_connectivityInfoHasBeenSet = true; m_connectivityInfo = value; }
    inline void SetConnectivityInfo(Aws::Vector<ConnectivityInfo>&& value) { m_connectivityInfoHasBeenSet = true; m_connectivityInfo = std::move(value); }
    inline UpdateConnectivityInfoRequest& WithConnectivityInfo(const Aws::Vector<ConnectivityInfo>& value) { SetConnectivityInfo(value); return *this;}
    inline UpdateConnectivityInfoRequest& WithConnectivityInfo(Aws::Vector<ConnectivityInfo>&& value) { SetConnectivityInfo(std::move(value)); return *this;}
    inline UpdateConnectivityInfoRequest& AddConnectivityInfo(const ConnectivityInfo& value) { m_connectivityInfoHasBeenSet = true; m_connectivityInfo.push_back(value); return *this; }
    inline UpdateConnectivityInfoRequest& AddConnectivityInfo(ConnectivityInfo&& value) { m_connectivityInfoHasBeenSet = true; m_connectivityInfo.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The thing name.
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }
    inline UpdateConnectivityInfoRequest& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}
    inline UpdateConnectivityInfoRequest& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}
    inline UpdateConnectivityInfoRequest& WithThingName(const char* value) { SetThingName(value); return *this;}
    ///@}
  private:

    Aws::Vector<ConnectivityInfo> m_connectivityInfo;
    bool m_connectivityInfoHasBeenSet = false;

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
