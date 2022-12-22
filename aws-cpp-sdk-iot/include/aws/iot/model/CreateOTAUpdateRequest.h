/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/TargetSelection.h>
#include <aws/iot/model/AwsJobExecutionsRolloutConfig.h>
#include <aws/iot/model/AwsJobPresignedUrlConfig.h>
#include <aws/iot/model/AwsJobAbortConfig.h>
#include <aws/iot/model/AwsJobTimeoutConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iot/model/Protocol.h>
#include <aws/iot/model/OTAUpdateFile.h>
#include <aws/iot/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class CreateOTAUpdateRequest : public IoTRequest
  {
  public:
    AWS_IOT_API CreateOTAUpdateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateOTAUpdate"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the OTA update to be created.</p>
     */
    inline const Aws::String& GetOtaUpdateId() const{ return m_otaUpdateId; }

    /**
     * <p>The ID of the OTA update to be created.</p>
     */
    inline bool OtaUpdateIdHasBeenSet() const { return m_otaUpdateIdHasBeenSet; }

    /**
     * <p>The ID of the OTA update to be created.</p>
     */
    inline void SetOtaUpdateId(const Aws::String& value) { m_otaUpdateIdHasBeenSet = true; m_otaUpdateId = value; }

    /**
     * <p>The ID of the OTA update to be created.</p>
     */
    inline void SetOtaUpdateId(Aws::String&& value) { m_otaUpdateIdHasBeenSet = true; m_otaUpdateId = std::move(value); }

    /**
     * <p>The ID of the OTA update to be created.</p>
     */
    inline void SetOtaUpdateId(const char* value) { m_otaUpdateIdHasBeenSet = true; m_otaUpdateId.assign(value); }

    /**
     * <p>The ID of the OTA update to be created.</p>
     */
    inline CreateOTAUpdateRequest& WithOtaUpdateId(const Aws::String& value) { SetOtaUpdateId(value); return *this;}

    /**
     * <p>The ID of the OTA update to be created.</p>
     */
    inline CreateOTAUpdateRequest& WithOtaUpdateId(Aws::String&& value) { SetOtaUpdateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the OTA update to be created.</p>
     */
    inline CreateOTAUpdateRequest& WithOtaUpdateId(const char* value) { SetOtaUpdateId(value); return *this;}


    /**
     * <p>The description of the OTA update.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the OTA update.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the OTA update.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the OTA update.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the OTA update.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the OTA update.</p>
     */
    inline CreateOTAUpdateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the OTA update.</p>
     */
    inline CreateOTAUpdateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the OTA update.</p>
     */
    inline CreateOTAUpdateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The devices targeted to receive OTA updates.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargets() const{ return m_targets; }

    /**
     * <p>The devices targeted to receive OTA updates.</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>The devices targeted to receive OTA updates.</p>
     */
    inline void SetTargets(const Aws::Vector<Aws::String>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The devices targeted to receive OTA updates.</p>
     */
    inline void SetTargets(Aws::Vector<Aws::String>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The devices targeted to receive OTA updates.</p>
     */
    inline CreateOTAUpdateRequest& WithTargets(const Aws::Vector<Aws::String>& value) { SetTargets(value); return *this;}

    /**
     * <p>The devices targeted to receive OTA updates.</p>
     */
    inline CreateOTAUpdateRequest& WithTargets(Aws::Vector<Aws::String>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The devices targeted to receive OTA updates.</p>
     */
    inline CreateOTAUpdateRequest& AddTargets(const Aws::String& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The devices targeted to receive OTA updates.</p>
     */
    inline CreateOTAUpdateRequest& AddTargets(Aws::String&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }

    /**
     * <p>The devices targeted to receive OTA updates.</p>
     */
    inline CreateOTAUpdateRequest& AddTargets(const char* value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }


    /**
     * <p>The protocol used to transfer the OTA update image. Valid values are [HTTP],
     * [MQTT], [HTTP, MQTT]. When both HTTP and MQTT are specified, the target device
     * can choose the protocol.</p>
     */
    inline const Aws::Vector<Protocol>& GetProtocols() const{ return m_protocols; }

    /**
     * <p>The protocol used to transfer the OTA update image. Valid values are [HTTP],
     * [MQTT], [HTTP, MQTT]. When both HTTP and MQTT are specified, the target device
     * can choose the protocol.</p>
     */
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }

    /**
     * <p>The protocol used to transfer the OTA update image. Valid values are [HTTP],
     * [MQTT], [HTTP, MQTT]. When both HTTP and MQTT are specified, the target device
     * can choose the protocol.</p>
     */
    inline void SetProtocols(const Aws::Vector<Protocol>& value) { m_protocolsHasBeenSet = true; m_protocols = value; }

    /**
     * <p>The protocol used to transfer the OTA update image. Valid values are [HTTP],
     * [MQTT], [HTTP, MQTT]. When both HTTP and MQTT are specified, the target device
     * can choose the protocol.</p>
     */
    inline void SetProtocols(Aws::Vector<Protocol>&& value) { m_protocolsHasBeenSet = true; m_protocols = std::move(value); }

    /**
     * <p>The protocol used to transfer the OTA update image. Valid values are [HTTP],
     * [MQTT], [HTTP, MQTT]. When both HTTP and MQTT are specified, the target device
     * can choose the protocol.</p>
     */
    inline CreateOTAUpdateRequest& WithProtocols(const Aws::Vector<Protocol>& value) { SetProtocols(value); return *this;}

    /**
     * <p>The protocol used to transfer the OTA update image. Valid values are [HTTP],
     * [MQTT], [HTTP, MQTT]. When both HTTP and MQTT are specified, the target device
     * can choose the protocol.</p>
     */
    inline CreateOTAUpdateRequest& WithProtocols(Aws::Vector<Protocol>&& value) { SetProtocols(std::move(value)); return *this;}

    /**
     * <p>The protocol used to transfer the OTA update image. Valid values are [HTTP],
     * [MQTT], [HTTP, MQTT]. When both HTTP and MQTT are specified, the target device
     * can choose the protocol.</p>
     */
    inline CreateOTAUpdateRequest& AddProtocols(const Protocol& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }

    /**
     * <p>The protocol used to transfer the OTA update image. Valid values are [HTTP],
     * [MQTT], [HTTP, MQTT]. When both HTTP and MQTT are specified, the target device
     * can choose the protocol.</p>
     */
    inline CreateOTAUpdateRequest& AddProtocols(Protocol&& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies whether the update will continue to run (CONTINUOUS), or will be
     * complete after all the things specified as targets have completed the update
     * (SNAPSHOT). If continuous, the update may also be run on a thing when a change
     * is detected in a target. For example, an update will run on a thing when the
     * thing is added to a target group, even after the update was completed by all
     * things originally in the group. Valid values: CONTINUOUS | SNAPSHOT.</p>
     */
    inline const TargetSelection& GetTargetSelection() const{ return m_targetSelection; }

    /**
     * <p>Specifies whether the update will continue to run (CONTINUOUS), or will be
     * complete after all the things specified as targets have completed the update
     * (SNAPSHOT). If continuous, the update may also be run on a thing when a change
     * is detected in a target. For example, an update will run on a thing when the
     * thing is added to a target group, even after the update was completed by all
     * things originally in the group. Valid values: CONTINUOUS | SNAPSHOT.</p>
     */
    inline bool TargetSelectionHasBeenSet() const { return m_targetSelectionHasBeenSet; }

    /**
     * <p>Specifies whether the update will continue to run (CONTINUOUS), or will be
     * complete after all the things specified as targets have completed the update
     * (SNAPSHOT). If continuous, the update may also be run on a thing when a change
     * is detected in a target. For example, an update will run on a thing when the
     * thing is added to a target group, even after the update was completed by all
     * things originally in the group. Valid values: CONTINUOUS | SNAPSHOT.</p>
     */
    inline void SetTargetSelection(const TargetSelection& value) { m_targetSelectionHasBeenSet = true; m_targetSelection = value; }

    /**
     * <p>Specifies whether the update will continue to run (CONTINUOUS), or will be
     * complete after all the things specified as targets have completed the update
     * (SNAPSHOT). If continuous, the update may also be run on a thing when a change
     * is detected in a target. For example, an update will run on a thing when the
     * thing is added to a target group, even after the update was completed by all
     * things originally in the group. Valid values: CONTINUOUS | SNAPSHOT.</p>
     */
    inline void SetTargetSelection(TargetSelection&& value) { m_targetSelectionHasBeenSet = true; m_targetSelection = std::move(value); }

    /**
     * <p>Specifies whether the update will continue to run (CONTINUOUS), or will be
     * complete after all the things specified as targets have completed the update
     * (SNAPSHOT). If continuous, the update may also be run on a thing when a change
     * is detected in a target. For example, an update will run on a thing when the
     * thing is added to a target group, even after the update was completed by all
     * things originally in the group. Valid values: CONTINUOUS | SNAPSHOT.</p>
     */
    inline CreateOTAUpdateRequest& WithTargetSelection(const TargetSelection& value) { SetTargetSelection(value); return *this;}

    /**
     * <p>Specifies whether the update will continue to run (CONTINUOUS), or will be
     * complete after all the things specified as targets have completed the update
     * (SNAPSHOT). If continuous, the update may also be run on a thing when a change
     * is detected in a target. For example, an update will run on a thing when the
     * thing is added to a target group, even after the update was completed by all
     * things originally in the group. Valid values: CONTINUOUS | SNAPSHOT.</p>
     */
    inline CreateOTAUpdateRequest& WithTargetSelection(TargetSelection&& value) { SetTargetSelection(std::move(value)); return *this;}


    /**
     * <p>Configuration for the rollout of OTA updates.</p>
     */
    inline const AwsJobExecutionsRolloutConfig& GetAwsJobExecutionsRolloutConfig() const{ return m_awsJobExecutionsRolloutConfig; }

    /**
     * <p>Configuration for the rollout of OTA updates.</p>
     */
    inline bool AwsJobExecutionsRolloutConfigHasBeenSet() const { return m_awsJobExecutionsRolloutConfigHasBeenSet; }

    /**
     * <p>Configuration for the rollout of OTA updates.</p>
     */
    inline void SetAwsJobExecutionsRolloutConfig(const AwsJobExecutionsRolloutConfig& value) { m_awsJobExecutionsRolloutConfigHasBeenSet = true; m_awsJobExecutionsRolloutConfig = value; }

    /**
     * <p>Configuration for the rollout of OTA updates.</p>
     */
    inline void SetAwsJobExecutionsRolloutConfig(AwsJobExecutionsRolloutConfig&& value) { m_awsJobExecutionsRolloutConfigHasBeenSet = true; m_awsJobExecutionsRolloutConfig = std::move(value); }

    /**
     * <p>Configuration for the rollout of OTA updates.</p>
     */
    inline CreateOTAUpdateRequest& WithAwsJobExecutionsRolloutConfig(const AwsJobExecutionsRolloutConfig& value) { SetAwsJobExecutionsRolloutConfig(value); return *this;}

    /**
     * <p>Configuration for the rollout of OTA updates.</p>
     */
    inline CreateOTAUpdateRequest& WithAwsJobExecutionsRolloutConfig(AwsJobExecutionsRolloutConfig&& value) { SetAwsJobExecutionsRolloutConfig(std::move(value)); return *this;}


    /**
     * <p>Configuration information for pre-signed URLs.</p>
     */
    inline const AwsJobPresignedUrlConfig& GetAwsJobPresignedUrlConfig() const{ return m_awsJobPresignedUrlConfig; }

    /**
     * <p>Configuration information for pre-signed URLs.</p>
     */
    inline bool AwsJobPresignedUrlConfigHasBeenSet() const { return m_awsJobPresignedUrlConfigHasBeenSet; }

    /**
     * <p>Configuration information for pre-signed URLs.</p>
     */
    inline void SetAwsJobPresignedUrlConfig(const AwsJobPresignedUrlConfig& value) { m_awsJobPresignedUrlConfigHasBeenSet = true; m_awsJobPresignedUrlConfig = value; }

    /**
     * <p>Configuration information for pre-signed URLs.</p>
     */
    inline void SetAwsJobPresignedUrlConfig(AwsJobPresignedUrlConfig&& value) { m_awsJobPresignedUrlConfigHasBeenSet = true; m_awsJobPresignedUrlConfig = std::move(value); }

    /**
     * <p>Configuration information for pre-signed URLs.</p>
     */
    inline CreateOTAUpdateRequest& WithAwsJobPresignedUrlConfig(const AwsJobPresignedUrlConfig& value) { SetAwsJobPresignedUrlConfig(value); return *this;}

    /**
     * <p>Configuration information for pre-signed URLs.</p>
     */
    inline CreateOTAUpdateRequest& WithAwsJobPresignedUrlConfig(AwsJobPresignedUrlConfig&& value) { SetAwsJobPresignedUrlConfig(std::move(value)); return *this;}


    /**
     * <p>The criteria that determine when and how a job abort takes place.</p>
     */
    inline const AwsJobAbortConfig& GetAwsJobAbortConfig() const{ return m_awsJobAbortConfig; }

    /**
     * <p>The criteria that determine when and how a job abort takes place.</p>
     */
    inline bool AwsJobAbortConfigHasBeenSet() const { return m_awsJobAbortConfigHasBeenSet; }

    /**
     * <p>The criteria that determine when and how a job abort takes place.</p>
     */
    inline void SetAwsJobAbortConfig(const AwsJobAbortConfig& value) { m_awsJobAbortConfigHasBeenSet = true; m_awsJobAbortConfig = value; }

    /**
     * <p>The criteria that determine when and how a job abort takes place.</p>
     */
    inline void SetAwsJobAbortConfig(AwsJobAbortConfig&& value) { m_awsJobAbortConfigHasBeenSet = true; m_awsJobAbortConfig = std::move(value); }

    /**
     * <p>The criteria that determine when and how a job abort takes place.</p>
     */
    inline CreateOTAUpdateRequest& WithAwsJobAbortConfig(const AwsJobAbortConfig& value) { SetAwsJobAbortConfig(value); return *this;}

    /**
     * <p>The criteria that determine when and how a job abort takes place.</p>
     */
    inline CreateOTAUpdateRequest& WithAwsJobAbortConfig(AwsJobAbortConfig&& value) { SetAwsJobAbortConfig(std::move(value)); return *this;}


    /**
     * <p>Specifies the amount of time each device has to finish its execution of the
     * job. A timer is started when the job execution status is set to
     * <code>IN_PROGRESS</code>. If the job execution status is not set to another
     * terminal state before the timer expires, it will be automatically set to
     * <code>TIMED_OUT</code>.</p>
     */
    inline const AwsJobTimeoutConfig& GetAwsJobTimeoutConfig() const{ return m_awsJobTimeoutConfig; }

    /**
     * <p>Specifies the amount of time each device has to finish its execution of the
     * job. A timer is started when the job execution status is set to
     * <code>IN_PROGRESS</code>. If the job execution status is not set to another
     * terminal state before the timer expires, it will be automatically set to
     * <code>TIMED_OUT</code>.</p>
     */
    inline bool AwsJobTimeoutConfigHasBeenSet() const { return m_awsJobTimeoutConfigHasBeenSet; }

    /**
     * <p>Specifies the amount of time each device has to finish its execution of the
     * job. A timer is started when the job execution status is set to
     * <code>IN_PROGRESS</code>. If the job execution status is not set to another
     * terminal state before the timer expires, it will be automatically set to
     * <code>TIMED_OUT</code>.</p>
     */
    inline void SetAwsJobTimeoutConfig(const AwsJobTimeoutConfig& value) { m_awsJobTimeoutConfigHasBeenSet = true; m_awsJobTimeoutConfig = value; }

    /**
     * <p>Specifies the amount of time each device has to finish its execution of the
     * job. A timer is started when the job execution status is set to
     * <code>IN_PROGRESS</code>. If the job execution status is not set to another
     * terminal state before the timer expires, it will be automatically set to
     * <code>TIMED_OUT</code>.</p>
     */
    inline void SetAwsJobTimeoutConfig(AwsJobTimeoutConfig&& value) { m_awsJobTimeoutConfigHasBeenSet = true; m_awsJobTimeoutConfig = std::move(value); }

    /**
     * <p>Specifies the amount of time each device has to finish its execution of the
     * job. A timer is started when the job execution status is set to
     * <code>IN_PROGRESS</code>. If the job execution status is not set to another
     * terminal state before the timer expires, it will be automatically set to
     * <code>TIMED_OUT</code>.</p>
     */
    inline CreateOTAUpdateRequest& WithAwsJobTimeoutConfig(const AwsJobTimeoutConfig& value) { SetAwsJobTimeoutConfig(value); return *this;}

    /**
     * <p>Specifies the amount of time each device has to finish its execution of the
     * job. A timer is started when the job execution status is set to
     * <code>IN_PROGRESS</code>. If the job execution status is not set to another
     * terminal state before the timer expires, it will be automatically set to
     * <code>TIMED_OUT</code>.</p>
     */
    inline CreateOTAUpdateRequest& WithAwsJobTimeoutConfig(AwsJobTimeoutConfig&& value) { SetAwsJobTimeoutConfig(std::move(value)); return *this;}


    /**
     * <p>The files to be streamed by the OTA update.</p>
     */
    inline const Aws::Vector<OTAUpdateFile>& GetFiles() const{ return m_files; }

    /**
     * <p>The files to be streamed by the OTA update.</p>
     */
    inline bool FilesHasBeenSet() const { return m_filesHasBeenSet; }

    /**
     * <p>The files to be streamed by the OTA update.</p>
     */
    inline void SetFiles(const Aws::Vector<OTAUpdateFile>& value) { m_filesHasBeenSet = true; m_files = value; }

    /**
     * <p>The files to be streamed by the OTA update.</p>
     */
    inline void SetFiles(Aws::Vector<OTAUpdateFile>&& value) { m_filesHasBeenSet = true; m_files = std::move(value); }

    /**
     * <p>The files to be streamed by the OTA update.</p>
     */
    inline CreateOTAUpdateRequest& WithFiles(const Aws::Vector<OTAUpdateFile>& value) { SetFiles(value); return *this;}

    /**
     * <p>The files to be streamed by the OTA update.</p>
     */
    inline CreateOTAUpdateRequest& WithFiles(Aws::Vector<OTAUpdateFile>&& value) { SetFiles(std::move(value)); return *this;}

    /**
     * <p>The files to be streamed by the OTA update.</p>
     */
    inline CreateOTAUpdateRequest& AddFiles(const OTAUpdateFile& value) { m_filesHasBeenSet = true; m_files.push_back(value); return *this; }

    /**
     * <p>The files to be streamed by the OTA update.</p>
     */
    inline CreateOTAUpdateRequest& AddFiles(OTAUpdateFile&& value) { m_filesHasBeenSet = true; m_files.push_back(std::move(value)); return *this; }


    /**
     * <p>The IAM role that grants Amazon Web Services IoT Core access to the Amazon
     * S3, IoT jobs and Amazon Web Services Code Signing resources to create an OTA
     * update job.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The IAM role that grants Amazon Web Services IoT Core access to the Amazon
     * S3, IoT jobs and Amazon Web Services Code Signing resources to create an OTA
     * update job.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The IAM role that grants Amazon Web Services IoT Core access to the Amazon
     * S3, IoT jobs and Amazon Web Services Code Signing resources to create an OTA
     * update job.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The IAM role that grants Amazon Web Services IoT Core access to the Amazon
     * S3, IoT jobs and Amazon Web Services Code Signing resources to create an OTA
     * update job.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The IAM role that grants Amazon Web Services IoT Core access to the Amazon
     * S3, IoT jobs and Amazon Web Services Code Signing resources to create an OTA
     * update job.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The IAM role that grants Amazon Web Services IoT Core access to the Amazon
     * S3, IoT jobs and Amazon Web Services Code Signing resources to create an OTA
     * update job.</p>
     */
    inline CreateOTAUpdateRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The IAM role that grants Amazon Web Services IoT Core access to the Amazon
     * S3, IoT jobs and Amazon Web Services Code Signing resources to create an OTA
     * update job.</p>
     */
    inline CreateOTAUpdateRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role that grants Amazon Web Services IoT Core access to the Amazon
     * S3, IoT jobs and Amazon Web Services Code Signing resources to create an OTA
     * update job.</p>
     */
    inline CreateOTAUpdateRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>A list of additional OTA update parameters which are name-value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalParameters() const{ return m_additionalParameters; }

    /**
     * <p>A list of additional OTA update parameters which are name-value pairs.</p>
     */
    inline bool AdditionalParametersHasBeenSet() const { return m_additionalParametersHasBeenSet; }

    /**
     * <p>A list of additional OTA update parameters which are name-value pairs.</p>
     */
    inline void SetAdditionalParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalParametersHasBeenSet = true; m_additionalParameters = value; }

    /**
     * <p>A list of additional OTA update parameters which are name-value pairs.</p>
     */
    inline void SetAdditionalParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalParametersHasBeenSet = true; m_additionalParameters = std::move(value); }

    /**
     * <p>A list of additional OTA update parameters which are name-value pairs.</p>
     */
    inline CreateOTAUpdateRequest& WithAdditionalParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalParameters(value); return *this;}

    /**
     * <p>A list of additional OTA update parameters which are name-value pairs.</p>
     */
    inline CreateOTAUpdateRequest& WithAdditionalParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalParameters(std::move(value)); return *this;}

    /**
     * <p>A list of additional OTA update parameters which are name-value pairs.</p>
     */
    inline CreateOTAUpdateRequest& AddAdditionalParameters(const Aws::String& key, const Aws::String& value) { m_additionalParametersHasBeenSet = true; m_additionalParameters.emplace(key, value); return *this; }

    /**
     * <p>A list of additional OTA update parameters which are name-value pairs.</p>
     */
    inline CreateOTAUpdateRequest& AddAdditionalParameters(Aws::String&& key, const Aws::String& value) { m_additionalParametersHasBeenSet = true; m_additionalParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of additional OTA update parameters which are name-value pairs.</p>
     */
    inline CreateOTAUpdateRequest& AddAdditionalParameters(const Aws::String& key, Aws::String&& value) { m_additionalParametersHasBeenSet = true; m_additionalParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of additional OTA update parameters which are name-value pairs.</p>
     */
    inline CreateOTAUpdateRequest& AddAdditionalParameters(Aws::String&& key, Aws::String&& value) { m_additionalParametersHasBeenSet = true; m_additionalParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of additional OTA update parameters which are name-value pairs.</p>
     */
    inline CreateOTAUpdateRequest& AddAdditionalParameters(const char* key, Aws::String&& value) { m_additionalParametersHasBeenSet = true; m_additionalParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of additional OTA update parameters which are name-value pairs.</p>
     */
    inline CreateOTAUpdateRequest& AddAdditionalParameters(Aws::String&& key, const char* value) { m_additionalParametersHasBeenSet = true; m_additionalParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of additional OTA update parameters which are name-value pairs.</p>
     */
    inline CreateOTAUpdateRequest& AddAdditionalParameters(const char* key, const char* value) { m_additionalParametersHasBeenSet = true; m_additionalParameters.emplace(key, value); return *this; }


    /**
     * <p>Metadata which can be used to manage updates.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata which can be used to manage updates.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata which can be used to manage updates.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata which can be used to manage updates.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata which can be used to manage updates.</p>
     */
    inline CreateOTAUpdateRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata which can be used to manage updates.</p>
     */
    inline CreateOTAUpdateRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata which can be used to manage updates.</p>
     */
    inline CreateOTAUpdateRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Metadata which can be used to manage updates.</p>
     */
    inline CreateOTAUpdateRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_otaUpdateId;
    bool m_otaUpdateIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::Vector<Protocol> m_protocols;
    bool m_protocolsHasBeenSet = false;

    TargetSelection m_targetSelection;
    bool m_targetSelectionHasBeenSet = false;

    AwsJobExecutionsRolloutConfig m_awsJobExecutionsRolloutConfig;
    bool m_awsJobExecutionsRolloutConfigHasBeenSet = false;

    AwsJobPresignedUrlConfig m_awsJobPresignedUrlConfig;
    bool m_awsJobPresignedUrlConfigHasBeenSet = false;

    AwsJobAbortConfig m_awsJobAbortConfig;
    bool m_awsJobAbortConfigHasBeenSet = false;

    AwsJobTimeoutConfig m_awsJobTimeoutConfig;
    bool m_awsJobTimeoutConfigHasBeenSet = false;

    Aws::Vector<OTAUpdateFile> m_files;
    bool m_filesHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_additionalParameters;
    bool m_additionalParametersHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
