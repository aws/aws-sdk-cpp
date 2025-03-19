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
    AWS_CONNECT_API DeleteHoursOfOperationOverrideRequest() = default;

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
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    DeleteHoursOfOperationOverrideRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline const Aws::String& GetHoursOfOperationId() const { return m_hoursOfOperationId; }
    inline bool HoursOfOperationIdHasBeenSet() const { return m_hoursOfOperationIdHasBeenSet; }
    template<typename HoursOfOperationIdT = Aws::String>
    void SetHoursOfOperationId(HoursOfOperationIdT&& value) { m_hoursOfOperationIdHasBeenSet = true; m_hoursOfOperationId = std::forward<HoursOfOperationIdT>(value); }
    template<typename HoursOfOperationIdT = Aws::String>
    DeleteHoursOfOperationOverrideRequest& WithHoursOfOperationId(HoursOfOperationIdT&& value) { SetHoursOfOperationId(std::forward<HoursOfOperationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the hours of operation override.</p>
     */
    inline const Aws::String& GetHoursOfOperationOverrideId() const { return m_hoursOfOperationOverrideId; }
    inline bool HoursOfOperationOverrideIdHasBeenSet() const { return m_hoursOfOperationOverrideIdHasBeenSet; }
    template<typename HoursOfOperationOverrideIdT = Aws::String>
    void SetHoursOfOperationOverrideId(HoursOfOperationOverrideIdT&& value) { m_hoursOfOperationOverrideIdHasBeenSet = true; m_hoursOfOperationOverrideId = std::forward<HoursOfOperationOverrideIdT>(value); }
    template<typename HoursOfOperationOverrideIdT = Aws::String>
    DeleteHoursOfOperationOverrideRequest& WithHoursOfOperationOverrideId(HoursOfOperationOverrideIdT&& value) { SetHoursOfOperationOverrideId(std::forward<HoursOfOperationOverrideIdT>(value)); return *this;}
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
