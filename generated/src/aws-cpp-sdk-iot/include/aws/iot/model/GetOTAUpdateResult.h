/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/OTAUpdateInfo.h>
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
namespace IoT
{
namespace Model
{
  class GetOTAUpdateResult
  {
  public:
    AWS_IOT_API GetOTAUpdateResult() = default;
    AWS_IOT_API GetOTAUpdateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetOTAUpdateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The OTA update info.</p>
     */
    inline const OTAUpdateInfo& GetOtaUpdateInfo() const { return m_otaUpdateInfo; }
    template<typename OtaUpdateInfoT = OTAUpdateInfo>
    void SetOtaUpdateInfo(OtaUpdateInfoT&& value) { m_otaUpdateInfoHasBeenSet = true; m_otaUpdateInfo = std::forward<OtaUpdateInfoT>(value); }
    template<typename OtaUpdateInfoT = OTAUpdateInfo>
    GetOTAUpdateResult& WithOtaUpdateInfo(OtaUpdateInfoT&& value) { SetOtaUpdateInfo(std::forward<OtaUpdateInfoT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetOTAUpdateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    OTAUpdateInfo m_otaUpdateInfo;
    bool m_otaUpdateInfoHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
