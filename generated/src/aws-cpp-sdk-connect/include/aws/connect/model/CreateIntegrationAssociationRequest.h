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
    AWS_CONNECT_API CreateIntegrationAssociationRequest();

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
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline CreateIntegrationAssociationRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline CreateIntegrationAssociationRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline CreateIntegrationAssociationRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of information to be ingested.</p>
     */
    inline const IntegrationType& GetIntegrationType() const{ return m_integrationType; }
    inline bool IntegrationTypeHasBeenSet() const { return m_integrationTypeHasBeenSet; }
    inline void SetIntegrationType(const IntegrationType& value) { m_integrationTypeHasBeenSet = true; m_integrationType = value; }
    inline void SetIntegrationType(IntegrationType&& value) { m_integrationTypeHasBeenSet = true; m_integrationType = std::move(value); }
    inline CreateIntegrationAssociationRequest& WithIntegrationType(const IntegrationType& value) { SetIntegrationType(value); return *this;}
    inline CreateIntegrationAssociationRequest& WithIntegrationType(IntegrationType&& value) { SetIntegrationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the integration.</p>  <p>When
     * integrating with Amazon Web Services End User Messaging, the Amazon Connect and
     * Amazon Web Services End User Messaging instances must be in the same
     * account.</p> 
     */
    inline const Aws::String& GetIntegrationArn() const{ return m_integrationArn; }
    inline bool IntegrationArnHasBeenSet() const { return m_integrationArnHasBeenSet; }
    inline void SetIntegrationArn(const Aws::String& value) { m_integrationArnHasBeenSet = true; m_integrationArn = value; }
    inline void SetIntegrationArn(Aws::String&& value) { m_integrationArnHasBeenSet = true; m_integrationArn = std::move(value); }
    inline void SetIntegrationArn(const char* value) { m_integrationArnHasBeenSet = true; m_integrationArn.assign(value); }
    inline CreateIntegrationAssociationRequest& WithIntegrationArn(const Aws::String& value) { SetIntegrationArn(value); return *this;}
    inline CreateIntegrationAssociationRequest& WithIntegrationArn(Aws::String&& value) { SetIntegrationArn(std::move(value)); return *this;}
    inline CreateIntegrationAssociationRequest& WithIntegrationArn(const char* value) { SetIntegrationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL for the external application. This field is only required for the
     * EVENT integration type.</p>
     */
    inline const Aws::String& GetSourceApplicationUrl() const{ return m_sourceApplicationUrl; }
    inline bool SourceApplicationUrlHasBeenSet() const { return m_sourceApplicationUrlHasBeenSet; }
    inline void SetSourceApplicationUrl(const Aws::String& value) { m_sourceApplicationUrlHasBeenSet = true; m_sourceApplicationUrl = value; }
    inline void SetSourceApplicationUrl(Aws::String&& value) { m_sourceApplicationUrlHasBeenSet = true; m_sourceApplicationUrl = std::move(value); }
    inline void SetSourceApplicationUrl(const char* value) { m_sourceApplicationUrlHasBeenSet = true; m_sourceApplicationUrl.assign(value); }
    inline CreateIntegrationAssociationRequest& WithSourceApplicationUrl(const Aws::String& value) { SetSourceApplicationUrl(value); return *this;}
    inline CreateIntegrationAssociationRequest& WithSourceApplicationUrl(Aws::String&& value) { SetSourceApplicationUrl(std::move(value)); return *this;}
    inline CreateIntegrationAssociationRequest& WithSourceApplicationUrl(const char* value) { SetSourceApplicationUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the external application. This field is only required for the
     * EVENT integration type.</p>
     */
    inline const Aws::String& GetSourceApplicationName() const{ return m_sourceApplicationName; }
    inline bool SourceApplicationNameHasBeenSet() const { return m_sourceApplicationNameHasBeenSet; }
    inline void SetSourceApplicationName(const Aws::String& value) { m_sourceApplicationNameHasBeenSet = true; m_sourceApplicationName = value; }
    inline void SetSourceApplicationName(Aws::String&& value) { m_sourceApplicationNameHasBeenSet = true; m_sourceApplicationName = std::move(value); }
    inline void SetSourceApplicationName(const char* value) { m_sourceApplicationNameHasBeenSet = true; m_sourceApplicationName.assign(value); }
    inline CreateIntegrationAssociationRequest& WithSourceApplicationName(const Aws::String& value) { SetSourceApplicationName(value); return *this;}
    inline CreateIntegrationAssociationRequest& WithSourceApplicationName(Aws::String&& value) { SetSourceApplicationName(std::move(value)); return *this;}
    inline CreateIntegrationAssociationRequest& WithSourceApplicationName(const char* value) { SetSourceApplicationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the data source. This field is only required for the EVENT
     * integration type.</p>
     */
    inline const SourceType& GetSourceType() const{ return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(const SourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline void SetSourceType(SourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }
    inline CreateIntegrationAssociationRequest& WithSourceType(const SourceType& value) { SetSourceType(value); return *this;}
    inline CreateIntegrationAssociationRequest& WithSourceType(SourceType&& value) { SetSourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateIntegrationAssociationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateIntegrationAssociationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateIntegrationAssociationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateIntegrationAssociationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateIntegrationAssociationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateIntegrationAssociationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateIntegrationAssociationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateIntegrationAssociationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateIntegrationAssociationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    IntegrationType m_integrationType;
    bool m_integrationTypeHasBeenSet = false;

    Aws::String m_integrationArn;
    bool m_integrationArnHasBeenSet = false;

    Aws::String m_sourceApplicationUrl;
    bool m_sourceApplicationUrlHasBeenSet = false;

    Aws::String m_sourceApplicationName;
    bool m_sourceApplicationNameHasBeenSet = false;

    SourceType m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
