/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_IOT_API CreateOTAUpdateResult
  {
  public:
    CreateOTAUpdateResult();
    CreateOTAUpdateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateOTAUpdateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The OTA update ID.</p>
     */
    inline const Aws::String& GetOtaUpdateId() const{ return m_otaUpdateId; }

    /**
     * <p>The OTA update ID.</p>
     */
    inline void SetOtaUpdateId(const Aws::String& value) { m_otaUpdateId = value; }

    /**
     * <p>The OTA update ID.</p>
     */
    inline void SetOtaUpdateId(Aws::String&& value) { m_otaUpdateId = std::move(value); }

    /**
     * <p>The OTA update ID.</p>
     */
    inline void SetOtaUpdateId(const char* value) { m_otaUpdateId.assign(value); }

    /**
     * <p>The OTA update ID.</p>
     */
    inline CreateOTAUpdateResult& WithOtaUpdateId(const Aws::String& value) { SetOtaUpdateId(value); return *this;}

    /**
     * <p>The OTA update ID.</p>
     */
    inline CreateOTAUpdateResult& WithOtaUpdateId(Aws::String&& value) { SetOtaUpdateId(std::move(value)); return *this;}

    /**
     * <p>The OTA update ID.</p>
     */
    inline CreateOTAUpdateResult& WithOtaUpdateId(const char* value) { SetOtaUpdateId(value); return *this;}


    /**
     * <p>The AWS IoT job ID associated with the OTA update.</p>
     */
    inline const Aws::String& GetAwsIotJobId() const{ return m_awsIotJobId; }

    /**
     * <p>The AWS IoT job ID associated with the OTA update.</p>
     */
    inline void SetAwsIotJobId(const Aws::String& value) { m_awsIotJobId = value; }

    /**
     * <p>The AWS IoT job ID associated with the OTA update.</p>
     */
    inline void SetAwsIotJobId(Aws::String&& value) { m_awsIotJobId = std::move(value); }

    /**
     * <p>The AWS IoT job ID associated with the OTA update.</p>
     */
    inline void SetAwsIotJobId(const char* value) { m_awsIotJobId.assign(value); }

    /**
     * <p>The AWS IoT job ID associated with the OTA update.</p>
     */
    inline CreateOTAUpdateResult& WithAwsIotJobId(const Aws::String& value) { SetAwsIotJobId(value); return *this;}

    /**
     * <p>The AWS IoT job ID associated with the OTA update.</p>
     */
    inline CreateOTAUpdateResult& WithAwsIotJobId(Aws::String&& value) { SetAwsIotJobId(std::move(value)); return *this;}

    /**
     * <p>The AWS IoT job ID associated with the OTA update.</p>
     */
    inline CreateOTAUpdateResult& WithAwsIotJobId(const char* value) { SetAwsIotJobId(value); return *this;}


    /**
     * <p>The OTA update ARN.</p>
     */
    inline const Aws::String& GetOtaUpdateArn() const{ return m_otaUpdateArn; }

    /**
     * <p>The OTA update ARN.</p>
     */
    inline void SetOtaUpdateArn(const Aws::String& value) { m_otaUpdateArn = value; }

    /**
     * <p>The OTA update ARN.</p>
     */
    inline void SetOtaUpdateArn(Aws::String&& value) { m_otaUpdateArn = std::move(value); }

    /**
     * <p>The OTA update ARN.</p>
     */
    inline void SetOtaUpdateArn(const char* value) { m_otaUpdateArn.assign(value); }

    /**
     * <p>The OTA update ARN.</p>
     */
    inline CreateOTAUpdateResult& WithOtaUpdateArn(const Aws::String& value) { SetOtaUpdateArn(value); return *this;}

    /**
     * <p>The OTA update ARN.</p>
     */
    inline CreateOTAUpdateResult& WithOtaUpdateArn(Aws::String&& value) { SetOtaUpdateArn(std::move(value)); return *this;}

    /**
     * <p>The OTA update ARN.</p>
     */
    inline CreateOTAUpdateResult& WithOtaUpdateArn(const char* value) { SetOtaUpdateArn(value); return *this;}


    /**
     * <p>The AWS IoT job ARN associated with the OTA update.</p>
     */
    inline const Aws::String& GetAwsIotJobArn() const{ return m_awsIotJobArn; }

    /**
     * <p>The AWS IoT job ARN associated with the OTA update.</p>
     */
    inline void SetAwsIotJobArn(const Aws::String& value) { m_awsIotJobArn = value; }

    /**
     * <p>The AWS IoT job ARN associated with the OTA update.</p>
     */
    inline void SetAwsIotJobArn(Aws::String&& value) { m_awsIotJobArn = std::move(value); }

    /**
     * <p>The AWS IoT job ARN associated with the OTA update.</p>
     */
    inline void SetAwsIotJobArn(const char* value) { m_awsIotJobArn.assign(value); }

    /**
     * <p>The AWS IoT job ARN associated with the OTA update.</p>
     */
    inline CreateOTAUpdateResult& WithAwsIotJobArn(const Aws::String& value) { SetAwsIotJobArn(value); return *this;}

    /**
     * <p>The AWS IoT job ARN associated with the OTA update.</p>
     */
    inline CreateOTAUpdateResult& WithAwsIotJobArn(Aws::String&& value) { SetAwsIotJobArn(std::move(value)); return *this;}

    /**
     * <p>The AWS IoT job ARN associated with the OTA update.</p>
     */
    inline CreateOTAUpdateResult& WithAwsIotJobArn(const char* value) { SetAwsIotJobArn(value); return *this;}


    /**
     * <p>The OTA update status.</p>
     */
    inline const OTAUpdateStatus& GetOtaUpdateStatus() const{ return m_otaUpdateStatus; }

    /**
     * <p>The OTA update status.</p>
     */
    inline void SetOtaUpdateStatus(const OTAUpdateStatus& value) { m_otaUpdateStatus = value; }

    /**
     * <p>The OTA update status.</p>
     */
    inline void SetOtaUpdateStatus(OTAUpdateStatus&& value) { m_otaUpdateStatus = std::move(value); }

    /**
     * <p>The OTA update status.</p>
     */
    inline CreateOTAUpdateResult& WithOtaUpdateStatus(const OTAUpdateStatus& value) { SetOtaUpdateStatus(value); return *this;}

    /**
     * <p>The OTA update status.</p>
     */
    inline CreateOTAUpdateResult& WithOtaUpdateStatus(OTAUpdateStatus&& value) { SetOtaUpdateStatus(std::move(value)); return *this;}

  private:

    Aws::String m_otaUpdateId;

    Aws::String m_awsIotJobId;

    Aws::String m_otaUpdateArn;

    Aws::String m_awsIotJobArn;

    OTAUpdateStatus m_otaUpdateStatus;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
