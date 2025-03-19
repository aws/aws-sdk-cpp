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
    AWS_CODECOMMIT_API CreateCommitResult() = default;
    AWS_CODECOMMIT_API CreateCommitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API CreateCommitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The full commit ID of the commit that contains your committed file
     * changes.</p>
     */
    inline const Aws::String& GetCommitId() const { return m_commitId; }
    template<typename CommitIdT = Aws::String>
    void SetCommitId(CommitIdT&& value) { m_commitIdHasBeenSet = true; m_commitId = std::forward<CommitIdT>(value); }
    template<typename CommitIdT = Aws::String>
    CreateCommitResult& WithCommitId(CommitIdT&& value) { SetCommitId(std::forward<CommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the commited file changes.</p>
     */
    inline const Aws::String& GetTreeId() const { return m_treeId; }
    template<typename TreeIdT = Aws::String>
    void SetTreeId(TreeIdT&& value) { m_treeIdHasBeenSet = true; m_treeId = std::forward<TreeIdT>(value); }
    template<typename TreeIdT = Aws::String>
    CreateCommitResult& WithTreeId(TreeIdT&& value) { SetTreeId(std::forward<TreeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The files added as part of the committed file changes.</p>
     */
    inline const Aws::Vector<FileMetadata>& GetFilesAdded() const { return m_filesAdded; }
    template<typename FilesAddedT = Aws::Vector<FileMetadata>>
    void SetFilesAdded(FilesAddedT&& value) { m_filesAddedHasBeenSet = true; m_filesAdded = std::forward<FilesAddedT>(value); }
    template<typename FilesAddedT = Aws::Vector<FileMetadata>>
    CreateCommitResult& WithFilesAdded(FilesAddedT&& value) { SetFilesAdded(std::forward<FilesAddedT>(value)); return *this;}
    template<typename FilesAddedT = FileMetadata>
    CreateCommitResult& AddFilesAdded(FilesAddedT&& value) { m_filesAddedHasBeenSet = true; m_filesAdded.emplace_back(std::forward<FilesAddedT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The files updated as part of the commited file changes.</p>
     */
    inline const Aws::Vector<FileMetadata>& GetFilesUpdated() const { return m_filesUpdated; }
    template<typename FilesUpdatedT = Aws::Vector<FileMetadata>>
    void SetFilesUpdated(FilesUpdatedT&& value) { m_filesUpdatedHasBeenSet = true; m_filesUpdated = std::forward<FilesUpdatedT>(value); }
    template<typename FilesUpdatedT = Aws::Vector<FileMetadata>>
    CreateCommitResult& WithFilesUpdated(FilesUpdatedT&& value) { SetFilesUpdated(std::forward<FilesUpdatedT>(value)); return *this;}
    template<typename FilesUpdatedT = FileMetadata>
    CreateCommitResult& AddFilesUpdated(FilesUpdatedT&& value) { m_filesUpdatedHasBeenSet = true; m_filesUpdated.emplace_back(std::forward<FilesUpdatedT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The files deleted as part of the committed file changes.</p>
     */
    inline const Aws::Vector<FileMetadata>& GetFilesDeleted() const { return m_filesDeleted; }
    template<typename FilesDeletedT = Aws::Vector<FileMetadata>>
    void SetFilesDeleted(FilesDeletedT&& value) { m_filesDeletedHasBeenSet = true; m_filesDeleted = std::forward<FilesDeletedT>(value); }
    template<typename FilesDeletedT = Aws::Vector<FileMetadata>>
    CreateCommitResult& WithFilesDeleted(FilesDeletedT&& value) { SetFilesDeleted(std::forward<FilesDeletedT>(value)); return *this;}
    template<typename FilesDeletedT = FileMetadata>
    CreateCommitResult& AddFilesDeleted(FilesDeletedT&& value) { m_filesDeletedHasBeenSet = true; m_filesDeleted.emplace_back(std::forward<FilesDeletedT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateCommitResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_commitId;
    bool m_commitIdHasBeenSet = false;

    Aws::String m_treeId;
    bool m_treeIdHasBeenSet = false;

    Aws::Vector<FileMetadata> m_filesAdded;
    bool m_filesAddedHasBeenSet = false;

    Aws::Vector<FileMetadata> m_filesUpdated;
    bool m_filesUpdatedHasBeenSet = false;

    Aws::Vector<FileMetadata> m_filesDeleted;
    bool m_filesDeletedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
