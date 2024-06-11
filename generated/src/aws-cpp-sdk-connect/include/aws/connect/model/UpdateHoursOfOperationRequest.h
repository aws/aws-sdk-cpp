/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/HoursOfOperationConfig.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class UpdateHoursOfOperationRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateHoursOfOperationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateHoursOfOperation"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline UpdateHoursOfOperationRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline UpdateHoursOfOperationRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline UpdateHoursOfOperationRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the hours of operation.</p>
     */
    inline const Aws::String& GetHoursOfOperationId() const{ return m_hoursOfOperationId; }
    inline bool HoursOfOperationIdHasBeenSet() const { return m_hoursOfOperationIdHasBeenSet; }
    inline void SetHoursOfOperationId(const Aws::String& value) { m_hoursOfOperationIdHasBeenSet = true; m_hoursOfOperationId = value; }
    inline void SetHoursOfOperationId(Aws::String&& value) { m_hoursOfOperationIdHasBeenSet = true; m_hoursOfOperationId = std::move(value); }
    inline void SetHoursOfOperationId(const char* value) { m_hoursOfOperationIdHasBeenSet = true; m_hoursOfOperationId.assign(value); }
    inline UpdateHoursOfOperationRequest& WithHoursOfOperationId(const Aws::String& value) { SetHoursOfOperationId(value); return *this;}
    inline UpdateHoursOfOperationRequest& WithHoursOfOperationId(Aws::String&& value) { SetHoursOfOperationId(std::move(value)); return *this;}
    inline UpdateHoursOfOperationRequest& WithHoursOfOperationId(const char* value) { SetHoursOfOperationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the hours of operation.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateHoursOfOperationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateHoursOfOperationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateHoursOfOperationRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the hours of operation.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateHoursOfOperationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateHoursOfOperationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateHoursOfOperationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone of the hours of operation.</p>
     */
    inline const Aws::String& GetTimeZone() const{ return m_timeZone; }
    inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }
    inline void SetTimeZone(const Aws::String& value) { m_timeZoneHasBeenSet = true; m_timeZone = value; }
    inline void SetTimeZone(Aws::String&& value) { m_timeZoneHasBeenSet = true; m_timeZone = std::move(value); }
    inline void SetTimeZone(const char* value) { m_timeZoneHasBeenSet = true; m_timeZone.assign(value); }
    inline UpdateHoursOfOperationRequest& WithTimeZone(const Aws::String& value) { SetTimeZone(value); return *this;}
    inline UpdateHoursOfOperationRequest& WithTimeZone(Aws::String&& value) { SetTimeZone(std::move(value)); return *this;}
    inline UpdateHoursOfOperationRequest& WithTimeZone(const char* value) { SetTimeZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information of the hours of operation.</p>
     */
    inline const Aws::Vector<HoursOfOperationConfig>& GetConfig() const{ return m_config; }
    inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }
    inline void SetConfig(const Aws::Vector<HoursOfOperationConfig>& value) { m_configHasBeenSet = true; m_config = value; }
    inline void SetConfig(Aws::Vector<HoursOfOperationConfig>&& value) { m_configHasBeenSet = true; m_config = std::move(value); }
    inline UpdateHoursOfOperationRequest& WithConfig(const Aws::Vector<HoursOfOperationConfig>& value) { SetConfig(value); return *this;}
    inline UpdateHoursOfOperationRequest& WithConfig(Aws::Vector<HoursOfOperationConfig>&& value) { SetConfig(std::move(value)); return *this;}
    inline UpdateHoursOfOperationRequest& AddConfig(const HoursOfOperationConfig& value) { m_configHasBeenSet = true; m_config.push_back(value); return *this; }
    inline UpdateHoursOfOperationRequest& AddConfig(HoursOfOperationConfig&& value) { m_configHasBeenSet = true; m_config.push_back(std::move(value)); return *this; }
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

    Aws::String m_timeZone;
    bool m_timeZoneHasBeenSet = false;

    Aws::Vector<HoursOfOperationConfig> m_config;
    bool m_configHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
