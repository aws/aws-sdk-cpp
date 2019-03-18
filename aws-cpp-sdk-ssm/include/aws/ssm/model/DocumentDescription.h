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
#include <aws/ssm/model/DocumentHashType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/DocumentStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/DocumentType.h>
#include <aws/ssm/model/DocumentFormat.h>
#include <aws/ssm/model/DocumentParameter.h>
#include <aws/ssm/model/PlatformType.h>
#include <aws/ssm/model/Tag.h>
#include <aws/ssm/model/AttachmentInformation.h>
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
   * <p>Describes a Systems Manager document. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DocumentDescription">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API DocumentDescription
  {
  public:
    DocumentDescription();
    DocumentDescription(Aws::Utils::Json::JsonView jsonValue);
    DocumentDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The SHA1 hash of the document, which you can use for verification.</p>
     */
    inline const Aws::String& GetSha1() const{ return m_sha1; }

    /**
     * <p>The SHA1 hash of the document, which you can use for verification.</p>
     */
    inline bool Sha1HasBeenSet() const { return m_sha1HasBeenSet; }

    /**
     * <p>The SHA1 hash of the document, which you can use for verification.</p>
     */
    inline void SetSha1(const Aws::String& value) { m_sha1HasBeenSet = true; m_sha1 = value; }

    /**
     * <p>The SHA1 hash of the document, which you can use for verification.</p>
     */
    inline void SetSha1(Aws::String&& value) { m_sha1HasBeenSet = true; m_sha1 = std::move(value); }

    /**
     * <p>The SHA1 hash of the document, which you can use for verification.</p>
     */
    inline void SetSha1(const char* value) { m_sha1HasBeenSet = true; m_sha1.assign(value); }

    /**
     * <p>The SHA1 hash of the document, which you can use for verification.</p>
     */
    inline DocumentDescription& WithSha1(const Aws::String& value) { SetSha1(value); return *this;}

    /**
     * <p>The SHA1 hash of the document, which you can use for verification.</p>
     */
    inline DocumentDescription& WithSha1(Aws::String&& value) { SetSha1(std::move(value)); return *this;}

    /**
     * <p>The SHA1 hash of the document, which you can use for verification.</p>
     */
    inline DocumentDescription& WithSha1(const char* value) { SetSha1(value); return *this;}


    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline const Aws::String& GetHash() const{ return m_hash; }

    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline bool HashHasBeenSet() const { return m_hashHasBeenSet; }

    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline void SetHash(const Aws::String& value) { m_hashHasBeenSet = true; m_hash = value; }

    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline void SetHash(Aws::String&& value) { m_hashHasBeenSet = true; m_hash = std::move(value); }

    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline void SetHash(const char* value) { m_hashHasBeenSet = true; m_hash.assign(value); }

    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline DocumentDescription& WithHash(const Aws::String& value) { SetHash(value); return *this;}

    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline DocumentDescription& WithHash(Aws::String&& value) { SetHash(std::move(value)); return *this;}

    /**
     * <p>The Sha256 or Sha1 hash created by the system when the document was created.
     * </p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline DocumentDescription& WithHash(const char* value) { SetHash(value); return *this;}


    /**
     * <p>The hash type of the document. Valid values include <code>Sha256</code> or
     * <code>Sha1</code>.</p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline const DocumentHashType& GetHashType() const{ return m_hashType; }

    /**
     * <p>The hash type of the document. Valid values include <code>Sha256</code> or
     * <code>Sha1</code>.</p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline bool HashTypeHasBeenSet() const { return m_hashTypeHasBeenSet; }

    /**
     * <p>The hash type of the document. Valid values include <code>Sha256</code> or
     * <code>Sha1</code>.</p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline void SetHashType(const DocumentHashType& value) { m_hashTypeHasBeenSet = true; m_hashType = value; }

    /**
     * <p>The hash type of the document. Valid values include <code>Sha256</code> or
     * <code>Sha1</code>.</p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline void SetHashType(DocumentHashType&& value) { m_hashTypeHasBeenSet = true; m_hashType = std::move(value); }

    /**
     * <p>The hash type of the document. Valid values include <code>Sha256</code> or
     * <code>Sha1</code>.</p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline DocumentDescription& WithHashType(const DocumentHashType& value) { SetHashType(value); return *this;}

    /**
     * <p>The hash type of the document. Valid values include <code>Sha256</code> or
     * <code>Sha1</code>.</p> <note> <p>Sha1 hashes have been deprecated.</p> </note>
     */
    inline DocumentDescription& WithHashType(DocumentHashType&& value) { SetHashType(std::move(value)); return *this;}


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
    inline DocumentDescription& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline DocumentDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline DocumentDescription& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The version of the artifact associated with the document.</p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }

    /**
     * <p>The version of the artifact associated with the document.</p>
     */
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }

    /**
     * <p>The version of the artifact associated with the document.</p>
     */
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }

    /**
     * <p>The version of the artifact associated with the document.</p>
     */
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }

    /**
     * <p>The version of the artifact associated with the document.</p>
     */
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }

    /**
     * <p>The version of the artifact associated with the document.</p>
     */
    inline DocumentDescription& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}

    /**
     * <p>The version of the artifact associated with the document.</p>
     */
    inline DocumentDescription& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}

    /**
     * <p>The version of the artifact associated with the document.</p>
     */
    inline DocumentDescription& WithVersionName(const char* value) { SetVersionName(value); return *this;}


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
    inline DocumentDescription& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The AWS user account that created the document.</p>
     */
    inline DocumentDescription& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The AWS user account that created the document.</p>
     */
    inline DocumentDescription& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * <p>The date when the document was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date when the document was created.</p>
     */
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }

    /**
     * <p>The date when the document was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The date when the document was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }

    /**
     * <p>The date when the document was created.</p>
     */
    inline DocumentDescription& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date when the document was created.</p>
     */
    inline DocumentDescription& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The status of the Systems Manager document.</p>
     */
    inline const DocumentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Systems Manager document.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the Systems Manager document.</p>
     */
    inline void SetStatus(const DocumentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the Systems Manager document.</p>
     */
    inline void SetStatus(DocumentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the Systems Manager document.</p>
     */
    inline DocumentDescription& WithStatus(const DocumentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Systems Manager document.</p>
     */
    inline DocumentDescription& WithStatus(DocumentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A message returned by AWS Systems Manager that explains the
     * <code>Status</code> value. For example, a <code>Failed</code> status might be
     * explained by the <code>StatusInformation</code> message, "The specified S3
     * bucket does not exist. Verify that the URL of the S3 bucket is correct."</p>
     */
    inline const Aws::String& GetStatusInformation() const{ return m_statusInformation; }

    /**
     * <p>A message returned by AWS Systems Manager that explains the
     * <code>Status</code> value. For example, a <code>Failed</code> status might be
     * explained by the <code>StatusInformation</code> message, "The specified S3
     * bucket does not exist. Verify that the URL of the S3 bucket is correct."</p>
     */
    inline bool StatusInformationHasBeenSet() const { return m_statusInformationHasBeenSet; }

    /**
     * <p>A message returned by AWS Systems Manager that explains the
     * <code>Status</code> value. For example, a <code>Failed</code> status might be
     * explained by the <code>StatusInformation</code> message, "The specified S3
     * bucket does not exist. Verify that the URL of the S3 bucket is correct."</p>
     */
    inline void SetStatusInformation(const Aws::String& value) { m_statusInformationHasBeenSet = true; m_statusInformation = value; }

    /**
     * <p>A message returned by AWS Systems Manager that explains the
     * <code>Status</code> value. For example, a <code>Failed</code> status might be
     * explained by the <code>StatusInformation</code> message, "The specified S3
     * bucket does not exist. Verify that the URL of the S3 bucket is correct."</p>
     */
    inline void SetStatusInformation(Aws::String&& value) { m_statusInformationHasBeenSet = true; m_statusInformation = std::move(value); }

    /**
     * <p>A message returned by AWS Systems Manager that explains the
     * <code>Status</code> value. For example, a <code>Failed</code> status might be
     * explained by the <code>StatusInformation</code> message, "The specified S3
     * bucket does not exist. Verify that the URL of the S3 bucket is correct."</p>
     */
    inline void SetStatusInformation(const char* value) { m_statusInformationHasBeenSet = true; m_statusInformation.assign(value); }

    /**
     * <p>A message returned by AWS Systems Manager that explains the
     * <code>Status</code> value. For example, a <code>Failed</code> status might be
     * explained by the <code>StatusInformation</code> message, "The specified S3
     * bucket does not exist. Verify that the URL of the S3 bucket is correct."</p>
     */
    inline DocumentDescription& WithStatusInformation(const Aws::String& value) { SetStatusInformation(value); return *this;}

    /**
     * <p>A message returned by AWS Systems Manager that explains the
     * <code>Status</code> value. For example, a <code>Failed</code> status might be
     * explained by the <code>StatusInformation</code> message, "The specified S3
     * bucket does not exist. Verify that the URL of the S3 bucket is correct."</p>
     */
    inline DocumentDescription& WithStatusInformation(Aws::String&& value) { SetStatusInformation(std::move(value)); return *this;}

    /**
     * <p>A message returned by AWS Systems Manager that explains the
     * <code>Status</code> value. For example, a <code>Failed</code> status might be
     * explained by the <code>StatusInformation</code> message, "The specified S3
     * bucket does not exist. Verify that the URL of the S3 bucket is correct."</p>
     */
    inline DocumentDescription& WithStatusInformation(const char* value) { SetStatusInformation(value); return *this;}


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
    inline DocumentDescription& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The document version.</p>
     */
    inline DocumentDescription& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>The document version.</p>
     */
    inline DocumentDescription& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}


    /**
     * <p>A description of the document. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the document. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the document. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the document. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the document. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the document. </p>
     */
    inline DocumentDescription& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the document. </p>
     */
    inline DocumentDescription& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the document. </p>
     */
    inline DocumentDescription& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A description of the parameters for a document.</p>
     */
    inline const Aws::Vector<DocumentParameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A description of the parameters for a document.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>A description of the parameters for a document.</p>
     */
    inline void SetParameters(const Aws::Vector<DocumentParameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A description of the parameters for a document.</p>
     */
    inline void SetParameters(Aws::Vector<DocumentParameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>A description of the parameters for a document.</p>
     */
    inline DocumentDescription& WithParameters(const Aws::Vector<DocumentParameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>A description of the parameters for a document.</p>
     */
    inline DocumentDescription& WithParameters(Aws::Vector<DocumentParameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>A description of the parameters for a document.</p>
     */
    inline DocumentDescription& AddParameters(const DocumentParameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>A description of the parameters for a document.</p>
     */
    inline DocumentDescription& AddParameters(DocumentParameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of OS platforms compatible with this Systems Manager document. </p>
     */
    inline const Aws::Vector<PlatformType>& GetPlatformTypes() const{ return m_platformTypes; }

    /**
     * <p>The list of OS platforms compatible with this Systems Manager document. </p>
     */
    inline bool PlatformTypesHasBeenSet() const { return m_platformTypesHasBeenSet; }

    /**
     * <p>The list of OS platforms compatible with this Systems Manager document. </p>
     */
    inline void SetPlatformTypes(const Aws::Vector<PlatformType>& value) { m_platformTypesHasBeenSet = true; m_platformTypes = value; }

    /**
     * <p>The list of OS platforms compatible with this Systems Manager document. </p>
     */
    inline void SetPlatformTypes(Aws::Vector<PlatformType>&& value) { m_platformTypesHasBeenSet = true; m_platformTypes = std::move(value); }

    /**
     * <p>The list of OS platforms compatible with this Systems Manager document. </p>
     */
    inline DocumentDescription& WithPlatformTypes(const Aws::Vector<PlatformType>& value) { SetPlatformTypes(value); return *this;}

    /**
     * <p>The list of OS platforms compatible with this Systems Manager document. </p>
     */
    inline DocumentDescription& WithPlatformTypes(Aws::Vector<PlatformType>&& value) { SetPlatformTypes(std::move(value)); return *this;}

    /**
     * <p>The list of OS platforms compatible with this Systems Manager document. </p>
     */
    inline DocumentDescription& AddPlatformTypes(const PlatformType& value) { m_platformTypesHasBeenSet = true; m_platformTypes.push_back(value); return *this; }

    /**
     * <p>The list of OS platforms compatible with this Systems Manager document. </p>
     */
    inline DocumentDescription& AddPlatformTypes(PlatformType&& value) { m_platformTypesHasBeenSet = true; m_platformTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The type of document.</p>
     */
    inline const DocumentType& GetDocumentType() const{ return m_documentType; }

    /**
     * <p>The type of document.</p>
     */
    inline bool DocumentTypeHasBeenSet() const { return m_documentTypeHasBeenSet; }

    /**
     * <p>The type of document.</p>
     */
    inline void SetDocumentType(const DocumentType& value) { m_documentTypeHasBeenSet = true; m_documentType = value; }

    /**
     * <p>The type of document.</p>
     */
    inline void SetDocumentType(DocumentType&& value) { m_documentTypeHasBeenSet = true; m_documentType = std::move(value); }

    /**
     * <p>The type of document.</p>
     */
    inline DocumentDescription& WithDocumentType(const DocumentType& value) { SetDocumentType(value); return *this;}

    /**
     * <p>The type of document.</p>
     */
    inline DocumentDescription& WithDocumentType(DocumentType&& value) { SetDocumentType(std::move(value)); return *this;}


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
    inline DocumentDescription& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}

    /**
     * <p>The schema version.</p>
     */
    inline DocumentDescription& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}

    /**
     * <p>The schema version.</p>
     */
    inline DocumentDescription& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}


    /**
     * <p>The latest version of the document.</p>
     */
    inline const Aws::String& GetLatestVersion() const{ return m_latestVersion; }

    /**
     * <p>The latest version of the document.</p>
     */
    inline bool LatestVersionHasBeenSet() const { return m_latestVersionHasBeenSet; }

    /**
     * <p>The latest version of the document.</p>
     */
    inline void SetLatestVersion(const Aws::String& value) { m_latestVersionHasBeenSet = true; m_latestVersion = value; }

    /**
     * <p>The latest version of the document.</p>
     */
    inline void SetLatestVersion(Aws::String&& value) { m_latestVersionHasBeenSet = true; m_latestVersion = std::move(value); }

    /**
     * <p>The latest version of the document.</p>
     */
    inline void SetLatestVersion(const char* value) { m_latestVersionHasBeenSet = true; m_latestVersion.assign(value); }

    /**
     * <p>The latest version of the document.</p>
     */
    inline DocumentDescription& WithLatestVersion(const Aws::String& value) { SetLatestVersion(value); return *this;}

    /**
     * <p>The latest version of the document.</p>
     */
    inline DocumentDescription& WithLatestVersion(Aws::String&& value) { SetLatestVersion(std::move(value)); return *this;}

    /**
     * <p>The latest version of the document.</p>
     */
    inline DocumentDescription& WithLatestVersion(const char* value) { SetLatestVersion(value); return *this;}


    /**
     * <p>The default version.</p>
     */
    inline const Aws::String& GetDefaultVersion() const{ return m_defaultVersion; }

    /**
     * <p>The default version.</p>
     */
    inline bool DefaultVersionHasBeenSet() const { return m_defaultVersionHasBeenSet; }

    /**
     * <p>The default version.</p>
     */
    inline void SetDefaultVersion(const Aws::String& value) { m_defaultVersionHasBeenSet = true; m_defaultVersion = value; }

    /**
     * <p>The default version.</p>
     */
    inline void SetDefaultVersion(Aws::String&& value) { m_defaultVersionHasBeenSet = true; m_defaultVersion = std::move(value); }

    /**
     * <p>The default version.</p>
     */
    inline void SetDefaultVersion(const char* value) { m_defaultVersionHasBeenSet = true; m_defaultVersion.assign(value); }

    /**
     * <p>The default version.</p>
     */
    inline DocumentDescription& WithDefaultVersion(const Aws::String& value) { SetDefaultVersion(value); return *this;}

    /**
     * <p>The default version.</p>
     */
    inline DocumentDescription& WithDefaultVersion(Aws::String&& value) { SetDefaultVersion(std::move(value)); return *this;}

    /**
     * <p>The default version.</p>
     */
    inline DocumentDescription& WithDefaultVersion(const char* value) { SetDefaultVersion(value); return *this;}


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
    inline DocumentDescription& WithDocumentFormat(const DocumentFormat& value) { SetDocumentFormat(value); return *this;}

    /**
     * <p>The document format, either JSON or YAML.</p>
     */
    inline DocumentDescription& WithDocumentFormat(DocumentFormat&& value) { SetDocumentFormat(std::move(value)); return *this;}


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
    inline DocumentDescription& WithTargetType(const Aws::String& value) { SetTargetType(value); return *this;}

    /**
     * <p>The target type which defines the kinds of resources the document can run on.
     * For example, /AWS::EC2::Instance. For a list of valid resource types, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a> in the <i>AWS CloudFormation User Guide</i>. </p>
     */
    inline DocumentDescription& WithTargetType(Aws::String&& value) { SetTargetType(std::move(value)); return *this;}

    /**
     * <p>The target type which defines the kinds of resources the document can run on.
     * For example, /AWS::EC2::Instance. For a list of valid resource types, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * Resource Types Reference</a> in the <i>AWS CloudFormation User Guide</i>. </p>
     */
    inline DocumentDescription& WithTargetType(const char* value) { SetTargetType(value); return *this;}


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
    inline DocumentDescription& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags, or metadata, that have been applied to the document.</p>
     */
    inline DocumentDescription& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags, or metadata, that have been applied to the document.</p>
     */
    inline DocumentDescription& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags, or metadata, that have been applied to the document.</p>
     */
    inline DocumentDescription& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Details about the document attachments, including names, locations, sizes,
     * etc.</p>
     */
    inline const Aws::Vector<AttachmentInformation>& GetAttachmentsInformation() const{ return m_attachmentsInformation; }

    /**
     * <p>Details about the document attachments, including names, locations, sizes,
     * etc.</p>
     */
    inline bool AttachmentsInformationHasBeenSet() const { return m_attachmentsInformationHasBeenSet; }

    /**
     * <p>Details about the document attachments, including names, locations, sizes,
     * etc.</p>
     */
    inline void SetAttachmentsInformation(const Aws::Vector<AttachmentInformation>& value) { m_attachmentsInformationHasBeenSet = true; m_attachmentsInformation = value; }

    /**
     * <p>Details about the document attachments, including names, locations, sizes,
     * etc.</p>
     */
    inline void SetAttachmentsInformation(Aws::Vector<AttachmentInformation>&& value) { m_attachmentsInformationHasBeenSet = true; m_attachmentsInformation = std::move(value); }

    /**
     * <p>Details about the document attachments, including names, locations, sizes,
     * etc.</p>
     */
    inline DocumentDescription& WithAttachmentsInformation(const Aws::Vector<AttachmentInformation>& value) { SetAttachmentsInformation(value); return *this;}

    /**
     * <p>Details about the document attachments, including names, locations, sizes,
     * etc.</p>
     */
    inline DocumentDescription& WithAttachmentsInformation(Aws::Vector<AttachmentInformation>&& value) { SetAttachmentsInformation(std::move(value)); return *this;}

    /**
     * <p>Details about the document attachments, including names, locations, sizes,
     * etc.</p>
     */
    inline DocumentDescription& AddAttachmentsInformation(const AttachmentInformation& value) { m_attachmentsInformationHasBeenSet = true; m_attachmentsInformation.push_back(value); return *this; }

    /**
     * <p>Details about the document attachments, including names, locations, sizes,
     * etc.</p>
     */
    inline DocumentDescription& AddAttachmentsInformation(AttachmentInformation&& value) { m_attachmentsInformationHasBeenSet = true; m_attachmentsInformation.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_sha1;
    bool m_sha1HasBeenSet;

    Aws::String m_hash;
    bool m_hashHasBeenSet;

    DocumentHashType m_hashType;
    bool m_hashTypeHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet;

    Aws::String m_owner;
    bool m_ownerHasBeenSet;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet;

    DocumentStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_statusInformation;
    bool m_statusInformationHasBeenSet;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<DocumentParameter> m_parameters;
    bool m_parametersHasBeenSet;

    Aws::Vector<PlatformType> m_platformTypes;
    bool m_platformTypesHasBeenSet;

    DocumentType m_documentType;
    bool m_documentTypeHasBeenSet;

    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet;

    Aws::String m_latestVersion;
    bool m_latestVersionHasBeenSet;

    Aws::String m_defaultVersion;
    bool m_defaultVersionHasBeenSet;

    DocumentFormat m_documentFormat;
    bool m_documentFormatHasBeenSet;

    Aws::String m_targetType;
    bool m_targetTypeHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::Vector<AttachmentInformation> m_attachmentsInformation;
    bool m_attachmentsInformationHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
