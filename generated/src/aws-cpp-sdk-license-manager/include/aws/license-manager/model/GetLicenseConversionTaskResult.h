/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/LicenseConversionContext.h>
#include <aws/license-manager/model/LicenseConversionTaskStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace LicenseManager
{
namespace Model
{
  class GetLicenseConversionTaskResult
  {
  public:
    AWS_LICENSEMANAGER_API GetLicenseConversionTaskResult();
    AWS_LICENSEMANAGER_API GetLicenseConversionTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API GetLicenseConversionTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>ID of the license type conversion task.</p>
     */
    inline const Aws::String& GetLicenseConversionTaskId() const{ return m_licenseConversionTaskId; }
    inline void SetLicenseConversionTaskId(const Aws::String& value) { m_licenseConversionTaskId = value; }
    inline void SetLicenseConversionTaskId(Aws::String&& value) { m_licenseConversionTaskId = std::move(value); }
    inline void SetLicenseConversionTaskId(const char* value) { m_licenseConversionTaskId.assign(value); }
    inline GetLicenseConversionTaskResult& WithLicenseConversionTaskId(const Aws::String& value) { SetLicenseConversionTaskId(value); return *this;}
    inline GetLicenseConversionTaskResult& WithLicenseConversionTaskId(Aws::String&& value) { SetLicenseConversionTaskId(std::move(value)); return *this;}
    inline GetLicenseConversionTaskResult& WithLicenseConversionTaskId(const char* value) { SetLicenseConversionTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Names (ARN) of the resources the license conversion task is
     * associated with.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }
    inline GetLicenseConversionTaskResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline GetLicenseConversionTaskResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline GetLicenseConversionTaskResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the license type converted from.</p>
     */
    inline const LicenseConversionContext& GetSourceLicenseContext() const{ return m_sourceLicenseContext; }
    inline void SetSourceLicenseContext(const LicenseConversionContext& value) { m_sourceLicenseContext = value; }
    inline void SetSourceLicenseContext(LicenseConversionContext&& value) { m_sourceLicenseContext = std::move(value); }
    inline GetLicenseConversionTaskResult& WithSourceLicenseContext(const LicenseConversionContext& value) { SetSourceLicenseContext(value); return *this;}
    inline GetLicenseConversionTaskResult& WithSourceLicenseContext(LicenseConversionContext&& value) { SetSourceLicenseContext(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the license type converted to.</p>
     */
    inline const LicenseConversionContext& GetDestinationLicenseContext() const{ return m_destinationLicenseContext; }
    inline void SetDestinationLicenseContext(const LicenseConversionContext& value) { m_destinationLicenseContext = value; }
    inline void SetDestinationLicenseContext(LicenseConversionContext&& value) { m_destinationLicenseContext = std::move(value); }
    inline GetLicenseConversionTaskResult& WithDestinationLicenseContext(const LicenseConversionContext& value) { SetDestinationLicenseContext(value); return *this;}
    inline GetLicenseConversionTaskResult& WithDestinationLicenseContext(LicenseConversionContext&& value) { SetDestinationLicenseContext(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message for the conversion task.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline GetLicenseConversionTaskResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline GetLicenseConversionTaskResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline GetLicenseConversionTaskResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the license type conversion task.</p>
     */
    inline const LicenseConversionTaskStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const LicenseConversionTaskStatus& value) { m_status = value; }
    inline void SetStatus(LicenseConversionTaskStatus&& value) { m_status = std::move(value); }
    inline GetLicenseConversionTaskResult& WithStatus(const LicenseConversionTaskStatus& value) { SetStatus(value); return *this;}
    inline GetLicenseConversionTaskResult& WithStatus(LicenseConversionTaskStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time at which the license type conversion task was started .</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }
    inline GetLicenseConversionTaskResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline GetLicenseConversionTaskResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amount of time to complete the license type conversion.</p>
     */
    inline const Aws::Utils::DateTime& GetLicenseConversionTime() const{ return m_licenseConversionTime; }
    inline void SetLicenseConversionTime(const Aws::Utils::DateTime& value) { m_licenseConversionTime = value; }
    inline void SetLicenseConversionTime(Aws::Utils::DateTime&& value) { m_licenseConversionTime = std::move(value); }
    inline GetLicenseConversionTaskResult& WithLicenseConversionTime(const Aws::Utils::DateTime& value) { SetLicenseConversionTime(value); return *this;}
    inline GetLicenseConversionTaskResult& WithLicenseConversionTime(Aws::Utils::DateTime&& value) { SetLicenseConversionTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time at which the license type conversion task was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }
    inline GetLicenseConversionTaskResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline GetLicenseConversionTaskResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetLicenseConversionTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetLicenseConversionTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetLicenseConversionTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_licenseConversionTaskId;

    Aws::String m_resourceArn;

    LicenseConversionContext m_sourceLicenseContext;

    LicenseConversionContext m_destinationLicenseContext;

    Aws::String m_statusMessage;

    LicenseConversionTaskStatus m_status;

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_licenseConversionTime;

    Aws::Utils::DateTime m_endTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
