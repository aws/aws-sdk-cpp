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
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/DocumentFormat.h>
#include <aws/ssm/model/AttachmentsSource.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API UpdateDocumentRequest : public SSMRequest
  {
  public:
    UpdateDocumentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDocument"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A valid JSON or YAML string.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>A valid JSON or YAML string.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>A valid JSON or YAML string.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>A valid JSON or YAML string.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>A valid JSON or YAML string.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>A valid JSON or YAML string.</p>
     */
    inline UpdateDocumentRequest& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>A valid JSON or YAML string.</p>
     */
    inline UpdateDocumentRequest& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>A valid JSON or YAML string.</p>
     */
    inline UpdateDocumentRequest& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>A list of key and value pairs that describe attachments to a version of a
     * document.</p>
     */
    inline const Aws::Vector<AttachmentsSource>& GetAttachments() const{ return m_attachments; }

    /**
     * <p>A list of key and value pairs that describe attachments to a version of a
     * document.</p>
     */
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }

    /**
     * <p>A list of key and value pairs that describe attachments to a version of a
     * document.</p>
     */
    inline void SetAttachments(const Aws::Vector<AttachmentsSource>& value) { m_attachmentsHasBeenSet = true; m_attachments = value; }

    /**
     * <p>A list of key and value pairs that describe attachments to a version of a
     * document.</p>
     */
    inline void SetAttachments(Aws::Vector<AttachmentsSource>&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::move(value); }

    /**
     * <p>A list of key and value pairs that describe attachments to a version of a
     * document.</p>
     */
    inline UpdateDocumentRequest& WithAttachments(const Aws::Vector<AttachmentsSource>& value) { SetAttachments(value); return *this;}

    /**
     * <p>A list of key and value pairs that describe attachments to a version of a
     * document.</p>
     */
    inline UpdateDocumentRequest& WithAttachments(Aws::Vector<AttachmentsSource>&& value) { SetAttachments(std::move(value)); return *this;}

    /**
     * <p>A list of key and value pairs that describe attachments to a version of a
     * document.</p>
     */
    inline UpdateDocumentRequest& AddAttachments(const AttachmentsSource& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(value); return *this; }

    /**
     * <p>A list of key and value pairs that describe attachments to a version of a
     * document.</p>
     */
    inline UpdateDocumentRequest& AddAttachments(AttachmentsSource&& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the document that you want to update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the document that you want to update.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the document that you want to update.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the document that you want to update.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the document that you want to update.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the document that you want to update.</p>
     */
    inline UpdateDocumentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the document that you want to update.</p>
     */
    inline UpdateDocumentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the document that you want to update.</p>
     */
    inline UpdateDocumentRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An optional field specifying the version of the artifact you are updating
     * with the document. For example, "Release 12, Update 6". This value is unique
     * across all versions of a document, and cannot be changed.</p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }

    /**
     * <p>An optional field specifying the version of the artifact you are updating
     * with the document. For example, "Release 12, Update 6". This value is unique
     * across all versions of a document, and cannot be changed.</p>
     */
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }

    /**
     * <p>An optional field specifying the version of the artifact you are updating
     * with the document. For example, "Release 12, Update 6". This value is unique
     * across all versions of a document, and cannot be changed.</p>
     */
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }

    /**
     * <p>An optional field specifying the version of the artifact you are updating
     * with the document. For example, "Release 12, Update 6". This value is unique
     * across all versions of a document, and cannot be changed.</p>
     */
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }

    /**
     * <p>An optional field specifying the version of the artifact you are updating
     * with the document. For example, "Release 12, Update 6". This value is unique
     * across all versions of a document, and cannot be changed.</p>
     */
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }

    /**
     * <p>An optional field specifying the version of the artifact you are updating
     * with the document. For example, "Release 12, Update 6". This value is unique
     * across all versions of a document, and cannot be changed.</p>
     */
    inline UpdateDocumentRequest& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}

    /**
     * <p>An optional field specifying the version of the artifact you are updating
     * with the document. For example, "Release 12, Update 6". This value is unique
     * across all versions of a document, and cannot be changed.</p>
     */
    inline UpdateDocumentRequest& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}

    /**
     * <p>An optional field specifying the version of the artifact you are updating
     * with the document. For example, "Release 12, Update 6". This value is unique
     * across all versions of a document, and cannot be changed.</p>
     */
    inline UpdateDocumentRequest& WithVersionName(const char* value) { SetVersionName(value); return *this;}


    /**
     * <p>The version of the document that you want to update.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

    /**
     * <p>The version of the document that you want to update.</p>
     */
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }

    /**
     * <p>The version of the document that you want to update.</p>
     */
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }

    /**
     * <p>The version of the document that you want to update.</p>
     */
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }

    /**
     * <p>The version of the document that you want to update.</p>
     */
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }

    /**
     * <p>The version of the document that you want to update.</p>
     */
    inline UpdateDocumentRequest& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The version of the document that you want to update.</p>
     */
    inline UpdateDocumentRequest& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the document that you want to update.</p>
     */
    inline UpdateDocumentRequest& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}


    /**
     * <p>Specify the document format for the new document version. Systems Manager
     * supports JSON and YAML documents. JSON is the default format.</p>
     */
    inline const DocumentFormat& GetDocumentFormat() const{ return m_documentFormat; }

    /**
     * <p>Specify the document format for the new document version. Systems Manager
     * supports JSON and YAML documents. JSON is the default format.</p>
     */
    inline bool DocumentFormatHasBeenSet() const { return m_documentFormatHasBeenSet; }

    /**
     * <p>Specify the document format for the new document version. Systems Manager
     * supports JSON and YAML documents. JSON is the default format.</p>
     */
    inline void SetDocumentFormat(const DocumentFormat& value) { m_documentFormatHasBeenSet = true; m_documentFormat = value; }

    /**
     * <p>Specify the document format for the new document version. Systems Manager
     * supports JSON and YAML documents. JSON is the default format.</p>
     */
    inline void SetDocumentFormat(DocumentFormat&& value) { m_documentFormatHasBeenSet = true; m_documentFormat = std::move(value); }

    /**
     * <p>Specify the document format for the new document version. Systems Manager
     * supports JSON and YAML documents. JSON is the default format.</p>
     */
    inline UpdateDocumentRequest& WithDocumentFormat(const DocumentFormat& value) { SetDocumentFormat(value); return *this;}

    /**
     * <p>Specify the document format for the new document version. Systems Manager
     * supports JSON and YAML documents. JSON is the default format.</p>
     */
    inline UpdateDocumentRequest& WithDocumentFormat(DocumentFormat&& value) { SetDocumentFormat(std::move(value)); return *this;}


    /**
     * <p>Specify a new target type for the document.</p>
     */
    inline const Aws::String& GetTargetType() const{ return m_targetType; }

    /**
     * <p>Specify a new target type for the document.</p>
     */
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }

    /**
     * <p>Specify a new target type for the document.</p>
     */
    inline void SetTargetType(const Aws::String& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }

    /**
     * <p>Specify a new target type for the document.</p>
     */
    inline void SetTargetType(Aws::String&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }

    /**
     * <p>Specify a new target type for the document.</p>
     */
    inline void SetTargetType(const char* value) { m_targetTypeHasBeenSet = true; m_targetType.assign(value); }

    /**
     * <p>Specify a new target type for the document.</p>
     */
    inline UpdateDocumentRequest& WithTargetType(const Aws::String& value) { SetTargetType(value); return *this;}

    /**
     * <p>Specify a new target type for the document.</p>
     */
    inline UpdateDocumentRequest& WithTargetType(Aws::String&& value) { SetTargetType(std::move(value)); return *this;}

    /**
     * <p>Specify a new target type for the document.</p>
     */
    inline UpdateDocumentRequest& WithTargetType(const char* value) { SetTargetType(value); return *this;}

  private:

    Aws::String m_content;
    bool m_contentHasBeenSet;

    Aws::Vector<AttachmentsSource> m_attachments;
    bool m_attachmentsHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet;

    DocumentFormat m_documentFormat;
    bool m_documentFormatHasBeenSet;

    Aws::String m_targetType;
    bool m_targetTypeHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
