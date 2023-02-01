/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/IntegrationType.h>
#include <aws/connect/model/SourceType.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains summary information about the associated
   * AppIntegrations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/IntegrationAssociationSummary">AWS
   * API Reference</a></p>
   */
  class IntegrationAssociationSummary
  {
  public:
    AWS_CONNECT_API IntegrationAssociationSummary();
    AWS_CONNECT_API IntegrationAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API IntegrationAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the AppIntegration association.</p>
     */
    inline const Aws::String& GetIntegrationAssociationId() const{ return m_integrationAssociationId; }

    /**
     * <p>The identifier for the AppIntegration association.</p>
     */
    inline bool IntegrationAssociationIdHasBeenSet() const { return m_integrationAssociationIdHasBeenSet; }

    /**
     * <p>The identifier for the AppIntegration association.</p>
     */
    inline void SetIntegrationAssociationId(const Aws::String& value) { m_integrationAssociationIdHasBeenSet = true; m_integrationAssociationId = value; }

    /**
     * <p>The identifier for the AppIntegration association.</p>
     */
    inline void SetIntegrationAssociationId(Aws::String&& value) { m_integrationAssociationIdHasBeenSet = true; m_integrationAssociationId = std::move(value); }

    /**
     * <p>The identifier for the AppIntegration association.</p>
     */
    inline void SetIntegrationAssociationId(const char* value) { m_integrationAssociationIdHasBeenSet = true; m_integrationAssociationId.assign(value); }

    /**
     * <p>The identifier for the AppIntegration association.</p>
     */
    inline IntegrationAssociationSummary& WithIntegrationAssociationId(const Aws::String& value) { SetIntegrationAssociationId(value); return *this;}

    /**
     * <p>The identifier for the AppIntegration association.</p>
     */
    inline IntegrationAssociationSummary& WithIntegrationAssociationId(Aws::String&& value) { SetIntegrationAssociationId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the AppIntegration association.</p>
     */
    inline IntegrationAssociationSummary& WithIntegrationAssociationId(const char* value) { SetIntegrationAssociationId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the AppIntegration association.</p>
     */
    inline const Aws::String& GetIntegrationAssociationArn() const{ return m_integrationAssociationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the AppIntegration association.</p>
     */
    inline bool IntegrationAssociationArnHasBeenSet() const { return m_integrationAssociationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the AppIntegration association.</p>
     */
    inline void SetIntegrationAssociationArn(const Aws::String& value) { m_integrationAssociationArnHasBeenSet = true; m_integrationAssociationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the AppIntegration association.</p>
     */
    inline void SetIntegrationAssociationArn(Aws::String&& value) { m_integrationAssociationArnHasBeenSet = true; m_integrationAssociationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the AppIntegration association.</p>
     */
    inline void SetIntegrationAssociationArn(const char* value) { m_integrationAssociationArnHasBeenSet = true; m_integrationAssociationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the AppIntegration association.</p>
     */
    inline IntegrationAssociationSummary& WithIntegrationAssociationArn(const Aws::String& value) { SetIntegrationAssociationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the AppIntegration association.</p>
     */
    inline IntegrationAssociationSummary& WithIntegrationAssociationArn(Aws::String&& value) { SetIntegrationAssociationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the AppIntegration association.</p>
     */
    inline IntegrationAssociationSummary& WithIntegrationAssociationArn(const char* value) { SetIntegrationAssociationArn(value); return *this;}


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
    inline IntegrationAssociationSummary& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline IntegrationAssociationSummary& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline IntegrationAssociationSummary& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The integration type.</p>
     */
    inline const IntegrationType& GetIntegrationType() const{ return m_integrationType; }

    /**
     * <p>The integration type.</p>
     */
    inline bool IntegrationTypeHasBeenSet() const { return m_integrationTypeHasBeenSet; }

    /**
     * <p>The integration type.</p>
     */
    inline void SetIntegrationType(const IntegrationType& value) { m_integrationTypeHasBeenSet = true; m_integrationType = value; }

    /**
     * <p>The integration type.</p>
     */
    inline void SetIntegrationType(IntegrationType&& value) { m_integrationTypeHasBeenSet = true; m_integrationType = std::move(value); }

    /**
     * <p>The integration type.</p>
     */
    inline IntegrationAssociationSummary& WithIntegrationType(const IntegrationType& value) { SetIntegrationType(value); return *this;}

    /**
     * <p>The integration type.</p>
     */
    inline IntegrationAssociationSummary& WithIntegrationType(IntegrationType&& value) { SetIntegrationType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the AppIntegration.</p>
     */
    inline const Aws::String& GetIntegrationArn() const{ return m_integrationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the AppIntegration.</p>
     */
    inline bool IntegrationArnHasBeenSet() const { return m_integrationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the AppIntegration.</p>
     */
    inline void SetIntegrationArn(const Aws::String& value) { m_integrationArnHasBeenSet = true; m_integrationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the AppIntegration.</p>
     */
    inline void SetIntegrationArn(Aws::String&& value) { m_integrationArnHasBeenSet = true; m_integrationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the AppIntegration.</p>
     */
    inline void SetIntegrationArn(const char* value) { m_integrationArnHasBeenSet = true; m_integrationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the AppIntegration.</p>
     */
    inline IntegrationAssociationSummary& WithIntegrationArn(const Aws::String& value) { SetIntegrationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the AppIntegration.</p>
     */
    inline IntegrationAssociationSummary& WithIntegrationArn(Aws::String&& value) { SetIntegrationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the AppIntegration.</p>
     */
    inline IntegrationAssociationSummary& WithIntegrationArn(const char* value) { SetIntegrationArn(value); return *this;}


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
    inline IntegrationAssociationSummary& WithSourceApplicationUrl(const Aws::String& value) { SetSourceApplicationUrl(value); return *this;}

    /**
     * <p>The URL for the external application.</p>
     */
    inline IntegrationAssociationSummary& WithSourceApplicationUrl(Aws::String&& value) { SetSourceApplicationUrl(std::move(value)); return *this;}

    /**
     * <p>The URL for the external application.</p>
     */
    inline IntegrationAssociationSummary& WithSourceApplicationUrl(const char* value) { SetSourceApplicationUrl(value); return *this;}


    /**
     * <p>The user-provided, friendly name for the external application.</p>
     */
    inline const Aws::String& GetSourceApplicationName() const{ return m_sourceApplicationName; }

    /**
     * <p>The user-provided, friendly name for the external application.</p>
     */
    inline bool SourceApplicationNameHasBeenSet() const { return m_sourceApplicationNameHasBeenSet; }

    /**
     * <p>The user-provided, friendly name for the external application.</p>
     */
    inline void SetSourceApplicationName(const Aws::String& value) { m_sourceApplicationNameHasBeenSet = true; m_sourceApplicationName = value; }

    /**
     * <p>The user-provided, friendly name for the external application.</p>
     */
    inline void SetSourceApplicationName(Aws::String&& value) { m_sourceApplicationNameHasBeenSet = true; m_sourceApplicationName = std::move(value); }

    /**
     * <p>The user-provided, friendly name for the external application.</p>
     */
    inline void SetSourceApplicationName(const char* value) { m_sourceApplicationNameHasBeenSet = true; m_sourceApplicationName.assign(value); }

    /**
     * <p>The user-provided, friendly name for the external application.</p>
     */
    inline IntegrationAssociationSummary& WithSourceApplicationName(const Aws::String& value) { SetSourceApplicationName(value); return *this;}

    /**
     * <p>The user-provided, friendly name for the external application.</p>
     */
    inline IntegrationAssociationSummary& WithSourceApplicationName(Aws::String&& value) { SetSourceApplicationName(std::move(value)); return *this;}

    /**
     * <p>The user-provided, friendly name for the external application.</p>
     */
    inline IntegrationAssociationSummary& WithSourceApplicationName(const char* value) { SetSourceApplicationName(value); return *this;}


    /**
     * <p>The name of the source.</p>
     */
    inline const SourceType& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The name of the source.</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>The name of the source.</p>
     */
    inline void SetSourceType(const SourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The name of the source.</p>
     */
    inline void SetSourceType(SourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>The name of the source.</p>
     */
    inline IntegrationAssociationSummary& WithSourceType(const SourceType& value) { SetSourceType(value); return *this;}

    /**
     * <p>The name of the source.</p>
     */
    inline IntegrationAssociationSummary& WithSourceType(SourceType&& value) { SetSourceType(std::move(value)); return *this;}

  private:

    Aws::String m_integrationAssociationId;
    bool m_integrationAssociationIdHasBeenSet = false;

    Aws::String m_integrationAssociationArn;
    bool m_integrationAssociationArnHasBeenSet = false;

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
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
