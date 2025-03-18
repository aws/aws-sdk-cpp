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
    AWS_LICENSEMANAGER_API GetLicenseConversionTaskResult() = default;
    AWS_LICENSEMANAGER_API GetLicenseConversionTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API GetLicenseConversionTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>ID of the license type conversion task.</p>
     */
    inline const Aws::String& GetLicenseConversionTaskId() const { return m_licenseConversionTaskId; }
    template<typename LicenseConversionTaskIdT = Aws::String>
    void SetLicenseConversionTaskId(LicenseConversionTaskIdT&& value) { m_licenseConversionTaskIdHasBeenSet = true; m_licenseConversionTaskId = std::forward<LicenseConversionTaskIdT>(value); }
    template<typename LicenseConversionTaskIdT = Aws::String>
    GetLicenseConversionTaskResult& WithLicenseConversionTaskId(LicenseConversionTaskIdT&& value) { SetLicenseConversionTaskId(std::forward<LicenseConversionTaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Names (ARN) of the resources the license conversion task is
     * associated with.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    GetLicenseConversionTaskResult& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the license type converted from.</p>
     */
    inline const LicenseConversionContext& GetSourceLicenseContext() const { return m_sourceLicenseContext; }
    template<typename SourceLicenseContextT = LicenseConversionContext>
    void SetSourceLicenseContext(SourceLicenseContextT&& value) { m_sourceLicenseContextHasBeenSet = true; m_sourceLicenseContext = std::forward<SourceLicenseContextT>(value); }
    template<typename SourceLicenseContextT = LicenseConversionContext>
    GetLicenseConversionTaskResult& WithSourceLicenseContext(SourceLicenseContextT&& value) { SetSourceLicenseContext(std::forward<SourceLicenseContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the license type converted to.</p>
     */
    inline const LicenseConversionContext& GetDestinationLicenseContext() const { return m_destinationLicenseContext; }
    template<typename DestinationLicenseContextT = LicenseConversionContext>
    void SetDestinationLicenseContext(DestinationLicenseContextT&& value) { m_destinationLicenseContextHasBeenSet = true; m_destinationLicenseContext = std::forward<DestinationLicenseContextT>(value); }
    template<typename DestinationLicenseContextT = LicenseConversionContext>
    GetLicenseConversionTaskResult& WithDestinationLicenseContext(DestinationLicenseContextT&& value) { SetDestinationLicenseContext(std::forward<DestinationLicenseContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message for the conversion task.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    GetLicenseConversionTaskResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the license type conversion task.</p>
     */
    inline LicenseConversionTaskStatus GetStatus() const { return m_status; }
    inline void SetStatus(LicenseConversionTaskStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetLicenseConversionTaskResult& WithStatus(LicenseConversionTaskStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time at which the license type conversion task was started .</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    GetLicenseConversionTaskResult& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amount of time to complete the license type conversion.</p>
     */
    inline const Aws::Utils::DateTime& GetLicenseConversionTime() const { return m_licenseConversionTime; }
    template<typename LicenseConversionTimeT = Aws::Utils::DateTime>
    void SetLicenseConversionTime(LicenseConversionTimeT&& value) { m_licenseConversionTimeHasBeenSet = true; m_licenseConversionTime = std::forward<LicenseConversionTimeT>(value); }
    template<typename LicenseConversionTimeT = Aws::Utils::DateTime>
    GetLicenseConversionTaskResult& WithLicenseConversionTime(LicenseConversionTimeT&& value) { SetLicenseConversionTime(std::forward<LicenseConversionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time at which the license type conversion task was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetLicenseConversionTaskResult& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetLicenseConversionTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_licenseConversionTaskId;
    bool m_licenseConversionTaskIdHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    LicenseConversionContext m_sourceLicenseContext;
    bool m_sourceLicenseContextHasBeenSet = false;

    LicenseConversionContext m_destinationLicenseContext;
    bool m_destinationLicenseContextHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    LicenseConversionTaskStatus m_status{LicenseConversionTaskStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_licenseConversionTime{};
    bool m_licenseConversionTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
