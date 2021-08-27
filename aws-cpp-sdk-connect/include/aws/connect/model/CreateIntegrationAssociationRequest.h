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
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class AWS_CONNECT_API CreateIntegrationAssociationRequest : public ConnectRequest
  {
  public:
    CreateIntegrationAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIntegrationAssociation"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline CreateIntegrationAssociationRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline CreateIntegrationAssociationRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
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
     * <p>The Amazon Resource Name (ARN) of the integration.</p>
     */
    inline const Aws::String& GetIntegrationArn() const{ return m_integrationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the integration.</p>
     */
    inline bool IntegrationArnHasBeenSet() const { return m_integrationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the integration.</p>
     */
    inline void SetIntegrationArn(const Aws::String& value) { m_integrationArnHasBeenSet = true; m_integrationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the integration.</p>
     */
    inline void SetIntegrationArn(Aws::String&& value) { m_integrationArnHasBeenSet = true; m_integrationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the integration.</p>
     */
    inline void SetIntegrationArn(const char* value) { m_integrationArnHasBeenSet = true; m_integrationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the integration.</p>
     */
    inline CreateIntegrationAssociationRequest& WithIntegrationArn(const Aws::String& value) { SetIntegrationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the integration.</p>
     */
    inline CreateIntegrationAssociationRequest& WithIntegrationArn(Aws::String&& value) { SetIntegrationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the integration.</p>
     */
    inline CreateIntegrationAssociationRequest& WithIntegrationArn(const char* value) { SetIntegrationArn(value); return *this;}


    /**
     * <p>The URL for the external application.</p>
     */
    inline const Aws::String& GetSourceApplicationUrl() const{ return m_sourceApplicationUrl; }

    /**
     * <p>The URL for the external application.</p>
     */
    inline bool SourceApplicationUrlHasBeenSet() const { return m_sourceApplicationUrlHasBeenSet; }

    /**
     * <p>The URL for the external application.</p>
     */
    inline void SetSourceApplicationUrl(const Aws::String& value) { m_sourceApplicationUrlHasBeenSet = true; m_sourceApplicationUrl = value; }

    /**
     * <p>The URL for the external application.</p>
     */
    inline void SetSourceApplicationUrl(Aws::String&& value) { m_sourceApplicationUrlHasBeenSet = true; m_sourceApplicationUrl = std::move(value); }

    /**
     * <p>The URL for the external application.</p>
     */
    inline void SetSourceApplicationUrl(const char* value) { m_sourceApplicationUrlHasBeenSet = true; m_sourceApplicationUrl.assign(value); }

    /**
     * <p>The URL for the external application.</p>
     */
    inline CreateIntegrationAssociationRequest& WithSourceApplicationUrl(const Aws::String& value) { SetSourceApplicationUrl(value); return *this;}

    /**
     * <p>The URL for the external application.</p>
     */
    inline CreateIntegrationAssociationRequest& WithSourceApplicationUrl(Aws::String&& value) { SetSourceApplicationUrl(std::move(value)); return *this;}

    /**
     * <p>The URL for the external application.</p>
     */
    inline CreateIntegrationAssociationRequest& WithSourceApplicationUrl(const char* value) { SetSourceApplicationUrl(value); return *this;}


    /**
     * <p>The name of the external application.</p>
     */
    inline const Aws::String& GetSourceApplicationName() const{ return m_sourceApplicationName; }

    /**
     * <p>The name of the external application.</p>
     */
    inline bool SourceApplicationNameHasBeenSet() const { return m_sourceApplicationNameHasBeenSet; }

    /**
     * <p>The name of the external application.</p>
     */
    inline void SetSourceApplicationName(const Aws::String& value) { m_sourceApplicationNameHasBeenSet = true; m_sourceApplicationName = value; }

    /**
     * <p>The name of the external application.</p>
     */
    inline void SetSourceApplicationName(Aws::String&& value) { m_sourceApplicationNameHasBeenSet = true; m_sourceApplicationName = std::move(value); }

    /**
     * <p>The name of the external application.</p>
     */
    inline void SetSourceApplicationName(const char* value) { m_sourceApplicationNameHasBeenSet = true; m_sourceApplicationName.assign(value); }

    /**
     * <p>The name of the external application.</p>
     */
    inline CreateIntegrationAssociationRequest& WithSourceApplicationName(const Aws::String& value) { SetSourceApplicationName(value); return *this;}

    /**
     * <p>The name of the external application.</p>
     */
    inline CreateIntegrationAssociationRequest& WithSourceApplicationName(Aws::String&& value) { SetSourceApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of the external application.</p>
     */
    inline CreateIntegrationAssociationRequest& WithSourceApplicationName(const char* value) { SetSourceApplicationName(value); return *this;}


    /**
     * <p>The type of the data source.</p>
     */
    inline const SourceType& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The type of the data source.</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>The type of the data source.</p>
     */
    inline void SetSourceType(const SourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The type of the data source.</p>
     */
    inline void SetSourceType(SourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>The type of the data source.</p>
     */
    inline CreateIntegrationAssociationRequest& WithSourceType(const SourceType& value) { SetSourceType(value); return *this;}

    /**
     * <p>The type of the data source.</p>
     */
    inline CreateIntegrationAssociationRequest& WithSourceType(SourceType&& value) { SetSourceType(std::move(value)); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    IntegrationType m_integrationType;
    bool m_integrationTypeHasBeenSet;

    Aws::String m_integrationArn;
    bool m_integrationArnHasBeenSet;

    Aws::String m_sourceApplicationUrl;
    bool m_sourceApplicationUrlHasBeenSet;

    Aws::String m_sourceApplicationName;
    bool m_sourceApplicationNameHasBeenSet;

    SourceType m_sourceType;
    bool m_sourceTypeHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
