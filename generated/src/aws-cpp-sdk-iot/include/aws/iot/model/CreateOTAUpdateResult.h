/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/OTAUpdateStatus.h>
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
  class CreateOTAUpdateResult
  {
  public:
    AWS_IOT_API CreateOTAUpdateResult() = default;
    AWS_IOT_API CreateOTAUpdateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreateOTAUpdateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The OTA update ID.</p>
     */
    inline const Aws::String& GetOtaUpdateId() const { return m_otaUpdateId; }
    template<typename OtaUpdateIdT = Aws::String>
    void SetOtaUpdateId(OtaUpdateIdT&& value) { m_otaUpdateIdHasBeenSet = true; m_otaUpdateId = std::forward<OtaUpdateIdT>(value); }
    template<typename OtaUpdateIdT = Aws::String>
    CreateOTAUpdateResult& WithOtaUpdateId(OtaUpdateIdT&& value) { SetOtaUpdateId(std::forward<OtaUpdateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IoT job ID associated with the OTA update.</p>
     */
    inline const Aws::String& GetAwsIotJobId() const { return m_awsIotJobId; }
    template<typename AwsIotJobIdT = Aws::String>
    void SetAwsIotJobId(AwsIotJobIdT&& value) { m_awsIotJobIdHasBeenSet = true; m_awsIotJobId = std::forward<AwsIotJobIdT>(value); }
    template<typename AwsIotJobIdT = Aws::String>
    CreateOTAUpdateResult& WithAwsIotJobId(AwsIotJobIdT&& value) { SetAwsIotJobId(std::forward<AwsIotJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OTA update ARN.</p>
     */
    inline const Aws::String& GetOtaUpdateArn() const { return m_otaUpdateArn; }
    template<typename OtaUpdateArnT = Aws::String>
    void SetOtaUpdateArn(OtaUpdateArnT&& value) { m_otaUpdateArnHasBeenSet = true; m_otaUpdateArn = std::forward<OtaUpdateArnT>(value); }
    template<typename OtaUpdateArnT = Aws::String>
    CreateOTAUpdateResult& WithOtaUpdateArn(OtaUpdateArnT&& value) { SetOtaUpdateArn(std::forward<OtaUpdateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IoT job ARN associated with the OTA update.</p>
     */
    inline const Aws::String& GetAwsIotJobArn() const { return m_awsIotJobArn; }
    template<typename AwsIotJobArnT = Aws::String>
    void SetAwsIotJobArn(AwsIotJobArnT&& value) { m_awsIotJobArnHasBeenSet = true; m_awsIotJobArn = std::forward<AwsIotJobArnT>(value); }
    template<typename AwsIotJobArnT = Aws::String>
    CreateOTAUpdateResult& WithAwsIotJobArn(AwsIotJobArnT&& value) { SetAwsIotJobArn(std::forward<AwsIotJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OTA update status.</p>
     */
    inline OTAUpdateStatus GetOtaUpdateStatus() const { return m_otaUpdateStatus; }
    inline void SetOtaUpdateStatus(OTAUpdateStatus value) { m_otaUpdateStatusHasBeenSet = true; m_otaUpdateStatus = value; }
    inline CreateOTAUpdateResult& WithOtaUpdateStatus(OTAUpdateStatus value) { SetOtaUpdateStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateOTAUpdateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_otaUpdateId;
    bool m_otaUpdateIdHasBeenSet = false;

    Aws::String m_awsIotJobId;
    bool m_awsIotJobIdHasBeenSet = false;

    Aws::String m_otaUpdateArn;
    bool m_otaUpdateArnHasBeenSet = false;

    Aws::String m_awsIotJobArn;
    bool m_awsIotJobArnHasBeenSet = false;

    OTAUpdateStatus m_otaUpdateStatus{OTAUpdateStatus::NOT_SET};
    bool m_otaUpdateStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
