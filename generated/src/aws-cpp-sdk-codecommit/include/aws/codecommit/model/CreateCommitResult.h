/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateCommitResult
  {
  public:
    AWS_CODECOMMIT_API CreateCommitResult();
    AWS_CODECOMMIT_API CreateCommitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API CreateCommitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The full commit ID of the commit that contains your committed file
     * changes.</p>
     */
    inline const Aws::String& GetCommitId() const{ return m_commitId; }
    inline void SetCommitId(const Aws::String& value) { m_commitId = value; }
    inline void SetCommitId(Aws::String&& value) { m_commitId = std::move(value); }
    inline void SetCommitId(const char* value) { m_commitId.assign(value); }
    inline CreateCommitResult& WithCommitId(const Aws::String& value) { SetCommitId(value); return *this;}
    inline CreateCommitResult& WithCommitId(Aws::String&& value) { SetCommitId(std::move(value)); return *this;}
    inline CreateCommitResult& WithCommitId(const char* value) { SetCommitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the commited file changes.</p>
     */
    inline const Aws::String& GetTreeId() const{ return m_treeId; }
    inline void SetTreeId(const Aws::String& value) { m_treeId = value; }
    inline void SetTreeId(Aws::String&& value) { m_treeId = std::move(value); }
    inline void SetTreeId(const char* value) { m_treeId.assign(value); }
    inline CreateCommitResult& WithTreeId(const Aws::String& value) { SetTreeId(value); return *this;}
    inline CreateCommitResult& WithTreeId(Aws::String&& value) { SetTreeId(std::move(value)); return *this;}
    inline CreateCommitResult& WithTreeId(const char* value) { SetTreeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The files added as part of the committed file changes.</p>
     */
    inline const Aws::Vector<FileMetadata>& GetFilesAdded() const{ return m_filesAdded; }
    inline void SetFilesAdded(const Aws::Vector<FileMetadata>& value) { m_filesAdded = value; }
    inline void SetFilesAdded(Aws::Vector<FileMetadata>&& value) { m_filesAdded = std::move(value); }
    inline CreateCommitResult& WithFilesAdded(const Aws::Vector<FileMetadata>& value) { SetFilesAdded(value); return *this;}
    inline CreateCommitResult& WithFilesAdded(Aws::Vector<FileMetadata>&& value) { SetFilesAdded(std::move(value)); return *this;}
    inline CreateCommitResult& AddFilesAdded(const FileMetadata& value) { m_filesAdded.push_back(value); return *this; }
    inline CreateCommitResult& AddFilesAdded(FileMetadata&& value) { m_filesAdded.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The files updated as part of the commited file changes.</p>
     */
    inline const Aws::Vector<FileMetadata>& GetFilesUpdated() const{ return m_filesUpdated; }
    inline void SetFilesUpdated(const Aws::Vector<FileMetadata>& value) { m_filesUpdated = value; }
    inline void SetFilesUpdated(Aws::Vector<FileMetadata>&& value) { m_filesUpdated = std::move(value); }
    inline CreateCommitResult& WithFilesUpdated(const Aws::Vector<FileMetadata>& value) { SetFilesUpdated(value); return *this;}
    inline CreateCommitResult& WithFilesUpdated(Aws::Vector<FileMetadata>&& value) { SetFilesUpdated(std::move(value)); return *this;}
    inline CreateCommitResult& AddFilesUpdated(const FileMetadata& value) { m_filesUpdated.push_back(value); return *this; }
    inline CreateCommitResult& AddFilesUpdated(FileMetadata&& value) { m_filesUpdated.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The files deleted as part of the committed file changes.</p>
     */
    inline const Aws::Vector<FileMetadata>& GetFilesDeleted() const{ return m_filesDeleted; }
    inline void SetFilesDeleted(const Aws::Vector<FileMetadata>& value) { m_filesDeleted = value; }
    inline void SetFilesDeleted(Aws::Vector<FileMetadata>&& value) { m_filesDeleted = std::move(value); }
    inline CreateCommitResult& WithFilesDeleted(const Aws::Vector<FileMetadata>& value) { SetFilesDeleted(value); return *this;}
    inline CreateCommitResult& WithFilesDeleted(Aws::Vector<FileMetadata>&& value) { SetFilesDeleted(std::move(value)); return *this;}
    inline CreateCommitResult& AddFilesDeleted(const FileMetadata& value) { m_filesDeleted.push_back(value); return *this; }
    inline CreateCommitResult& AddFilesDeleted(FileMetadata&& value) { m_filesDeleted.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateCommitResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateCommitResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateCommitResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_commitId;

    Aws::String m_treeId;

    Aws::Vector<FileMetadata> m_filesAdded;

    Aws::Vector<FileMetadata> m_filesUpdated;

    Aws::Vector<FileMetadata> m_filesDeleted;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
