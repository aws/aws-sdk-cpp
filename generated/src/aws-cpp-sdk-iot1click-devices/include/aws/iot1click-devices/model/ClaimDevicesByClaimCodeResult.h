/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-devices/IoT1ClickDevicesService_EXPORTS.h>
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
namespace IoT1ClickDevicesService
{
namespace Model
{
  class ClaimDevicesByClaimCodeResult
  {
  public:
    AWS_IOT1CLICKDEVICESSERVICE_API ClaimDevicesByClaimCodeResult() = default;
    AWS_IOT1CLICKDEVICESSERVICE_API ClaimDevicesByClaimCodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT1CLICKDEVICESSERVICE_API ClaimDevicesByClaimCodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The claim code provided by the device manufacturer.</p>
     */
    inline const Aws::String& GetClaimCode() const { return m_claimCode; }
    template<typename ClaimCodeT = Aws::String>
    void SetClaimCode(ClaimCodeT&& value) { m_claimCodeHasBeenSet = true; m_claimCode = std::forward<ClaimCodeT>(value); }
    template<typename ClaimCodeT = Aws::String>
    ClaimDevicesByClaimCodeResult& WithClaimCode(ClaimCodeT&& value) { SetClaimCode(std::forward<ClaimCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of devices associated with the claim code that has been
     * processed in
 the claim request.</p>
     */
    inline int GetTotal() const { return m_total; }
    inline void SetTotal(int value) { m_totalHasBeenSet = true; m_total = value; }
    inline ClaimDevicesByClaimCodeResult& WithTotal(int value) { SetTotal(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ClaimDevicesByClaimCodeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_claimCode;
    bool m_claimCodeHasBeenSet = false;

    int m_total{0};
    bool m_totalHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
