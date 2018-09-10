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
  class AWS_CODECOMMIT_API PutFileResult
  {
  public:
    PutFileResult();
    PutFileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutFileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The full SHA of the commit that contains this file change.</p>
     */
    inline const Aws::String& GetCommitId() const{ return m_commitId; }

    /**
     * <p>The full SHA of the commit that contains this file change.</p>
     */
    inline void SetCommitId(const Aws::String& value) { m_commitId = value; }

    /**
     * <p>The full SHA of the commit that contains this file change.</p>
     */
    inline void SetCommitId(Aws::String&& value) { m_commitId = std::move(value); }

    /**
     * <p>The full SHA of the commit that contains this file change.</p>
     */
    inline void SetCommitId(const char* value) { m_commitId.assign(value); }

    /**
     * <p>The full SHA of the commit that contains this file change.</p>
     */
    inline PutFileResult& WithCommitId(const Aws::String& value) { SetCommitId(value); return *this;}

    /**
     * <p>The full SHA of the commit that contains this file change.</p>
     */
    inline PutFileResult& WithCommitId(Aws::String&& value) { SetCommitId(std::move(value)); return *this;}

    /**
     * <p>The full SHA of the commit that contains this file change.</p>
     */
    inline PutFileResult& WithCommitId(const char* value) { SetCommitId(value); return *this;}


    /**
     * <p>The ID of the blob, which is its SHA-1 pointer.</p>
     */
    inline const Aws::String& GetBlobId() const{ return m_blobId; }

    /**
     * <p>The ID of the blob, which is its SHA-1 pointer.</p>
     */
    inline void SetBlobId(const Aws::String& value) { m_blobId = value; }

    /**
     * <p>The ID of the blob, which is its SHA-1 pointer.</p>
     */
    inline void SetBlobId(Aws::String&& value) { m_blobId = std::move(value); }

    /**
     * <p>The ID of the blob, which is its SHA-1 pointer.</p>
     */
    inline void SetBlobId(const char* value) { m_blobId.assign(value); }

    /**
     * <p>The ID of the blob, which is its SHA-1 pointer.</p>
     */
    inline PutFileResult& WithBlobId(const Aws::String& value) { SetBlobId(value); return *this;}

    /**
     * <p>The ID of the blob, which is its SHA-1 pointer.</p>
     */
    inline PutFileResult& WithBlobId(Aws::String&& value) { SetBlobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the blob, which is its SHA-1 pointer.</p>
     */
    inline PutFileResult& WithBlobId(const char* value) { SetBlobId(value); return *this;}


    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * this file change.</p>
     */
    inline const Aws::String& GetTreeId() const{ return m_treeId; }

    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * this file change.</p>
     */
    inline void SetTreeId(const Aws::String& value) { m_treeId = value; }

    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * this file change.</p>
     */
    inline void SetTreeId(Aws::String&& value) { m_treeId = std::move(value); }

    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * this file change.</p>
     */
    inline void SetTreeId(const char* value) { m_treeId.assign(value); }

    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * this file change.</p>
     */
    inline PutFileResult& WithTreeId(const Aws::String& value) { SetTreeId(value); return *this;}

    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * this file change.</p>
     */
    inline PutFileResult& WithTreeId(Aws::String&& value) { SetTreeId(std::move(value)); return *this;}

    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * this file change.</p>
     */
    inline PutFileResult& WithTreeId(const char* value) { SetTreeId(value); return *this;}

  private:

    Aws::String m_commitId;

    Aws::String m_blobId;

    Aws::String m_treeId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
