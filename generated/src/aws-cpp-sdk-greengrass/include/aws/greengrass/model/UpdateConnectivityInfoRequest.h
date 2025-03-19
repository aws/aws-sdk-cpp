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
    AWS_GREENGRASS_API UpdateConnectivityInfoRequest() = default;

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
    inline const Aws::Vector<ConnectivityInfo>& GetConnectivityInfo() const { return m_connectivityInfo; }
    inline bool ConnectivityInfoHasBeenSet() const { return m_connectivityInfoHasBeenSet; }
    template<typename ConnectivityInfoT = Aws::Vector<ConnectivityInfo>>
    void SetConnectivityInfo(ConnectivityInfoT&& value) { m_connectivityInfoHasBeenSet = true; m_connectivityInfo = std::forward<ConnectivityInfoT>(value); }
    template<typename ConnectivityInfoT = Aws::Vector<ConnectivityInfo>>
    UpdateConnectivityInfoRequest& WithConnectivityInfo(ConnectivityInfoT&& value) { SetConnectivityInfo(std::forward<ConnectivityInfoT>(value)); return *this;}
    template<typename ConnectivityInfoT = ConnectivityInfo>
    UpdateConnectivityInfoRequest& AddConnectivityInfo(ConnectivityInfoT&& value) { m_connectivityInfoHasBeenSet = true; m_connectivityInfo.emplace_back(std::forward<ConnectivityInfoT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The thing name.
     */
    inline const Aws::String& GetThingName() const { return m_thingName; }
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
    template<typename ThingNameT = Aws::String>
    void SetThingName(ThingNameT&& value) { m_thingNameHasBeenSet = true; m_thingName = std::forward<ThingNameT>(value); }
    template<typename ThingNameT = Aws::String>
    UpdateConnectivityInfoRequest& WithThingName(ThingNameT&& value) { SetThingName(std::forward<ThingNameT>(value)); return *this;}
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
