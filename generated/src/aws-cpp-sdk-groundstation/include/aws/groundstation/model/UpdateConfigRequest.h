/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/GroundStationRequest.h>
#include <aws/groundstation/model/ConfigTypeData.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/model/ConfigCapabilityType.h>
#include <utility>

namespace Aws
{
namespace GroundStation
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/UpdateConfigRequest">AWS
   * API Reference</a></p>
   */
  class UpdateConfigRequest : public GroundStationRequest
  {
  public:
    AWS_GROUNDSTATION_API UpdateConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConfig"; }

    AWS_GROUNDSTATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Parameters of a <code>Config</code>.</p>
     */
    inline const ConfigTypeData& GetConfigData() const { return m_configData; }
    inline bool ConfigDataHasBeenSet() const { return m_configDataHasBeenSet; }
    template<typename ConfigDataT = ConfigTypeData>
    void SetConfigData(ConfigDataT&& value) { m_configDataHasBeenSet = true; m_configData = std::forward<ConfigDataT>(value); }
    template<typename ConfigDataT = ConfigTypeData>
    UpdateConfigRequest& WithConfigData(ConfigDataT&& value) { SetConfigData(std::forward<ConfigDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>UUID of a <code>Config</code>.</p>
     */
    inline const Aws::String& GetConfigId() const { return m_configId; }
    inline bool ConfigIdHasBeenSet() const { return m_configIdHasBeenSet; }
    template<typename ConfigIdT = Aws::String>
    void SetConfigId(ConfigIdT&& value) { m_configIdHasBeenSet = true; m_configId = std::forward<ConfigIdT>(value); }
    template<typename ConfigIdT = Aws::String>
    UpdateConfigRequest& WithConfigId(ConfigIdT&& value) { SetConfigId(std::forward<ConfigIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of a <code>Config</code>.</p>
     */
    inline ConfigCapabilityType GetConfigType() const { return m_configType; }
    inline bool ConfigTypeHasBeenSet() const { return m_configTypeHasBeenSet; }
    inline void SetConfigType(ConfigCapabilityType value) { m_configTypeHasBeenSet = true; m_configType = value; }
    inline UpdateConfigRequest& WithConfigType(ConfigCapabilityType value) { SetConfigType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of a <code>Config</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateConfigRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    ConfigTypeData m_configData;
    bool m_configDataHasBeenSet = false;

    Aws::String m_configId;
    bool m_configIdHasBeenSet = false;

    ConfigCapabilityType m_configType{ConfigCapabilityType::NOT_SET};
    bool m_configTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
