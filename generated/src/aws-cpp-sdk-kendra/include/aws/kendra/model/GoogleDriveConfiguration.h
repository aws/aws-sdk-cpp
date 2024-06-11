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
    AWS_KENDRA_API GoogleDriveConfiguration();
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
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }
    inline GoogleDriveConfiguration& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}
    inline GoogleDriveConfiguration& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}
    inline GoogleDriveConfiguration& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetInclusionPatterns() const{ return m_inclusionPatterns; }
    inline bool InclusionPatternsHasBeenSet() const { return m_inclusionPatternsHasBeenSet; }
    inline void SetInclusionPatterns(const Aws::Vector<Aws::String>& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = value; }
    inline void SetInclusionPatterns(Aws::Vector<Aws::String>&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = std::move(value); }
    inline GoogleDriveConfiguration& WithInclusionPatterns(const Aws::Vector<Aws::String>& value) { SetInclusionPatterns(value); return *this;}
    inline GoogleDriveConfiguration& WithInclusionPatterns(Aws::Vector<Aws::String>&& value) { SetInclusionPatterns(std::move(value)); return *this;}
    inline GoogleDriveConfiguration& AddInclusionPatterns(const Aws::String& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }
    inline GoogleDriveConfiguration& AddInclusionPatterns(Aws::String&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(std::move(value)); return *this; }
    inline GoogleDriveConfiguration& AddInclusionPatterns(const char* value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }
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
    inline const Aws::Vector<Aws::String>& GetExclusionPatterns() const{ return m_exclusionPatterns; }
    inline bool ExclusionPatternsHasBeenSet() const { return m_exclusionPatternsHasBeenSet; }
    inline void SetExclusionPatterns(const Aws::Vector<Aws::String>& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = value; }
    inline void SetExclusionPatterns(Aws::Vector<Aws::String>&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = std::move(value); }
    inline GoogleDriveConfiguration& WithExclusionPatterns(const Aws::Vector<Aws::String>& value) { SetExclusionPatterns(value); return *this;}
    inline GoogleDriveConfiguration& WithExclusionPatterns(Aws::Vector<Aws::String>&& value) { SetExclusionPatterns(std::move(value)); return *this;}
    inline GoogleDriveConfiguration& AddExclusionPatterns(const Aws::String& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }
    inline GoogleDriveConfiguration& AddExclusionPatterns(Aws::String&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(std::move(value)); return *this; }
    inline GoogleDriveConfiguration& AddExclusionPatterns(const char* value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }
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
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetFieldMappings() const{ return m_fieldMappings; }
    inline bool FieldMappingsHasBeenSet() const { return m_fieldMappingsHasBeenSet; }
    inline void SetFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = value; }
    inline void SetFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = std::move(value); }
    inline GoogleDriveConfiguration& WithFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetFieldMappings(value); return *this;}
    inline GoogleDriveConfiguration& WithFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetFieldMappings(std::move(value)); return *this;}
    inline GoogleDriveConfiguration& AddFieldMappings(const DataSourceToIndexFieldMapping& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.push_back(value); return *this; }
    inline GoogleDriveConfiguration& AddFieldMappings(DataSourceToIndexFieldMapping&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of MIME types to exclude from the index. All documents matching the
     * specified MIME type are excluded. </p> <p>For a list of MIME types, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-google-drive.html">Using
     * a Google Workspace Drive data source</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeMimeTypes() const{ return m_excludeMimeTypes; }
    inline bool ExcludeMimeTypesHasBeenSet() const { return m_excludeMimeTypesHasBeenSet; }
    inline void SetExcludeMimeTypes(const Aws::Vector<Aws::String>& value) { m_excludeMimeTypesHasBeenSet = true; m_excludeMimeTypes = value; }
    inline void SetExcludeMimeTypes(Aws::Vector<Aws::String>&& value) { m_excludeMimeTypesHasBeenSet = true; m_excludeMimeTypes = std::move(value); }
    inline GoogleDriveConfiguration& WithExcludeMimeTypes(const Aws::Vector<Aws::String>& value) { SetExcludeMimeTypes(value); return *this;}
    inline GoogleDriveConfiguration& WithExcludeMimeTypes(Aws::Vector<Aws::String>&& value) { SetExcludeMimeTypes(std::move(value)); return *this;}
    inline GoogleDriveConfiguration& AddExcludeMimeTypes(const Aws::String& value) { m_excludeMimeTypesHasBeenSet = true; m_excludeMimeTypes.push_back(value); return *this; }
    inline GoogleDriveConfiguration& AddExcludeMimeTypes(Aws::String&& value) { m_excludeMimeTypesHasBeenSet = true; m_excludeMimeTypes.push_back(std::move(value)); return *this; }
    inline GoogleDriveConfiguration& AddExcludeMimeTypes(const char* value) { m_excludeMimeTypesHasBeenSet = true; m_excludeMimeTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of email addresses of the users. Documents owned by these users are
     * excluded from the index. Documents shared with excluded users are indexed unless
     * they are excluded in another way.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeUserAccounts() const{ return m_excludeUserAccounts; }
    inline bool ExcludeUserAccountsHasBeenSet() const { return m_excludeUserAccountsHasBeenSet; }
    inline void SetExcludeUserAccounts(const Aws::Vector<Aws::String>& value) { m_excludeUserAccountsHasBeenSet = true; m_excludeUserAccounts = value; }
    inline void SetExcludeUserAccounts(Aws::Vector<Aws::String>&& value) { m_excludeUserAccountsHasBeenSet = true; m_excludeUserAccounts = std::move(value); }
    inline GoogleDriveConfiguration& WithExcludeUserAccounts(const Aws::Vector<Aws::String>& value) { SetExcludeUserAccounts(value); return *this;}
    inline GoogleDriveConfiguration& WithExcludeUserAccounts(Aws::Vector<Aws::String>&& value) { SetExcludeUserAccounts(std::move(value)); return *this;}
    inline GoogleDriveConfiguration& AddExcludeUserAccounts(const Aws::String& value) { m_excludeUserAccountsHasBeenSet = true; m_excludeUserAccounts.push_back(value); return *this; }
    inline GoogleDriveConfiguration& AddExcludeUserAccounts(Aws::String&& value) { m_excludeUserAccountsHasBeenSet = true; m_excludeUserAccounts.push_back(std::move(value)); return *this; }
    inline GoogleDriveConfiguration& AddExcludeUserAccounts(const char* value) { m_excludeUserAccountsHasBeenSet = true; m_excludeUserAccounts.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of identifiers or shared drives to exclude from the index. All files
     * and folders stored on the shared drive are excluded.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeSharedDrives() const{ return m_excludeSharedDrives; }
    inline bool ExcludeSharedDrivesHasBeenSet() const { return m_excludeSharedDrivesHasBeenSet; }
    inline void SetExcludeSharedDrives(const Aws::Vector<Aws::String>& value) { m_excludeSharedDrivesHasBeenSet = true; m_excludeSharedDrives = value; }
    inline void SetExcludeSharedDrives(Aws::Vector<Aws::String>&& value) { m_excludeSharedDrivesHasBeenSet = true; m_excludeSharedDrives = std::move(value); }
    inline GoogleDriveConfiguration& WithExcludeSharedDrives(const Aws::Vector<Aws::String>& value) { SetExcludeSharedDrives(value); return *this;}
    inline GoogleDriveConfiguration& WithExcludeSharedDrives(Aws::Vector<Aws::String>&& value) { SetExcludeSharedDrives(std::move(value)); return *this;}
    inline GoogleDriveConfiguration& AddExcludeSharedDrives(const Aws::String& value) { m_excludeSharedDrivesHasBeenSet = true; m_excludeSharedDrives.push_back(value); return *this; }
    inline GoogleDriveConfiguration& AddExcludeSharedDrives(Aws::String&& value) { m_excludeSharedDrivesHasBeenSet = true; m_excludeSharedDrives.push_back(std::move(value)); return *this; }
    inline GoogleDriveConfiguration& AddExcludeSharedDrives(const char* value) { m_excludeSharedDrivesHasBeenSet = true; m_excludeSharedDrives.push_back(value); return *this; }
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
