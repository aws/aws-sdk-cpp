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
    AWS_CUSTOMERPROFILES_API AppflowIntegrationWorkflowAttributes();
    AWS_CUSTOMERPROFILES_API AppflowIntegrationWorkflowAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API AppflowIntegrationWorkflowAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the source connector type, such as Salesforce, ServiceNow, and
     * Marketo. Indicates source of ingestion.</p>
     */
    inline const SourceConnectorType& GetSourceConnectorType() const{ return m_sourceConnectorType; }

    /**
     * <p>Specifies the source connector type, such as Salesforce, ServiceNow, and
     * Marketo. Indicates source of ingestion.</p>
     */
    inline bool SourceConnectorTypeHasBeenSet() const { return m_sourceConnectorTypeHasBeenSet; }

    /**
     * <p>Specifies the source connector type, such as Salesforce, ServiceNow, and
     * Marketo. Indicates source of ingestion.</p>
     */
    inline void SetSourceConnectorType(const SourceConnectorType& value) { m_sourceConnectorTypeHasBeenSet = true; m_sourceConnectorType = value; }

    /**
     * <p>Specifies the source connector type, such as Salesforce, ServiceNow, and
     * Marketo. Indicates source of ingestion.</p>
     */
    inline void SetSourceConnectorType(SourceConnectorType&& value) { m_sourceConnectorTypeHasBeenSet = true; m_sourceConnectorType = std::move(value); }

    /**
     * <p>Specifies the source connector type, such as Salesforce, ServiceNow, and
     * Marketo. Indicates source of ingestion.</p>
     */
    inline AppflowIntegrationWorkflowAttributes& WithSourceConnectorType(const SourceConnectorType& value) { SetSourceConnectorType(value); return *this;}

    /**
     * <p>Specifies the source connector type, such as Salesforce, ServiceNow, and
     * Marketo. Indicates source of ingestion.</p>
     */
    inline AppflowIntegrationWorkflowAttributes& WithSourceConnectorType(SourceConnectorType&& value) { SetSourceConnectorType(std::move(value)); return *this;}


    /**
     * <p>The name of the AppFlow connector profile used for ingestion.</p>
     */
    inline const Aws::String& GetConnectorProfileName() const{ return m_connectorProfileName; }

    /**
     * <p>The name of the AppFlow connector profile used for ingestion.</p>
     */
    inline bool ConnectorProfileNameHasBeenSet() const { return m_connectorProfileNameHasBeenSet; }

    /**
     * <p>The name of the AppFlow connector profile used for ingestion.</p>
     */
    inline void SetConnectorProfileName(const Aws::String& value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName = value; }

    /**
     * <p>The name of the AppFlow connector profile used for ingestion.</p>
     */
    inline void SetConnectorProfileName(Aws::String&& value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName = std::move(value); }

    /**
     * <p>The name of the AppFlow connector profile used for ingestion.</p>
     */
    inline void SetConnectorProfileName(const char* value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName.assign(value); }

    /**
     * <p>The name of the AppFlow connector profile used for ingestion.</p>
     */
    inline AppflowIntegrationWorkflowAttributes& WithConnectorProfileName(const Aws::String& value) { SetConnectorProfileName(value); return *this;}

    /**
     * <p>The name of the AppFlow connector profile used for ingestion.</p>
     */
    inline AppflowIntegrationWorkflowAttributes& WithConnectorProfileName(Aws::String&& value) { SetConnectorProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the AppFlow connector profile used for ingestion.</p>
     */
    inline AppflowIntegrationWorkflowAttributes& WithConnectorProfileName(const char* value) { SetConnectorProfileName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Customer Profiles assumes
     * this role to create resources on your behalf as part of workflow execution.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Customer Profiles assumes
     * this role to create resources on your behalf as part of workflow execution.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Customer Profiles assumes
     * this role to create resources on your behalf as part of workflow execution.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Customer Profiles assumes
     * this role to create resources on your behalf as part of workflow execution.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Customer Profiles assumes
     * this role to create resources on your behalf as part of workflow execution.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Customer Profiles assumes
     * this role to create resources on your behalf as part of workflow execution.</p>
     */
    inline AppflowIntegrationWorkflowAttributes& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Customer Profiles assumes
     * this role to create resources on your behalf as part of workflow execution.</p>
     */
    inline AppflowIntegrationWorkflowAttributes& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Customer Profiles assumes
     * this role to create resources on your behalf as part of workflow execution.</p>
     */
    inline AppflowIntegrationWorkflowAttributes& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    SourceConnectorType m_sourceConnectorType;
    bool m_sourceConnectorTypeHasBeenSet = false;

    Aws::String m_connectorProfileName;
    bool m_connectorProfileNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
