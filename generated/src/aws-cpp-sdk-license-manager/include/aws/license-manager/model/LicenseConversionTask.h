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


    /**
     * <p>The ID of the license type conversion task.</p>
     */
    inline const Aws::String& GetLicenseConversionTaskId() const{ return m_licenseConversionTaskId; }

    /**
     * <p>The ID of the license type conversion task.</p>
     */
    inline bool LicenseConversionTaskIdHasBeenSet() const { return m_licenseConversionTaskIdHasBeenSet; }

    /**
     * <p>The ID of the license type conversion task.</p>
     */
    inline void SetLicenseConversionTaskId(const Aws::String& value) { m_licenseConversionTaskIdHasBeenSet = true; m_licenseConversionTaskId = value; }

    /**
     * <p>The ID of the license type conversion task.</p>
     */
    inline void SetLicenseConversionTaskId(Aws::String&& value) { m_licenseConversionTaskIdHasBeenSet = true; m_licenseConversionTaskId = std::move(value); }

    /**
     * <p>The ID of the license type conversion task.</p>
     */
    inline void SetLicenseConversionTaskId(const char* value) { m_licenseConversionTaskIdHasBeenSet = true; m_licenseConversionTaskId.assign(value); }

    /**
     * <p>The ID of the license type conversion task.</p>
     */
    inline LicenseConversionTask& WithLicenseConversionTaskId(const Aws::String& value) { SetLicenseConversionTaskId(value); return *this;}

    /**
     * <p>The ID of the license type conversion task.</p>
     */
    inline LicenseConversionTask& WithLicenseConversionTaskId(Aws::String&& value) { SetLicenseConversionTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the license type conversion task.</p>
     */
    inline LicenseConversionTask& WithLicenseConversionTaskId(const char* value) { SetLicenseConversionTaskId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the resource associated with the license
     * type conversion task.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource associated with the license
     * type conversion task.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource associated with the license
     * type conversion task.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource associated with the license
     * type conversion task.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource associated with the license
     * type conversion task.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource associated with the license
     * type conversion task.</p>
     */
    inline LicenseConversionTask& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource associated with the license
     * type conversion task.</p>
     */
    inline LicenseConversionTask& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource associated with the license
     * type conversion task.</p>
     */
    inline LicenseConversionTask& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>Information about the license type this conversion task converted from.</p>
     */
    inline const LicenseConversionContext& GetSourceLicenseContext() const{ return m_sourceLicenseContext; }

    /**
     * <p>Information about the license type this conversion task converted from.</p>
     */
    inline bool SourceLicenseContextHasBeenSet() const { return m_sourceLicenseContextHasBeenSet; }

    /**
     * <p>Information about the license type this conversion task converted from.</p>
     */
    inline void SetSourceLicenseContext(const LicenseConversionContext& value) { m_sourceLicenseContextHasBeenSet = true; m_sourceLicenseContext = value; }

    /**
     * <p>Information about the license type this conversion task converted from.</p>
     */
    inline void SetSourceLicenseContext(LicenseConversionContext&& value) { m_sourceLicenseContextHasBeenSet = true; m_sourceLicenseContext = std::move(value); }

    /**
     * <p>Information about the license type this conversion task converted from.</p>
     */
    inline LicenseConversionTask& WithSourceLicenseContext(const LicenseConversionContext& value) { SetSourceLicenseContext(value); return *this;}

    /**
     * <p>Information about the license type this conversion task converted from.</p>
     */
    inline LicenseConversionTask& WithSourceLicenseContext(LicenseConversionContext&& value) { SetSourceLicenseContext(std::move(value)); return *this;}


    /**
     * <p>Information about the license type this conversion task converted to.</p>
     */
    inline const LicenseConversionContext& GetDestinationLicenseContext() const{ return m_destinationLicenseContext; }

    /**
     * <p>Information about the license type this conversion task converted to.</p>
     */
    inline bool DestinationLicenseContextHasBeenSet() const { return m_destinationLicenseContextHasBeenSet; }

    /**
     * <p>Information about the license type this conversion task converted to.</p>
     */
    inline void SetDestinationLicenseContext(const LicenseConversionContext& value) { m_destinationLicenseContextHasBeenSet = true; m_destinationLicenseContext = value; }

    /**
     * <p>Information about the license type this conversion task converted to.</p>
     */
    inline void SetDestinationLicenseContext(LicenseConversionContext&& value) { m_destinationLicenseContextHasBeenSet = true; m_destinationLicenseContext = std::move(value); }

    /**
     * <p>Information about the license type this conversion task converted to.</p>
     */
    inline LicenseConversionTask& WithDestinationLicenseContext(const LicenseConversionContext& value) { SetDestinationLicenseContext(value); return *this;}

    /**
     * <p>Information about the license type this conversion task converted to.</p>
     */
    inline LicenseConversionTask& WithDestinationLicenseContext(LicenseConversionContext&& value) { SetDestinationLicenseContext(std::move(value)); return *this;}


    /**
     * <p>The status of the conversion task.</p>
     */
    inline const LicenseConversionTaskStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the conversion task.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the conversion task.</p>
     */
    inline void SetStatus(const LicenseConversionTaskStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the conversion task.</p>
     */
    inline void SetStatus(LicenseConversionTaskStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the conversion task.</p>
     */
    inline LicenseConversionTask& WithStatus(const LicenseConversionTaskStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the conversion task.</p>
     */
    inline LicenseConversionTask& WithStatus(LicenseConversionTaskStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The status message for the conversion task.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message for the conversion task.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The status message for the conversion task.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The status message for the conversion task.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The status message for the conversion task.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The status message for the conversion task.</p>
     */
    inline LicenseConversionTask& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message for the conversion task.</p>
     */
    inline LicenseConversionTask& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message for the conversion task.</p>
     */
    inline LicenseConversionTask& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The time the conversion task was started at.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time the conversion task was started at.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time the conversion task was started at.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time the conversion task was started at.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time the conversion task was started at.</p>
     */
    inline LicenseConversionTask& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time the conversion task was started at.</p>
     */
    inline LicenseConversionTask& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The time the usage operation value of the resource was changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLicenseConversionTime() const{ return m_licenseConversionTime; }

    /**
     * <p>The time the usage operation value of the resource was changed.</p>
     */
    inline bool LicenseConversionTimeHasBeenSet() const { return m_licenseConversionTimeHasBeenSet; }

    /**
     * <p>The time the usage operation value of the resource was changed.</p>
     */
    inline void SetLicenseConversionTime(const Aws::Utils::DateTime& value) { m_licenseConversionTimeHasBeenSet = true; m_licenseConversionTime = value; }

    /**
     * <p>The time the usage operation value of the resource was changed.</p>
     */
    inline void SetLicenseConversionTime(Aws::Utils::DateTime&& value) { m_licenseConversionTimeHasBeenSet = true; m_licenseConversionTime = std::move(value); }

    /**
     * <p>The time the usage operation value of the resource was changed.</p>
     */
    inline LicenseConversionTask& WithLicenseConversionTime(const Aws::Utils::DateTime& value) { SetLicenseConversionTime(value); return *this;}

    /**
     * <p>The time the usage operation value of the resource was changed.</p>
     */
    inline LicenseConversionTask& WithLicenseConversionTime(Aws::Utils::DateTime&& value) { SetLicenseConversionTime(std::move(value)); return *this;}


    /**
     * <p>The time the conversion task was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time the conversion task was completed.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The time the conversion task was completed.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time the conversion task was completed.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time the conversion task was completed.</p>
     */
    inline LicenseConversionTask& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time the conversion task was completed.</p>
     */
    inline LicenseConversionTask& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}

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
