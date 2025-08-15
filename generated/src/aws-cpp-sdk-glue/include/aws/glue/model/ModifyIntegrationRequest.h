/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/IntegrationConfig.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class ModifyIntegrationRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API ModifyIntegrationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyIntegration"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the integration.</p>
     */
    inline const Aws::String& GetIntegrationIdentifier() const { return m_integrationIdentifier; }
    inline bool IntegrationIdentifierHasBeenSet() const { return m_integrationIdentifierHasBeenSet; }
    template<typename IntegrationIdentifierT = Aws::String>
    void SetIntegrationIdentifier(IntegrationIdentifierT&& value) { m_integrationIdentifierHasBeenSet = true; m_integrationIdentifier = std::forward<IntegrationIdentifierT>(value); }
    template<typename IntegrationIdentifierT = Aws::String>
    ModifyIntegrationRequest& WithIntegrationIdentifier(IntegrationIdentifierT&& value) { SetIntegrationIdentifier(std::forward<IntegrationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the integration.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ModifyIntegrationRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Selects source tables for the integration using Maxwell filter syntax.</p>
     */
    inline const Aws::String& GetDataFilter() const { return m_dataFilter; }
    inline bool DataFilterHasBeenSet() const { return m_dataFilterHasBeenSet; }
    template<typename DataFilterT = Aws::String>
    void SetDataFilter(DataFilterT&& value) { m_dataFilterHasBeenSet = true; m_dataFilter = std::forward<DataFilterT>(value); }
    template<typename DataFilterT = Aws::String>
    ModifyIntegrationRequest& WithDataFilter(DataFilterT&& value) { SetDataFilter(std::forward<DataFilterT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const IntegrationConfig& GetIntegrationConfig() const { return m_integrationConfig; }
    inline bool IntegrationConfigHasBeenSet() const { return m_integrationConfigHasBeenSet; }
    template<typename IntegrationConfigT = IntegrationConfig>
    void SetIntegrationConfig(IntegrationConfigT&& value) { m_integrationConfigHasBeenSet = true; m_integrationConfig = std::forward<IntegrationConfigT>(value); }
    template<typename IntegrationConfigT = IntegrationConfig>
    ModifyIntegrationRequest& WithIntegrationConfig(IntegrationConfigT&& value) { SetIntegrationConfig(std::forward<IntegrationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique name for an integration in Glue.</p>
     */
    inline const Aws::String& GetIntegrationName() const { return m_integrationName; }
    inline bool IntegrationNameHasBeenSet() const { return m_integrationNameHasBeenSet; }
    template<typename IntegrationNameT = Aws::String>
    void SetIntegrationName(IntegrationNameT&& value) { m_integrationNameHasBeenSet = true; m_integrationName = std::forward<IntegrationNameT>(value); }
    template<typename IntegrationNameT = Aws::String>
    ModifyIntegrationRequest& WithIntegrationName(IntegrationNameT&& value) { SetIntegrationName(std::forward<IntegrationNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_integrationIdentifier;
    bool m_integrationIdentifierHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_dataFilter;
    bool m_dataFilterHasBeenSet = false;

    IntegrationConfig m_integrationConfig;
    bool m_integrationConfigHasBeenSet = false;

    Aws::String m_integrationName;
    bool m_integrationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
