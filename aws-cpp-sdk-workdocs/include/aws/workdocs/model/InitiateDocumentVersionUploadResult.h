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
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/model/DocumentMetadata.h>
#include <aws/workdocs/model/UploadMetadata.h>
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
namespace WorkDocs
{
namespace Model
{
  class AWS_WORKDOCS_API InitiateDocumentVersionUploadResult
  {
  public:
    InitiateDocumentVersionUploadResult();
    InitiateDocumentVersionUploadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    InitiateDocumentVersionUploadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The document metadata.</p>
     */
    inline const DocumentMetadata& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The document metadata.</p>
     */
    inline void SetMetadata(const DocumentMetadata& value) { m_metadata = value; }

    /**
     * <p>The document metadata.</p>
     */
    inline void SetMetadata(DocumentMetadata&& value) { m_metadata = std::move(value); }

    /**
     * <p>The document metadata.</p>
     */
    inline InitiateDocumentVersionUploadResult& WithMetadata(const DocumentMetadata& value) { SetMetadata(value); return *this;}

    /**
     * <p>The document metadata.</p>
     */
    inline InitiateDocumentVersionUploadResult& WithMetadata(DocumentMetadata&& value) { SetMetadata(std::move(value)); return *this;}


    /**
     * <p>The upload metadata.</p>
     */
    inline const UploadMetadata& GetUploadMetadata() const{ return m_uploadMetadata; }

    /**
     * <p>The upload metadata.</p>
     */
    inline void SetUploadMetadata(const UploadMetadata& value) { m_uploadMetadata = value; }

    /**
     * <p>The upload metadata.</p>
     */
    inline void SetUploadMetadata(UploadMetadata&& value) { m_uploadMetadata = std::move(value); }

    /**
     * <p>The upload metadata.</p>
     */
    inline InitiateDocumentVersionUploadResult& WithUploadMetadata(const UploadMetadata& value) { SetUploadMetadata(value); return *this;}

    /**
     * <p>The upload metadata.</p>
     */
    inline InitiateDocumentVersionUploadResult& WithUploadMetadata(UploadMetadata&& value) { SetUploadMetadata(std::move(value)); return *this;}

  private:

    DocumentMetadata m_metadata;

    UploadMetadata m_uploadMetadata;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
