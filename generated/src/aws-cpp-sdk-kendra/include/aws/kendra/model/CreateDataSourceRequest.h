/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/DataSourceType.h>
#include <aws/kendra/model/DataSourceConfiguration.h>
#include <aws/kendra/model/DataSourceVpcConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/CustomDocumentEnrichmentConfiguration.h>
#include <aws/kendra/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class CreateDataSourceRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API CreateDataSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataSource"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A name for the data source connector.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateDataSourceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateDataSourceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateDataSourceRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the index you want to use with the data source
     * connector.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }
    inline CreateDataSourceRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}
    inline CreateDataSourceRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}
    inline CreateDataSourceRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of data source repository. For example, <code>SHAREPOINT</code>.</p>
     */
    inline const DataSourceType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const DataSourceType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(DataSourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreateDataSourceRequest& WithType(const DataSourceType& value) { SetType(value); return *this;}
    inline CreateDataSourceRequest& WithType(DataSourceType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information to connect to your data source repository.</p>
     * <p>You can't specify the <code>Configuration</code> parameter when the
     * <code>Type</code> parameter is set to <code>CUSTOM</code>. If you do, you
     * receive a <code>ValidationException</code> exception.</p> <p>The
     * <code>Configuration</code> parameter is required for all other data sources.</p>
     */
    inline const DataSourceConfiguration& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const DataSourceConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(DataSourceConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline CreateDataSourceRequest& WithConfiguration(const DataSourceConfiguration& value) { SetConfiguration(value); return *this;}
    inline CreateDataSourceRequest& WithConfiguration(DataSourceConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your data source. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline const DataSourceVpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
    inline void SetVpcConfiguration(const DataSourceVpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }
    inline void SetVpcConfiguration(DataSourceVpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }
    inline CreateDataSourceRequest& WithVpcConfiguration(const DataSourceVpcConfiguration& value) { SetVpcConfiguration(value); return *this;}
    inline CreateDataSourceRequest& WithVpcConfiguration(DataSourceVpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the data source connector.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateDataSourceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateDataSourceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateDataSourceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the frequency for Amazon Kendra to check the documents in your data
     * source repository and update the index. If you don't set a schedule Amazon
     * Kendra will not periodically update the index. You can call the
     * <code>StartDataSourceSyncJob</code> API to update the index.</p> <p>Specify a
     * <code>cron-</code> format schedule string or an empty string to indicate that
     * the index is updated on demand.</p> <p>You can't specify the
     * <code>Schedule</code> parameter when the <code>Type</code> parameter is set to
     * <code>CUSTOM</code>. If you do, you receive a <code>ValidationException</code>
     * exception.</p>
     */
    inline const Aws::String& GetSchedule() const{ return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    inline void SetSchedule(const Aws::String& value) { m_scheduleHasBeenSet = true; m_schedule = value; }
    inline void SetSchedule(Aws::String&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }
    inline void SetSchedule(const char* value) { m_scheduleHasBeenSet = true; m_schedule.assign(value); }
    inline CreateDataSourceRequest& WithSchedule(const Aws::String& value) { SetSchedule(value); return *this;}
    inline CreateDataSourceRequest& WithSchedule(Aws::String&& value) { SetSchedule(std::move(value)); return *this;}
    inline CreateDataSourceRequest& WithSchedule(const char* value) { SetSchedule(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access the
     * data source and required resources. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM access
     * roles for Amazon Kendra.</a>.</p> <p>You can't specify the <code>RoleArn</code>
     * parameter when the <code>Type</code> parameter is set to <code>CUSTOM</code>. If
     * you do, you receive a <code>ValidationException</code> exception.</p> <p>The
     * <code>RoleArn</code> parameter is required for all other data sources.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline CreateDataSourceRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateDataSourceRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateDataSourceRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that identify or categorize the data source
     * connector. You can also use tags to help control access to the data source
     * connector. Tag keys and values can consist of Unicode letters, digits, white
     * space, and any of the following symbols: _ . : / = + - @.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateDataSourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateDataSourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateDataSourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateDataSourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that you provide to identify the request to create a data source
     * connector. Multiple calls to the <code>CreateDataSource</code> API with the same
     * client token will create only one data source connector.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateDataSourceRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateDataSourceRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateDataSourceRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code for a language. This allows you to support a language for all
     * documents when creating the data source connector. English is supported by
     * default. For more information on supported languages, including their codes, see
     * <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/in-adding-languages.html">Adding
     * documents in languages other than English</a>.</p>
     */
    inline const Aws::String& GetLanguageCode() const{ return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(const Aws::String& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline void SetLanguageCode(Aws::String&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }
    inline void SetLanguageCode(const char* value) { m_languageCodeHasBeenSet = true; m_languageCode.assign(value); }
    inline CreateDataSourceRequest& WithLanguageCode(const Aws::String& value) { SetLanguageCode(value); return *this;}
    inline CreateDataSourceRequest& WithLanguageCode(Aws::String&& value) { SetLanguageCode(std::move(value)); return *this;}
    inline CreateDataSourceRequest& WithLanguageCode(const char* value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for altering document metadata and content during
     * the document ingestion process.</p> <p>For more information on how to create,
     * modify and delete document metadata, or make other content alterations when you
     * ingest documents into Amazon Kendra, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/custom-document-enrichment.html">Customizing
     * document metadata during the ingestion process</a>.</p>
     */
    inline const CustomDocumentEnrichmentConfiguration& GetCustomDocumentEnrichmentConfiguration() const{ return m_customDocumentEnrichmentConfiguration; }
    inline bool CustomDocumentEnrichmentConfigurationHasBeenSet() const { return m_customDocumentEnrichmentConfigurationHasBeenSet; }
    inline void SetCustomDocumentEnrichmentConfiguration(const CustomDocumentEnrichmentConfiguration& value) { m_customDocumentEnrichmentConfigurationHasBeenSet = true; m_customDocumentEnrichmentConfiguration = value; }
    inline void SetCustomDocumentEnrichmentConfiguration(CustomDocumentEnrichmentConfiguration&& value) { m_customDocumentEnrichmentConfigurationHasBeenSet = true; m_customDocumentEnrichmentConfiguration = std::move(value); }
    inline CreateDataSourceRequest& WithCustomDocumentEnrichmentConfiguration(const CustomDocumentEnrichmentConfiguration& value) { SetCustomDocumentEnrichmentConfiguration(value); return *this;}
    inline CreateDataSourceRequest& WithCustomDocumentEnrichmentConfiguration(CustomDocumentEnrichmentConfiguration&& value) { SetCustomDocumentEnrichmentConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    DataSourceType m_type;
    bool m_typeHasBeenSet = false;

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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    CustomDocumentEnrichmentConfiguration m_customDocumentEnrichmentConfiguration;
    bool m_customDocumentEnrichmentConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
