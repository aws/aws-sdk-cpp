/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/IndexEdition.h>
#include <aws/kendra/model/ServerSideEncryptionConfiguration.h>
#include <aws/kendra/model/IndexStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/IndexStatistics.h>
#include <aws/kendra/model/CapacityUnitsConfiguration.h>
#include <aws/kendra/model/UserContextPolicy.h>
#include <aws/kendra/model/UserGroupResolutionConfiguration.h>
#include <aws/kendra/model/DocumentMetadataConfiguration.h>
#include <aws/kendra/model/UserTokenConfiguration.h>
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
  class DescribeIndexResult
  {
  public:
    AWS_KENDRA_API DescribeIndexResult();
    AWS_KENDRA_API DescribeIndexResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API DescribeIndexResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the index.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the index.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the index.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the index.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the index.</p>
     */
    inline DescribeIndexResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the index.</p>
     */
    inline DescribeIndexResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the index.</p>
     */
    inline DescribeIndexResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The identifier of the index.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the index.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The identifier of the index.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The identifier of the index.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier of the index.</p>
     */
    inline DescribeIndexResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the index.</p>
     */
    inline DescribeIndexResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index.</p>
     */
    inline DescribeIndexResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Kendra edition used for the index. You decide the edition when you
     * create the index.</p>
     */
    inline const IndexEdition& GetEdition() const{ return m_edition; }

    /**
     * <p>The Amazon Kendra edition used for the index. You decide the edition when you
     * create the index.</p>
     */
    inline void SetEdition(const IndexEdition& value) { m_edition = value; }

    /**
     * <p>The Amazon Kendra edition used for the index. You decide the edition when you
     * create the index.</p>
     */
    inline void SetEdition(IndexEdition&& value) { m_edition = std::move(value); }

    /**
     * <p>The Amazon Kendra edition used for the index. You decide the edition when you
     * create the index.</p>
     */
    inline DescribeIndexResult& WithEdition(const IndexEdition& value) { SetEdition(value); return *this;}

    /**
     * <p>The Amazon Kendra edition used for the index. You decide the edition when you
     * create the index.</p>
     */
    inline DescribeIndexResult& WithEdition(IndexEdition&& value) { SetEdition(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that gives Amazon Kendra
     * permission to write to your Amazon Cloudwatch logs.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that gives Amazon Kendra
     * permission to write to your Amazon Cloudwatch logs.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that gives Amazon Kendra
     * permission to write to your Amazon Cloudwatch logs.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that gives Amazon Kendra
     * permission to write to your Amazon Cloudwatch logs.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that gives Amazon Kendra
     * permission to write to your Amazon Cloudwatch logs.</p>
     */
    inline DescribeIndexResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that gives Amazon Kendra
     * permission to write to your Amazon Cloudwatch logs.</p>
     */
    inline DescribeIndexResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that gives Amazon Kendra
     * permission to write to your Amazon Cloudwatch logs.</p>
     */
    inline DescribeIndexResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The identifier of the KMScustomer master key (CMK) that is used to encrypt
     * your data. Amazon Kendra doesn't support asymmetric CMKs.</p>
     */
    inline const ServerSideEncryptionConfiguration& GetServerSideEncryptionConfiguration() const{ return m_serverSideEncryptionConfiguration; }

    /**
     * <p>The identifier of the KMScustomer master key (CMK) that is used to encrypt
     * your data. Amazon Kendra doesn't support asymmetric CMKs.</p>
     */
    inline void SetServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { m_serverSideEncryptionConfiguration = value; }

    /**
     * <p>The identifier of the KMScustomer master key (CMK) that is used to encrypt
     * your data. Amazon Kendra doesn't support asymmetric CMKs.</p>
     */
    inline void SetServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { m_serverSideEncryptionConfiguration = std::move(value); }

    /**
     * <p>The identifier of the KMScustomer master key (CMK) that is used to encrypt
     * your data. Amazon Kendra doesn't support asymmetric CMKs.</p>
     */
    inline DescribeIndexResult& WithServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { SetServerSideEncryptionConfiguration(value); return *this;}

    /**
     * <p>The identifier of the KMScustomer master key (CMK) that is used to encrypt
     * your data. Amazon Kendra doesn't support asymmetric CMKs.</p>
     */
    inline DescribeIndexResult& WithServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { SetServerSideEncryptionConfiguration(std::move(value)); return *this;}


    /**
     * <p>The current status of the index. When the value is <code>ACTIVE</code>, the
     * index is ready for use. If the <code>Status</code> field value is
     * <code>FAILED</code>, the <code>ErrorMessage</code> field contains a message that
     * explains why.</p>
     */
    inline const IndexStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the index. When the value is <code>ACTIVE</code>, the
     * index is ready for use. If the <code>Status</code> field value is
     * <code>FAILED</code>, the <code>ErrorMessage</code> field contains a message that
     * explains why.</p>
     */
    inline void SetStatus(const IndexStatus& value) { m_status = value; }

    /**
     * <p>The current status of the index. When the value is <code>ACTIVE</code>, the
     * index is ready for use. If the <code>Status</code> field value is
     * <code>FAILED</code>, the <code>ErrorMessage</code> field contains a message that
     * explains why.</p>
     */
    inline void SetStatus(IndexStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the index. When the value is <code>ACTIVE</code>, the
     * index is ready for use. If the <code>Status</code> field value is
     * <code>FAILED</code>, the <code>ErrorMessage</code> field contains a message that
     * explains why.</p>
     */
    inline DescribeIndexResult& WithStatus(const IndexStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the index. When the value is <code>ACTIVE</code>, the
     * index is ready for use. If the <code>Status</code> field value is
     * <code>FAILED</code>, the <code>ErrorMessage</code> field contains a message that
     * explains why.</p>
     */
    inline DescribeIndexResult& WithStatus(IndexStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The description for the index.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the index.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description for the index.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description for the index.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description for the index.</p>
     */
    inline DescribeIndexResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the index.</p>
     */
    inline DescribeIndexResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the index.</p>
     */
    inline DescribeIndexResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Unix datetime that the index was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The Unix datetime that the index was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The Unix datetime that the index was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The Unix datetime that the index was created.</p>
     */
    inline DescribeIndexResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The Unix datetime that the index was created.</p>
     */
    inline DescribeIndexResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Unix datetime that the index was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The Unix datetime that the index was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The Unix datetime that the index was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The Unix datetime that the index was last updated.</p>
     */
    inline DescribeIndexResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The Unix datetime that the index was last updated.</p>
     */
    inline DescribeIndexResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>Configuration information for document metadata or fields. Document metadata
     * are fields or attributes associated with your documents. For example, the
     * company department name associated with each document.</p>
     */
    inline const Aws::Vector<DocumentMetadataConfiguration>& GetDocumentMetadataConfigurations() const{ return m_documentMetadataConfigurations; }

    /**
     * <p>Configuration information for document metadata or fields. Document metadata
     * are fields or attributes associated with your documents. For example, the
     * company department name associated with each document.</p>
     */
    inline void SetDocumentMetadataConfigurations(const Aws::Vector<DocumentMetadataConfiguration>& value) { m_documentMetadataConfigurations = value; }

    /**
     * <p>Configuration information for document metadata or fields. Document metadata
     * are fields or attributes associated with your documents. For example, the
     * company department name associated with each document.</p>
     */
    inline void SetDocumentMetadataConfigurations(Aws::Vector<DocumentMetadataConfiguration>&& value) { m_documentMetadataConfigurations = std::move(value); }

    /**
     * <p>Configuration information for document metadata or fields. Document metadata
     * are fields or attributes associated with your documents. For example, the
     * company department name associated with each document.</p>
     */
    inline DescribeIndexResult& WithDocumentMetadataConfigurations(const Aws::Vector<DocumentMetadataConfiguration>& value) { SetDocumentMetadataConfigurations(value); return *this;}

    /**
     * <p>Configuration information for document metadata or fields. Document metadata
     * are fields or attributes associated with your documents. For example, the
     * company department name associated with each document.</p>
     */
    inline DescribeIndexResult& WithDocumentMetadataConfigurations(Aws::Vector<DocumentMetadataConfiguration>&& value) { SetDocumentMetadataConfigurations(std::move(value)); return *this;}

    /**
     * <p>Configuration information for document metadata or fields. Document metadata
     * are fields or attributes associated with your documents. For example, the
     * company department name associated with each document.</p>
     */
    inline DescribeIndexResult& AddDocumentMetadataConfigurations(const DocumentMetadataConfiguration& value) { m_documentMetadataConfigurations.push_back(value); return *this; }

    /**
     * <p>Configuration information for document metadata or fields. Document metadata
     * are fields or attributes associated with your documents. For example, the
     * company department name associated with each document.</p>
     */
    inline DescribeIndexResult& AddDocumentMetadataConfigurations(DocumentMetadataConfiguration&& value) { m_documentMetadataConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>Provides information about the number of FAQ questions and answers and the
     * number of text documents indexed.</p>
     */
    inline const IndexStatistics& GetIndexStatistics() const{ return m_indexStatistics; }

    /**
     * <p>Provides information about the number of FAQ questions and answers and the
     * number of text documents indexed.</p>
     */
    inline void SetIndexStatistics(const IndexStatistics& value) { m_indexStatistics = value; }

    /**
     * <p>Provides information about the number of FAQ questions and answers and the
     * number of text documents indexed.</p>
     */
    inline void SetIndexStatistics(IndexStatistics&& value) { m_indexStatistics = std::move(value); }

    /**
     * <p>Provides information about the number of FAQ questions and answers and the
     * number of text documents indexed.</p>
     */
    inline DescribeIndexResult& WithIndexStatistics(const IndexStatistics& value) { SetIndexStatistics(value); return *this;}

    /**
     * <p>Provides information about the number of FAQ questions and answers and the
     * number of text documents indexed.</p>
     */
    inline DescribeIndexResult& WithIndexStatistics(IndexStatistics&& value) { SetIndexStatistics(std::move(value)); return *this;}


    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a message that explains why.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a message that explains why.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a message that explains why.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a message that explains why.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a message that explains why.</p>
     */
    inline DescribeIndexResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a message that explains why.</p>
     */
    inline DescribeIndexResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a message that explains why.</p>
     */
    inline DescribeIndexResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>For Enterprise Edition indexes, you can choose to use additional capacity to
     * meet the needs of your application. This contains the capacity units used for
     * the index. A query or document storage capacity of zero indicates that the index
     * is using the default capacity. For more information on the default capacity for
     * an index and adjusting this, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/adjusting-capacity.html">Adjusting
     * capacity</a>.</p>
     */
    inline const CapacityUnitsConfiguration& GetCapacityUnits() const{ return m_capacityUnits; }

    /**
     * <p>For Enterprise Edition indexes, you can choose to use additional capacity to
     * meet the needs of your application. This contains the capacity units used for
     * the index. A query or document storage capacity of zero indicates that the index
     * is using the default capacity. For more information on the default capacity for
     * an index and adjusting this, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/adjusting-capacity.html">Adjusting
     * capacity</a>.</p>
     */
    inline void SetCapacityUnits(const CapacityUnitsConfiguration& value) { m_capacityUnits = value; }

    /**
     * <p>For Enterprise Edition indexes, you can choose to use additional capacity to
     * meet the needs of your application. This contains the capacity units used for
     * the index. A query or document storage capacity of zero indicates that the index
     * is using the default capacity. For more information on the default capacity for
     * an index and adjusting this, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/adjusting-capacity.html">Adjusting
     * capacity</a>.</p>
     */
    inline void SetCapacityUnits(CapacityUnitsConfiguration&& value) { m_capacityUnits = std::move(value); }

    /**
     * <p>For Enterprise Edition indexes, you can choose to use additional capacity to
     * meet the needs of your application. This contains the capacity units used for
     * the index. A query or document storage capacity of zero indicates that the index
     * is using the default capacity. For more information on the default capacity for
     * an index and adjusting this, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/adjusting-capacity.html">Adjusting
     * capacity</a>.</p>
     */
    inline DescribeIndexResult& WithCapacityUnits(const CapacityUnitsConfiguration& value) { SetCapacityUnits(value); return *this;}

    /**
     * <p>For Enterprise Edition indexes, you can choose to use additional capacity to
     * meet the needs of your application. This contains the capacity units used for
     * the index. A query or document storage capacity of zero indicates that the index
     * is using the default capacity. For more information on the default capacity for
     * an index and adjusting this, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/adjusting-capacity.html">Adjusting
     * capacity</a>.</p>
     */
    inline DescribeIndexResult& WithCapacityUnits(CapacityUnitsConfiguration&& value) { SetCapacityUnits(std::move(value)); return *this;}


    /**
     * <p>The user token configuration for the Amazon Kendra index.</p>
     */
    inline const Aws::Vector<UserTokenConfiguration>& GetUserTokenConfigurations() const{ return m_userTokenConfigurations; }

    /**
     * <p>The user token configuration for the Amazon Kendra index.</p>
     */
    inline void SetUserTokenConfigurations(const Aws::Vector<UserTokenConfiguration>& value) { m_userTokenConfigurations = value; }

    /**
     * <p>The user token configuration for the Amazon Kendra index.</p>
     */
    inline void SetUserTokenConfigurations(Aws::Vector<UserTokenConfiguration>&& value) { m_userTokenConfigurations = std::move(value); }

    /**
     * <p>The user token configuration for the Amazon Kendra index.</p>
     */
    inline DescribeIndexResult& WithUserTokenConfigurations(const Aws::Vector<UserTokenConfiguration>& value) { SetUserTokenConfigurations(value); return *this;}

    /**
     * <p>The user token configuration for the Amazon Kendra index.</p>
     */
    inline DescribeIndexResult& WithUserTokenConfigurations(Aws::Vector<UserTokenConfiguration>&& value) { SetUserTokenConfigurations(std::move(value)); return *this;}

    /**
     * <p>The user token configuration for the Amazon Kendra index.</p>
     */
    inline DescribeIndexResult& AddUserTokenConfigurations(const UserTokenConfiguration& value) { m_userTokenConfigurations.push_back(value); return *this; }

    /**
     * <p>The user token configuration for the Amazon Kendra index.</p>
     */
    inline DescribeIndexResult& AddUserTokenConfigurations(UserTokenConfiguration&& value) { m_userTokenConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The user context policy for the Amazon Kendra index.</p>
     */
    inline const UserContextPolicy& GetUserContextPolicy() const{ return m_userContextPolicy; }

    /**
     * <p>The user context policy for the Amazon Kendra index.</p>
     */
    inline void SetUserContextPolicy(const UserContextPolicy& value) { m_userContextPolicy = value; }

    /**
     * <p>The user context policy for the Amazon Kendra index.</p>
     */
    inline void SetUserContextPolicy(UserContextPolicy&& value) { m_userContextPolicy = std::move(value); }

    /**
     * <p>The user context policy for the Amazon Kendra index.</p>
     */
    inline DescribeIndexResult& WithUserContextPolicy(const UserContextPolicy& value) { SetUserContextPolicy(value); return *this;}

    /**
     * <p>The user context policy for the Amazon Kendra index.</p>
     */
    inline DescribeIndexResult& WithUserContextPolicy(UserContextPolicy&& value) { SetUserContextPolicy(std::move(value)); return *this;}


    /**
     * <p>Whether you have enabled the configuration for fetching access levels of
     * groups and users from an IAM Identity Center (successor to Single Sign-On)
     * identity source.</p>
     */
    inline const UserGroupResolutionConfiguration& GetUserGroupResolutionConfiguration() const{ return m_userGroupResolutionConfiguration; }

    /**
     * <p>Whether you have enabled the configuration for fetching access levels of
     * groups and users from an IAM Identity Center (successor to Single Sign-On)
     * identity source.</p>
     */
    inline void SetUserGroupResolutionConfiguration(const UserGroupResolutionConfiguration& value) { m_userGroupResolutionConfiguration = value; }

    /**
     * <p>Whether you have enabled the configuration for fetching access levels of
     * groups and users from an IAM Identity Center (successor to Single Sign-On)
     * identity source.</p>
     */
    inline void SetUserGroupResolutionConfiguration(UserGroupResolutionConfiguration&& value) { m_userGroupResolutionConfiguration = std::move(value); }

    /**
     * <p>Whether you have enabled the configuration for fetching access levels of
     * groups and users from an IAM Identity Center (successor to Single Sign-On)
     * identity source.</p>
     */
    inline DescribeIndexResult& WithUserGroupResolutionConfiguration(const UserGroupResolutionConfiguration& value) { SetUserGroupResolutionConfiguration(value); return *this;}

    /**
     * <p>Whether you have enabled the configuration for fetching access levels of
     * groups and users from an IAM Identity Center (successor to Single Sign-On)
     * identity source.</p>
     */
    inline DescribeIndexResult& WithUserGroupResolutionConfiguration(UserGroupResolutionConfiguration&& value) { SetUserGroupResolutionConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_name;

    Aws::String m_id;

    IndexEdition m_edition;

    Aws::String m_roleArn;

    ServerSideEncryptionConfiguration m_serverSideEncryptionConfiguration;

    IndexStatus m_status;

    Aws::String m_description;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_updatedAt;

    Aws::Vector<DocumentMetadataConfiguration> m_documentMetadataConfigurations;

    IndexStatistics m_indexStatistics;

    Aws::String m_errorMessage;

    CapacityUnitsConfiguration m_capacityUnits;

    Aws::Vector<UserTokenConfiguration> m_userTokenConfigurations;

    UserContextPolicy m_userContextPolicy;

    UserGroupResolutionConfiguration m_userGroupResolutionConfiguration;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
