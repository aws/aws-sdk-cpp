/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ebs/EBS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ebs/model/ChangedBlock.h>
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
namespace EBS
{
namespace Model
{
  class ListChangedBlocksResult
  {
  public:
    AWS_EBS_API ListChangedBlocksResult();
    AWS_EBS_API ListChangedBlocksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EBS_API ListChangedBlocksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects containing information about the changed blocks.</p>
     */
    inline const Aws::Vector<ChangedBlock>& GetChangedBlocks() const{ return m_changedBlocks; }

    /**
     * <p>An array of objects containing information about the changed blocks.</p>
     */
    inline void SetChangedBlocks(const Aws::Vector<ChangedBlock>& value) { m_changedBlocks = value; }

    /**
     * <p>An array of objects containing information about the changed blocks.</p>
     */
    inline void SetChangedBlocks(Aws::Vector<ChangedBlock>&& value) { m_changedBlocks = std::move(value); }

    /**
     * <p>An array of objects containing information about the changed blocks.</p>
     */
    inline ListChangedBlocksResult& WithChangedBlocks(const Aws::Vector<ChangedBlock>& value) { SetChangedBlocks(value); return *this;}

    /**
     * <p>An array of objects containing information about the changed blocks.</p>
     */
    inline ListChangedBlocksResult& WithChangedBlocks(Aws::Vector<ChangedBlock>&& value) { SetChangedBlocks(std::move(value)); return *this;}

    /**
     * <p>An array of objects containing information about the changed blocks.</p>
     */
    inline ListChangedBlocksResult& AddChangedBlocks(const ChangedBlock& value) { m_changedBlocks.push_back(value); return *this; }

    /**
     * <p>An array of objects containing information about the changed blocks.</p>
     */
    inline ListChangedBlocksResult& AddChangedBlocks(ChangedBlock&& value) { m_changedBlocks.push_back(std::move(value)); return *this; }


    /**
     * <p>The time when the <code>BlockToken</code> expires.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiryTime() const{ return m_expiryTime; }

    /**
     * <p>The time when the <code>BlockToken</code> expires.</p>
     */
    inline void SetExpiryTime(const Aws::Utils::DateTime& value) { m_expiryTime = value; }

    /**
     * <p>The time when the <code>BlockToken</code> expires.</p>
     */
    inline void SetExpiryTime(Aws::Utils::DateTime&& value) { m_expiryTime = std::move(value); }

    /**
     * <p>The time when the <code>BlockToken</code> expires.</p>
     */
    inline ListChangedBlocksResult& WithExpiryTime(const Aws::Utils::DateTime& value) { SetExpiryTime(value); return *this;}

    /**
     * <p>The time when the <code>BlockToken</code> expires.</p>
     */
    inline ListChangedBlocksResult& WithExpiryTime(Aws::Utils::DateTime&& value) { SetExpiryTime(std::move(value)); return *this;}


    /**
     * <p>The size of the volume in GB.</p>
     */
    inline long long GetVolumeSize() const{ return m_volumeSize; }

    /**
     * <p>The size of the volume in GB.</p>
     */
    inline void SetVolumeSize(long long value) { m_volumeSize = value; }

    /**
     * <p>The size of the volume in GB.</p>
     */
    inline ListChangedBlocksResult& WithVolumeSize(long long value) { SetVolumeSize(value); return *this;}


    /**
     * <p>The size of the blocks in the snapshot, in bytes.</p>
     */
    inline int GetBlockSize() const{ return m_blockSize; }

    /**
     * <p>The size of the blocks in the snapshot, in bytes.</p>
     */
    inline void SetBlockSize(int value) { m_blockSize = value; }

    /**
     * <p>The size of the blocks in the snapshot, in bytes.</p>
     */
    inline ListChangedBlocksResult& WithBlockSize(int value) { SetBlockSize(value); return *this;}


    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListChangedBlocksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListChangedBlocksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListChangedBlocksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ChangedBlock> m_changedBlocks;

    Aws::Utils::DateTime m_expiryTime;

    long long m_volumeSize;

    int m_blockSize;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace EBS
} // namespace Aws
