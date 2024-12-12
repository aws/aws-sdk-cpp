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
  class UpdateHoursOfOperationOverrideRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateHoursOfOperationOverrideRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateHoursOfOperationOverride"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline UpdateHoursOfOperationOverrideRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline UpdateHoursOfOperationOverrideRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline UpdateHoursOfOperationOverrideRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline const Aws::String& GetHoursOfOperationId() const{ return m_hoursOfOperationId; }
    inline bool HoursOfOperationIdHasBeenSet() const { return m_hoursOfOperationIdHasBeenSet; }
    inline void SetHoursOfOperationId(const Aws::String& value) { m_hoursOfOperationIdHasBeenSet = true; m_hoursOfOperationId = value; }
    inline void SetHoursOfOperationId(Aws::String&& value) { m_hoursOfOperationIdHasBeenSet = true; m_hoursOfOperationId = std::move(value); }
    inline void SetHoursOfOperationId(const char* value) { m_hoursOfOperationIdHasBeenSet = true; m_hoursOfOperationId.assign(value); }
    inline UpdateHoursOfOperationOverrideRequest& WithHoursOfOperationId(const Aws::String& value) { SetHoursOfOperationId(value); return *this;}
    inline UpdateHoursOfOperationOverrideRequest& WithHoursOfOperationId(Aws::String&& value) { SetHoursOfOperationId(std::move(value)); return *this;}
    inline UpdateHoursOfOperationOverrideRequest& WithHoursOfOperationId(const char* value) { SetHoursOfOperationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the hours of operation override.</p>
     */
    inline const Aws::String& GetHoursOfOperationOverrideId() const{ return m_hoursOfOperationOverrideId; }
    inline bool HoursOfOperationOverrideIdHasBeenSet() const { return m_hoursOfOperationOverrideIdHasBeenSet; }
    inline void SetHoursOfOperationOverrideId(const Aws::String& value) { m_hoursOfOperationOverrideIdHasBeenSet = true; m_hoursOfOperationOverrideId = value; }
    inline void SetHoursOfOperationOverrideId(Aws::String&& value) { m_hoursOfOperationOverrideIdHasBeenSet = true; m_hoursOfOperationOverrideId = std::move(value); }
    inline void SetHoursOfOperationOverrideId(const char* value) { m_hoursOfOperationOverrideIdHasBeenSet = true; m_hoursOfOperationOverrideId.assign(value); }
    inline UpdateHoursOfOperationOverrideRequest& WithHoursOfOperationOverrideId(const Aws::String& value) { SetHoursOfOperationOverrideId(value); return *this;}
    inline UpdateHoursOfOperationOverrideRequest& WithHoursOfOperationOverrideId(Aws::String&& value) { SetHoursOfOperationOverrideId(std::move(value)); return *this;}
    inline UpdateHoursOfOperationOverrideRequest& WithHoursOfOperationOverrideId(const char* value) { SetHoursOfOperationOverrideId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the hours of operation override.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateHoursOfOperationOverrideRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateHoursOfOperationOverrideRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateHoursOfOperationOverrideRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the hours of operation override.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateHoursOfOperationOverrideRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateHoursOfOperationOverrideRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateHoursOfOperationOverrideRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for the hours of operation override: day, start
     * time, and end time.</p>
     */
    inline const Aws::Vector<HoursOfOperationOverrideConfig>& GetConfig() const{ return m_config; }
    inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }
    inline void SetConfig(const Aws::Vector<HoursOfOperationOverrideConfig>& value) { m_configHasBeenSet = true; m_config = value; }
    inline void SetConfig(Aws::Vector<HoursOfOperationOverrideConfig>&& value) { m_configHasBeenSet = true; m_config = std::move(value); }
    inline UpdateHoursOfOperationOverrideRequest& WithConfig(const Aws::Vector<HoursOfOperationOverrideConfig>& value) { SetConfig(value); return *this;}
    inline UpdateHoursOfOperationOverrideRequest& WithConfig(Aws::Vector<HoursOfOperationOverrideConfig>&& value) { SetConfig(std::move(value)); return *this;}
    inline UpdateHoursOfOperationOverrideRequest& AddConfig(const HoursOfOperationOverrideConfig& value) { m_configHasBeenSet = true; m_config.push_back(value); return *this; }
    inline UpdateHoursOfOperationOverrideRequest& AddConfig(HoursOfOperationOverrideConfig&& value) { m_configHasBeenSet = true; m_config.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date from when the hours of operation override would be effective.</p>
     */
    inline const Aws::String& GetEffectiveFrom() const{ return m_effectiveFrom; }
    inline bool EffectiveFromHasBeenSet() const { return m_effectiveFromHasBeenSet; }
    inline void SetEffectiveFrom(const Aws::String& value) { m_effectiveFromHasBeenSet = true; m_effectiveFrom = value; }
    inline void SetEffectiveFrom(Aws::String&& value) { m_effectiveFromHasBeenSet = true; m_effectiveFrom = std::move(value); }
    inline void SetEffectiveFrom(const char* value) { m_effectiveFromHasBeenSet = true; m_effectiveFrom.assign(value); }
    inline UpdateHoursOfOperationOverrideRequest& WithEffectiveFrom(const Aws::String& value) { SetEffectiveFrom(value); return *this;}
    inline UpdateHoursOfOperationOverrideRequest& WithEffectiveFrom(Aws::String&& value) { SetEffectiveFrom(std::move(value)); return *this;}
    inline UpdateHoursOfOperationOverrideRequest& WithEffectiveFrom(const char* value) { SetEffectiveFrom(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date till when the hours of operation override would be effective.</p>
     */
    inline const Aws::String& GetEffectiveTill() const{ return m_effectiveTill; }
    inline bool EffectiveTillHasBeenSet() const { return m_effectiveTillHasBeenSet; }
    inline void SetEffectiveTill(const Aws::String& value) { m_effectiveTillHasBeenSet = true; m_effectiveTill = value; }
    inline void SetEffectiveTill(Aws::String&& value) { m_effectiveTillHasBeenSet = true; m_effectiveTill = std::move(value); }
    inline void SetEffectiveTill(const char* value) { m_effectiveTillHasBeenSet = true; m_effectiveTill.assign(value); }
    inline UpdateHoursOfOperationOverrideRequest& WithEffectiveTill(const Aws::String& value) { SetEffectiveTill(value); return *this;}
    inline UpdateHoursOfOperationOverrideRequest& WithEffectiveTill(Aws::String&& value) { SetEffectiveTill(std::move(value)); return *this;}
    inline UpdateHoursOfOperationOverrideRequest& WithEffectiveTill(const char* value) { SetEffectiveTill(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_hoursOfOperationId;
    bool m_hoursOfOperationIdHasBeenSet = false;

    Aws::String m_hoursOfOperationOverrideId;
    bool m_hoursOfOperationOverrideIdHasBeenSet = false;

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
