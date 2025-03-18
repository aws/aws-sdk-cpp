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
    AWS_KENDRA_API DescribeIndexResult() = default;
    AWS_KENDRA_API DescribeIndexResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API DescribeIndexResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the index.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeIndexResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the index.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DescribeIndexResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Kendra edition used for the index. You decide the edition when you
     * create the index.</p>
     */
    inline IndexEdition GetEdition() const { return m_edition; }
    inline void SetEdition(IndexEdition value) { m_editionHasBeenSet = true; m_edition = value; }
    inline DescribeIndexResult& WithEdition(IndexEdition value) { SetEdition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that gives Amazon Kendra
     * permission to write to your Amazon CloudWatch logs.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeIndexResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the KMS customer master key (CMK) that is used to encrypt
     * your data. Amazon Kendra doesn't support asymmetric CMKs.</p>
     */
    inline const ServerSideEncryptionConfiguration& GetServerSideEncryptionConfiguration() const { return m_serverSideEncryptionConfiguration; }
    template<typename ServerSideEncryptionConfigurationT = ServerSideEncryptionConfiguration>
    void SetServerSideEncryptionConfiguration(ServerSideEncryptionConfigurationT&& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = std::forward<ServerSideEncryptionConfigurationT>(value); }
    template<typename ServerSideEncryptionConfigurationT = ServerSideEncryptionConfiguration>
    DescribeIndexResult& WithServerSideEncryptionConfiguration(ServerSideEncryptionConfigurationT&& value) { SetServerSideEncryptionConfiguration(std::forward<ServerSideEncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the index. When the value is <code>ACTIVE</code>, the
     * index is ready for use. If the <code>Status</code> field value is
     * <code>FAILED</code>, the <code>ErrorMessage</code> field contains a message that
     * explains why.</p>
     */
    inline IndexStatus GetStatus() const { return m_status; }
    inline void SetStatus(IndexStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeIndexResult& WithStatus(IndexStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the index.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeIndexResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the index was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DescribeIndexResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the index was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    DescribeIndexResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for document metadata or fields. Document metadata
     * are fields or attributes associated with your documents. For example, the
     * company department name associated with each document.</p>
     */
    inline const Aws::Vector<DocumentMetadataConfiguration>& GetDocumentMetadataConfigurations() const { return m_documentMetadataConfigurations; }
    template<typename DocumentMetadataConfigurationsT = Aws::Vector<DocumentMetadataConfiguration>>
    void SetDocumentMetadataConfigurations(DocumentMetadataConfigurationsT&& value) { m_documentMetadataConfigurationsHasBeenSet = true; m_documentMetadataConfigurations = std::forward<DocumentMetadataConfigurationsT>(value); }
    template<typename DocumentMetadataConfigurationsT = Aws::Vector<DocumentMetadataConfiguration>>
    DescribeIndexResult& WithDocumentMetadataConfigurations(DocumentMetadataConfigurationsT&& value) { SetDocumentMetadataConfigurations(std::forward<DocumentMetadataConfigurationsT>(value)); return *this;}
    template<typename DocumentMetadataConfigurationsT = DocumentMetadataConfiguration>
    DescribeIndexResult& AddDocumentMetadataConfigurations(DocumentMetadataConfigurationsT&& value) { m_documentMetadataConfigurationsHasBeenSet = true; m_documentMetadataConfigurations.emplace_back(std::forward<DocumentMetadataConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides information about the number of FAQ questions and answers and the
     * number of text documents indexed.</p>
     */
    inline const IndexStatistics& GetIndexStatistics() const { return m_indexStatistics; }
    template<typename IndexStatisticsT = IndexStatistics>
    void SetIndexStatistics(IndexStatisticsT&& value) { m_indexStatisticsHasBeenSet = true; m_indexStatistics = std::forward<IndexStatisticsT>(value); }
    template<typename IndexStatisticsT = IndexStatistics>
    DescribeIndexResult& WithIndexStatistics(IndexStatisticsT&& value) { SetIndexStatistics(std::forward<IndexStatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a message that explains why.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    DescribeIndexResult& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For Enterprise Edition indexes, you can choose to use additional capacity to
     * meet the needs of your application. This contains the capacity units used for
     * the index. A query or document storage capacity of zero indicates that the index
     * is using the default capacity. For more information on the default capacity for
     * an index and adjusting this, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/adjusting-capacity.html">Adjusting
     * capacity</a>.</p>
     */
    inline const CapacityUnitsConfiguration& GetCapacityUnits() const { return m_capacityUnits; }
    template<typename CapacityUnitsT = CapacityUnitsConfiguration>
    void SetCapacityUnits(CapacityUnitsT&& value) { m_capacityUnitsHasBeenSet = true; m_capacityUnits = std::forward<CapacityUnitsT>(value); }
    template<typename CapacityUnitsT = CapacityUnitsConfiguration>
    DescribeIndexResult& WithCapacityUnits(CapacityUnitsT&& value) { SetCapacityUnits(std::forward<CapacityUnitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user token configuration for the Amazon Kendra index.</p>
     */
    inline const Aws::Vector<UserTokenConfiguration>& GetUserTokenConfigurations() const { return m_userTokenConfigurations; }
    template<typename UserTokenConfigurationsT = Aws::Vector<UserTokenConfiguration>>
    void SetUserTokenConfigurations(UserTokenConfigurationsT&& value) { m_userTokenConfigurationsHasBeenSet = true; m_userTokenConfigurations = std::forward<UserTokenConfigurationsT>(value); }
    template<typename UserTokenConfigurationsT = Aws::Vector<UserTokenConfiguration>>
    DescribeIndexResult& WithUserTokenConfigurations(UserTokenConfigurationsT&& value) { SetUserTokenConfigurations(std::forward<UserTokenConfigurationsT>(value)); return *this;}
    template<typename UserTokenConfigurationsT = UserTokenConfiguration>
    DescribeIndexResult& AddUserTokenConfigurations(UserTokenConfigurationsT&& value) { m_userTokenConfigurationsHasBeenSet = true; m_userTokenConfigurations.emplace_back(std::forward<UserTokenConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user context policy for the Amazon Kendra index.</p>
     */
    inline UserContextPolicy GetUserContextPolicy() const { return m_userContextPolicy; }
    inline void SetUserContextPolicy(UserContextPolicy value) { m_userContextPolicyHasBeenSet = true; m_userContextPolicy = value; }
    inline DescribeIndexResult& WithUserContextPolicy(UserContextPolicy value) { SetUserContextPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether you have enabled IAM Identity Center identity source for your users
     * and groups. This is useful for user context filtering, where search results are
     * filtered based on the user or their group access to documents.</p>
     */
    inline const UserGroupResolutionConfiguration& GetUserGroupResolutionConfiguration() const { return m_userGroupResolutionConfiguration; }
    template<typename UserGroupResolutionConfigurationT = UserGroupResolutionConfiguration>
    void SetUserGroupResolutionConfiguration(UserGroupResolutionConfigurationT&& value) { m_userGroupResolutionConfigurationHasBeenSet = true; m_userGroupResolutionConfiguration = std::forward<UserGroupResolutionConfigurationT>(value); }
    template<typename UserGroupResolutionConfigurationT = UserGroupResolutionConfiguration>
    DescribeIndexResult& WithUserGroupResolutionConfiguration(UserGroupResolutionConfigurationT&& value) { SetUserGroupResolutionConfiguration(std::forward<UserGroupResolutionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeIndexResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    IndexEdition m_edition{IndexEdition::NOT_SET};
    bool m_editionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    ServerSideEncryptionConfiguration m_serverSideEncryptionConfiguration;
    bool m_serverSideEncryptionConfigurationHasBeenSet = false;

    IndexStatus m_status{IndexStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::Vector<DocumentMetadataConfiguration> m_documentMetadataConfigurations;
    bool m_documentMetadataConfigurationsHasBeenSet = false;

    IndexStatistics m_indexStatistics;
    bool m_indexStatisticsHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    CapacityUnitsConfiguration m_capacityUnits;
    bool m_capacityUnitsHasBeenSet = false;

    Aws::Vector<UserTokenConfiguration> m_userTokenConfigurations;
    bool m_userTokenConfigurationsHasBeenSet = false;

    UserContextPolicy m_userContextPolicy{UserContextPolicy::NOT_SET};
    bool m_userContextPolicyHasBeenSet = false;

    UserGroupResolutionConfiguration m_userGroupResolutionConfiguration;
    bool m_userGroupResolutionConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
