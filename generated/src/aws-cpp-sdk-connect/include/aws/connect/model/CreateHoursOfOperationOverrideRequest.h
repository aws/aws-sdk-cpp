/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/HoursOfOperationOverrideConfig.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class CreateHoursOfOperationOverrideRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API CreateHoursOfOperationOverrideRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateHoursOfOperationOverride"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    CreateHoursOfOperationOverrideRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the hours of operation</p>
     */
    inline const Aws::String& GetHoursOfOperationId() const { return m_hoursOfOperationId; }
    inline bool HoursOfOperationIdHasBeenSet() const { return m_hoursOfOperationIdHasBeenSet; }
    template<typename HoursOfOperationIdT = Aws::String>
    void SetHoursOfOperationId(HoursOfOperationIdT&& value) { m_hoursOfOperationIdHasBeenSet = true; m_hoursOfOperationId = std::forward<HoursOfOperationIdT>(value); }
    template<typename HoursOfOperationIdT = Aws::String>
    CreateHoursOfOperationOverrideRequest& WithHoursOfOperationId(HoursOfOperationIdT&& value) { SetHoursOfOperationId(std::forward<HoursOfOperationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the hours of operation override.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateHoursOfOperationOverrideRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the hours of operation override.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateHoursOfOperationOverrideRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for the hours of operation override: day, start
     * time, and end time.</p>
     */
    inline const Aws::Vector<HoursOfOperationOverrideConfig>& GetConfig() const { return m_config; }
    inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }
    template<typename ConfigT = Aws::Vector<HoursOfOperationOverrideConfig>>
    void SetConfig(ConfigT&& value) { m_configHasBeenSet = true; m_config = std::forward<ConfigT>(value); }
    template<typename ConfigT = Aws::Vector<HoursOfOperationOverrideConfig>>
    CreateHoursOfOperationOverrideRequest& WithConfig(ConfigT&& value) { SetConfig(std::forward<ConfigT>(value)); return *this;}
    template<typename ConfigT = HoursOfOperationOverrideConfig>
    CreateHoursOfOperationOverrideRequest& AddConfig(ConfigT&& value) { m_configHasBeenSet = true; m_config.emplace_back(std::forward<ConfigT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date from when the hours of operation override is effective.</p>
     */
    inline const Aws::String& GetEffectiveFrom() const { return m_effectiveFrom; }
    inline bool EffectiveFromHasBeenSet() const { return m_effectiveFromHasBeenSet; }
    template<typename EffectiveFromT = Aws::String>
    void SetEffectiveFrom(EffectiveFromT&& value) { m_effectiveFromHasBeenSet = true; m_effectiveFrom = std::forward<EffectiveFromT>(value); }
    template<typename EffectiveFromT = Aws::String>
    CreateHoursOfOperationOverrideRequest& WithEffectiveFrom(EffectiveFromT&& value) { SetEffectiveFrom(std::forward<EffectiveFromT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date until when the hours of operation override is effective.</p>
     */
    inline const Aws::String& GetEffectiveTill() const { return m_effectiveTill; }
    inline bool EffectiveTillHasBeenSet() const { return m_effectiveTillHasBeenSet; }
    template<typename EffectiveTillT = Aws::String>
    void SetEffectiveTill(EffectiveTillT&& value) { m_effectiveTillHasBeenSet = true; m_effectiveTill = std::forward<EffectiveTillT>(value); }
    template<typename EffectiveTillT = Aws::String>
    CreateHoursOfOperationOverrideRequest& WithEffectiveTill(EffectiveTillT&& value) { SetEffectiveTill(std::forward<EffectiveTillT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_hoursOfOperationId;
    bool m_hoursOfOperationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<HoursOfOperationOverrideConfig> m_config;
    bool m_configHasBeenSet = false;

    Aws::String m_effectiveFrom;
    bool m_effectiveFromHasBeenSet = false;

    Aws::String m_effectiveTill;
    bool m_effectiveTillHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
