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
    AWS_KENDRA_API OneDriveConfiguration();
    AWS_KENDRA_API OneDriveConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API OneDriveConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Azure Active Directory domain of the organization. </p>
     */
    inline const Aws::String& GetTenantDomain() const{ return m_tenantDomain; }
    inline bool TenantDomainHasBeenSet() const { return m_tenantDomainHasBeenSet; }
    inline void SetTenantDomain(const Aws::String& value) { m_tenantDomainHasBeenSet = true; m_tenantDomain = value; }
    inline void SetTenantDomain(Aws::String&& value) { m_tenantDomainHasBeenSet = true; m_tenantDomain = std::move(value); }
    inline void SetTenantDomain(const char* value) { m_tenantDomainHasBeenSet = true; m_tenantDomain.assign(value); }
    inline OneDriveConfiguration& WithTenantDomain(const Aws::String& value) { SetTenantDomain(value); return *this;}
    inline OneDriveConfiguration& WithTenantDomain(Aws::String&& value) { SetTenantDomain(std::move(value)); return *this;}
    inline OneDriveConfiguration& WithTenantDomain(const char* value) { SetTenantDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Managersecret that contains the
     * user name and password to connect to OneDrive. The user name should be the
     * application ID for the OneDrive application, and the password is the application
     * key for the OneDrive application.</p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }
    inline OneDriveConfiguration& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}
    inline OneDriveConfiguration& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}
    inline OneDriveConfiguration& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of user accounts whose documents should be indexed.</p>
     */
    inline const OneDriveUsers& GetOneDriveUsers() const{ return m_oneDriveUsers; }
    inline bool OneDriveUsersHasBeenSet() const { return m_oneDriveUsersHasBeenSet; }
    inline void SetOneDriveUsers(const OneDriveUsers& value) { m_oneDriveUsersHasBeenSet = true; m_oneDriveUsers = value; }
    inline void SetOneDriveUsers(OneDriveUsers&& value) { m_oneDriveUsersHasBeenSet = true; m_oneDriveUsers = std::move(value); }
    inline OneDriveConfiguration& WithOneDriveUsers(const OneDriveUsers& value) { SetOneDriveUsers(value); return *this;}
    inline OneDriveConfiguration& WithOneDriveUsers(OneDriveUsers&& value) { SetOneDriveUsers(std::move(value)); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetInclusionPatterns() const{ return m_inclusionPatterns; }
    inline bool InclusionPatternsHasBeenSet() const { return m_inclusionPatternsHasBeenSet; }
    inline void SetInclusionPatterns(const Aws::Vector<Aws::String>& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = value; }
    inline void SetInclusionPatterns(Aws::Vector<Aws::String>&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = std::move(value); }
    inline OneDriveConfiguration& WithInclusionPatterns(const Aws::Vector<Aws::String>& value) { SetInclusionPatterns(value); return *this;}
    inline OneDriveConfiguration& WithInclusionPatterns(Aws::Vector<Aws::String>&& value) { SetInclusionPatterns(std::move(value)); return *this;}
    inline OneDriveConfiguration& AddInclusionPatterns(const Aws::String& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }
    inline OneDriveConfiguration& AddInclusionPatterns(Aws::String&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(std::move(value)); return *this; }
    inline OneDriveConfiguration& AddInclusionPatterns(const char* value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }
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
    inline const Aws::Vector<Aws::String>& GetExclusionPatterns() const{ return m_exclusionPatterns; }
    inline bool ExclusionPatternsHasBeenSet() const { return m_exclusionPatternsHasBeenSet; }
    inline void SetExclusionPatterns(const Aws::Vector<Aws::String>& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = value; }
    inline void SetExclusionPatterns(Aws::Vector<Aws::String>&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = std::move(value); }
    inline OneDriveConfiguration& WithExclusionPatterns(const Aws::Vector<Aws::String>& value) { SetExclusionPatterns(value); return *this;}
    inline OneDriveConfiguration& WithExclusionPatterns(Aws::Vector<Aws::String>&& value) { SetExclusionPatterns(std::move(value)); return *this;}
    inline OneDriveConfiguration& AddExclusionPatterns(const Aws::String& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }
    inline OneDriveConfiguration& AddExclusionPatterns(Aws::String&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(std::move(value)); return *this; }
    inline OneDriveConfiguration& AddExclusionPatterns(const char* value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }
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
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetFieldMappings() const{ return m_fieldMappings; }
    inline bool FieldMappingsHasBeenSet() const { return m_fieldMappingsHasBeenSet; }
    inline void SetFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = value; }
    inline void SetFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = std::move(value); }
    inline OneDriveConfiguration& WithFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetFieldMappings(value); return *this;}
    inline OneDriveConfiguration& WithFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetFieldMappings(std::move(value)); return *this;}
    inline OneDriveConfiguration& AddFieldMappings(const DataSourceToIndexFieldMapping& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.push_back(value); return *this; }
    inline OneDriveConfiguration& AddFieldMappings(DataSourceToIndexFieldMapping&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to disable local groups information.</p>
     */
    inline bool GetDisableLocalGroups() const{ return m_disableLocalGroups; }
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

    bool m_disableLocalGroups;
    bool m_disableLocalGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
