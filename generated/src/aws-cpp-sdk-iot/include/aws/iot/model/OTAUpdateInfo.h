/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/AwsJobExecutionsRolloutConfig.h>
#include <aws/iot/model/AwsJobPresignedUrlConfig.h>
#include <aws/iot/model/TargetSelection.h>
#include <aws/iot/model/OTAUpdateStatus.h>
#include <aws/iot/model/ErrorInfo.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iot/model/Protocol.h>
#include <aws/iot/model/OTAUpdateFile.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Information about an OTA update.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/OTAUpdateInfo">AWS
   * API Reference</a></p>
   */
  class OTAUpdateInfo
  {
  public:
    AWS_IOT_API OTAUpdateInfo();
    AWS_IOT_API OTAUpdateInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API OTAUpdateInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The OTA update ID.</p>
     */
    inline const Aws::String& GetOtaUpdateId() const{ return m_otaUpdateId; }
    inline bool OtaUpdateIdHasBeenSet() const { return m_otaUpdateIdHasBeenSet; }
    inline void SetOtaUpdateId(const Aws::String& value) { m_otaUpdateIdHasBeenSet = true; m_otaUpdateId = value; }
    inline void SetOtaUpdateId(Aws::String&& value) { m_otaUpdateIdHasBeenSet = true; m_otaUpdateId = std::move(value); }
    inline void SetOtaUpdateId(const char* value) { m_otaUpdateIdHasBeenSet = true; m_otaUpdateId.assign(value); }
    inline OTAUpdateInfo& WithOtaUpdateId(const Aws::String& value) { SetOtaUpdateId(value); return *this;}
    inline OTAUpdateInfo& WithOtaUpdateId(Aws::String&& value) { SetOtaUpdateId(std::move(value)); return *this;}
    inline OTAUpdateInfo& WithOtaUpdateId(const char* value) { SetOtaUpdateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OTA update ARN.</p>
     */
    inline const Aws::String& GetOtaUpdateArn() const{ return m_otaUpdateArn; }
    inline bool OtaUpdateArnHasBeenSet() const { return m_otaUpdateArnHasBeenSet; }
    inline void SetOtaUpdateArn(const Aws::String& value) { m_otaUpdateArnHasBeenSet = true; m_otaUpdateArn = value; }
    inline void SetOtaUpdateArn(Aws::String&& value) { m_otaUpdateArnHasBeenSet = true; m_otaUpdateArn = std::move(value); }
    inline void SetOtaUpdateArn(const char* value) { m_otaUpdateArnHasBeenSet = true; m_otaUpdateArn.assign(value); }
    inline OTAUpdateInfo& WithOtaUpdateArn(const Aws::String& value) { SetOtaUpdateArn(value); return *this;}
    inline OTAUpdateInfo& WithOtaUpdateArn(Aws::String&& value) { SetOtaUpdateArn(std::move(value)); return *this;}
    inline OTAUpdateInfo& WithOtaUpdateArn(const char* value) { SetOtaUpdateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the OTA update was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline OTAUpdateInfo& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline OTAUpdateInfo& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the OTA update was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }
    inline OTAUpdateInfo& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline OTAUpdateInfo& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the OTA update.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline OTAUpdateInfo& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline OTAUpdateInfo& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline OTAUpdateInfo& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The targets of the OTA update.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargets() const{ return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    inline void SetTargets(const Aws::Vector<Aws::String>& value) { m_targetsHasBeenSet = true; m_targets = value; }
    inline void SetTargets(Aws::Vector<Aws::String>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }
    inline OTAUpdateInfo& WithTargets(const Aws::Vector<Aws::String>& value) { SetTargets(value); return *this;}
    inline OTAUpdateInfo& WithTargets(Aws::Vector<Aws::String>&& value) { SetTargets(std::move(value)); return *this;}
    inline OTAUpdateInfo& AddTargets(const Aws::String& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }
    inline OTAUpdateInfo& AddTargets(Aws::String&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }
    inline OTAUpdateInfo& AddTargets(const char* value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The protocol used to transfer the OTA update image. Valid values are [HTTP],
     * [MQTT], [HTTP, MQTT]. When both HTTP and MQTT are specified, the target device
     * can choose the protocol.</p>
     */
    inline const Aws::Vector<Protocol>& GetProtocols() const{ return m_protocols; }
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }
    inline void SetProtocols(const Aws::Vector<Protocol>& value) { m_protocolsHasBeenSet = true; m_protocols = value; }
    inline void SetProtocols(Aws::Vector<Protocol>&& value) { m_protocolsHasBeenSet = true; m_protocols = std::move(value); }
    inline OTAUpdateInfo& WithProtocols(const Aws::Vector<Protocol>& value) { SetProtocols(value); return *this;}
    inline OTAUpdateInfo& WithProtocols(Aws::Vector<Protocol>&& value) { SetProtocols(std::move(value)); return *this;}
    inline OTAUpdateInfo& AddProtocols(const Protocol& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }
    inline OTAUpdateInfo& AddProtocols(Protocol&& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration for the rollout of OTA updates.</p>
     */
    inline const AwsJobExecutionsRolloutConfig& GetAwsJobExecutionsRolloutConfig() const{ return m_awsJobExecutionsRolloutConfig; }
    inline bool AwsJobExecutionsRolloutConfigHasBeenSet() const { return m_awsJobExecutionsRolloutConfigHasBeenSet; }
    inline void SetAwsJobExecutionsRolloutConfig(const AwsJobExecutionsRolloutConfig& value) { m_awsJobExecutionsRolloutConfigHasBeenSet = true; m_awsJobExecutionsRolloutConfig = value; }
    inline void SetAwsJobExecutionsRolloutConfig(AwsJobExecutionsRolloutConfig&& value) { m_awsJobExecutionsRolloutConfigHasBeenSet = true; m_awsJobExecutionsRolloutConfig = std::move(value); }
    inline OTAUpdateInfo& WithAwsJobExecutionsRolloutConfig(const AwsJobExecutionsRolloutConfig& value) { SetAwsJobExecutionsRolloutConfig(value); return *this;}
    inline OTAUpdateInfo& WithAwsJobExecutionsRolloutConfig(AwsJobExecutionsRolloutConfig&& value) { SetAwsJobExecutionsRolloutConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for pre-signed URLs. Valid when
     * <code>protocols</code> contains HTTP.</p>
     */
    inline const AwsJobPresignedUrlConfig& GetAwsJobPresignedUrlConfig() const{ return m_awsJobPresignedUrlConfig; }
    inline bool AwsJobPresignedUrlConfigHasBeenSet() const { return m_awsJobPresignedUrlConfigHasBeenSet; }
    inline void SetAwsJobPresignedUrlConfig(const AwsJobPresignedUrlConfig& value) { m_awsJobPresignedUrlConfigHasBeenSet = true; m_awsJobPresignedUrlConfig = value; }
    inline void SetAwsJobPresignedUrlConfig(AwsJobPresignedUrlConfig&& value) { m_awsJobPresignedUrlConfigHasBeenSet = true; m_awsJobPresignedUrlConfig = std::move(value); }
    inline OTAUpdateInfo& WithAwsJobPresignedUrlConfig(const AwsJobPresignedUrlConfig& value) { SetAwsJobPresignedUrlConfig(value); return *this;}
    inline OTAUpdateInfo& WithAwsJobPresignedUrlConfig(AwsJobPresignedUrlConfig&& value) { SetAwsJobPresignedUrlConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the OTA update will continue to run (CONTINUOUS), or will
     * be complete after all those things specified as targets have completed the OTA
     * update (SNAPSHOT). If continuous, the OTA update may also be run on a thing when
     * a change is detected in a target. For example, an OTA update will run on a thing
     * when the thing is added to a target group, even after the OTA update was
     * completed by all things originally in the group. </p>
     */
    inline const TargetSelection& GetTargetSelection() const{ return m_targetSelection; }
    inline bool TargetSelectionHasBeenSet() const { return m_targetSelectionHasBeenSet; }
    inline void SetTargetSelection(const TargetSelection& value) { m_targetSelectionHasBeenSet = true; m_targetSelection = value; }
    inline void SetTargetSelection(TargetSelection&& value) { m_targetSelectionHasBeenSet = true; m_targetSelection = std::move(value); }
    inline OTAUpdateInfo& WithTargetSelection(const TargetSelection& value) { SetTargetSelection(value); return *this;}
    inline OTAUpdateInfo& WithTargetSelection(TargetSelection&& value) { SetTargetSelection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of files associated with the OTA update.</p>
     */
    inline const Aws::Vector<OTAUpdateFile>& GetOtaUpdateFiles() const{ return m_otaUpdateFiles; }
    inline bool OtaUpdateFilesHasBeenSet() const { return m_otaUpdateFilesHasBeenSet; }
    inline void SetOtaUpdateFiles(const Aws::Vector<OTAUpdateFile>& value) { m_otaUpdateFilesHasBeenSet = true; m_otaUpdateFiles = value; }
    inline void SetOtaUpdateFiles(Aws::Vector<OTAUpdateFile>&& value) { m_otaUpdateFilesHasBeenSet = true; m_otaUpdateFiles = std::move(value); }
    inline OTAUpdateInfo& WithOtaUpdateFiles(const Aws::Vector<OTAUpdateFile>& value) { SetOtaUpdateFiles(value); return *this;}
    inline OTAUpdateInfo& WithOtaUpdateFiles(Aws::Vector<OTAUpdateFile>&& value) { SetOtaUpdateFiles(std::move(value)); return *this;}
    inline OTAUpdateInfo& AddOtaUpdateFiles(const OTAUpdateFile& value) { m_otaUpdateFilesHasBeenSet = true; m_otaUpdateFiles.push_back(value); return *this; }
    inline OTAUpdateInfo& AddOtaUpdateFiles(OTAUpdateFile&& value) { m_otaUpdateFilesHasBeenSet = true; m_otaUpdateFiles.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the OTA update.</p>
     */
    inline const OTAUpdateStatus& GetOtaUpdateStatus() const{ return m_otaUpdateStatus; }
    inline bool OtaUpdateStatusHasBeenSet() const { return m_otaUpdateStatusHasBeenSet; }
    inline void SetOtaUpdateStatus(const OTAUpdateStatus& value) { m_otaUpdateStatusHasBeenSet = true; m_otaUpdateStatus = value; }
    inline void SetOtaUpdateStatus(OTAUpdateStatus&& value) { m_otaUpdateStatusHasBeenSet = true; m_otaUpdateStatus = std::move(value); }
    inline OTAUpdateInfo& WithOtaUpdateStatus(const OTAUpdateStatus& value) { SetOtaUpdateStatus(value); return *this;}
    inline OTAUpdateInfo& WithOtaUpdateStatus(OTAUpdateStatus&& value) { SetOtaUpdateStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IoT job ID associated with the OTA update.</p>
     */
    inline const Aws::String& GetAwsIotJobId() const{ return m_awsIotJobId; }
    inline bool AwsIotJobIdHasBeenSet() const { return m_awsIotJobIdHasBeenSet; }
    inline void SetAwsIotJobId(const Aws::String& value) { m_awsIotJobIdHasBeenSet = true; m_awsIotJobId = value; }
    inline void SetAwsIotJobId(Aws::String&& value) { m_awsIotJobIdHasBeenSet = true; m_awsIotJobId = std::move(value); }
    inline void SetAwsIotJobId(const char* value) { m_awsIotJobIdHasBeenSet = true; m_awsIotJobId.assign(value); }
    inline OTAUpdateInfo& WithAwsIotJobId(const Aws::String& value) { SetAwsIotJobId(value); return *this;}
    inline OTAUpdateInfo& WithAwsIotJobId(Aws::String&& value) { SetAwsIotJobId(std::move(value)); return *this;}
    inline OTAUpdateInfo& WithAwsIotJobId(const char* value) { SetAwsIotJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IoT job ARN associated with the OTA update.</p>
     */
    inline const Aws::String& GetAwsIotJobArn() const{ return m_awsIotJobArn; }
    inline bool AwsIotJobArnHasBeenSet() const { return m_awsIotJobArnHasBeenSet; }
    inline void SetAwsIotJobArn(const Aws::String& value) { m_awsIotJobArnHasBeenSet = true; m_awsIotJobArn = value; }
    inline void SetAwsIotJobArn(Aws::String&& value) { m_awsIotJobArnHasBeenSet = true; m_awsIotJobArn = std::move(value); }
    inline void SetAwsIotJobArn(const char* value) { m_awsIotJobArnHasBeenSet = true; m_awsIotJobArn.assign(value); }
    inline OTAUpdateInfo& WithAwsIotJobArn(const Aws::String& value) { SetAwsIotJobArn(value); return *this;}
    inline OTAUpdateInfo& WithAwsIotJobArn(Aws::String&& value) { SetAwsIotJobArn(std::move(value)); return *this;}
    inline OTAUpdateInfo& WithAwsIotJobArn(const char* value) { SetAwsIotJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error information associated with the OTA update.</p>
     */
    inline const ErrorInfo& GetErrorInfo() const{ return m_errorInfo; }
    inline bool ErrorInfoHasBeenSet() const { return m_errorInfoHasBeenSet; }
    inline void SetErrorInfo(const ErrorInfo& value) { m_errorInfoHasBeenSet = true; m_errorInfo = value; }
    inline void SetErrorInfo(ErrorInfo&& value) { m_errorInfoHasBeenSet = true; m_errorInfo = std::move(value); }
    inline OTAUpdateInfo& WithErrorInfo(const ErrorInfo& value) { SetErrorInfo(value); return *this;}
    inline OTAUpdateInfo& WithErrorInfo(ErrorInfo&& value) { SetErrorInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of name/value pairs</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalParameters() const{ return m_additionalParameters; }
    inline bool AdditionalParametersHasBeenSet() const { return m_additionalParametersHasBeenSet; }
    inline void SetAdditionalParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalParametersHasBeenSet = true; m_additionalParameters = value; }
    inline void SetAdditionalParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalParametersHasBeenSet = true; m_additionalParameters = std::move(value); }
    inline OTAUpdateInfo& WithAdditionalParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalParameters(value); return *this;}
    inline OTAUpdateInfo& WithAdditionalParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalParameters(std::move(value)); return *this;}
    inline OTAUpdateInfo& AddAdditionalParameters(const Aws::String& key, const Aws::String& value) { m_additionalParametersHasBeenSet = true; m_additionalParameters.emplace(key, value); return *this; }
    inline OTAUpdateInfo& AddAdditionalParameters(Aws::String&& key, const Aws::String& value) { m_additionalParametersHasBeenSet = true; m_additionalParameters.emplace(std::move(key), value); return *this; }
    inline OTAUpdateInfo& AddAdditionalParameters(const Aws::String& key, Aws::String&& value) { m_additionalParametersHasBeenSet = true; m_additionalParameters.emplace(key, std::move(value)); return *this; }
    inline OTAUpdateInfo& AddAdditionalParameters(Aws::String&& key, Aws::String&& value) { m_additionalParametersHasBeenSet = true; m_additionalParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline OTAUpdateInfo& AddAdditionalParameters(const char* key, Aws::String&& value) { m_additionalParametersHasBeenSet = true; m_additionalParameters.emplace(key, std::move(value)); return *this; }
    inline OTAUpdateInfo& AddAdditionalParameters(Aws::String&& key, const char* value) { m_additionalParametersHasBeenSet = true; m_additionalParameters.emplace(std::move(key), value); return *this; }
    inline OTAUpdateInfo& AddAdditionalParameters(const char* key, const char* value) { m_additionalParametersHasBeenSet = true; m_additionalParameters.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_otaUpdateId;
    bool m_otaUpdateIdHasBeenSet = false;

    Aws::String m_otaUpdateArn;
    bool m_otaUpdateArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::Vector<Protocol> m_protocols;
    bool m_protocolsHasBeenSet = false;

    AwsJobExecutionsRolloutConfig m_awsJobExecutionsRolloutConfig;
    bool m_awsJobExecutionsRolloutConfigHasBeenSet = false;

    AwsJobPresignedUrlConfig m_awsJobPresignedUrlConfig;
    bool m_awsJobPresignedUrlConfigHasBeenSet = false;

    TargetSelection m_targetSelection;
    bool m_targetSelectionHasBeenSet = false;

    Aws::Vector<OTAUpdateFile> m_otaUpdateFiles;
    bool m_otaUpdateFilesHasBeenSet = false;

    OTAUpdateStatus m_otaUpdateStatus;
    bool m_otaUpdateStatusHasBeenSet = false;

    Aws::String m_awsIotJobId;
    bool m_awsIotJobIdHasBeenSet = false;

    Aws::String m_awsIotJobArn;
    bool m_awsIotJobArnHasBeenSet = false;

    ErrorInfo m_errorInfo;
    bool m_errorInfoHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_additionalParameters;
    bool m_additionalParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
