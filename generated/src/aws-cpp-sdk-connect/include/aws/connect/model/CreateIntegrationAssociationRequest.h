/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/IntegrationType.h>
#include <aws/connect/model/SourceType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class CreateIntegrationAssociationRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API CreateIntegrationAssociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIntegrationAssociation"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    CreateIntegrationAssociationRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of information to be ingested.</p>
     */
    inline IntegrationType GetIntegrationType() const { return m_integrationType; }
    inline bool IntegrationTypeHasBeenSet() const { return m_integrationTypeHasBeenSet; }
    inline void SetIntegrationType(IntegrationType value) { m_integrationTypeHasBeenSet = true; m_integrationType = value; }
    inline CreateIntegrationAssociationRequest& WithIntegrationType(IntegrationType value) { SetIntegrationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the integration.</p>  <p>When
     * integrating with Amazon Web Services End User Messaging, the Amazon Connect and
     * Amazon Web Services End User Messaging instances must be in the same
     * account.</p> 
     */
    inline const Aws::String& GetIntegrationArn() const { return m_integrationArn; }
    inline bool IntegrationArnHasBeenSet() const { return m_integrationArnHasBeenSet; }
    template<typename IntegrationArnT = Aws::String>
    void SetIntegrationArn(IntegrationArnT&& value) { m_integrationArnHasBeenSet = true; m_integrationArn = std::forward<IntegrationArnT>(value); }
    template<typename IntegrationArnT = Aws::String>
    CreateIntegrationAssociationRequest& WithIntegrationArn(IntegrationArnT&& value) { SetIntegrationArn(std::forward<IntegrationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL for the external application. This field is only required for the
     * EVENT integration type.</p>
     */
    inline const Aws::String& GetSourceApplicationUrl() const { return m_sourceApplicationUrl; }
    inline bool SourceApplicationUrlHasBeenSet() const { return m_sourceApplicationUrlHasBeenSet; }
    template<typename SourceApplicationUrlT = Aws::String>
    void SetSourceApplicationUrl(SourceApplicationUrlT&& value) { m_sourceApplicationUrlHasBeenSet = true; m_sourceApplicationUrl = std::forward<SourceApplicationUrlT>(value); }
    template<typename SourceApplicationUrlT = Aws::String>
    CreateIntegrationAssociationRequest& WithSourceApplicationUrl(SourceApplicationUrlT&& value) { SetSourceApplicationUrl(std::forward<SourceApplicationUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the external application. This field is only required for the
     * EVENT integration type.</p>
     */
    inline const Aws::String& GetSourceApplicationName() const { return m_sourceApplicationName; }
    inline bool SourceApplicationNameHasBeenSet() const { return m_sourceApplicationNameHasBeenSet; }
    template<typename SourceApplicationNameT = Aws::String>
    void SetSourceApplicationName(SourceApplicationNameT&& value) { m_sourceApplicationNameHasBeenSet = true; m_sourceApplicationName = std::forward<SourceApplicationNameT>(value); }
    template<typename SourceApplicationNameT = Aws::String>
    CreateIntegrationAssociationRequest& WithSourceApplicationName(SourceApplicationNameT&& value) { SetSourceApplicationName(std::forward<SourceApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the data source. This field is only required for the EVENT
     * integration type.</p>
     */
    inline SourceType GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(SourceType value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline CreateIntegrationAssociationRequest& WithSourceType(SourceType value) { SetSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateIntegrationAssociationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateIntegrationAssociationRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    IntegrationType m_integrationType{IntegrationType::NOT_SET};
    bool m_integrationTypeHasBeenSet = false;

    Aws::String m_integrationArn;
    bool m_integrationArnHasBeenSet = false;

    Aws::String m_sourceApplicationUrl;
    bool m_sourceApplicationUrlHasBeenSet = false;

    Aws::String m_sourceApplicationName;
    bool m_sourceApplicationNameHasBeenSet = false;

    SourceType m_sourceType{SourceType::NOT_SET};
    bool m_sourceTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
