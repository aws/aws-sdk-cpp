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
#include <aws/ssm/model/DocumentStatus.h>
#include <aws/ssm/model/DocumentType.h>
#include <aws/ssm/model/DocumentFormat.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/AttachmentContent.h>
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
namespace SSM
{
namespace Model
{
  class AWS_SSM_API GetDocumentResult
  {
  public:
    GetDocumentResult();
    GetDocumentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDocumentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline GetDocumentResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline GetDocumentResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Systems Manager document.</p>
     */
    inline GetDocumentResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The version of the artifact associated with the document. For example,
     * "Release 12, Update 6". This value is unique across all versions of a document,
     * and cannot be changed.</p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }

    /**
     * <p>The version of the artifact associated with the document. For example,
     * "Release 12, Update 6". This value is unique across all versions of a document,
     * and cannot be changed.</p>
     */
    inline void SetVersionName(const Aws::String& value) { m_versionName = value; }

    /**
     * <p>The version of the artifact associated with the document. For example,
     * "Release 12, Update 6". This value is unique across all versions of a document,
     * and cannot be changed.</p>
     */
    inline void SetVersionName(Aws::String&& value) { m_versionName = std::move(value); }

    /**
     * <p>The version of the artifact associated with the document. For example,
     * "Release 12, Update 6". This value is unique across all versions of a document,
     * and cannot be changed.</p>
     */
    inline void SetVersionName(const char* value) { m_versionName.assign(value); }

    /**
     * <p>The version of the artifact associated with the document. For example,
     * "Release 12, Update 6". This value is unique across all versions of a document,
     * and cannot be changed.</p>
     */
    inline GetDocumentResult& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}

    /**
     * <p>The version of the artifact associated with the document. For example,
     * "Release 12, Update 6". This value is unique across all versions of a document,
     * and cannot be changed.</p>
     */
    inline GetDocumentResult& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}

    /**
     * <p>The version of the artifact associated with the document. For example,
     * "Release 12, Update 6". This value is unique across all versions of a document,
     * and cannot be changed.</p>
     */
    inline GetDocumentResult& WithVersionName(const char* value) { SetVersionName(value); return *this;}


    /**
     * <p>The document version.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

    /**
     * <p>The document version.</p>
     */
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersion = value; }

    /**
     * <p>The document version.</p>
     */
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersion = std::move(value); }

    /**
     * <p>The document version.</p>
     */
    inline void SetDocumentVersion(const char* value) { m_documentVersion.assign(value); }

    /**
     * <p>The document version.</p>
     */
    inline GetDocumentResult& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The document version.</p>
     */
    inline GetDocumentResult& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>The document version.</p>
     */
    inline GetDocumentResult& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}


    /**
     * <p>The status of the Systems Manager document, such as <code>Creating</code>,
     * <code>Active</code>, <code>Updating</code>, <code>Failed</code>, and
     * <code>Deleting</code>.</p>
     */
    inline const DocumentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Systems Manager document, such as <code>Creating</code>,
     * <code>Active</code>, <code>Updating</code>, <code>Failed</code>, and
     * <code>Deleting</code>.</p>
     */
    inline void SetStatus(const DocumentStatus& value) { m_status = value; }

    /**
     * <p>The status of the Systems Manager document, such as <code>Creating</code>,
     * <code>Active</code>, <code>Updating</code>, <code>Failed</code>, and
     * <code>Deleting</code>.</p>
     */
    inline void SetStatus(DocumentStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the Systems Manager document, such as <code>Creating</code>,
     * <code>Active</code>, <code>Updating</code>, <code>Failed</code>, and
     * <code>Deleting</code>.</p>
     */
    inline GetDocumentResult& WithStatus(const DocumentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Systems Manager document, such as <code>Creating</code>,
     * <code>Active</code>, <code>Updating</code>, <code>Failed</code>, and
     * <code>Deleting</code>.</p>
     */
    inline GetDocumentResult& WithStatus(DocumentStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline void SetStatusInformation(const Aws::String& value) { m_statusInformation = value; }

    /**
     * <p>A message returned by AWS Systems Manager that explains the
     * <code>Status</code> value. For example, a <code>Failed</code> status might be
     * explained by the <code>StatusInformation</code> message, "The specified S3
     * bucket does not exist. Verify that the URL of the S3 bucket is correct."</p>
     */
    inline void SetStatusInformation(Aws::String&& value) { m_statusInformation = std::move(value); }

    /**
     * <p>A message returned by AWS Systems Manager that explains the
     * <code>Status</code> value. For example, a <code>Failed</code> status might be
     * explained by the <code>StatusInformation</code> message, "The specified S3
     * bucket does not exist. Verify that the URL of the S3 bucket is correct."</p>
     */
    inline void SetStatusInformation(const char* value) { m_statusInformation.assign(value); }

    /**
     * <p>A message returned by AWS Systems Manager that explains the
     * <code>Status</code> value. For example, a <code>Failed</code> status might be
     * explained by the <code>StatusInformation</code> message, "The specified S3
     * bucket does not exist. Verify that the URL of the S3 bucket is correct."</p>
     */
    inline GetDocumentResult& WithStatusInformation(const Aws::String& value) { SetStatusInformation(value); return *this;}

    /**
     * <p>A message returned by AWS Systems Manager that explains the
     * <code>Status</code> value. For example, a <code>Failed</code> status might be
     * explained by the <code>StatusInformation</code> message, "The specified S3
     * bucket does not exist. Verify that the URL of the S3 bucket is correct."</p>
     */
    inline GetDocumentResult& WithStatusInformation(Aws::String&& value) { SetStatusInformation(std::move(value)); return *this;}

    /**
     * <p>A message returned by AWS Systems Manager that explains the
     * <code>Status</code> value. For example, a <code>Failed</code> status might be
     * explained by the <code>StatusInformation</code> message, "The specified S3
     * bucket does not exist. Verify that the URL of the S3 bucket is correct."</p>
     */
    inline GetDocumentResult& WithStatusInformation(const char* value) { SetStatusInformation(value); return *this;}


    /**
     * <p>The contents of the Systems Manager document.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The contents of the Systems Manager document.</p>
     */
    inline void SetContent(const Aws::String& value) { m_content = value; }

    /**
     * <p>The contents of the Systems Manager document.</p>
     */
    inline void SetContent(Aws::String&& value) { m_content = std::move(value); }

    /**
     * <p>The contents of the Systems Manager document.</p>
     */
    inline void SetContent(const char* value) { m_content.assign(value); }

    /**
     * <p>The contents of the Systems Manager document.</p>
     */
    inline GetDocumentResult& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The contents of the Systems Manager document.</p>
     */
    inline GetDocumentResult& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The contents of the Systems Manager document.</p>
     */
    inline GetDocumentResult& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>The document type.</p>
     */
    inline const DocumentType& GetDocumentType() const{ return m_documentType; }

    /**
     * <p>The document type.</p>
     */
    inline void SetDocumentType(const DocumentType& value) { m_documentType = value; }

    /**
     * <p>The document type.</p>
     */
    inline void SetDocumentType(DocumentType&& value) { m_documentType = std::move(value); }

    /**
     * <p>The document type.</p>
     */
    inline GetDocumentResult& WithDocumentType(const DocumentType& value) { SetDocumentType(value); return *this;}

    /**
     * <p>The document type.</p>
     */
    inline GetDocumentResult& WithDocumentType(DocumentType&& value) { SetDocumentType(std::move(value)); return *this;}


    /**
     * <p>The document format, either JSON or YAML.</p>
     */
    inline const DocumentFormat& GetDocumentFormat() const{ return m_documentFormat; }

    /**
     * <p>The document format, either JSON or YAML.</p>
     */
    inline void SetDocumentFormat(const DocumentFormat& value) { m_documentFormat = value; }

    /**
     * <p>The document format, either JSON or YAML.</p>
     */
    inline void SetDocumentFormat(DocumentFormat&& value) { m_documentFormat = std::move(value); }

    /**
     * <p>The document format, either JSON or YAML.</p>
     */
    inline GetDocumentResult& WithDocumentFormat(const DocumentFormat& value) { SetDocumentFormat(value); return *this;}

    /**
     * <p>The document format, either JSON or YAML.</p>
     */
    inline GetDocumentResult& WithDocumentFormat(DocumentFormat&& value) { SetDocumentFormat(std::move(value)); return *this;}


    /**
     * <p>A description of the document attachments, including names, locations, sizes,
     * etc.</p>
     */
    inline const Aws::Vector<AttachmentContent>& GetAttachmentsContent() const{ return m_attachmentsContent; }

    /**
     * <p>A description of the document attachments, including names, locations, sizes,
     * etc.</p>
     */
    inline void SetAttachmentsContent(const Aws::Vector<AttachmentContent>& value) { m_attachmentsContent = value; }

    /**
     * <p>A description of the document attachments, including names, locations, sizes,
     * etc.</p>
     */
    inline void SetAttachmentsContent(Aws::Vector<AttachmentContent>&& value) { m_attachmentsContent = std::move(value); }

    /**
     * <p>A description of the document attachments, including names, locations, sizes,
     * etc.</p>
     */
    inline GetDocumentResult& WithAttachmentsContent(const Aws::Vector<AttachmentContent>& value) { SetAttachmentsContent(value); return *this;}

    /**
     * <p>A description of the document attachments, including names, locations, sizes,
     * etc.</p>
     */
    inline GetDocumentResult& WithAttachmentsContent(Aws::Vector<AttachmentContent>&& value) { SetAttachmentsContent(std::move(value)); return *this;}

    /**
     * <p>A description of the document attachments, including names, locations, sizes,
     * etc.</p>
     */
    inline GetDocumentResult& AddAttachmentsContent(const AttachmentContent& value) { m_attachmentsContent.push_back(value); return *this; }

    /**
     * <p>A description of the document attachments, including names, locations, sizes,
     * etc.</p>
     */
    inline GetDocumentResult& AddAttachmentsContent(AttachmentContent&& value) { m_attachmentsContent.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;

    Aws::String m_versionName;

    Aws::String m_documentVersion;

    DocumentStatus m_status;

    Aws::String m_statusInformation;

    Aws::String m_content;

    DocumentType m_documentType;

    DocumentFormat m_documentFormat;

    Aws::Vector<AttachmentContent> m_attachmentsContent;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
