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


    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline CreateIntegrationAssociationRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline CreateIntegrationAssociationRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline CreateIntegrationAssociationRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The type of information to be ingested.</p>
     */
    inline const IntegrationType& GetIntegrationType() const{ return m_integrationType; }

    /**
     * <p>The type of information to be ingested.</p>
     */
    inline bool IntegrationTypeHasBeenSet() const { return m_integrationTypeHasBeenSet; }

    /**
     * <p>The type of information to be ingested.</p>
     */
    inline void SetIntegrationType(const IntegrationType& value) { m_integrationTypeHasBeenSet = true; m_integrationType = value; }

    /**
     * <p>The type of information to be ingested.</p>
     */
    inline void SetIntegrationType(IntegrationType&& value) { m_integrationTypeHasBeenSet = true; m_integrationType = std::move(value); }

    /**
     * <p>The type of information to be ingested.</p>
     */
    inline CreateIntegrationAssociationRequest& WithIntegrationType(const IntegrationType& value) { SetIntegrationType(value); return *this;}

    /**
     * <p>The type of information to be ingested.</p>
     */
    inline CreateIntegrationAssociationRequest& WithIntegrationType(IntegrationType&& value) { SetIntegrationType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the integration.</p>  <p>When
     * integrating with Amazon Pinpoint, the Amazon Connect and Amazon Pinpoint
     * instances must be in the same account.</p> 
     */
    inline const Aws::String& GetIntegrationArn() const{ return m_integrationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the integration.</p>  <p>When
     * integrating with Amazon Pinpoint, the Amazon Connect and Amazon Pinpoint
     * instances must be in the same account.</p> 
     */
    inline bool IntegrationArnHasBeenSet() const { return m_integrationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the integration.</p>  <p>When
     * integrating with Amazon Pinpoint, the Amazon Connect and Amazon Pinpoint
     * instances must be in the same account.</p> 
     */
    inline void SetIntegrationArn(const Aws::String& value) { m_integrationArnHasBeenSet = true; m_integrationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the integration.</p>  <p>When
     * integrating with Amazon Pinpoint, the Amazon Connect and Amazon Pinpoint
     * instances must be in the same account.</p> 
     */
    inline void SetIntegrationArn(Aws::String&& value) { m_integrationArnHasBeenSet = true; m_integrationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the integration.</p>  <p>When
     * integrating with Amazon Pinpoint, the Amazon Connect and Amazon Pinpoint
     * instances must be in the same account.</p> 
     */
    inline void SetIntegrationArn(const char* value) { m_integrationArnHasBeenSet = true; m_integrationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the integration.</p>  <p>When
     * integrating with Amazon Pinpoint, the Amazon Connect and Amazon Pinpoint
     * instances must be in the same account.</p> 
     */
    inline CreateIntegrationAssociationRequest& WithIntegrationArn(const Aws::String& value) { SetIntegrationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the integration.</p>  <p>When
     * integrating with Amazon Pinpoint, the Amazon Connect and Amazon Pinpoint
     * instances must be in the same account.</p> 
     */
    inline CreateIntegrationAssociationRequest& WithIntegrationArn(Aws::String&& value) { SetIntegrationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the integration.</p>  <p>When
     * integrating with Amazon Pinpoint, the Amazon Connect and Amazon Pinpoint
     * instances must be in the same account.</p> 
     */
    inline CreateIntegrationAssociationRequest& WithIntegrationArn(const char* value) { SetIntegrationArn(value); return *this;}


    /**
     * <p>The URL for the external application. This field is only required for the
     * EVENT integration type.</p>
     */
    inline const Aws::String& GetSourceApplicationUrl() const{ return m_sourceApplicationUrl; }

    /**
     * <p>The URL for the external application. This field is only required for the
     * EVENT integration type.</p>
     */
    inline bool SourceApplicationUrlHasBeenSet() const { return m_sourceApplicationUrlHasBeenSet; }

    /**
     * <p>The URL for the external application. This field is only required for the
     * EVENT integration type.</p>
     */
    inline void SetSourceApplicationUrl(const Aws::String& value) { m_sourceApplicationUrlHasBeenSet = true; m_sourceApplicationUrl = value; }

    /**
     * <p>The URL for the external application. This field is only required for the
     * EVENT integration type.</p>
     */
    inline void SetSourceApplicationUrl(Aws::String&& value) { m_sourceApplicationUrlHasBeenSet = true; m_sourceApplicationUrl = std::move(value); }

    /**
     * <p>The URL for the external application. This field is only required for the
     * EVENT integration type.</p>
     */
    inline void SetSourceApplicationUrl(const char* value) { m_sourceApplicationUrlHasBeenSet = true; m_sourceApplicationUrl.assign(value); }

    /**
     * <p>The URL for the external application. This field is only required for the
     * EVENT integration type.</p>
     */
    inline CreateIntegrationAssociationRequest& WithSourceApplicationUrl(const Aws::String& value) { SetSourceApplicationUrl(value); return *this;}

    /**
     * <p>The URL for the external application. This field is only required for the
     * EVENT integration type.</p>
     */
    inline CreateIntegrationAssociationRequest& WithSourceApplicationUrl(Aws::String&& value) { SetSourceApplicationUrl(std::move(value)); return *this;}

    /**
     * <p>The URL for the external application. This field is only required for the
     * EVENT integration type.</p>
     */
    inline CreateIntegrationAssociationRequest& WithSourceApplicationUrl(const char* value) { SetSourceApplicationUrl(value); return *this;}


    /**
     * <p>The name of the external application. This field is only required for the
     * EVENT integration type.</p>
     */
    inline const Aws::String& GetSourceApplicationName() const{ return m_sourceApplicationName; }

    /**
     * <p>The name of the external application. This field is only required for the
     * EVENT integration type.</p>
     */
    inline bool SourceApplicationNameHasBeenSet() const { return m_sourceApplicationNameHasBeenSet; }

    /**
     * <p>The name of the external application. This field is only required for the
     * EVENT integration type.</p>
     */
    inline void SetSourceApplicationName(const Aws::String& value) { m_sourceApplicationNameHasBeenSet = true; m_sourceApplicationName = value; }

    /**
     * <p>The name of the external application. This field is only required for the
     * EVENT integration type.</p>
     */
    inline void SetSourceApplicationName(Aws::String&& value) { m_sourceApplicationNameHasBeenSet = true; m_sourceApplicationName = std::move(value); }

    /**
     * <p>The name of the external application. This field is only required for the
     * EVENT integration type.</p>
     */
    inline void SetSourceApplicationName(const char* value) { m_sourceApplicationNameHasBeenSet = true; m_sourceApplicationName.assign(value); }

    /**
     * <p>The name of the external application. This field is only required for the
     * EVENT integration type.</p>
     */
    inline CreateIntegrationAssociationRequest& WithSourceApplicationName(const Aws::String& value) { SetSourceApplicationName(value); return *this;}

    /**
     * <p>The name of the external application. This field is only required for the
     * EVENT integration type.</p>
     */
    inline CreateIntegrationAssociationRequest& WithSourceApplicationName(Aws::String&& value) { SetSourceApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of the external application. This field is only required for the
     * EVENT integration type.</p>
     */
    inline CreateIntegrationAssociationRequest& WithSourceApplicationName(const char* value) { SetSourceApplicationName(value); return *this;}


    /**
     * <p>The type of the data source. This field is only required for the EVENT
     * integration type.</p>
     */
    inline const SourceType& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The type of the data source. This field is only required for the EVENT
     * integration type.</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>The type of the data source. This field is only required for the EVENT
     * integration type.</p>
     */
    inline void SetSourceType(const SourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The type of the data source. This field is only required for the EVENT
     * integration type.</p>
     */
    inline void SetSourceType(SourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>The type of the data source. This field is only required for the EVENT
     * integration type.</p>
     */
    inline CreateIntegrationAssociationRequest& WithSourceType(const SourceType& value) { SetSourceType(value); return *this;}

    /**
     * <p>The type of the data source. This field is only required for the EVENT
     * integration type.</p>
     */
    inline CreateIntegrationAssociationRequest& WithSourceType(SourceType&& value) { SetSourceType(std::move(value)); return *this;}


    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateIntegrationAssociationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateIntegrationAssociationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateIntegrationAssociationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateIntegrationAssociationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateIntegrationAssociationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateIntegrationAssociationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateIntegrationAssociationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateIntegrationAssociationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateIntegrationAssociationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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
