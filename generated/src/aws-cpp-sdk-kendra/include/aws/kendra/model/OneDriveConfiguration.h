/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/OneDriveUsers.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/DataSourceToIndexFieldMapping.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides the configuration information to connect to OneDrive as your data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/OneDriveConfiguration">AWS
   * API Reference</a></p>
   */
  class OneDriveConfiguration
  {
  public:
    AWS_KENDRA_API OneDriveConfiguration() = default;
    AWS_KENDRA_API OneDriveConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API OneDriveConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Azure Active Directory domain of the organization. </p>
     */
    inline const Aws::String& GetTenantDomain() const { return m_tenantDomain; }
    inline bool TenantDomainHasBeenSet() const { return m_tenantDomainHasBeenSet; }
    template<typename TenantDomainT = Aws::String>
    void SetTenantDomain(TenantDomainT&& value) { m_tenantDomainHasBeenSet = true; m_tenantDomain = std::forward<TenantDomainT>(value); }
    template<typename TenantDomainT = Aws::String>
    OneDriveConfiguration& WithTenantDomain(TenantDomainT&& value) { SetTenantDomain(std::forward<TenantDomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Managersecret that contains the
     * user name and password to connect to OneDrive. The user name should be the
     * application ID for the OneDrive application, and the password is the application
     * key for the OneDrive application.</p>
     */
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    OneDriveConfiguration& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of user accounts whose documents should be indexed.</p>
     */
    inline const OneDriveUsers& GetOneDriveUsers() const { return m_oneDriveUsers; }
    inline bool OneDriveUsersHasBeenSet() const { return m_oneDriveUsersHasBeenSet; }
    template<typename OneDriveUsersT = OneDriveUsers>
    void SetOneDriveUsers(OneDriveUsersT&& value) { m_oneDriveUsersHasBeenSet = true; m_oneDriveUsers = std::forward<OneDriveUsersT>(value); }
    template<typename OneDriveUsersT = OneDriveUsers>
    OneDriveConfiguration& WithOneDriveUsers(OneDriveUsersT&& value) { SetOneDriveUsers(std::forward<OneDriveUsersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to include certain documents in your
     * OneDrive. Documents that match the patterns are included in the index. Documents
     * that don't match the patterns are excluded from the index. If a document matches
     * both an inclusion and exclusion pattern, the exclusion pattern takes precedence
     * and the document isn't included in the index.</p> <p>The pattern is applied to
     * the file name.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionPatterns() const { return m_inclusionPatterns; }
    inline bool InclusionPatternsHasBeenSet() const { return m_inclusionPatternsHasBeenSet; }
    template<typename InclusionPatternsT = Aws::Vector<Aws::String>>
    void SetInclusionPatterns(InclusionPatternsT&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = std::forward<InclusionPatternsT>(value); }
    template<typename InclusionPatternsT = Aws::Vector<Aws::String>>
    OneDriveConfiguration& WithInclusionPatterns(InclusionPatternsT&& value) { SetInclusionPatterns(std::forward<InclusionPatternsT>(value)); return *this;}
    template<typename InclusionPatternsT = Aws::String>
    OneDriveConfiguration& AddInclusionPatterns(InclusionPatternsT&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.emplace_back(std::forward<InclusionPatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to exclude certain documents in your
     * OneDrive. Documents that match the patterns are excluded from the index.
     * Documents that don't match the patterns are included in the index. If a document
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the document isn't included in the index.</p> <p>The pattern is
     * applied to the file name.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionPatterns() const { return m_exclusionPatterns; }
    inline bool ExclusionPatternsHasBeenSet() const { return m_exclusionPatternsHasBeenSet; }
    template<typename ExclusionPatternsT = Aws::Vector<Aws::String>>
    void SetExclusionPatterns(ExclusionPatternsT&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = std::forward<ExclusionPatternsT>(value); }
    template<typename ExclusionPatternsT = Aws::Vector<Aws::String>>
    OneDriveConfiguration& WithExclusionPatterns(ExclusionPatternsT&& value) { SetExclusionPatterns(std::forward<ExclusionPatternsT>(value)); return *this;}
    template<typename ExclusionPatternsT = Aws::String>
    OneDriveConfiguration& AddExclusionPatterns(ExclusionPatternsT&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.emplace_back(std::forward<ExclusionPatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * OneDrive data source attributes or field names to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to OneDrive fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The OneDrive data source field names must exist in your
     * OneDrive custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetFieldMappings() const { return m_fieldMappings; }
    inline bool FieldMappingsHasBeenSet() const { return m_fieldMappingsHasBeenSet; }
    template<typename FieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    void SetFieldMappings(FieldMappingsT&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = std::forward<FieldMappingsT>(value); }
    template<typename FieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    OneDriveConfiguration& WithFieldMappings(FieldMappingsT&& value) { SetFieldMappings(std::forward<FieldMappingsT>(value)); return *this;}
    template<typename FieldMappingsT = DataSourceToIndexFieldMapping>
    OneDriveConfiguration& AddFieldMappings(FieldMappingsT&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.emplace_back(std::forward<FieldMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to disable local groups information.</p>
     */
    inline bool GetDisableLocalGroups() const { return m_disableLocalGroups; }
    inline bool DisableLocalGroupsHasBeenSet() const { return m_disableLocalGroupsHasBeenSet; }
    inline void SetDisableLocalGroups(bool value) { m_disableLocalGroupsHasBeenSet = true; m_disableLocalGroups = value; }
    inline OneDriveConfiguration& WithDisableLocalGroups(bool value) { SetDisableLocalGroups(value); return *this;}
    ///@}
  private:

    Aws::String m_tenantDomain;
    bool m_tenantDomainHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    OneDriveUsers m_oneDriveUsers;
    bool m_oneDriveUsersHasBeenSet = false;

    Aws::Vector<Aws::String> m_inclusionPatterns;
    bool m_inclusionPatternsHasBeenSet = false;

    Aws::Vector<Aws::String> m_exclusionPatterns;
    bool m_exclusionPatternsHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_fieldMappings;
    bool m_fieldMappingsHasBeenSet = false;

    bool m_disableLocalGroups{false};
    bool m_disableLocalGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
