/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
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
  class PutHubConfigurationResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API PutHubConfigurationResult() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API PutHubConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API PutHubConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A user-defined integer value that represents the hub token timer expiry
     * setting in seconds.</p>
     */
    inline long long GetHubTokenTimerExpirySettingInSeconds() const { return m_hubTokenTimerExpirySettingInSeconds; }
    inline void SetHubTokenTimerExpirySettingInSeconds(long long value) { m_hubTokenTimerExpirySettingInSecondsHasBeenSet = true; m_hubTokenTimerExpirySettingInSeconds = value; }
    inline PutHubConfigurationResult& WithHubTokenTimerExpirySettingInSeconds(long long value) { SetHubTokenTimerExpirySettingInSeconds(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutHubConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    long long m_hubTokenTimerExpirySettingInSeconds{0};
    bool m_hubTokenTimerExpirySettingInSecondsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
