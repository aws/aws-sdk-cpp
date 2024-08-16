/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/appintegrations/AppIntegrationsServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appintegrations/model/ExecutionConfiguration.h>
#include <utility>

namespace Aws
{
namespace AppIntegrationsService
{
namespace Model
{

  /**
   */
  class UpdateDataIntegrationAssociationRequest : public AppIntegrationsServiceRequest
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API UpdateDataIntegrationAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDataIntegrationAssociation"; }

    AWS_APPINTEGRATIONSSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique identifier for the DataIntegration.</p>
     */
    inline const Aws::String& GetDataIntegrationIdentifier() const{ return m_dataIntegrationIdentifier; }
    inline bool DataIntegrationIdentifierHasBeenSet() const { return m_dataIntegrationIdentifierHasBeenSet; }
    inline void SetDataIntegrationIdentifier(const Aws::String& value) { m_dataIntegrationIdentifierHasBeenSet = true; m_dataIntegrationIdentifier = value; }
    inline void SetDataIntegrationIdentifier(Aws::String&& value) { m_dataIntegrationIdentifierHasBeenSet = true; m_dataIntegrationIdentifier = std::move(value); }
    inline void SetDataIntegrationIdentifier(const char* value) { m_dataIntegrationIdentifierHasBeenSet = true; m_dataIntegrationIdentifier.assign(value); }
    inline UpdateDataIntegrationAssociationRequest& WithDataIntegrationIdentifier(const Aws::String& value) { SetDataIntegrationIdentifier(value); return *this;}
    inline UpdateDataIntegrationAssociationRequest& WithDataIntegrationIdentifier(Aws::String&& value) { SetDataIntegrationIdentifier(std::move(value)); return *this;}
    inline UpdateDataIntegrationAssociationRequest& WithDataIntegrationIdentifier(const char* value) { SetDataIntegrationIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier. of the DataIntegrationAssociation resource</p>
     */
    inline const Aws::String& GetDataIntegrationAssociationIdentifier() const{ return m_dataIntegrationAssociationIdentifier; }
    inline bool DataIntegrationAssociationIdentifierHasBeenSet() const { return m_dataIntegrationAssociationIdentifierHasBeenSet; }
    inline void SetDataIntegrationAssociationIdentifier(const Aws::String& value) { m_dataIntegrationAssociationIdentifierHasBeenSet = true; m_dataIntegrationAssociationIdentifier = value; }
    inline void SetDataIntegrationAssociationIdentifier(Aws::String&& value) { m_dataIntegrationAssociationIdentifierHasBeenSet = true; m_dataIntegrationAssociationIdentifier = std::move(value); }
    inline void SetDataIntegrationAssociationIdentifier(const char* value) { m_dataIntegrationAssociationIdentifierHasBeenSet = true; m_dataIntegrationAssociationIdentifier.assign(value); }
    inline UpdateDataIntegrationAssociationRequest& WithDataIntegrationAssociationIdentifier(const Aws::String& value) { SetDataIntegrationAssociationIdentifier(value); return *this;}
    inline UpdateDataIntegrationAssociationRequest& WithDataIntegrationAssociationIdentifier(Aws::String&& value) { SetDataIntegrationAssociationIdentifier(std::move(value)); return *this;}
    inline UpdateDataIntegrationAssociationRequest& WithDataIntegrationAssociationIdentifier(const char* value) { SetDataIntegrationAssociationIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for how the files should be pulled from the source.</p>
     */
    inline const ExecutionConfiguration& GetExecutionConfiguration() const{ return m_executionConfiguration; }
    inline bool ExecutionConfigurationHasBeenSet() const { return m_executionConfigurationHasBeenSet; }
    inline void SetExecutionConfiguration(const ExecutionConfiguration& value) { m_executionConfigurationHasBeenSet = true; m_executionConfiguration = value; }
    inline void SetExecutionConfiguration(ExecutionConfiguration&& value) { m_executionConfigurationHasBeenSet = true; m_executionConfiguration = std::move(value); }
    inline UpdateDataIntegrationAssociationRequest& WithExecutionConfiguration(const ExecutionConfiguration& value) { SetExecutionConfiguration(value); return *this;}
    inline UpdateDataIntegrationAssociationRequest& WithExecutionConfiguration(ExecutionConfiguration&& value) { SetExecutionConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataIntegrationIdentifier;
    bool m_dataIntegrationIdentifierHasBeenSet = false;

    Aws::String m_dataIntegrationAssociationIdentifier;
    bool m_dataIntegrationAssociationIdentifierHasBeenSet = false;

    ExecutionConfiguration m_executionConfiguration;
    bool m_executionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
