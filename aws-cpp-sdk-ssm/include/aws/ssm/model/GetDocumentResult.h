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
#include <aws/ssm/model/DocumentType.h>
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
    GetDocumentResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDocumentResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The name of the SSM document.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the SSM document.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the SSM document.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the SSM document.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the SSM document.</p>
     */
    inline GetDocumentResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the SSM document.</p>
     */
    inline GetDocumentResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the SSM document.</p>
     */
    inline GetDocumentResult& WithName(const char* value) { SetName(value); return *this;}

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
     * <p>The contents of the SSM document.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The contents of the SSM document.</p>
     */
    inline void SetContent(const Aws::String& value) { m_content = value; }

    /**
     * <p>The contents of the SSM document.</p>
     */
    inline void SetContent(Aws::String&& value) { m_content = std::move(value); }

    /**
     * <p>The contents of the SSM document.</p>
     */
    inline void SetContent(const char* value) { m_content.assign(value); }

    /**
     * <p>The contents of the SSM document.</p>
     */
    inline GetDocumentResult& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The contents of the SSM document.</p>
     */
    inline GetDocumentResult& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The contents of the SSM document.</p>
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

  private:
    Aws::String m_name;
    Aws::String m_documentVersion;
    Aws::String m_content;
    DocumentType m_documentType;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
