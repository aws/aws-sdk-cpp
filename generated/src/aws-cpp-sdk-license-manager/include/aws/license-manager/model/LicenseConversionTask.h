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
    AWS_LICENSEMANAGER_API LicenseConversionTask();
    AWS_LICENSEMANAGER_API LicenseConversionTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API LicenseConversionTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the license type conversion task.</p>
     */
    inline const Aws::String& GetLicenseConversionTaskId() const{ return m_licenseConversionTaskId; }
    inline bool LicenseConversionTaskIdHasBeenSet() const { return m_licenseConversionTaskIdHasBeenSet; }
    inline void SetLicenseConversionTaskId(const Aws::String& value) { m_licenseConversionTaskIdHasBeenSet = true; m_licenseConversionTaskId = value; }
    inline void SetLicenseConversionTaskId(Aws::String&& value) { m_licenseConversionTaskIdHasBeenSet = true; m_licenseConversionTaskId = std::move(value); }
    inline void SetLicenseConversionTaskId(const char* value) { m_licenseConversionTaskIdHasBeenSet = true; m_licenseConversionTaskId.assign(value); }
    inline LicenseConversionTask& WithLicenseConversionTaskId(const Aws::String& value) { SetLicenseConversionTaskId(value); return *this;}
    inline LicenseConversionTask& WithLicenseConversionTaskId(Aws::String&& value) { SetLicenseConversionTaskId(std::move(value)); return *this;}
    inline LicenseConversionTask& WithLicenseConversionTaskId(const char* value) { SetLicenseConversionTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource associated with the license
     * type conversion task.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline LicenseConversionTask& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline LicenseConversionTask& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline LicenseConversionTask& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the license type this conversion task converted from.</p>
     */
    inline const LicenseConversionContext& GetSourceLicenseContext() const{ return m_sourceLicenseContext; }
    inline bool SourceLicenseContextHasBeenSet() const { return m_sourceLicenseContextHasBeenSet; }
    inline void SetSourceLicenseContext(const LicenseConversionContext& value) { m_sourceLicenseContextHasBeenSet = true; m_sourceLicenseContext = value; }
    inline void SetSourceLicenseContext(LicenseConversionContext&& value) { m_sourceLicenseContextHasBeenSet = true; m_sourceLicenseContext = std::move(value); }
    inline LicenseConversionTask& WithSourceLicenseContext(const LicenseConversionContext& value) { SetSourceLicenseContext(value); return *this;}
    inline LicenseConversionTask& WithSourceLicenseContext(LicenseConversionContext&& value) { SetSourceLicenseContext(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the license type this conversion task converted to.</p>
     */
    inline const LicenseConversionContext& GetDestinationLicenseContext() const{ return m_destinationLicenseContext; }
    inline bool DestinationLicenseContextHasBeenSet() const { return m_destinationLicenseContextHasBeenSet; }
    inline void SetDestinationLicenseContext(const LicenseConversionContext& value) { m_destinationLicenseContextHasBeenSet = true; m_destinationLicenseContext = value; }
    inline void SetDestinationLicenseContext(LicenseConversionContext&& value) { m_destinationLicenseContextHasBeenSet = true; m_destinationLicenseContext = std::move(value); }
    inline LicenseConversionTask& WithDestinationLicenseContext(const LicenseConversionContext& value) { SetDestinationLicenseContext(value); return *this;}
    inline LicenseConversionTask& WithDestinationLicenseContext(LicenseConversionContext&& value) { SetDestinationLicenseContext(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the conversion task.</p>
     */
    inline const LicenseConversionTaskStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const LicenseConversionTaskStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(LicenseConversionTaskStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline LicenseConversionTask& WithStatus(const LicenseConversionTaskStatus& value) { SetStatus(value); return *this;}
    inline LicenseConversionTask& WithStatus(LicenseConversionTaskStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message for the conversion task.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline LicenseConversionTask& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline LicenseConversionTask& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline LicenseConversionTask& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the conversion task was started at.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline LicenseConversionTask& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline LicenseConversionTask& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the usage operation value of the resource was changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLicenseConversionTime() const{ return m_licenseConversionTime; }
    inline bool LicenseConversionTimeHasBeenSet() const { return m_licenseConversionTimeHasBeenSet; }
    inline void SetLicenseConversionTime(const Aws::Utils::DateTime& value) { m_licenseConversionTimeHasBeenSet = true; m_licenseConversionTime = value; }
    inline void SetLicenseConversionTime(Aws::Utils::DateTime&& value) { m_licenseConversionTimeHasBeenSet = true; m_licenseConversionTime = std::move(value); }
    inline LicenseConversionTask& WithLicenseConversionTime(const Aws::Utils::DateTime& value) { SetLicenseConversionTime(value); return *this;}
    inline LicenseConversionTask& WithLicenseConversionTime(Aws::Utils::DateTime&& value) { SetLicenseConversionTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the conversion task was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline LicenseConversionTask& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline LicenseConversionTask& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
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

    LicenseConversionTaskStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_licenseConversionTime;
    bool m_licenseConversionTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
