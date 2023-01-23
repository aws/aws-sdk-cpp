/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/DataSourceType.h>
#include <aws/kendra/model/DataSourceConfiguration.h>
#include <aws/kendra/model/DataSourceVpcConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kendra/model/DataSourceStatus.h>
#include <aws/kendra/model/CustomDocumentEnrichmentConfiguration.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace kendra
{
namespace Model
{
  class DescribeDataSourceResult
  {
  public:
    AWS_KENDRA_API DescribeDataSourceResult();
    AWS_KENDRA_API DescribeDataSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API DescribeDataSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the data source connector.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the data source connector.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The identifier of the data source connector.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The identifier of the data source connector.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier of the data source connector.</p>
     */
    inline DescribeDataSourceResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the data source connector.</p>
     */
    inline DescribeDataSourceResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the data source connector.</p>
     */
    inline DescribeDataSourceResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The identifier of the index used with the data source connector.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index used with the data source connector.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexId = value; }

    /**
     * <p>The identifier of the index used with the data source connector.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index used with the data source connector.</p>
     */
    inline void SetIndexId(const char* value) { m_indexId.assign(value); }

    /**
     * <p>The identifier of the index used with the data source connector.</p>
     */
    inline DescribeDataSourceResult& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index used with the data source connector.</p>
     */
    inline DescribeDataSourceResult& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index used with the data source connector.</p>
     */
    inline DescribeDataSourceResult& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>The name for the data source connector.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the data source connector.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name for the data source connector.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name for the data source connector.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name for the data source connector.</p>
     */
    inline DescribeDataSourceResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the data source connector.</p>
     */
    inline DescribeDataSourceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the data source connector.</p>
     */
    inline DescribeDataSourceResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of the data source. For example, <code>SHAREPOINT</code>.</p>
     */
    inline const DataSourceType& GetType() const{ return m_type; }

    /**
     * <p>The type of the data source. For example, <code>SHAREPOINT</code>.</p>
     */
    inline void SetType(const DataSourceType& value) { m_type = value; }

    /**
     * <p>The type of the data source. For example, <code>SHAREPOINT</code>.</p>
     */
    inline void SetType(DataSourceType&& value) { m_type = std::move(value); }

    /**
     * <p>The type of the data source. For example, <code>SHAREPOINT</code>.</p>
     */
    inline DescribeDataSourceResult& WithType(const DataSourceType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the data source. For example, <code>SHAREPOINT</code>.</p>
     */
    inline DescribeDataSourceResult& WithType(DataSourceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Configuration details for the data source connector. This shows how the data
     * source is configured. The configuration options for a data source depend on the
     * data source provider.</p>
     */
    inline const DataSourceConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>Configuration details for the data source connector. This shows how the data
     * source is configured. The configuration options for a data source depend on the
     * data source provider.</p>
     */
    inline void SetConfiguration(const DataSourceConfiguration& value) { m_configuration = value; }

    /**
     * <p>Configuration details for the data source connector. This shows how the data
     * source is configured. The configuration options for a data source depend on the
     * data source provider.</p>
     */
    inline void SetConfiguration(DataSourceConfiguration&& value) { m_configuration = std::move(value); }

    /**
     * <p>Configuration details for the data source connector. This shows how the data
     * source is configured. The configuration options for a data source depend on the
     * data source provider.</p>
     */
    inline DescribeDataSourceResult& WithConfiguration(const DataSourceConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>Configuration details for the data source connector. This shows how the data
     * source is configured. The configuration options for a data source depend on the
     * data source provider.</p>
     */
    inline DescribeDataSourceResult& WithConfiguration(DataSourceConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your data source. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline const DataSourceVpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }

    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your data source. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline void SetVpcConfiguration(const DataSourceVpcConfiguration& value) { m_vpcConfiguration = value; }

    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your data source. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline void SetVpcConfiguration(DataSourceVpcConfiguration&& value) { m_vpcConfiguration = std::move(value); }

    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your data source. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline DescribeDataSourceResult& WithVpcConfiguration(const DataSourceVpcConfiguration& value) { SetVpcConfiguration(value); return *this;}

    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your data source. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline DescribeDataSourceResult& WithVpcConfiguration(DataSourceVpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp of when the data source connector was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The Unix timestamp of when the data source connector was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The Unix timestamp of when the data source connector was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The Unix timestamp of when the data source connector was created.</p>
     */
    inline DescribeDataSourceResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The Unix timestamp of when the data source connector was created.</p>
     */
    inline DescribeDataSourceResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp of when the data source connector was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The Unix timestamp of when the data source connector was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The Unix timestamp of when the data source connector was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The Unix timestamp of when the data source connector was last updated.</p>
     */
    inline DescribeDataSourceResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The Unix timestamp of when the data source connector was last updated.</p>
     */
    inline DescribeDataSourceResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The description for the data source connector.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the data source connector.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description for the data source connector.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description for the data source connector.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description for the data source connector.</p>
     */
    inline DescribeDataSourceResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the data source connector.</p>
     */
    inline DescribeDataSourceResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the data source connector.</p>
     */
    inline DescribeDataSourceResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The current status of the data source connector. When the status is
     * <code>ACTIVE</code> the data source is ready to use. When the status is
     * <code>FAILED</code>, the <code>ErrorMessage</code> field contains the reason
     * that the data source failed.</p>
     */
    inline const DataSourceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the data source connector. When the status is
     * <code>ACTIVE</code> the data source is ready to use. When the status is
     * <code>FAILED</code>, the <code>ErrorMessage</code> field contains the reason
     * that the data source failed.</p>
     */
    inline void SetStatus(const DataSourceStatus& value) { m_status = value; }

    /**
     * <p>The current status of the data source connector. When the status is
     * <code>ACTIVE</code> the data source is ready to use. When the status is
     * <code>FAILED</code>, the <code>ErrorMessage</code> field contains the reason
     * that the data source failed.</p>
     */
    inline void SetStatus(DataSourceStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the data source connector. When the status is
     * <code>ACTIVE</code> the data source is ready to use. When the status is
     * <code>FAILED</code>, the <code>ErrorMessage</code> field contains the reason
     * that the data source failed.</p>
     */
    inline DescribeDataSourceResult& WithStatus(const DataSourceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the data source connector. When the status is
     * <code>ACTIVE</code> the data source is ready to use. When the status is
     * <code>FAILED</code>, the <code>ErrorMessage</code> field contains the reason
     * that the data source failed.</p>
     */
    inline DescribeDataSourceResult& WithStatus(DataSourceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The schedule for Amazon Kendra to update the index.</p>
     */
    inline const Aws::String& GetSchedule() const{ return m_schedule; }

    /**
     * <p>The schedule for Amazon Kendra to update the index.</p>
     */
    inline void SetSchedule(const Aws::String& value) { m_schedule = value; }

    /**
     * <p>The schedule for Amazon Kendra to update the index.</p>
     */
    inline void SetSchedule(Aws::String&& value) { m_schedule = std::move(value); }

    /**
     * <p>The schedule for Amazon Kendra to update the index.</p>
     */
    inline void SetSchedule(const char* value) { m_schedule.assign(value); }

    /**
     * <p>The schedule for Amazon Kendra to update the index.</p>
     */
    inline DescribeDataSourceResult& WithSchedule(const Aws::String& value) { SetSchedule(value); return *this;}

    /**
     * <p>The schedule for Amazon Kendra to update the index.</p>
     */
    inline DescribeDataSourceResult& WithSchedule(Aws::String&& value) { SetSchedule(std::move(value)); return *this;}

    /**
     * <p>The schedule for Amazon Kendra to update the index.</p>
     */
    inline DescribeDataSourceResult& WithSchedule(const char* value) { SetSchedule(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the role with permission to access the data
     * source and required resources.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role with permission to access the data
     * source and required resources.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role with permission to access the data
     * source and required resources.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role with permission to access the data
     * source and required resources.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role with permission to access the data
     * source and required resources.</p>
     */
    inline DescribeDataSourceResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role with permission to access the data
     * source and required resources.</p>
     */
    inline DescribeDataSourceResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role with permission to access the data
     * source and required resources.</p>
     */
    inline DescribeDataSourceResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the data source to fail.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the data source to fail.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the data source to fail.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the data source to fail.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the data source to fail.</p>
     */
    inline DescribeDataSourceResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the data source to fail.</p>
     */
    inline DescribeDataSourceResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a description of the error that caused
     * the data source to fail.</p>
     */
    inline DescribeDataSourceResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>The code for a language. This shows a supported language for all documents in
     * the data source. English is supported by default. For more information on
     * supported languages, including their codes, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/in-adding-languages.html">Adding
     * documents in languages other than English</a>.</p>
     */
    inline const Aws::String& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The code for a language. This shows a supported language for all documents in
     * the data source. English is supported by default. For more information on
     * supported languages, including their codes, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/in-adding-languages.html">Adding
     * documents in languages other than English</a>.</p>
     */
    inline void SetLanguageCode(const Aws::String& value) { m_languageCode = value; }

    /**
     * <p>The code for a language. This shows a supported language for all documents in
     * the data source. English is supported by default. For more information on
     * supported languages, including their codes, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/in-adding-languages.html">Adding
     * documents in languages other than English</a>.</p>
     */
    inline void SetLanguageCode(Aws::String&& value) { m_languageCode = std::move(value); }

    /**
     * <p>The code for a language. This shows a supported language for all documents in
     * the data source. English is supported by default. For more information on
     * supported languages, including their codes, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/in-adding-languages.html">Adding
     * documents in languages other than English</a>.</p>
     */
    inline void SetLanguageCode(const char* value) { m_languageCode.assign(value); }

    /**
     * <p>The code for a language. This shows a supported language for all documents in
     * the data source. English is supported by default. For more information on
     * supported languages, including their codes, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/in-adding-languages.html">Adding
     * documents in languages other than English</a>.</p>
     */
    inline DescribeDataSourceResult& WithLanguageCode(const Aws::String& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The code for a language. This shows a supported language for all documents in
     * the data source. English is supported by default. For more information on
     * supported languages, including their codes, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/in-adding-languages.html">Adding
     * documents in languages other than English</a>.</p>
     */
    inline DescribeDataSourceResult& WithLanguageCode(Aws::String&& value) { SetLanguageCode(std::move(value)); return *this;}

    /**
     * <p>The code for a language. This shows a supported language for all documents in
     * the data source. English is supported by default. For more information on
     * supported languages, including their codes, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/in-adding-languages.html">Adding
     * documents in languages other than English</a>.</p>
     */
    inline DescribeDataSourceResult& WithLanguageCode(const char* value) { SetLanguageCode(value); return *this;}


    /**
     * <p>Configuration information for altering document metadata and content during
     * the document ingestion process when you describe a data source.</p> <p>For more
     * information on how to create, modify and delete document metadata, or make other
     * content alterations when you ingest documents into Amazon Kendra, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/custom-document-enrichment.html">Customizing
     * document metadata during the ingestion process</a>.</p>
     */
    inline const CustomDocumentEnrichmentConfiguration& GetCustomDocumentEnrichmentConfiguration() const{ return m_customDocumentEnrichmentConfiguration; }

    /**
     * <p>Configuration information for altering document metadata and content during
     * the document ingestion process when you describe a data source.</p> <p>For more
     * information on how to create, modify and delete document metadata, or make other
     * content alterations when you ingest documents into Amazon Kendra, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/custom-document-enrichment.html">Customizing
     * document metadata during the ingestion process</a>.</p>
     */
    inline void SetCustomDocumentEnrichmentConfiguration(const CustomDocumentEnrichmentConfiguration& value) { m_customDocumentEnrichmentConfiguration = value; }

    /**
     * <p>Configuration information for altering document metadata and content during
     * the document ingestion process when you describe a data source.</p> <p>For more
     * information on how to create, modify and delete document metadata, or make other
     * content alterations when you ingest documents into Amazon Kendra, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/custom-document-enrichment.html">Customizing
     * document metadata during the ingestion process</a>.</p>
     */
    inline void SetCustomDocumentEnrichmentConfiguration(CustomDocumentEnrichmentConfiguration&& value) { m_customDocumentEnrichmentConfiguration = std::move(value); }

    /**
     * <p>Configuration information for altering document metadata and content during
     * the document ingestion process when you describe a data source.</p> <p>For more
     * information on how to create, modify and delete document metadata, or make other
     * content alterations when you ingest documents into Amazon Kendra, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/custom-document-enrichment.html">Customizing
     * document metadata during the ingestion process</a>.</p>
     */
    inline DescribeDataSourceResult& WithCustomDocumentEnrichmentConfiguration(const CustomDocumentEnrichmentConfiguration& value) { SetCustomDocumentEnrichmentConfiguration(value); return *this;}

    /**
     * <p>Configuration information for altering document metadata and content during
     * the document ingestion process when you describe a data source.</p> <p>For more
     * information on how to create, modify and delete document metadata, or make other
     * content alterations when you ingest documents into Amazon Kendra, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/custom-document-enrichment.html">Customizing
     * document metadata during the ingestion process</a>.</p>
     */
    inline DescribeDataSourceResult& WithCustomDocumentEnrichmentConfiguration(CustomDocumentEnrichmentConfiguration&& value) { SetCustomDocumentEnrichmentConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_indexId;

    Aws::String m_name;

    DataSourceType m_type;

    DataSourceConfiguration m_configuration;

    DataSourceVpcConfiguration m_vpcConfiguration;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_description;

    DataSourceStatus m_status;

    Aws::String m_schedule;

    Aws::String m_roleArn;

    Aws::String m_errorMessage;

    Aws::String m_languageCode;

    CustomDocumentEnrichmentConfiguration m_customDocumentEnrichmentConfiguration;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
