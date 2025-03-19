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
    AWS_IOT_API OTAUpdateInfo() = default;
    AWS_IOT_API OTAUpdateInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API OTAUpdateInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The OTA update ID.</p>
     */
    inline const Aws::String& GetOtaUpdateId() const { return m_otaUpdateId; }
    inline bool OtaUpdateIdHasBeenSet() const { return m_otaUpdateIdHasBeenSet; }
    template<typename OtaUpdateIdT = Aws::String>
    void SetOtaUpdateId(OtaUpdateIdT&& value) { m_otaUpdateIdHasBeenSet = true; m_otaUpdateId = std::forward<OtaUpdateIdT>(value); }
    template<typename OtaUpdateIdT = Aws::String>
    OTAUpdateInfo& WithOtaUpdateId(OtaUpdateIdT&& value) { SetOtaUpdateId(std::forward<OtaUpdateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OTA update ARN.</p>
     */
    inline const Aws::String& GetOtaUpdateArn() const { return m_otaUpdateArn; }
    inline bool OtaUpdateArnHasBeenSet() const { return m_otaUpdateArnHasBeenSet; }
    template<typename OtaUpdateArnT = Aws::String>
    void SetOtaUpdateArn(OtaUpdateArnT&& value) { m_otaUpdateArnHasBeenSet = true; m_otaUpdateArn = std::forward<OtaUpdateArnT>(value); }
    template<typename OtaUpdateArnT = Aws::String>
    OTAUpdateInfo& WithOtaUpdateArn(OtaUpdateArnT&& value) { SetOtaUpdateArn(std::forward<OtaUpdateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the OTA update was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    OTAUpdateInfo& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the OTA update was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    OTAUpdateInfo& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the OTA update.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    OTAUpdateInfo& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The targets of the OTA update.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = Aws::Vector<Aws::String>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Vector<Aws::String>>
    OTAUpdateInfo& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    template<typename TargetsT = Aws::String>
    OTAUpdateInfo& AddTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets.emplace_back(std::forward<TargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The protocol used to transfer the OTA update image. Valid values are [HTTP],
     * [MQTT], [HTTP, MQTT]. When both HTTP and MQTT are specified, the target device
     * can choose the protocol.</p>
     */
    inline const Aws::Vector<Protocol>& GetProtocols() const { return m_protocols; }
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }
    template<typename ProtocolsT = Aws::Vector<Protocol>>
    void SetProtocols(ProtocolsT&& value) { m_protocolsHasBeenSet = true; m_protocols = std::forward<ProtocolsT>(value); }
    template<typename ProtocolsT = Aws::Vector<Protocol>>
    OTAUpdateInfo& WithProtocols(ProtocolsT&& value) { SetProtocols(std::forward<ProtocolsT>(value)); return *this;}
    inline OTAUpdateInfo& AddProtocols(Protocol value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration for the rollout of OTA updates.</p>
     */
    inline const AwsJobExecutionsRolloutConfig& GetAwsJobExecutionsRolloutConfig() const { return m_awsJobExecutionsRolloutConfig; }
    inline bool AwsJobExecutionsRolloutConfigHasBeenSet() const { return m_awsJobExecutionsRolloutConfigHasBeenSet; }
    template<typename AwsJobExecutionsRolloutConfigT = AwsJobExecutionsRolloutConfig>
    void SetAwsJobExecutionsRolloutConfig(AwsJobExecutionsRolloutConfigT&& value) { m_awsJobExecutionsRolloutConfigHasBeenSet = true; m_awsJobExecutionsRolloutConfig = std::forward<AwsJobExecutionsRolloutConfigT>(value); }
    template<typename AwsJobExecutionsRolloutConfigT = AwsJobExecutionsRolloutConfig>
    OTAUpdateInfo& WithAwsJobExecutionsRolloutConfig(AwsJobExecutionsRolloutConfigT&& value) { SetAwsJobExecutionsRolloutConfig(std::forward<AwsJobExecutionsRolloutConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for pre-signed URLs. Valid when
     * <code>protocols</code> contains HTTP.</p>
     */
    inline const AwsJobPresignedUrlConfig& GetAwsJobPresignedUrlConfig() const { return m_awsJobPresignedUrlConfig; }
    inline bool AwsJobPresignedUrlConfigHasBeenSet() const { return m_awsJobPresignedUrlConfigHasBeenSet; }
    template<typename AwsJobPresignedUrlConfigT = AwsJobPresignedUrlConfig>
    void SetAwsJobPresignedUrlConfig(AwsJobPresignedUrlConfigT&& value) { m_awsJobPresignedUrlConfigHasBeenSet = true; m_awsJobPresignedUrlConfig = std::forward<AwsJobPresignedUrlConfigT>(value); }
    template<typename AwsJobPresignedUrlConfigT = AwsJobPresignedUrlConfig>
    OTAUpdateInfo& WithAwsJobPresignedUrlConfig(AwsJobPresignedUrlConfigT&& value) { SetAwsJobPresignedUrlConfig(std::forward<AwsJobPresignedUrlConfigT>(value)); return *this;}
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
    inline TargetSelection GetTargetSelection() const { return m_targetSelection; }
    inline bool TargetSelectionHasBeenSet() const { return m_targetSelectionHasBeenSet; }
    inline void SetTargetSelection(TargetSelection value) { m_targetSelectionHasBeenSet = true; m_targetSelection = value; }
    inline OTAUpdateInfo& WithTargetSelection(TargetSelection value) { SetTargetSelection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of files associated with the OTA update.</p>
     */
    inline const Aws::Vector<OTAUpdateFile>& GetOtaUpdateFiles() const { return m_otaUpdateFiles; }
    inline bool OtaUpdateFilesHasBeenSet() const { return m_otaUpdateFilesHasBeenSet; }
    template<typename OtaUpdateFilesT = Aws::Vector<OTAUpdateFile>>
    void SetOtaUpdateFiles(OtaUpdateFilesT&& value) { m_otaUpdateFilesHasBeenSet = true; m_otaUpdateFiles = std::forward<OtaUpdateFilesT>(value); }
    template<typename OtaUpdateFilesT = Aws::Vector<OTAUpdateFile>>
    OTAUpdateInfo& WithOtaUpdateFiles(OtaUpdateFilesT&& value) { SetOtaUpdateFiles(std::forward<OtaUpdateFilesT>(value)); return *this;}
    template<typename OtaUpdateFilesT = OTAUpdateFile>
    OTAUpdateInfo& AddOtaUpdateFiles(OtaUpdateFilesT&& value) { m_otaUpdateFilesHasBeenSet = true; m_otaUpdateFiles.emplace_back(std::forward<OtaUpdateFilesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the OTA update.</p>
     */
    inline OTAUpdateStatus GetOtaUpdateStatus() const { return m_otaUpdateStatus; }
    inline bool OtaUpdateStatusHasBeenSet() const { return m_otaUpdateStatusHasBeenSet; }
    inline void SetOtaUpdateStatus(OTAUpdateStatus value) { m_otaUpdateStatusHasBeenSet = true; m_otaUpdateStatus = value; }
    inline OTAUpdateInfo& WithOtaUpdateStatus(OTAUpdateStatus value) { SetOtaUpdateStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IoT job ID associated with the OTA update.</p>
     */
    inline const Aws::String& GetAwsIotJobId() const { return m_awsIotJobId; }
    inline bool AwsIotJobIdHasBeenSet() const { return m_awsIotJobIdHasBeenSet; }
    template<typename AwsIotJobIdT = Aws::String>
    void SetAwsIotJobId(AwsIotJobIdT&& value) { m_awsIotJobIdHasBeenSet = true; m_awsIotJobId = std::forward<AwsIotJobIdT>(value); }
    template<typename AwsIotJobIdT = Aws::String>
    OTAUpdateInfo& WithAwsIotJobId(AwsIotJobIdT&& value) { SetAwsIotJobId(std::forward<AwsIotJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IoT job ARN associated with the OTA update.</p>
     */
    inline const Aws::String& GetAwsIotJobArn() const { return m_awsIotJobArn; }
    inline bool AwsIotJobArnHasBeenSet() const { return m_awsIotJobArnHasBeenSet; }
    template<typename AwsIotJobArnT = Aws::String>
    void SetAwsIotJobArn(AwsIotJobArnT&& value) { m_awsIotJobArnHasBeenSet = true; m_awsIotJobArn = std::forward<AwsIotJobArnT>(value); }
    template<typename AwsIotJobArnT = Aws::String>
    OTAUpdateInfo& WithAwsIotJobArn(AwsIotJobArnT&& value) { SetAwsIotJobArn(std::forward<AwsIotJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error information associated with the OTA update.</p>
     */
    inline const ErrorInfo& GetErrorInfo() const { return m_errorInfo; }
    inline bool ErrorInfoHasBeenSet() const { return m_errorInfoHasBeenSet; }
    template<typename ErrorInfoT = ErrorInfo>
    void SetErrorInfo(ErrorInfoT&& value) { m_errorInfoHasBeenSet = true; m_errorInfo = std::forward<ErrorInfoT>(value); }
    template<typename ErrorInfoT = ErrorInfo>
    OTAUpdateInfo& WithErrorInfo(ErrorInfoT&& value) { SetErrorInfo(std::forward<ErrorInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of name/value pairs</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalParameters() const { return m_additionalParameters; }
    inline bool AdditionalParametersHasBeenSet() const { return m_additionalParametersHasBeenSet; }
    template<typename AdditionalParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetAdditionalParameters(AdditionalParametersT&& value) { m_additionalParametersHasBeenSet = true; m_additionalParameters = std::forward<AdditionalParametersT>(value); }
    template<typename AdditionalParametersT = Aws::Map<Aws::String, Aws::String>>
    OTAUpdateInfo& WithAdditionalParameters(AdditionalParametersT&& value) { SetAdditionalParameters(std::forward<AdditionalParametersT>(value)); return *this;}
    template<typename AdditionalParametersKeyT = Aws::String, typename AdditionalParametersValueT = Aws::String>
    OTAUpdateInfo& AddAdditionalParameters(AdditionalParametersKeyT&& key, AdditionalParametersValueT&& value) {
      m_additionalParametersHasBeenSet = true; m_additionalParameters.emplace(std::forward<AdditionalParametersKeyT>(key), std::forward<AdditionalParametersValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_otaUpdateId;
    bool m_otaUpdateIdHasBeenSet = false;

    Aws::String m_otaUpdateArn;
    bool m_otaUpdateArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate{};
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

    TargetSelection m_targetSelection{TargetSelection::NOT_SET};
    bool m_targetSelectionHasBeenSet = false;

    Aws::Vector<OTAUpdateFile> m_otaUpdateFiles;
    bool m_otaUpdateFilesHasBeenSet = false;

    OTAUpdateStatus m_otaUpdateStatus{OTAUpdateStatus::NOT_SET};
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
