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
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codecommit/model/FileMetadata.h>
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
namespace CodeCommit
{
namespace Model
{
  class AWS_CODECOMMIT_API CreateCommitResult
  {
  public:
    CreateCommitResult();
    CreateCommitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateCommitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The full commit ID of the commit that contains your committed file
     * changes.</p>
     */
    inline const Aws::String& GetCommitId() const{ return m_commitId; }

    /**
     * <p>The full commit ID of the commit that contains your committed file
     * changes.</p>
     */
    inline void SetCommitId(const Aws::String& value) { m_commitId = value; }

    /**
     * <p>The full commit ID of the commit that contains your committed file
     * changes.</p>
     */
    inline void SetCommitId(Aws::String&& value) { m_commitId = std::move(value); }

    /**
     * <p>The full commit ID of the commit that contains your committed file
     * changes.</p>
     */
    inline void SetCommitId(const char* value) { m_commitId.assign(value); }

    /**
     * <p>The full commit ID of the commit that contains your committed file
     * changes.</p>
     */
    inline CreateCommitResult& WithCommitId(const Aws::String& value) { SetCommitId(value); return *this;}

    /**
     * <p>The full commit ID of the commit that contains your committed file
     * changes.</p>
     */
    inline CreateCommitResult& WithCommitId(Aws::String&& value) { SetCommitId(std::move(value)); return *this;}

    /**
     * <p>The full commit ID of the commit that contains your committed file
     * changes.</p>
     */
    inline CreateCommitResult& WithCommitId(const char* value) { SetCommitId(value); return *this;}


    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the commited file changes.</p>
     */
    inline const Aws::String& GetTreeId() const{ return m_treeId; }

    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the commited file changes.</p>
     */
    inline void SetTreeId(const Aws::String& value) { m_treeId = value; }

    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the commited file changes.</p>
     */
    inline void SetTreeId(Aws::String&& value) { m_treeId = std::move(value); }

    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the commited file changes.</p>
     */
    inline void SetTreeId(const char* value) { m_treeId.assign(value); }

    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the commited file changes.</p>
     */
    inline CreateCommitResult& WithTreeId(const Aws::String& value) { SetTreeId(value); return *this;}

    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the commited file changes.</p>
     */
    inline CreateCommitResult& WithTreeId(Aws::String&& value) { SetTreeId(std::move(value)); return *this;}

    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the commited file changes.</p>
     */
    inline CreateCommitResult& WithTreeId(const char* value) { SetTreeId(value); return *this;}


    /**
     * <p>The files added as part of the committed file changes.</p>
     */
    inline const Aws::Vector<FileMetadata>& GetFilesAdded() const{ return m_filesAdded; }

    /**
     * <p>The files added as part of the committed file changes.</p>
     */
    inline void SetFilesAdded(const Aws::Vector<FileMetadata>& value) { m_filesAdded = value; }

    /**
     * <p>The files added as part of the committed file changes.</p>
     */
    inline void SetFilesAdded(Aws::Vector<FileMetadata>&& value) { m_filesAdded = std::move(value); }

    /**
     * <p>The files added as part of the committed file changes.</p>
     */
    inline CreateCommitResult& WithFilesAdded(const Aws::Vector<FileMetadata>& value) { SetFilesAdded(value); return *this;}

    /**
     * <p>The files added as part of the committed file changes.</p>
     */
    inline CreateCommitResult& WithFilesAdded(Aws::Vector<FileMetadata>&& value) { SetFilesAdded(std::move(value)); return *this;}

    /**
     * <p>The files added as part of the committed file changes.</p>
     */
    inline CreateCommitResult& AddFilesAdded(const FileMetadata& value) { m_filesAdded.push_back(value); return *this; }

    /**
     * <p>The files added as part of the committed file changes.</p>
     */
    inline CreateCommitResult& AddFilesAdded(FileMetadata&& value) { m_filesAdded.push_back(std::move(value)); return *this; }


    /**
     * <p>The files updated as part of the commited file changes.</p>
     */
    inline const Aws::Vector<FileMetadata>& GetFilesUpdated() const{ return m_filesUpdated; }

    /**
     * <p>The files updated as part of the commited file changes.</p>
     */
    inline void SetFilesUpdated(const Aws::Vector<FileMetadata>& value) { m_filesUpdated = value; }

    /**
     * <p>The files updated as part of the commited file changes.</p>
     */
    inline void SetFilesUpdated(Aws::Vector<FileMetadata>&& value) { m_filesUpdated = std::move(value); }

    /**
     * <p>The files updated as part of the commited file changes.</p>
     */
    inline CreateCommitResult& WithFilesUpdated(const Aws::Vector<FileMetadata>& value) { SetFilesUpdated(value); return *this;}

    /**
     * <p>The files updated as part of the commited file changes.</p>
     */
    inline CreateCommitResult& WithFilesUpdated(Aws::Vector<FileMetadata>&& value) { SetFilesUpdated(std::move(value)); return *this;}

    /**
     * <p>The files updated as part of the commited file changes.</p>
     */
    inline CreateCommitResult& AddFilesUpdated(const FileMetadata& value) { m_filesUpdated.push_back(value); return *this; }

    /**
     * <p>The files updated as part of the commited file changes.</p>
     */
    inline CreateCommitResult& AddFilesUpdated(FileMetadata&& value) { m_filesUpdated.push_back(std::move(value)); return *this; }


    /**
     * <p>The files deleted as part of the committed file changes.</p>
     */
    inline const Aws::Vector<FileMetadata>& GetFilesDeleted() const{ return m_filesDeleted; }

    /**
     * <p>The files deleted as part of the committed file changes.</p>
     */
    inline void SetFilesDeleted(const Aws::Vector<FileMetadata>& value) { m_filesDeleted = value; }

    /**
     * <p>The files deleted as part of the committed file changes.</p>
     */
    inline void SetFilesDeleted(Aws::Vector<FileMetadata>&& value) { m_filesDeleted = std::move(value); }

    /**
     * <p>The files deleted as part of the committed file changes.</p>
     */
    inline CreateCommitResult& WithFilesDeleted(const Aws::Vector<FileMetadata>& value) { SetFilesDeleted(value); return *this;}

    /**
     * <p>The files deleted as part of the committed file changes.</p>
     */
    inline CreateCommitResult& WithFilesDeleted(Aws::Vector<FileMetadata>&& value) { SetFilesDeleted(std::move(value)); return *this;}

    /**
     * <p>The files deleted as part of the committed file changes.</p>
     */
    inline CreateCommitResult& AddFilesDeleted(const FileMetadata& value) { m_filesDeleted.push_back(value); return *this; }

    /**
     * <p>The files deleted as part of the committed file changes.</p>
     */
    inline CreateCommitResult& AddFilesDeleted(FileMetadata&& value) { m_filesDeleted.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_commitId;

    Aws::String m_treeId;

    Aws::Vector<FileMetadata> m_filesAdded;

    Aws::Vector<FileMetadata> m_filesUpdated;

    Aws::Vector<FileMetadata> m_filesDeleted;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
