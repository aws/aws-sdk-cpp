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
#include <aws/cloudsearchdomain/CloudSearchDomain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudsearchdomain/model/DocumentServiceWarning.h>
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
namespace CloudSearchDomain
{
namespace Model
{
  /**
   * <p>Contains the response to an <code>UploadDocuments</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearchdomain-2013-01-01/UploadDocumentsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDSEARCHDOMAIN_API UploadDocumentsResult
  {
  public:
    UploadDocumentsResult();
    UploadDocumentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UploadDocumentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of an <code>UploadDocumentsRequest</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of an <code>UploadDocumentsRequest</code>.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The status of an <code>UploadDocumentsRequest</code>.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>The status of an <code>UploadDocumentsRequest</code>.</p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The status of an <code>UploadDocumentsRequest</code>.</p>
     */
    inline UploadDocumentsResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of an <code>UploadDocumentsRequest</code>.</p>
     */
    inline UploadDocumentsResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of an <code>UploadDocumentsRequest</code>.</p>
     */
    inline UploadDocumentsResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The number of documents that were added to the search domain.</p>
     */
    inline long long GetAdds() const{ return m_adds; }

    /**
     * <p>The number of documents that were added to the search domain.</p>
     */
    inline void SetAdds(long long value) { m_adds = value; }

    /**
     * <p>The number of documents that were added to the search domain.</p>
     */
    inline UploadDocumentsResult& WithAdds(long long value) { SetAdds(value); return *this;}


    /**
     * <p>The number of documents that were deleted from the search domain.</p>
     */
    inline long long GetDeletes() const{ return m_deletes; }

    /**
     * <p>The number of documents that were deleted from the search domain.</p>
     */
    inline void SetDeletes(long long value) { m_deletes = value; }

    /**
     * <p>The number of documents that were deleted from the search domain.</p>
     */
    inline UploadDocumentsResult& WithDeletes(long long value) { SetDeletes(value); return *this;}


    /**
     * <p>Any warnings returned by the document service about the documents being
     * uploaded.</p>
     */
    inline const Aws::Vector<DocumentServiceWarning>& GetWarnings() const{ return m_warnings; }

    /**
     * <p>Any warnings returned by the document service about the documents being
     * uploaded.</p>
     */
    inline void SetWarnings(const Aws::Vector<DocumentServiceWarning>& value) { m_warnings = value; }

    /**
     * <p>Any warnings returned by the document service about the documents being
     * uploaded.</p>
     */
    inline void SetWarnings(Aws::Vector<DocumentServiceWarning>&& value) { m_warnings = std::move(value); }

    /**
     * <p>Any warnings returned by the document service about the documents being
     * uploaded.</p>
     */
    inline UploadDocumentsResult& WithWarnings(const Aws::Vector<DocumentServiceWarning>& value) { SetWarnings(value); return *this;}

    /**
     * <p>Any warnings returned by the document service about the documents being
     * uploaded.</p>
     */
    inline UploadDocumentsResult& WithWarnings(Aws::Vector<DocumentServiceWarning>&& value) { SetWarnings(std::move(value)); return *this;}

    /**
     * <p>Any warnings returned by the document service about the documents being
     * uploaded.</p>
     */
    inline UploadDocumentsResult& AddWarnings(const DocumentServiceWarning& value) { m_warnings.push_back(value); return *this; }

    /**
     * <p>Any warnings returned by the document service about the documents being
     * uploaded.</p>
     */
    inline UploadDocumentsResult& AddWarnings(DocumentServiceWarning&& value) { m_warnings.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_status;

    long long m_adds;

    long long m_deletes;

    Aws::Vector<DocumentServiceWarning> m_warnings;
  };

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
