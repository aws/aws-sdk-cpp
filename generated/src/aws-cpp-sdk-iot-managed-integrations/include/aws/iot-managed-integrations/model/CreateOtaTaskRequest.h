/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/OtaProtocol.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot-managed-integrations/model/OtaMechanism.h>
#include <aws/iot-managed-integrations/model/OtaType.h>
#include <aws/iot-managed-integrations/model/OtaTaskSchedulingConfig.h>
#include <aws/iot-managed-integrations/model/OtaTaskExecutionRetryConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   */
  class CreateOtaTaskRequest : public IoTManagedIntegrationsRequest
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API CreateOtaTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateOtaTask"; }

    AWS_IOTMANAGEDINTEGRATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The description of the over-the-air (OTA) task.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateOtaTaskRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateOtaTaskRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateOtaTaskRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the Amazon S3 bucket where the over-the-air (OTA) task is
     * stored.</p>
     */
    inline const Aws::String& GetS3Url() const{ return m_s3Url; }
    inline bool S3UrlHasBeenSet() const { return m_s3UrlHasBeenSet; }
    inline void SetS3Url(const Aws::String& value) { m_s3UrlHasBeenSet = true; m_s3Url = value; }
    inline void SetS3Url(Aws::String&& value) { m_s3UrlHasBeenSet = true; m_s3Url = std::move(value); }
    inline void SetS3Url(const char* value) { m_s3UrlHasBeenSet = true; m_s3Url.assign(value); }
    inline CreateOtaTaskRequest& WithS3Url(const Aws::String& value) { SetS3Url(value); return *this;}
    inline CreateOtaTaskRequest& WithS3Url(Aws::String&& value) { SetS3Url(std::move(value)); return *this;}
    inline CreateOtaTaskRequest& WithS3Url(const char* value) { SetS3Url(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection protocol the over-the-air (OTA) task uses to update the
     * device.</p>
     */
    inline const OtaProtocol& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const OtaProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(OtaProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline CreateOtaTaskRequest& WithProtocol(const OtaProtocol& value) { SetProtocol(value); return *this;}
    inline CreateOtaTaskRequest& WithProtocol(OtaProtocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device targeted for the over-the-air (OTA) task.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const Aws::Vector<Aws::String>& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(Aws::Vector<Aws::String>&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline CreateOtaTaskRequest& WithTarget(const Aws::Vector<Aws::String>& value) { SetTarget(value); return *this;}
    inline CreateOtaTaskRequest& WithTarget(Aws::Vector<Aws::String>&& value) { SetTarget(std::move(value)); return *this;}
    inline CreateOtaTaskRequest& AddTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target.push_back(value); return *this; }
    inline CreateOtaTaskRequest& AddTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target.push_back(std::move(value)); return *this; }
    inline CreateOtaTaskRequest& AddTarget(const char* value) { m_targetHasBeenSet = true; m_target.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier for the over-the-air (OTA) task configuration.</p>
     */
    inline const Aws::String& GetTaskConfigurationId() const{ return m_taskConfigurationId; }
    inline bool TaskConfigurationIdHasBeenSet() const { return m_taskConfigurationIdHasBeenSet; }
    inline void SetTaskConfigurationId(const Aws::String& value) { m_taskConfigurationIdHasBeenSet = true; m_taskConfigurationId = value; }
    inline void SetTaskConfigurationId(Aws::String&& value) { m_taskConfigurationIdHasBeenSet = true; m_taskConfigurationId = std::move(value); }
    inline void SetTaskConfigurationId(const char* value) { m_taskConfigurationIdHasBeenSet = true; m_taskConfigurationId.assign(value); }
    inline CreateOtaTaskRequest& WithTaskConfigurationId(const Aws::String& value) { SetTaskConfigurationId(value); return *this;}
    inline CreateOtaTaskRequest& WithTaskConfigurationId(Aws::String&& value) { SetTaskConfigurationId(std::move(value)); return *this;}
    inline CreateOtaTaskRequest& WithTaskConfigurationId(const char* value) { SetTaskConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment mechanism for the over-the-air (OTA) task.</p>
     */
    inline const OtaMechanism& GetOtaMechanism() const{ return m_otaMechanism; }
    inline bool OtaMechanismHasBeenSet() const { return m_otaMechanismHasBeenSet; }
    inline void SetOtaMechanism(const OtaMechanism& value) { m_otaMechanismHasBeenSet = true; m_otaMechanism = value; }
    inline void SetOtaMechanism(OtaMechanism&& value) { m_otaMechanismHasBeenSet = true; m_otaMechanism = std::move(value); }
    inline CreateOtaTaskRequest& WithOtaMechanism(const OtaMechanism& value) { SetOtaMechanism(value); return *this;}
    inline CreateOtaTaskRequest& WithOtaMechanism(OtaMechanism&& value) { SetOtaMechanism(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frequency type for the over-the-air (OTA) task.</p>
     */
    inline const OtaType& GetOtaType() const{ return m_otaType; }
    inline bool OtaTypeHasBeenSet() const { return m_otaTypeHasBeenSet; }
    inline void SetOtaType(const OtaType& value) { m_otaTypeHasBeenSet = true; m_otaType = value; }
    inline void SetOtaType(OtaType&& value) { m_otaTypeHasBeenSet = true; m_otaType = std::move(value); }
    inline CreateOtaTaskRequest& WithOtaType(const OtaType& value) { SetOtaType(value); return *this;}
    inline CreateOtaTaskRequest& WithOtaType(OtaType&& value) { SetOtaType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query string to add things to the thing group.</p>
     */
    inline const Aws::String& GetOtaTargetQueryString() const{ return m_otaTargetQueryString; }
    inline bool OtaTargetQueryStringHasBeenSet() const { return m_otaTargetQueryStringHasBeenSet; }
    inline void SetOtaTargetQueryString(const Aws::String& value) { m_otaTargetQueryStringHasBeenSet = true; m_otaTargetQueryString = value; }
    inline void SetOtaTargetQueryString(Aws::String&& value) { m_otaTargetQueryStringHasBeenSet = true; m_otaTargetQueryString = std::move(value); }
    inline void SetOtaTargetQueryString(const char* value) { m_otaTargetQueryStringHasBeenSet = true; m_otaTargetQueryString.assign(value); }
    inline CreateOtaTaskRequest& WithOtaTargetQueryString(const Aws::String& value) { SetOtaTargetQueryString(value); return *this;}
    inline CreateOtaTaskRequest& WithOtaTargetQueryString(Aws::String&& value) { SetOtaTargetQueryString(std::move(value)); return *this;}
    inline CreateOtaTaskRequest& WithOtaTargetQueryString(const char* value) { SetOtaTargetQueryString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An idempotency token. If you retry a request that completed successfully
     * initially using the same client token and parameters, then the retry attempt
     * will succeed without performing any further actions.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateOtaTaskRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateOtaTaskRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateOtaTaskRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    
    inline const OtaTaskSchedulingConfig& GetOtaSchedulingConfig() const{ return m_otaSchedulingConfig; }
    inline bool OtaSchedulingConfigHasBeenSet() const { return m_otaSchedulingConfigHasBeenSet; }
    inline void SetOtaSchedulingConfig(const OtaTaskSchedulingConfig& value) { m_otaSchedulingConfigHasBeenSet = true; m_otaSchedulingConfig = value; }
    inline void SetOtaSchedulingConfig(OtaTaskSchedulingConfig&& value) { m_otaSchedulingConfigHasBeenSet = true; m_otaSchedulingConfig = std::move(value); }
    inline CreateOtaTaskRequest& WithOtaSchedulingConfig(const OtaTaskSchedulingConfig& value) { SetOtaSchedulingConfig(value); return *this;}
    inline CreateOtaTaskRequest& WithOtaSchedulingConfig(OtaTaskSchedulingConfig&& value) { SetOtaSchedulingConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const OtaTaskExecutionRetryConfig& GetOtaTaskExecutionRetryConfig() const{ return m_otaTaskExecutionRetryConfig; }
    inline bool OtaTaskExecutionRetryConfigHasBeenSet() const { return m_otaTaskExecutionRetryConfigHasBeenSet; }
    inline void SetOtaTaskExecutionRetryConfig(const OtaTaskExecutionRetryConfig& value) { m_otaTaskExecutionRetryConfigHasBeenSet = true; m_otaTaskExecutionRetryConfig = value; }
    inline void SetOtaTaskExecutionRetryConfig(OtaTaskExecutionRetryConfig&& value) { m_otaTaskExecutionRetryConfigHasBeenSet = true; m_otaTaskExecutionRetryConfig = std::move(value); }
    inline CreateOtaTaskRequest& WithOtaTaskExecutionRetryConfig(const OtaTaskExecutionRetryConfig& value) { SetOtaTaskExecutionRetryConfig(value); return *this;}
    inline CreateOtaTaskRequest& WithOtaTaskExecutionRetryConfig(OtaTaskExecutionRetryConfig&& value) { SetOtaTaskExecutionRetryConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of key/value pairs that are used to manage the over-the-air (OTA)
     * task.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateOtaTaskRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateOtaTaskRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateOtaTaskRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateOtaTaskRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateOtaTaskRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateOtaTaskRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateOtaTaskRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateOtaTaskRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateOtaTaskRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_s3Url;
    bool m_s3UrlHasBeenSet = false;

    OtaProtocol m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::Vector<Aws::String> m_target;
    bool m_targetHasBeenSet = false;

    Aws::String m_taskConfigurationId;
    bool m_taskConfigurationIdHasBeenSet = false;

    OtaMechanism m_otaMechanism;
    bool m_otaMechanismHasBeenSet = false;

    OtaType m_otaType;
    bool m_otaTypeHasBeenSet = false;

    Aws::String m_otaTargetQueryString;
    bool m_otaTargetQueryStringHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    OtaTaskSchedulingConfig m_otaSchedulingConfig;
    bool m_otaSchedulingConfigHasBeenSet = false;

    OtaTaskExecutionRetryConfig m_otaTaskExecutionRetryConfig;
    bool m_otaTaskExecutionRetryConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
