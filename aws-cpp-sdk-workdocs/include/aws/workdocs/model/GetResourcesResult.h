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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/FolderMetadata.h>
#include <aws/workdocs/model/DocumentMetadata.h>
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
  class AWS_WORKDOCS_API GetResourcesResult
  {
  public:
    GetResourcesResult();
    GetResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The folders in the specified folder.</p>
     */
    inline const Aws::Vector<FolderMetadata>& GetFolders() const{ return m_folders; }

    /**
     * <p>The folders in the specified folder.</p>
     */
    inline void SetFolders(const Aws::Vector<FolderMetadata>& value) { m_folders = value; }

    /**
     * <p>The folders in the specified folder.</p>
     */
    inline void SetFolders(Aws::Vector<FolderMetadata>&& value) { m_folders = std::move(value); }

    /**
     * <p>The folders in the specified folder.</p>
     */
    inline GetResourcesResult& WithFolders(const Aws::Vector<FolderMetadata>& value) { SetFolders(value); return *this;}

    /**
     * <p>The folders in the specified folder.</p>
     */
    inline GetResourcesResult& WithFolders(Aws::Vector<FolderMetadata>&& value) { SetFolders(std::move(value)); return *this;}

    /**
     * <p>The folders in the specified folder.</p>
     */
    inline GetResourcesResult& AddFolders(const FolderMetadata& value) { m_folders.push_back(value); return *this; }

    /**
     * <p>The folders in the specified folder.</p>
     */
    inline GetResourcesResult& AddFolders(FolderMetadata&& value) { m_folders.push_back(std::move(value)); return *this; }


    /**
     * <p>The documents in the specified collection.</p>
     */
    inline const Aws::Vector<DocumentMetadata>& GetDocuments() const{ return m_documents; }

    /**
     * <p>The documents in the specified collection.</p>
     */
    inline void SetDocuments(const Aws::Vector<DocumentMetadata>& value) { m_documents = value; }

    /**
     * <p>The documents in the specified collection.</p>
     */
    inline void SetDocuments(Aws::Vector<DocumentMetadata>&& value) { m_documents = std::move(value); }

    /**
     * <p>The documents in the specified collection.</p>
     */
    inline GetResourcesResult& WithDocuments(const Aws::Vector<DocumentMetadata>& value) { SetDocuments(value); return *this;}

    /**
     * <p>The documents in the specified collection.</p>
     */
    inline GetResourcesResult& WithDocuments(Aws::Vector<DocumentMetadata>&& value) { SetDocuments(std::move(value)); return *this;}

    /**
     * <p>The documents in the specified collection.</p>
     */
    inline GetResourcesResult& AddDocuments(const DocumentMetadata& value) { m_documents.push_back(value); return *this; }

    /**
     * <p>The documents in the specified collection.</p>
     */
    inline GetResourcesResult& AddDocuments(DocumentMetadata&& value) { m_documents.push_back(std::move(value)); return *this; }


    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline GetResourcesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline GetResourcesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline GetResourcesResult& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::Vector<FolderMetadata> m_folders;

    Aws::Vector<DocumentMetadata> m_documents;

    Aws::String m_marker;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
