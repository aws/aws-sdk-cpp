/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class DeleteHoursOfOperationOverrideRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API DeleteHoursOfOperationOverrideRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteHoursOfOperationOverride"; }

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
    inline DeleteHoursOfOperationOverrideRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline DeleteHoursOfOperationOverrideRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline DeleteHoursOfOperationOverrideRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
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
    inline DeleteHoursOfOperationOverrideRequest& WithHoursOfOperationId(const Aws::String& value) { SetHoursOfOperationId(value); return *this;}
    inline DeleteHoursOfOperationOverrideRequest& WithHoursOfOperationId(Aws::String&& value) { SetHoursOfOperationId(std::move(value)); return *this;}
    inline DeleteHoursOfOperationOverrideRequest& WithHoursOfOperationId(const char* value) { SetHoursOfOperationId(value); return *this;}
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
    inline DeleteHoursOfOperationOverrideRequest& WithHoursOfOperationOverrideId(const Aws::String& value) { SetHoursOfOperationOverrideId(value); return *this;}
    inline DeleteHoursOfOperationOverrideRequest& WithHoursOfOperationOverrideId(Aws::String&& value) { SetHoursOfOperationOverrideId(std::move(value)); return *this;}
    inline DeleteHoursOfOperationOverrideRequest& WithHoursOfOperationOverrideId(const char* value) { SetHoursOfOperationOverrideId(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_hoursOfOperationId;
    bool m_hoursOfOperationIdHasBeenSet = false;

    Aws::String m_hoursOfOperationOverrideId;
    bool m_hoursOfOperationOverrideIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
