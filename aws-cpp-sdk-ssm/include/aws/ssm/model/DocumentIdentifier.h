/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/DocumentType.h>
#include <aws/ssm/model/DocumentFormat.h>
#include <aws/ssm/model/PlatformType.h>
#include <aws/ssm/model/Tag.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Describes the name of a Systems Manager document.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DocumentIdentifier">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API DocumentIdentifier
  {
  public:
    DocumentIdentifier();
    DocumentIdentifier(Aws::Utils::Json::JsonView jsonValue);
    DocumentIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline DocumentIdentifier& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline DocumentIdentifier& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline DocumentIdentifier& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The AWS user account that created the document.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The AWS user account that created the document.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The AWS user account that created the document.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The AWS user account that created the document.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The AWS user account that created the document.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The AWS user account that created the document.</p>
     */
    inline DocumentIdentifier& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The AWS user account that created the document.</p>
     */
    inline DocumentIdentifier& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The AWS user account that created the document.</p>
     */
    inline DocumentIdentifier& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * <p>An optional field specifying the version of the artifact associated with the
     * document. For example, "Release 12, Update 6". This value is unique across all
     * versions of a document, and cannot be changed.</p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }

    /**
     * <p>An optional field specifying the version of the artifact associated with the
     * document. For example, "Release 12, Update 6". This value is unique across all
     * versions of a document, and cannot be changed.</p>
     */
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }

    /**
     * <p>An optional field specifying the version of the artifact associated with the
     * document. For example, "Release 12, Update 6". This value is unique across all
     * versions of a document, and cannot be changed.</p>
     */
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }

    /**
     * <p>An optional field specifying the version of the artifact associated with the
     * document. For example, "Release 12, Update 6". This value is unique across all
     * versions of a document, and cannot be changed.</p>
     */
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }

    /**
     * <p>An optional field specifying the version of the artifact associated with the
     * document. For example, "Release 12, Update 6". This value is unique across all
     * versions of a document, and cannot be changed.</p>
     */
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }

    /**
     * <p>An optional field specifying the version of the artifact associated with the
     * document. For example, "Release 12, Update 6". This value is unique across all
     * versions of a document, and cannot be changed.</p>
     */
    inline DocumentIdentifier& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}

    /**
     * <p>An optional field specifying the version of the artifact associated with the
     * document. For example, "Release 12, Update 6". This value is unique across all
     * versions of a document, and cannot be changed.</p>
     */
    inline DocumentIdentifier& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}

    /**
     * <p>An optional field specifying the version of the artifact associated with the
     * document. For example, "Release 12, Update 6". This value is unique across all
     * versions of a document, and cannot be changed.</p>
     */
    inline DocumentIdentifier& WithVersionName(const char* value) { SetVersionName(value); return *this;}


    /**
     * <p>The operating system platform. </p>
     */
    inline const Aws::Vector<PlatformType>& GetPlatformTypes() const{ return m_platformTypes; }

    /**
     * <p>The operating system platform. </p>
     */
    inline bool PlatformTypesHasBeenSet() const { return m_platformTypesHasBeenSet; }

    /**
     * <p>The operating system platform. </p>
     */
    inline void SetPlatformTypes(const Aws::Vector<PlatformType>& value) { m_platformTypesHasBeenSet = true; m_platformTypes = value; }

    /**
     * <p>The operating system platform. </p>
     */
    inline void SetPlatformTypes(Aws::Vector<PlatformType>&& value) { m_platformTypesHasBeenSet = true; m_platformTypes = std::move(value); }

    /**
     * <p>The operating system platform. </p>
     */
    inline DocumentIdentifier& WithPlatformTypes(const Aws::Vector<PlatformType>& value) { SetPlatformTypes(value); return *this;}

    /**
     * <p>The operating system platform. </p>
     */
    inline DocumentIdentifier& WithPlatformTypes(Aws::Vector<PlatformType>&& value) { SetPlatformTypes(std::move(value)); return *this;}

    /**
     * <p>The operating system platform. </p>
     */
    inline DocumentIdentifier& AddPlatformTypes(const PlatformType& value) { m_platformTypesHasBeenSet = true; m_platformTypes.push_back(value); return *this; }

    /**
     * <p>The operating system platform. </p>
     */
    inline DocumentIdentifier& AddPlatformTypes(PlatformType&& value) { m_platformTypesHasBeenSet = true; m_platformTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The document version.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

    /**
     * <p>The document version.</p>
     */
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }

    /**
     * <p>The document version.</p>
     */
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }

    /**
     * <p>The document version.</p>
     */
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }

    /**
     * <p>The document version.</p>
     */
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }

    /**
     * <p>The document version.</p>
     */
    inline DocumentIdentifier& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The document version.</p>
     */
    inline DocumentIdentifier& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>The document version.</p>
     */
    inline DocumentIdentifier& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}


    /**
     * <p>The document type.</p>
     */
    inline const DocumentType& GetDocumentType() const{ return m_documentType; }

    /**
     * <p>The document type.</p>
     */
    inline bool DocumentTypeHasBeenSet() const { return m_documentTypeHasBeenSet; }

    /**
     * <p>The document type.</p>
     */
    inline void SetDocumentType(const DocumentType& value) { m_documentTypeHasBeenSet = true; m_documentType = value; }

    /**
     * <p>The document type.</p>
     */
    inline void SetDocumentType(DocumentType&& value) { m_documentTypeHasBeenSet = true; m_documentType = std::move(value); }

    /**
     * <p>The document type.</p>
     */
    inline DocumentIdentifier& WithDocumentType(const DocumentType& value) { SetDocumentType(value); return *this;}

    /**
     * <p>The document type.</p>
     */
    inline DocumentIdentifier& WithDocumentType(DocumentType&& value) { SetDocumentType(std::move(value)); return *this;}


    /**
     * <p>The schema version.</p>
     */
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }

    /**
     * <p>The schema version.</p>
     */
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }

    /**
     * <p>The schema version.</p>
     */
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }

    /**
     * <p>The schema version.</p>
     */
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::move(value); }

    /**
     * <p>The schema version.</p>
     */
    inline void SetSchemaVersion(const char* value) { m_schemaVersionHasBeenSet = true; m_schemaVersion.assign(value); }

    /**
     * <p>The schema version.</p>
     */
    inline DocumentIdentifier& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}

    /**
     * <p>The schema version.</p>
     */
    inline DocumentIdentifier& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}

    /**
     * <p>The schema version.</p>
     */
    inline DocumentIdentifier& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}


    /**
     * <p>The document format, either JSON or YAML.</p>
     */
    inline const DocumentFormat& GetDocumentFormat() const{ return m_documentFormat; }

    /**
     * <p>The document format, either JSON or YAML.</p>
     */
    inline bool DocumentFormatHasBeenSet() const { return m_documentFormatHasBeenSet; }

    /**
     * <p>The document format, either JSON or YAML.</p>
     */
    inline void SetDocumentFormat(const DocumentFormat& value) { m_documentFormatHasBeenSet = true; m_documentFormat = value; }

    /**
     * <p>The document format, either JSON or YAML.</p>
     */
    inline void SetDocumentFormat(DocumentFormat&& value) { m_documentFormatHasBeenSet = true; m_documentFormat = std::move(value); }

    /**
     * <p>The document format, either JSON or YAML.</p>
     */
    inline DocumentIdentifier& WithDocumentFormat(const DocumentFormat& value) { SetDocumentFormat(value); return *this;}

    /**
     * <p>The document format, either JSON or YAML.</p>
     */
    inline DocumentIdentifier& WithDocumentFormat(DocumentFormat&& value) { SetDocumentFormat(std::move(value)); return *this;}


    /**
     * <p>The target type which defines the kinds of resources the document can run on.
     * For example, /AWS::EC2::Instance. For a list of valid resource types, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a> in the <i>AWS CloudFormation User Guide</i>. </p>
     */
    inline const Aws::String& GetTargetType() const{ return m_targetType; }

    /**
     * <p>The target type which defines the kinds of resources the document can run on.
     * For example, /AWS::EC2::Instance. For a list of valid resource types, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a> in the <i>AWS CloudFormation User Guide</i>. </p>
     */
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }

    /**
     * <p>The target type which defines the kinds of resources the document can run on.
     * For example, /AWS::EC2::Instance. For a list of valid resource types, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a> in the <i>AWS CloudFormation User Guide</i>. </p>
     */
    inline void SetTargetType(const Aws::String& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }

    /**
     * <p>The target type which defines the kinds of resources the document can run on.
     * For example, /AWS::EC2::Instance. For a list of valid resource types, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a> in the <i>AWS CloudFormation User Guide</i>. </p>
     */
    inline void SetTargetType(Aws::String&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }

    /**
     * <p>The target type which defines the kinds of resources the document can run on.
     * For example, /AWS::EC2::Instance. For a list of valid resource types, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a> in the <i>AWS CloudFormation User Guide</i>. </p>
     */
    inline void SetTargetType(const char* value) { m_targetTypeHasBeenSet = true; m_targetType.assign(value); }

    /**
     * <p>The target type which defines the kinds of resources the document can run on.
     * For example, /AWS::EC2::Instance. For a list of valid resource types, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a> in the <i>AWS CloudFormation User Guide</i>. </p>
     */
    inline DocumentIdentifier& WithTargetType(const Aws::String& value) { SetTargetType(value); return *this;}

    /**
     * <p>The target type which defines the kinds of resources the document can run on.
     * For example, /AWS::EC2::Instance. For a list of valid resource types, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a> in the <i>AWS CloudFormation User Guide</i>. </p>
     */
    inline DocumentIdentifier& WithTargetType(Aws::String&& value) { SetTargetType(std::move(value)); return *this;}

    /**
     * <p>The target type which defines the kinds of resources the document can run on.
     * For example, /AWS::EC2::Instance. For a list of valid resource types, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a> in the <i>AWS CloudFormation User Guide</i>. </p>
     */
    inline DocumentIdentifier& WithTargetType(const char* value) { SetTargetType(value); return *this;}


    /**
     * <p>The tags, or metadata, that have been applied to the document.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags, or metadata, that have been applied to the document.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags, or metadata, that have been applied to the document.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags, or metadata, that have been applied to the document.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags, or metadata, that have been applied to the document.</p>
     */
    inline DocumentIdentifier& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags, or metadata, that have been applied to the document.</p>
     */
    inline DocumentIdentifier& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags, or metadata, that have been applied to the document.</p>
     */
    inline DocumentIdentifier& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags, or metadata, that have been applied to the document.</p>
     */
    inline DocumentIdentifier& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_owner;
    bool m_ownerHasBeenSet;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet;

    Aws::Vector<PlatformType> m_platformTypes;
    bool m_platformTypesHasBeenSet;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet;

    DocumentType m_documentType;
    bool m_documentTypeHasBeenSet;

    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet;

    DocumentFormat m_documentFormat;
    bool m_documentFormatHasBeenSet;

    Aws::String m_targetType;
    bool m_targetTypeHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
