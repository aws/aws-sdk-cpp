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
  class AWS_WORKDOCS_API DescribeRootFoldersResult
  {
  public:
    DescribeRootFoldersResult();
    DescribeRootFoldersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeRootFoldersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The user's special folders.</p>
     */
    inline const Aws::Vector<FolderMetadata>& GetFolders() const{ return m_folders; }

    /**
     * <p>The user's special folders.</p>
     */
    inline void SetFolders(const Aws::Vector<FolderMetadata>& value) { m_folders = value; }

    /**
     * <p>The user's special folders.</p>
     */
    inline void SetFolders(Aws::Vector<FolderMetadata>&& value) { m_folders = std::move(value); }

    /**
     * <p>The user's special folders.</p>
     */
    inline DescribeRootFoldersResult& WithFolders(const Aws::Vector<FolderMetadata>& value) { SetFolders(value); return *this;}

    /**
     * <p>The user's special folders.</p>
     */
    inline DescribeRootFoldersResult& WithFolders(Aws::Vector<FolderMetadata>&& value) { SetFolders(std::move(value)); return *this;}

    /**
     * <p>The user's special folders.</p>
     */
    inline DescribeRootFoldersResult& AddFolders(const FolderMetadata& value) { m_folders.push_back(value); return *this; }

    /**
     * <p>The user's special folders.</p>
     */
    inline DescribeRootFoldersResult& AddFolders(FolderMetadata&& value) { m_folders.push_back(std::move(value)); return *this; }


    /**
     * <p>The marker for the next set of results.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline DescribeRootFoldersResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline DescribeRootFoldersResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline DescribeRootFoldersResult& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::Vector<FolderMetadata> m_folders;

    Aws::String m_marker;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
