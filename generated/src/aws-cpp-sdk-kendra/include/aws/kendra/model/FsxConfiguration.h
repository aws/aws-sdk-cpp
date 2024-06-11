/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/FsxFileSystemType.h>
#include <aws/kendra/model/DataSourceVpcConfiguration.h>
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
   * <p>Provides the configuration information to connect to Amazon FSx as your data
   * source.</p>  <p>Amazon Kendra now supports an upgraded Amazon FSx Windows
   * connector.</p> <p>You must now use the <a
   * href="https://docs.aws.amazon.com/kendra/latest/APIReference/API_TemplateConfiguration.html">TemplateConfiguration</a>
   * object instead of the <code>FsxConfiguration</code> object to configure your
   * connector.</p> <p>Connectors configured using the older console and API
   * architecture will continue to function as configured. However, you won't be able
   * to edit or update them. If you want to edit or update your connector
   * configuration, you must create a new connector.</p> <p>We recommended migrating
   * your connector workflow to the upgraded version. Support for connectors
   * configured using the older architecture is scheduled to end by June 2024.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/FsxConfiguration">AWS
   * API Reference</a></p>
   */
  class FsxConfiguration
  {
  public:
    AWS_KENDRA_API FsxConfiguration();
    AWS_KENDRA_API FsxConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API FsxConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the Amazon FSx file system.</p> <p>You can find your file
     * system ID on the file system dashboard in the Amazon FSx console. For
     * information on how to create a file system in Amazon FSx console, using Windows
     * File Server as an example, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/getting-started-step1.html">Amazon
     * FSx Getting started guide</a>.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }
    inline FsxConfiguration& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}
    inline FsxConfiguration& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}
    inline FsxConfiguration& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon FSx file system type. Windows is currently the only supported
     * type.</p>
     */
    inline const FsxFileSystemType& GetFileSystemType() const{ return m_fileSystemType; }
    inline bool FileSystemTypeHasBeenSet() const { return m_fileSystemTypeHasBeenSet; }
    inline void SetFileSystemType(const FsxFileSystemType& value) { m_fileSystemTypeHasBeenSet = true; m_fileSystemType = value; }
    inline void SetFileSystemType(FsxFileSystemType&& value) { m_fileSystemTypeHasBeenSet = true; m_fileSystemType = std::move(value); }
    inline FsxConfiguration& WithFileSystemType(const FsxFileSystemType& value) { SetFileSystemType(value); return *this;}
    inline FsxConfiguration& WithFileSystemType(FsxFileSystemType&& value) { SetFileSystemType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your Amazon FSx. Your Amazon FSx instance must reside inside your VPC.</p>
     */
    inline const DataSourceVpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
    inline void SetVpcConfiguration(const DataSourceVpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }
    inline void SetVpcConfiguration(DataSourceVpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }
    inline FsxConfiguration& WithVpcConfiguration(const DataSourceVpcConfiguration& value) { SetVpcConfiguration(value); return *this;}
    inline FsxConfiguration& WithVpcConfiguration(DataSourceVpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * key-value pairs required to connect to your Amazon FSx file system. Windows is
     * currently the only supported type. The secret must contain a JSON structure with
     * the following keys:</p> <ul> <li> <p>username—The Active Directory user name,
     * along with the Domain Name System (DNS) domain name. For example,
     * <i>user@corp.example.com</i>. The Active Directory user account must have read
     * and mounting access to the Amazon FSx file system for Windows.</p> </li> <li>
     * <p>password—The password of the Active Directory user account with read and
     * mounting access to the Amazon FSx Windows file system.</p> </li> </ul>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }
    inline FsxConfiguration& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}
    inline FsxConfiguration& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}
    inline FsxConfiguration& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to include certain files in your Amazon
     * FSx file system. Files that match the patterns are included in the index. Files
     * that don't match the patterns are excluded from the index. If a file matches
     * both an inclusion and exclusion pattern, the exclusion pattern takes precedence
     * and the file isn't included in the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionPatterns() const{ return m_inclusionPatterns; }
    inline bool InclusionPatternsHasBeenSet() const { return m_inclusionPatternsHasBeenSet; }
    inline void SetInclusionPatterns(const Aws::Vector<Aws::String>& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = value; }
    inline void SetInclusionPatterns(Aws::Vector<Aws::String>&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = std::move(value); }
    inline FsxConfiguration& WithInclusionPatterns(const Aws::Vector<Aws::String>& value) { SetInclusionPatterns(value); return *this;}
    inline FsxConfiguration& WithInclusionPatterns(Aws::Vector<Aws::String>&& value) { SetInclusionPatterns(std::move(value)); return *this;}
    inline FsxConfiguration& AddInclusionPatterns(const Aws::String& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }
    inline FsxConfiguration& AddInclusionPatterns(Aws::String&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(std::move(value)); return *this; }
    inline FsxConfiguration& AddInclusionPatterns(const char* value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to exclude certain files in your Amazon
     * FSx file system. Files that match the patterns are excluded from the index.
     * Files that don't match the patterns are included in the index. If a file matches
     * both an inclusion and exclusion pattern, the exclusion pattern takes precedence
     * and the file isn't included in the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionPatterns() const{ return m_exclusionPatterns; }
    inline bool ExclusionPatternsHasBeenSet() const { return m_exclusionPatternsHasBeenSet; }
    inline void SetExclusionPatterns(const Aws::Vector<Aws::String>& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = value; }
    inline void SetExclusionPatterns(Aws::Vector<Aws::String>&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = std::move(value); }
    inline FsxConfiguration& WithExclusionPatterns(const Aws::Vector<Aws::String>& value) { SetExclusionPatterns(value); return *this;}
    inline FsxConfiguration& WithExclusionPatterns(Aws::Vector<Aws::String>&& value) { SetExclusionPatterns(std::move(value)); return *this;}
    inline FsxConfiguration& AddExclusionPatterns(const Aws::String& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }
    inline FsxConfiguration& AddExclusionPatterns(Aws::String&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(std::move(value)); return *this; }
    inline FsxConfiguration& AddExclusionPatterns(const char* value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map Amazon
     * FSx data source attributes or field names to Amazon Kendra index field names. To
     * create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Amazon FSx fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Amazon FSx data source field names must exist in
     * your Amazon FSx custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetFieldMappings() const{ return m_fieldMappings; }
    inline bool FieldMappingsHasBeenSet() const { return m_fieldMappingsHasBeenSet; }
    inline void SetFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = value; }
    inline void SetFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = std::move(value); }
    inline FsxConfiguration& WithFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetFieldMappings(value); return *this;}
    inline FsxConfiguration& WithFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetFieldMappings(std::move(value)); return *this;}
    inline FsxConfiguration& AddFieldMappings(const DataSourceToIndexFieldMapping& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.push_back(value); return *this; }
    inline FsxConfiguration& AddFieldMappings(DataSourceToIndexFieldMapping&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    FsxFileSystemType m_fileSystemType;
    bool m_fileSystemTypeHasBeenSet = false;

    DataSourceVpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_inclusionPatterns;
    bool m_inclusionPatternsHasBeenSet = false;

    Aws::Vector<Aws::String> m_exclusionPatterns;
    bool m_exclusionPatternsHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_fieldMappings;
    bool m_fieldMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
