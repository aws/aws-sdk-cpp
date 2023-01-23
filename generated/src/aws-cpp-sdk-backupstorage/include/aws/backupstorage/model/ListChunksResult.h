/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupstorage/BackupStorage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backupstorage/model/Chunk.h>
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
namespace BackupStorage
{
namespace Model
{
  class ListChunksResult
  {
  public:
    AWS_BACKUPSTORAGE_API ListChunksResult();
    AWS_BACKUPSTORAGE_API ListChunksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPSTORAGE_API ListChunksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * List of chunks
     */
    inline const Aws::Vector<Chunk>& GetChunkList() const{ return m_chunkList; }

    /**
     * List of chunks
     */
    inline void SetChunkList(const Aws::Vector<Chunk>& value) { m_chunkList = value; }

    /**
     * List of chunks
     */
    inline void SetChunkList(Aws::Vector<Chunk>&& value) { m_chunkList = std::move(value); }

    /**
     * List of chunks
     */
    inline ListChunksResult& WithChunkList(const Aws::Vector<Chunk>& value) { SetChunkList(value); return *this;}

    /**
     * List of chunks
     */
    inline ListChunksResult& WithChunkList(Aws::Vector<Chunk>&& value) { SetChunkList(std::move(value)); return *this;}

    /**
     * List of chunks
     */
    inline ListChunksResult& AddChunkList(const Chunk& value) { m_chunkList.push_back(value); return *this; }

    /**
     * List of chunks
     */
    inline ListChunksResult& AddChunkList(Chunk&& value) { m_chunkList.push_back(std::move(value)); return *this; }


    /**
     * Pagination token
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * Pagination token
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * Pagination token
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * Pagination token
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * Pagination token
     */
    inline ListChunksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * Pagination token
     */
    inline ListChunksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * Pagination token
     */
    inline ListChunksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Chunk> m_chunkList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace BackupStorage
} // namespace Aws
