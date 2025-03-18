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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LicenseManager
{
namespace Model
{

  /**
   * <p>Information about a license type conversion task.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/LicenseConversionTask">AWS
   * API Reference</a></p>
   */
  class LicenseConversionTask
  {
  public:
    AWS_LICENSEMANAGER_API LicenseConversionTask() = default;
    AWS_LICENSEMANAGER_API LicenseConversionTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API LicenseConversionTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the license type conversion task.</p>
     */
    inline const Aws::String& GetLicenseConversionTaskId() const { return m_licenseConversionTaskId; }
    inline bool LicenseConversionTaskIdHasBeenSet() const { return m_licenseConversionTaskIdHasBeenSet; }
    template<typename LicenseConversionTaskIdT = Aws::String>
    void SetLicenseConversionTaskId(LicenseConversionTaskIdT&& value) { m_licenseConversionTaskIdHasBeenSet = true; m_licenseConversionTaskId = std::forward<LicenseConversionTaskIdT>(value); }
    template<typename LicenseConversionTaskIdT = Aws::String>
    LicenseConversionTask& WithLicenseConversionTaskId(LicenseConversionTaskIdT&& value) { SetLicenseConversionTaskId(std::forward<LicenseConversionTaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource associated with the license
     * type conversion task.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    LicenseConversionTask& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the license type this conversion task converted from.</p>
     */
    inline const LicenseConversionContext& GetSourceLicenseContext() const { return m_sourceLicenseContext; }
    inline bool SourceLicenseContextHasBeenSet() const { return m_sourceLicenseContextHasBeenSet; }
    template<typename SourceLicenseContextT = LicenseConversionContext>
    void SetSourceLicenseContext(SourceLicenseContextT&& value) { m_sourceLicenseContextHasBeenSet = true; m_sourceLicenseContext = std::forward<SourceLicenseContextT>(value); }
    template<typename SourceLicenseContextT = LicenseConversionContext>
    LicenseConversionTask& WithSourceLicenseContext(SourceLicenseContextT&& value) { SetSourceLicenseContext(std::forward<SourceLicenseContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the license type this conversion task converted to.</p>
     */
    inline const LicenseConversionContext& GetDestinationLicenseContext() const { return m_destinationLicenseContext; }
    inline bool DestinationLicenseContextHasBeenSet() const { return m_destinationLicenseContextHasBeenSet; }
    template<typename DestinationLicenseContextT = LicenseConversionContext>
    void SetDestinationLicenseContext(DestinationLicenseContextT&& value) { m_destinationLicenseContextHasBeenSet = true; m_destinationLicenseContext = std::forward<DestinationLicenseContextT>(value); }
    template<typename DestinationLicenseContextT = LicenseConversionContext>
    LicenseConversionTask& WithDestinationLicenseContext(DestinationLicenseContextT&& value) { SetDestinationLicenseContext(std::forward<DestinationLicenseContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the conversion task.</p>
     */
    inline LicenseConversionTaskStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(LicenseConversionTaskStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline LicenseConversionTask& WithStatus(LicenseConversionTaskStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message for the conversion task.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    LicenseConversionTask& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the conversion task was started at.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    LicenseConversionTask& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the usage operation value of the resource was changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLicenseConversionTime() const { return m_licenseConversionTime; }
    inline bool LicenseConversionTimeHasBeenSet() const { return m_licenseConversionTimeHasBeenSet; }
    template<typename LicenseConversionTimeT = Aws::Utils::DateTime>
    void SetLicenseConversionTime(LicenseConversionTimeT&& value) { m_licenseConversionTimeHasBeenSet = true; m_licenseConversionTime = std::forward<LicenseConversionTimeT>(value); }
    template<typename LicenseConversionTimeT = Aws::Utils::DateTime>
    LicenseConversionTask& WithLicenseConversionTime(LicenseConversionTimeT&& value) { SetLicenseConversionTime(std::forward<LicenseConversionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the conversion task was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    LicenseConversionTask& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
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

    LicenseConversionTaskStatus m_status{LicenseConversionTaskStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_licenseConversionTime{};
    bool m_licenseConversionTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
