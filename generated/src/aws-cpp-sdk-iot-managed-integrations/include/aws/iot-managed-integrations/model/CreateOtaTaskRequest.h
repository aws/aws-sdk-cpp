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
    AWS_IOTMANAGEDINTEGRATIONS_API CreateOtaTaskRequest() = default;

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
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateOtaTaskRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the Amazon S3 bucket where the over-the-air (OTA) task is
     * stored.</p>
     */
    inline const Aws::String& GetS3Url() const { return m_s3Url; }
    inline bool S3UrlHasBeenSet() const { return m_s3UrlHasBeenSet; }
    template<typename S3UrlT = Aws::String>
    void SetS3Url(S3UrlT&& value) { m_s3UrlHasBeenSet = true; m_s3Url = std::forward<S3UrlT>(value); }
    template<typename S3UrlT = Aws::String>
    CreateOtaTaskRequest& WithS3Url(S3UrlT&& value) { SetS3Url(std::forward<S3UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection protocol the over-the-air (OTA) task uses to update the
     * device.</p>
     */
    inline OtaProtocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(OtaProtocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline CreateOtaTaskRequest& WithProtocol(OtaProtocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device targeted for the over-the-air (OTA) task.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = Aws::Vector<Aws::String>>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = Aws::Vector<Aws::String>>
    CreateOtaTaskRequest& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    template<typename TargetT = Aws::String>
    CreateOtaTaskRequest& AddTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target.emplace_back(std::forward<TargetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier for the over-the-air (OTA) task configuration.</p>
     */
    inline const Aws::String& GetTaskConfigurationId() const { return m_taskConfigurationId; }
    inline bool TaskConfigurationIdHasBeenSet() const { return m_taskConfigurationIdHasBeenSet; }
    template<typename TaskConfigurationIdT = Aws::String>
    void SetTaskConfigurationId(TaskConfigurationIdT&& value) { m_taskConfigurationIdHasBeenSet = true; m_taskConfigurationId = std::forward<TaskConfigurationIdT>(value); }
    template<typename TaskConfigurationIdT = Aws::String>
    CreateOtaTaskRequest& WithTaskConfigurationId(TaskConfigurationIdT&& value) { SetTaskConfigurationId(std::forward<TaskConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment mechanism for the over-the-air (OTA) task.</p>
     */
    inline OtaMechanism GetOtaMechanism() const { return m_otaMechanism; }
    inline bool OtaMechanismHasBeenSet() const { return m_otaMechanismHasBeenSet; }
    inline void SetOtaMechanism(OtaMechanism value) { m_otaMechanismHasBeenSet = true; m_otaMechanism = value; }
    inline CreateOtaTaskRequest& WithOtaMechanism(OtaMechanism value) { SetOtaMechanism(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frequency type for the over-the-air (OTA) task.</p>
     */
    inline OtaType GetOtaType() const { return m_otaType; }
    inline bool OtaTypeHasBeenSet() const { return m_otaTypeHasBeenSet; }
    inline void SetOtaType(OtaType value) { m_otaTypeHasBeenSet = true; m_otaType = value; }
    inline CreateOtaTaskRequest& WithOtaType(OtaType value) { SetOtaType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query string to add things to the thing group.</p>
     */
    inline const Aws::String& GetOtaTargetQueryString() const { return m_otaTargetQueryString; }
    inline bool OtaTargetQueryStringHasBeenSet() const { return m_otaTargetQueryStringHasBeenSet; }
    template<typename OtaTargetQueryStringT = Aws::String>
    void SetOtaTargetQueryString(OtaTargetQueryStringT&& value) { m_otaTargetQueryStringHasBeenSet = true; m_otaTargetQueryString = std::forward<OtaTargetQueryStringT>(value); }
    template<typename OtaTargetQueryStringT = Aws::String>
    CreateOtaTaskRequest& WithOtaTargetQueryString(OtaTargetQueryStringT&& value) { SetOtaTargetQueryString(std::forward<OtaTargetQueryStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An idempotency token. If you retry a request that completed successfully
     * initially using the same client token and parameters, then the retry attempt
     * will succeed without performing any further actions.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateOtaTaskRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const OtaTaskSchedulingConfig& GetOtaSchedulingConfig() const { return m_otaSchedulingConfig; }
    inline bool OtaSchedulingConfigHasBeenSet() const { return m_otaSchedulingConfigHasBeenSet; }
    template<typename OtaSchedulingConfigT = OtaTaskSchedulingConfig>
    void SetOtaSchedulingConfig(OtaSchedulingConfigT&& value) { m_otaSchedulingConfigHasBeenSet = true; m_otaSchedulingConfig = std::forward<OtaSchedulingConfigT>(value); }
    template<typename OtaSchedulingConfigT = OtaTaskSchedulingConfig>
    CreateOtaTaskRequest& WithOtaSchedulingConfig(OtaSchedulingConfigT&& value) { SetOtaSchedulingConfig(std::forward<OtaSchedulingConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const OtaTaskExecutionRetryConfig& GetOtaTaskExecutionRetryConfig() const { return m_otaTaskExecutionRetryConfig; }
    inline bool OtaTaskExecutionRetryConfigHasBeenSet() const { return m_otaTaskExecutionRetryConfigHasBeenSet; }
    template<typename OtaTaskExecutionRetryConfigT = OtaTaskExecutionRetryConfig>
    void SetOtaTaskExecutionRetryConfig(OtaTaskExecutionRetryConfigT&& value) { m_otaTaskExecutionRetryConfigHasBeenSet = true; m_otaTaskExecutionRetryConfig = std::forward<OtaTaskExecutionRetryConfigT>(value); }
    template<typename OtaTaskExecutionRetryConfigT = OtaTaskExecutionRetryConfig>
    CreateOtaTaskRequest& WithOtaTaskExecutionRetryConfig(OtaTaskExecutionRetryConfigT&& value) { SetOtaTaskExecutionRetryConfig(std::forward<OtaTaskExecutionRetryConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of key/value pairs that are used to manage the over-the-air (OTA)
     * task.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateOtaTaskRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateOtaTaskRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_s3Url;
    bool m_s3UrlHasBeenSet = false;

    OtaProtocol m_protocol{OtaProtocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    Aws::Vector<Aws::String> m_target;
    bool m_targetHasBeenSet = false;

    Aws::String m_taskConfigurationId;
    bool m_taskConfigurationIdHasBeenSet = false;

    OtaMechanism m_otaMechanism{OtaMechanism::NOT_SET};
    bool m_otaMechanismHasBeenSet = false;

    OtaType m_otaType{OtaType::NOT_SET};
    bool m_otaTypeHasBeenSet = false;

    Aws::String m_otaTargetQueryString;
    bool m_otaTargetQueryStringHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

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
