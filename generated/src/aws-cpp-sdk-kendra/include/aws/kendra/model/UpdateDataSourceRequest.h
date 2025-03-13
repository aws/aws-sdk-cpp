/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/DataSourceConfiguration.h>
#include <aws/kendra/model/DataSourceVpcConfiguration.h>
#include <aws/kendra/model/CustomDocumentEnrichmentConfiguration.h>
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class UpdateDataSourceRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API UpdateDataSourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDataSource"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the data source connector you want to update.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateDataSourceRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new name for the data source connector.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateDataSourceRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the index used with the data source connector.</p>
     */
    inline const Aws::String& GetIndexId() const { return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    template<typename IndexIdT = Aws::String>
    void SetIndexId(IndexIdT&& value) { m_indexIdHasBeenSet = true; m_indexId = std::forward<IndexIdT>(value); }
    template<typename IndexIdT = Aws::String>
    UpdateDataSourceRequest& WithIndexId(IndexIdT&& value) { SetIndexId(std::forward<IndexIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information you want to update for the data source
     * connector.</p>
     */
    inline const DataSourceConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = DataSourceConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = DataSourceConfiguration>
    UpdateDataSourceRequest& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your data source. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline const DataSourceVpcConfiguration& GetVpcConfiguration() const { return m_vpcConfiguration; }
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
    template<typename VpcConfigurationT = DataSourceVpcConfiguration>
    void SetVpcConfiguration(VpcConfigurationT&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::forward<VpcConfigurationT>(value); }
    template<typename VpcConfigurationT = DataSourceVpcConfiguration>
    UpdateDataSourceRequest& WithVpcConfiguration(VpcConfigurationT&& value) { SetVpcConfiguration(std::forward<VpcConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new description for the data source connector.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateDataSourceRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sync schedule you want to update for the data source connector.</p>
     */
    inline const Aws::String& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = Aws::String>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = Aws::String>
    UpdateDataSourceRequest& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access the
     * data source and required resources. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM roles for
     * Amazon Kendra</a>.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    UpdateDataSourceRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code for a language you want to update for the data source connector.
     * This allows you to support a language for all documents when updating the data
     * source. English is supported by default. For more information on supported
     * languages, including their codes, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/in-adding-languages.html">Adding
     * documents in languages other than English</a>.</p>
     */
    inline const Aws::String& GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    template<typename LanguageCodeT = Aws::String>
    void SetLanguageCode(LanguageCodeT&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::forward<LanguageCodeT>(value); }
    template<typename LanguageCodeT = Aws::String>
    UpdateDataSourceRequest& WithLanguageCode(LanguageCodeT&& value) { SetLanguageCode(std::forward<LanguageCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information you want to update for altering document metadata
     * and content during the document ingestion process.</p> <p>For more information
     * on how to create, modify and delete document metadata, or make other content
     * alterations when you ingest documents into Amazon Kendra, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/custom-document-enrichment.html">Customizing
     * document metadata during the ingestion process</a>.</p>
     */
    inline const CustomDocumentEnrichmentConfiguration& GetCustomDocumentEnrichmentConfiguration() const { return m_customDocumentEnrichmentConfiguration; }
    inline bool CustomDocumentEnrichmentConfigurationHasBeenSet() const { return m_customDocumentEnrichmentConfigurationHasBeenSet; }
    template<typename CustomDocumentEnrichmentConfigurationT = CustomDocumentEnrichmentConfiguration>
    void SetCustomDocumentEnrichmentConfiguration(CustomDocumentEnrichmentConfigurationT&& value) { m_customDocumentEnrichmentConfigurationHasBeenSet = true; m_customDocumentEnrichmentConfiguration = std::forward<CustomDocumentEnrichmentConfigurationT>(value); }
    template<typename CustomDocumentEnrichmentConfigurationT = CustomDocumentEnrichmentConfiguration>
    UpdateDataSourceRequest& WithCustomDocumentEnrichmentConfiguration(CustomDocumentEnrichmentConfigurationT&& value) { SetCustomDocumentEnrichmentConfiguration(std::forward<CustomDocumentEnrichmentConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    DataSourceConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    DataSourceVpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_schedule;
    bool m_scheduleHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    CustomDocumentEnrichmentConfiguration m_customDocumentEnrichmentConfiguration;
    bool m_customDocumentEnrichmentConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
