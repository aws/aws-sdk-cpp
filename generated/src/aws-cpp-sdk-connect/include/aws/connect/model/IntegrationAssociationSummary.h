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
    AWS_CONNECT_API IntegrationAssociationSummary() = default;
    AWS_CONNECT_API IntegrationAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API IntegrationAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the AppIntegration association.</p>
     */
    inline const Aws::String& GetIntegrationAssociationId() const { return m_integrationAssociationId; }
    inline bool IntegrationAssociationIdHasBeenSet() const { return m_integrationAssociationIdHasBeenSet; }
    template<typename IntegrationAssociationIdT = Aws::String>
    void SetIntegrationAssociationId(IntegrationAssociationIdT&& value) { m_integrationAssociationIdHasBeenSet = true; m_integrationAssociationId = std::forward<IntegrationAssociationIdT>(value); }
    template<typename IntegrationAssociationIdT = Aws::String>
    IntegrationAssociationSummary& WithIntegrationAssociationId(IntegrationAssociationIdT&& value) { SetIntegrationAssociationId(std::forward<IntegrationAssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the AppIntegration association.</p>
     */
    inline const Aws::String& GetIntegrationAssociationArn() const { return m_integrationAssociationArn; }
    inline bool IntegrationAssociationArnHasBeenSet() const { return m_integrationAssociationArnHasBeenSet; }
    template<typename IntegrationAssociationArnT = Aws::String>
    void SetIntegrationAssociationArn(IntegrationAssociationArnT&& value) { m_integrationAssociationArnHasBeenSet = true; m_integrationAssociationArn = std::forward<IntegrationAssociationArnT>(value); }
    template<typename IntegrationAssociationArnT = Aws::String>
    IntegrationAssociationSummary& WithIntegrationAssociationArn(IntegrationAssociationArnT&& value) { SetIntegrationAssociationArn(std::forward<IntegrationAssociationArnT>(value)); return *this;}
    ///@}

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
    IntegrationAssociationSummary& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The integration type.</p>
     */
    inline IntegrationType GetIntegrationType() const { return m_integrationType; }
    inline bool IntegrationTypeHasBeenSet() const { return m_integrationTypeHasBeenSet; }
    inline void SetIntegrationType(IntegrationType value) { m_integrationTypeHasBeenSet = true; m_integrationType = value; }
    inline IntegrationAssociationSummary& WithIntegrationType(IntegrationType value) { SetIntegrationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the AppIntegration.</p>
     */
    inline const Aws::String& GetIntegrationArn() const { return m_integrationArn; }
    inline bool IntegrationArnHasBeenSet() const { return m_integrationArnHasBeenSet; }
    template<typename IntegrationArnT = Aws::String>
    void SetIntegrationArn(IntegrationArnT&& value) { m_integrationArnHasBeenSet = true; m_integrationArn = std::forward<IntegrationArnT>(value); }
    template<typename IntegrationArnT = Aws::String>
    IntegrationAssociationSummary& WithIntegrationArn(IntegrationArnT&& value) { SetIntegrationArn(std::forward<IntegrationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL for the external application.</p>
     */
    inline const Aws::String& GetSourceApplicationUrl() const { return m_sourceApplicationUrl; }
    inline bool SourceApplicationUrlHasBeenSet() const { return m_sourceApplicationUrlHasBeenSet; }
    template<typename SourceApplicationUrlT = Aws::String>
    void SetSourceApplicationUrl(SourceApplicationUrlT&& value) { m_sourceApplicationUrlHasBeenSet = true; m_sourceApplicationUrl = std::forward<SourceApplicationUrlT>(value); }
    template<typename SourceApplicationUrlT = Aws::String>
    IntegrationAssociationSummary& WithSourceApplicationUrl(SourceApplicationUrlT&& value) { SetSourceApplicationUrl(std::forward<SourceApplicationUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-provided, friendly name for the external application.</p>
     */
    inline const Aws::String& GetSourceApplicationName() const { return m_sourceApplicationName; }
    inline bool SourceApplicationNameHasBeenSet() const { return m_sourceApplicationNameHasBeenSet; }
    template<typename SourceApplicationNameT = Aws::String>
    void SetSourceApplicationName(SourceApplicationNameT&& value) { m_sourceApplicationNameHasBeenSet = true; m_sourceApplicationName = std::forward<SourceApplicationNameT>(value); }
    template<typename SourceApplicationNameT = Aws::String>
    IntegrationAssociationSummary& WithSourceApplicationName(SourceApplicationNameT&& value) { SetSourceApplicationName(std::forward<SourceApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source.</p>
     */
    inline SourceType GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(SourceType value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline IntegrationAssociationSummary& WithSourceType(SourceType value) { SetSourceType(value); return *this;}
    ///@}
  private:

    Aws::String m_integrationAssociationId;
    bool m_integrationAssociationIdHasBeenSet = false;

    Aws::String m_integrationAssociationArn;
    bool m_integrationAssociationArnHasBeenSet = false;

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
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
