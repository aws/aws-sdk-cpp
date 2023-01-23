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
    AWS_GROUNDSTATION_API UpdateConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConfig"; }

    AWS_GROUNDSTATION_API Aws::String SerializePayload() const override;


    /**
     * <p>Parameters of a <code>Config</code>.</p>
     */
    inline const ConfigTypeData& GetConfigData() const{ return m_configData; }

    /**
     * <p>Parameters of a <code>Config</code>.</p>
     */
    inline bool ConfigDataHasBeenSet() const { return m_configDataHasBeenSet; }

    /**
     * <p>Parameters of a <code>Config</code>.</p>
     */
    inline void SetConfigData(const ConfigTypeData& value) { m_configDataHasBeenSet = true; m_configData = value; }

    /**
     * <p>Parameters of a <code>Config</code>.</p>
     */
    inline void SetConfigData(ConfigTypeData&& value) { m_configDataHasBeenSet = true; m_configData = std::move(value); }

    /**
     * <p>Parameters of a <code>Config</code>.</p>
     */
    inline UpdateConfigRequest& WithConfigData(const ConfigTypeData& value) { SetConfigData(value); return *this;}

    /**
     * <p>Parameters of a <code>Config</code>.</p>
     */
    inline UpdateConfigRequest& WithConfigData(ConfigTypeData&& value) { SetConfigData(std::move(value)); return *this;}


    /**
     * <p>UUID of a <code>Config</code>.</p>
     */
    inline const Aws::String& GetConfigId() const{ return m_configId; }

    /**
     * <p>UUID of a <code>Config</code>.</p>
     */
    inline bool ConfigIdHasBeenSet() const { return m_configIdHasBeenSet; }

    /**
     * <p>UUID of a <code>Config</code>.</p>
     */
    inline void SetConfigId(const Aws::String& value) { m_configIdHasBeenSet = true; m_configId = value; }

    /**
     * <p>UUID of a <code>Config</code>.</p>
     */
    inline void SetConfigId(Aws::String&& value) { m_configIdHasBeenSet = true; m_configId = std::move(value); }

    /**
     * <p>UUID of a <code>Config</code>.</p>
     */
    inline void SetConfigId(const char* value) { m_configIdHasBeenSet = true; m_configId.assign(value); }

    /**
     * <p>UUID of a <code>Config</code>.</p>
     */
    inline UpdateConfigRequest& WithConfigId(const Aws::String& value) { SetConfigId(value); return *this;}

    /**
     * <p>UUID of a <code>Config</code>.</p>
     */
    inline UpdateConfigRequest& WithConfigId(Aws::String&& value) { SetConfigId(std::move(value)); return *this;}

    /**
     * <p>UUID of a <code>Config</code>.</p>
     */
    inline UpdateConfigRequest& WithConfigId(const char* value) { SetConfigId(value); return *this;}


    /**
     * <p>Type of a <code>Config</code>.</p>
     */
    inline const ConfigCapabilityType& GetConfigType() const{ return m_configType; }

    /**
     * <p>Type of a <code>Config</code>.</p>
     */
    inline bool ConfigTypeHasBeenSet() const { return m_configTypeHasBeenSet; }

    /**
     * <p>Type of a <code>Config</code>.</p>
     */
    inline void SetConfigType(const ConfigCapabilityType& value) { m_configTypeHasBeenSet = true; m_configType = value; }

    /**
     * <p>Type of a <code>Config</code>.</p>
     */
    inline void SetConfigType(ConfigCapabilityType&& value) { m_configTypeHasBeenSet = true; m_configType = std::move(value); }

    /**
     * <p>Type of a <code>Config</code>.</p>
     */
    inline UpdateConfigRequest& WithConfigType(const ConfigCapabilityType& value) { SetConfigType(value); return *this;}

    /**
     * <p>Type of a <code>Config</code>.</p>
     */
    inline UpdateConfigRequest& WithConfigType(ConfigCapabilityType&& value) { SetConfigType(std::move(value)); return *this;}


    /**
     * <p>Name of a <code>Config</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of a <code>Config</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of a <code>Config</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of a <code>Config</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of a <code>Config</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of a <code>Config</code>.</p>
     */
    inline UpdateConfigRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of a <code>Config</code>.</p>
     */
    inline UpdateConfigRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of a <code>Config</code>.</p>
     */
    inline UpdateConfigRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    ConfigTypeData m_configData;
    bool m_configDataHasBeenSet = false;

    Aws::String m_configId;
    bool m_configIdHasBeenSet = false;

    ConfigCapabilityType m_configType;
    bool m_configTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
