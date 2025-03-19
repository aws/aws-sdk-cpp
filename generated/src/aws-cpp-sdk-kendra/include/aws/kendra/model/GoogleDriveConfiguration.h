/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Provides the configuration information to connect to Google Drive as your
   * data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/GoogleDriveConfiguration">AWS
   * API Reference</a></p>
   */
  class GoogleDriveConfiguration
  {
  public:
    AWS_KENDRA_API GoogleDriveConfiguration() = default;
    AWS_KENDRA_API GoogleDriveConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API GoogleDriveConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a Secrets Managersecret that contains the
     * credentials required to connect to Google Drive. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-google-drive.html">Using
     * a Google Workspace Drive data source</a>.</p>
     */
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    GoogleDriveConfiguration& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to include certain items in your Google
     * Drive, including shared drives and users' My Drives. Items that match the
     * patterns are included in the index. Items that don't match the patterns are
     * excluded from the index. If an item matches both an inclusion and exclusion
     * pattern, the exclusion pattern takes precedence and the item isn't included in
     * the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionPatterns() const { return m_inclusionPatterns; }
    inline bool InclusionPatternsHasBeenSet() const { return m_inclusionPatternsHasBeenSet; }
    template<typename InclusionPatternsT = Aws::Vector<Aws::String>>
    void SetInclusionPatterns(InclusionPatternsT&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = std::forward<InclusionPatternsT>(value); }
    template<typename InclusionPatternsT = Aws::Vector<Aws::String>>
    GoogleDriveConfiguration& WithInclusionPatterns(InclusionPatternsT&& value) { SetInclusionPatterns(std::forward<InclusionPatternsT>(value)); return *this;}
    template<typename InclusionPatternsT = Aws::String>
    GoogleDriveConfiguration& AddInclusionPatterns(InclusionPatternsT&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.emplace_back(std::forward<InclusionPatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to exclude certain items in your Google
     * Drive, including shared drives and users' My Drives. Items that match the
     * patterns are excluded from the index. Items that don't match the patterns are
     * included in the index. If an item matches both an inclusion and exclusion
     * pattern, the exclusion pattern takes precedence and the item isn't included in
     * the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionPatterns() const { return m_exclusionPatterns; }
    inline bool ExclusionPatternsHasBeenSet() const { return m_exclusionPatternsHasBeenSet; }
    template<typename ExclusionPatternsT = Aws::Vector<Aws::String>>
    void SetExclusionPatterns(ExclusionPatternsT&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = std::forward<ExclusionPatternsT>(value); }
    template<typename ExclusionPatternsT = Aws::Vector<Aws::String>>
    GoogleDriveConfiguration& WithExclusionPatterns(ExclusionPatternsT&& value) { SetExclusionPatterns(std::forward<ExclusionPatternsT>(value)); return *this;}
    template<typename ExclusionPatternsT = Aws::String>
    GoogleDriveConfiguration& AddExclusionPatterns(ExclusionPatternsT&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.emplace_back(std::forward<ExclusionPatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Maps Google Drive data source attributes or field names to Amazon Kendra
     * index field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Google Drive fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Google Drive data source field names must exist in
     * your Google Drive custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetFieldMappings() const { return m_fieldMappings; }
    inline bool FieldMappingsHasBeenSet() const { return m_fieldMappingsHasBeenSet; }
    template<typename FieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    void SetFieldMappings(FieldMappingsT&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = std::forward<FieldMappingsT>(value); }
    template<typename FieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    GoogleDriveConfiguration& WithFieldMappings(FieldMappingsT&& value) { SetFieldMappings(std::forward<FieldMappingsT>(value)); return *this;}
    template<typename FieldMappingsT = DataSourceToIndexFieldMapping>
    GoogleDriveConfiguration& AddFieldMappings(FieldMappingsT&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.emplace_back(std::forward<FieldMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of MIME types to exclude from the index. All documents matching the
     * specified MIME type are excluded. </p> <p>For a list of MIME types, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-google-drive.html">Using
     * a Google Workspace Drive data source</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeMimeTypes() const { return m_excludeMimeTypes; }
    inline bool ExcludeMimeTypesHasBeenSet() const { return m_excludeMimeTypesHasBeenSet; }
    template<typename ExcludeMimeTypesT = Aws::Vector<Aws::String>>
    void SetExcludeMimeTypes(ExcludeMimeTypesT&& value) { m_excludeMimeTypesHasBeenSet = true; m_excludeMimeTypes = std::forward<ExcludeMimeTypesT>(value); }
    template<typename ExcludeMimeTypesT = Aws::Vector<Aws::String>>
    GoogleDriveConfiguration& WithExcludeMimeTypes(ExcludeMimeTypesT&& value) { SetExcludeMimeTypes(std::forward<ExcludeMimeTypesT>(value)); return *this;}
    template<typename ExcludeMimeTypesT = Aws::String>
    GoogleDriveConfiguration& AddExcludeMimeTypes(ExcludeMimeTypesT&& value) { m_excludeMimeTypesHasBeenSet = true; m_excludeMimeTypes.emplace_back(std::forward<ExcludeMimeTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of email addresses of the users. Documents owned by these users are
     * excluded from the index. Documents shared with excluded users are indexed unless
     * they are excluded in another way.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeUserAccounts() const { return m_excludeUserAccounts; }
    inline bool ExcludeUserAccountsHasBeenSet() const { return m_excludeUserAccountsHasBeenSet; }
    template<typename ExcludeUserAccountsT = Aws::Vector<Aws::String>>
    void SetExcludeUserAccounts(ExcludeUserAccountsT&& value) { m_excludeUserAccountsHasBeenSet = true; m_excludeUserAccounts = std::forward<ExcludeUserAccountsT>(value); }
    template<typename ExcludeUserAccountsT = Aws::Vector<Aws::String>>
    GoogleDriveConfiguration& WithExcludeUserAccounts(ExcludeUserAccountsT&& value) { SetExcludeUserAccounts(std::forward<ExcludeUserAccountsT>(value)); return *this;}
    template<typename ExcludeUserAccountsT = Aws::String>
    GoogleDriveConfiguration& AddExcludeUserAccounts(ExcludeUserAccountsT&& value) { m_excludeUserAccountsHasBeenSet = true; m_excludeUserAccounts.emplace_back(std::forward<ExcludeUserAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of identifiers or shared drives to exclude from the index. All files
     * and folders stored on the shared drive are excluded.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeSharedDrives() const { return m_excludeSharedDrives; }
    inline bool ExcludeSharedDrivesHasBeenSet() const { return m_excludeSharedDrivesHasBeenSet; }
    template<typename ExcludeSharedDrivesT = Aws::Vector<Aws::String>>
    void SetExcludeSharedDrives(ExcludeSharedDrivesT&& value) { m_excludeSharedDrivesHasBeenSet = true; m_excludeSharedDrives = std::forward<ExcludeSharedDrivesT>(value); }
    template<typename ExcludeSharedDrivesT = Aws::Vector<Aws::String>>
    GoogleDriveConfiguration& WithExcludeSharedDrives(ExcludeSharedDrivesT&& value) { SetExcludeSharedDrives(std::forward<ExcludeSharedDrivesT>(value)); return *this;}
    template<typename ExcludeSharedDrivesT = Aws::String>
    GoogleDriveConfiguration& AddExcludeSharedDrives(ExcludeSharedDrivesT&& value) { m_excludeSharedDrivesHasBeenSet = true; m_excludeSharedDrives.emplace_back(std::forward<ExcludeSharedDrivesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_inclusionPatterns;
    bool m_inclusionPatternsHasBeenSet = false;

    Aws::Vector<Aws::String> m_exclusionPatterns;
    bool m_exclusionPatternsHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_fieldMappings;
    bool m_fieldMappingsHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludeMimeTypes;
    bool m_excludeMimeTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludeUserAccounts;
    bool m_excludeUserAccountsHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludeSharedDrives;
    bool m_excludeSharedDrivesHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
