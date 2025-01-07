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
namespace Http
{
    class URI;
} //namespace Http
namespace Connect
{
namespace Model
{

  /**
   */
  class GetEffectiveHoursOfOperationsRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API GetEffectiveHoursOfOperationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEffectiveHoursOfOperations"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;

    AWS_CONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline GetEffectiveHoursOfOperationsRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline GetEffectiveHoursOfOperationsRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline GetEffectiveHoursOfOperationsRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
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
    inline GetEffectiveHoursOfOperationsRequest& WithHoursOfOperationId(const Aws::String& value) { SetHoursOfOperationId(value); return *this;}
    inline GetEffectiveHoursOfOperationsRequest& WithHoursOfOperationId(Aws::String&& value) { SetHoursOfOperationId(std::move(value)); return *this;}
    inline GetEffectiveHoursOfOperationsRequest& WithHoursOfOperationId(const char* value) { SetHoursOfOperationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Date from when the hours of operation are listed.</p>
     */
    inline const Aws::String& GetFromDate() const{ return m_fromDate; }
    inline bool FromDateHasBeenSet() const { return m_fromDateHasBeenSet; }
    inline void SetFromDate(const Aws::String& value) { m_fromDateHasBeenSet = true; m_fromDate = value; }
    inline void SetFromDate(Aws::String&& value) { m_fromDateHasBeenSet = true; m_fromDate = std::move(value); }
    inline void SetFromDate(const char* value) { m_fromDateHasBeenSet = true; m_fromDate.assign(value); }
    inline GetEffectiveHoursOfOperationsRequest& WithFromDate(const Aws::String& value) { SetFromDate(value); return *this;}
    inline GetEffectiveHoursOfOperationsRequest& WithFromDate(Aws::String&& value) { SetFromDate(std::move(value)); return *this;}
    inline GetEffectiveHoursOfOperationsRequest& WithFromDate(const char* value) { SetFromDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Date until when the hours of operation are listed.</p>
     */
    inline const Aws::String& GetToDate() const{ return m_toDate; }
    inline bool ToDateHasBeenSet() const { return m_toDateHasBeenSet; }
    inline void SetToDate(const Aws::String& value) { m_toDateHasBeenSet = true; m_toDate = value; }
    inline void SetToDate(Aws::String&& value) { m_toDateHasBeenSet = true; m_toDate = std::move(value); }
    inline void SetToDate(const char* value) { m_toDateHasBeenSet = true; m_toDate.assign(value); }
    inline GetEffectiveHoursOfOperationsRequest& WithToDate(const Aws::String& value) { SetToDate(value); return *this;}
    inline GetEffectiveHoursOfOperationsRequest& WithToDate(Aws::String&& value) { SetToDate(std::move(value)); return *this;}
    inline GetEffectiveHoursOfOperationsRequest& WithToDate(const char* value) { SetToDate(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_hoursOfOperationId;
    bool m_hoursOfOperationIdHasBeenSet = false;

    Aws::String m_fromDate;
    bool m_fromDateHasBeenSet = false;

    Aws::String m_toDate;
    bool m_toDateHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
