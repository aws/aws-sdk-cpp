/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/SourceConnectorType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Structure holding all <code>APPFLOW_INTEGRATION</code> specific workflow
   * attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/AppflowIntegrationWorkflowAttributes">AWS
   * API Reference</a></p>
   */
  class AppflowIntegrationWorkflowAttributes
  {
  public:
    AWS_CUSTOMERPROFILES_API AppflowIntegrationWorkflowAttributes() = default;
    AWS_CUSTOMERPROFILES_API AppflowIntegrationWorkflowAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API AppflowIntegrationWorkflowAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the source connector type, such as Salesforce, ServiceNow, and
     * Marketo. Indicates source of ingestion.</p>
     */
    inline SourceConnectorType GetSourceConnectorType() const { return m_sourceConnectorType; }
    inline bool SourceConnectorTypeHasBeenSet() const { return m_sourceConnectorTypeHasBeenSet; }
    inline void SetSourceConnectorType(SourceConnectorType value) { m_sourceConnectorTypeHasBeenSet = true; m_sourceConnectorType = value; }
    inline AppflowIntegrationWorkflowAttributes& WithSourceConnectorType(SourceConnectorType value) { SetSourceConnectorType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the AppFlow connector profile used for ingestion.</p>
     */
    inline const Aws::String& GetConnectorProfileName() const { return m_connectorProfileName; }
    inline bool ConnectorProfileNameHasBeenSet() const { return m_connectorProfileNameHasBeenSet; }
    template<typename ConnectorProfileNameT = Aws::String>
    void SetConnectorProfileName(ConnectorProfileNameT&& value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName = std::forward<ConnectorProfileNameT>(value); }
    template<typename ConnectorProfileNameT = Aws::String>
    AppflowIntegrationWorkflowAttributes& WithConnectorProfileName(ConnectorProfileNameT&& value) { SetConnectorProfileName(std::forward<ConnectorProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Customer Profiles assumes
     * this role to create resources on your behalf as part of workflow execution.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    AppflowIntegrationWorkflowAttributes& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    SourceConnectorType m_sourceConnectorType{SourceConnectorType::NOT_SET};
    bool m_sourceConnectorTypeHasBeenSet = false;

    Aws::String m_connectorProfileName;
    bool m_connectorProfileNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
