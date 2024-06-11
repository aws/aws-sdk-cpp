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
  class PutFileResult
  {
  public:
    AWS_CODECOMMIT_API PutFileResult();
    AWS_CODECOMMIT_API PutFileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API PutFileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The full SHA ID of the commit that contains this file change.</p>
     */
    inline const Aws::String& GetCommitId() const{ return m_commitId; }
    inline void SetCommitId(const Aws::String& value) { m_commitId = value; }
    inline void SetCommitId(Aws::String&& value) { m_commitId = std::move(value); }
    inline void SetCommitId(const char* value) { m_commitId.assign(value); }
    inline PutFileResult& WithCommitId(const Aws::String& value) { SetCommitId(value); return *this;}
    inline PutFileResult& WithCommitId(Aws::String&& value) { SetCommitId(std::move(value)); return *this;}
    inline PutFileResult& WithCommitId(const char* value) { SetCommitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the blob, which is its SHA-1 pointer.</p>
     */
    inline const Aws::String& GetBlobId() const{ return m_blobId; }
    inline void SetBlobId(const Aws::String& value) { m_blobId = value; }
    inline void SetBlobId(Aws::String&& value) { m_blobId = std::move(value); }
    inline void SetBlobId(const char* value) { m_blobId.assign(value); }
    inline PutFileResult& WithBlobId(const Aws::String& value) { SetBlobId(value); return *this;}
    inline PutFileResult& WithBlobId(Aws::String&& value) { SetBlobId(std::move(value)); return *this;}
    inline PutFileResult& WithBlobId(const char* value) { SetBlobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * this file change.</p>
     */
    inline const Aws::String& GetTreeId() const{ return m_treeId; }
    inline void SetTreeId(const Aws::String& value) { m_treeId = value; }
    inline void SetTreeId(Aws::String&& value) { m_treeId = std::move(value); }
    inline void SetTreeId(const char* value) { m_treeId.assign(value); }
    inline PutFileResult& WithTreeId(const Aws::String& value) { SetTreeId(value); return *this;}
    inline PutFileResult& WithTreeId(Aws::String&& value) { SetTreeId(std::move(value)); return *this;}
    inline PutFileResult& WithTreeId(const char* value) { SetTreeId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutFileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutFileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutFileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_commitId;

    Aws::String m_blobId;

    Aws::String m_treeId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
