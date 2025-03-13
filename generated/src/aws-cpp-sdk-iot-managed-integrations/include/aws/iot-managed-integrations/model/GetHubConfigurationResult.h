/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTManagedIntegrations
{
namespace Model
{
  class GetHubConfigurationResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API GetHubConfigurationResult() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API GetHubConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API GetHubConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A user-defined integer value that represents the hub token timer expiry
     * setting in seconds.</p>
     */
    inline long long GetHubTokenTimerExpirySettingInSeconds() const { return m_hubTokenTimerExpirySettingInSeconds; }
    inline void SetHubTokenTimerExpirySettingInSeconds(long long value) { m_hubTokenTimerExpirySettingInSecondsHasBeenSet = true; m_hubTokenTimerExpirySettingInSeconds = value; }
    inline GetHubConfigurationResult& WithHubTokenTimerExpirySettingInSeconds(long long value) { SetHubTokenTimerExpirySettingInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp value of when the hub configuration was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetHubConfigurationResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetHubConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    long long m_hubTokenTimerExpirySettingInSeconds{0};
    bool m_hubTokenTimerExpirySettingInSecondsHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
