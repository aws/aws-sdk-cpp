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
    AWS_IOT_API CreateOTAUpdateResult();
    AWS_IOT_API CreateOTAUpdateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreateOTAUpdateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The OTA update ID.</p>
     */
    inline const Aws::String& GetOtaUpdateId() const{ return m_otaUpdateId; }
    inline void SetOtaUpdateId(const Aws::String& value) { m_otaUpdateId = value; }
    inline void SetOtaUpdateId(Aws::String&& value) { m_otaUpdateId = std::move(value); }
    inline void SetOtaUpdateId(const char* value) { m_otaUpdateId.assign(value); }
    inline CreateOTAUpdateResult& WithOtaUpdateId(const Aws::String& value) { SetOtaUpdateId(value); return *this;}
    inline CreateOTAUpdateResult& WithOtaUpdateId(Aws::String&& value) { SetOtaUpdateId(std::move(value)); return *this;}
    inline CreateOTAUpdateResult& WithOtaUpdateId(const char* value) { SetOtaUpdateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IoT job ID associated with the OTA update.</p>
     */
    inline const Aws::String& GetAwsIotJobId() const{ return m_awsIotJobId; }
    inline void SetAwsIotJobId(const Aws::String& value) { m_awsIotJobId = value; }
    inline void SetAwsIotJobId(Aws::String&& value) { m_awsIotJobId = std::move(value); }
    inline void SetAwsIotJobId(const char* value) { m_awsIotJobId.assign(value); }
    inline CreateOTAUpdateResult& WithAwsIotJobId(const Aws::String& value) { SetAwsIotJobId(value); return *this;}
    inline CreateOTAUpdateResult& WithAwsIotJobId(Aws::String&& value) { SetAwsIotJobId(std::move(value)); return *this;}
    inline CreateOTAUpdateResult& WithAwsIotJobId(const char* value) { SetAwsIotJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OTA update ARN.</p>
     */
    inline const Aws::String& GetOtaUpdateArn() const{ return m_otaUpdateArn; }
    inline void SetOtaUpdateArn(const Aws::String& value) { m_otaUpdateArn = value; }
    inline void SetOtaUpdateArn(Aws::String&& value) { m_otaUpdateArn = std::move(value); }
    inline void SetOtaUpdateArn(const char* value) { m_otaUpdateArn.assign(value); }
    inline CreateOTAUpdateResult& WithOtaUpdateArn(const Aws::String& value) { SetOtaUpdateArn(value); return *this;}
    inline CreateOTAUpdateResult& WithOtaUpdateArn(Aws::String&& value) { SetOtaUpdateArn(std::move(value)); return *this;}
    inline CreateOTAUpdateResult& WithOtaUpdateArn(const char* value) { SetOtaUpdateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IoT job ARN associated with the OTA update.</p>
     */
    inline const Aws::String& GetAwsIotJobArn() const{ return m_awsIotJobArn; }
    inline void SetAwsIotJobArn(const Aws::String& value) { m_awsIotJobArn = value; }
    inline void SetAwsIotJobArn(Aws::String&& value) { m_awsIotJobArn = std::move(value); }
    inline void SetAwsIotJobArn(const char* value) { m_awsIotJobArn.assign(value); }
    inline CreateOTAUpdateResult& WithAwsIotJobArn(const Aws::String& value) { SetAwsIotJobArn(value); return *this;}
    inline CreateOTAUpdateResult& WithAwsIotJobArn(Aws::String&& value) { SetAwsIotJobArn(std::move(value)); return *this;}
    inline CreateOTAUpdateResult& WithAwsIotJobArn(const char* value) { SetAwsIotJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OTA update status.</p>
     */
    inline const OTAUpdateStatus& GetOtaUpdateStatus() const{ return m_otaUpdateStatus; }
    inline void SetOtaUpdateStatus(const OTAUpdateStatus& value) { m_otaUpdateStatus = value; }
    inline void SetOtaUpdateStatus(OTAUpdateStatus&& value) { m_otaUpdateStatus = std::move(value); }
    inline CreateOTAUpdateResult& WithOtaUpdateStatus(const OTAUpdateStatus& value) { SetOtaUpdateStatus(value); return *this;}
    inline CreateOTAUpdateResult& WithOtaUpdateStatus(OTAUpdateStatus&& value) { SetOtaUpdateStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateOTAUpdateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateOTAUpdateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateOTAUpdateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_otaUpdateId;

    Aws::String m_awsIotJobId;

    Aws::String m_otaUpdateArn;

    Aws::String m_awsIotJobArn;

    OTAUpdateStatus m_otaUpdateStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
