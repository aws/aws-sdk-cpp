﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DeleteFileResult
  {
  public:
    AWS_CODECOMMIT_API DeleteFileResult();
    AWS_CODECOMMIT_API DeleteFileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API DeleteFileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The full commit ID of the commit that contains the change that deletes the
     * file.</p>
     */
    inline const Aws::String& GetCommitId() const{ return m_commitId; }

    /**
     * <p>The full commit ID of the commit that contains the change that deletes the
     * file.</p>
     */
    inline void SetCommitId(const Aws::String& value) { m_commitId = value; }

    /**
     * <p>The full commit ID of the commit that contains the change that deletes the
     * file.</p>
     */
    inline void SetCommitId(Aws::String&& value) { m_commitId = std::move(value); }

    /**
     * <p>The full commit ID of the commit that contains the change that deletes the
     * file.</p>
     */
    inline void SetCommitId(const char* value) { m_commitId.assign(value); }

    /**
     * <p>The full commit ID of the commit that contains the change that deletes the
     * file.</p>
     */
    inline DeleteFileResult& WithCommitId(const Aws::String& value) { SetCommitId(value); return *this;}

    /**
     * <p>The full commit ID of the commit that contains the change that deletes the
     * file.</p>
     */
    inline DeleteFileResult& WithCommitId(Aws::String&& value) { SetCommitId(std::move(value)); return *this;}

    /**
     * <p>The full commit ID of the commit that contains the change that deletes the
     * file.</p>
     */
    inline DeleteFileResult& WithCommitId(const char* value) { SetCommitId(value); return *this;}


    /**
     * <p>The blob ID removed from the tree as part of deleting the file.</p>
     */
    inline const Aws::String& GetBlobId() const{ return m_blobId; }

    /**
     * <p>The blob ID removed from the tree as part of deleting the file.</p>
     */
    inline void SetBlobId(const Aws::String& value) { m_blobId = value; }

    /**
     * <p>The blob ID removed from the tree as part of deleting the file.</p>
     */
    inline void SetBlobId(Aws::String&& value) { m_blobId = std::move(value); }

    /**
     * <p>The blob ID removed from the tree as part of deleting the file.</p>
     */
    inline void SetBlobId(const char* value) { m_blobId.assign(value); }

    /**
     * <p>The blob ID removed from the tree as part of deleting the file.</p>
     */
    inline DeleteFileResult& WithBlobId(const Aws::String& value) { SetBlobId(value); return *this;}

    /**
     * <p>The blob ID removed from the tree as part of deleting the file.</p>
     */
    inline DeleteFileResult& WithBlobId(Aws::String&& value) { SetBlobId(std::move(value)); return *this;}

    /**
     * <p>The blob ID removed from the tree as part of deleting the file.</p>
     */
    inline DeleteFileResult& WithBlobId(const char* value) { SetBlobId(value); return *this;}


    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the delete file change.</p>
     */
    inline const Aws::String& GetTreeId() const{ return m_treeId; }

    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the delete file change.</p>
     */
    inline void SetTreeId(const Aws::String& value) { m_treeId = value; }

    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the delete file change.</p>
     */
    inline void SetTreeId(Aws::String&& value) { m_treeId = std::move(value); }

    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the delete file change.</p>
     */
    inline void SetTreeId(const char* value) { m_treeId.assign(value); }

    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the delete file change.</p>
     */
    inline DeleteFileResult& WithTreeId(const Aws::String& value) { SetTreeId(value); return *this;}

    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the delete file change.</p>
     */
    inline DeleteFileResult& WithTreeId(Aws::String&& value) { SetTreeId(std::move(value)); return *this;}

    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * the delete file change.</p>
     */
    inline DeleteFileResult& WithTreeId(const char* value) { SetTreeId(value); return *this;}


    /**
     * <p>The fully qualified path to the file to be deleted, including the full name
     * and extension of that file.</p>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }

    /**
     * <p>The fully qualified path to the file to be deleted, including the full name
     * and extension of that file.</p>
     */
    inline void SetFilePath(const Aws::String& value) { m_filePath = value; }

    /**
     * <p>The fully qualified path to the file to be deleted, including the full name
     * and extension of that file.</p>
     */
    inline void SetFilePath(Aws::String&& value) { m_filePath = std::move(value); }

    /**
     * <p>The fully qualified path to the file to be deleted, including the full name
     * and extension of that file.</p>
     */
    inline void SetFilePath(const char* value) { m_filePath.assign(value); }

    /**
     * <p>The fully qualified path to the file to be deleted, including the full name
     * and extension of that file.</p>
     */
    inline DeleteFileResult& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}

    /**
     * <p>The fully qualified path to the file to be deleted, including the full name
     * and extension of that file.</p>
     */
    inline DeleteFileResult& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}

    /**
     * <p>The fully qualified path to the file to be deleted, including the full name
     * and extension of that file.</p>
     */
    inline DeleteFileResult& WithFilePath(const char* value) { SetFilePath(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteFileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteFileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteFileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_commitId;

    Aws::String m_blobId;

    Aws::String m_treeId;

    Aws::String m_filePath;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
