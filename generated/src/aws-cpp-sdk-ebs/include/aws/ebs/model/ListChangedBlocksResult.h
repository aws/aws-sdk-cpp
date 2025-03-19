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
    AWS_EBS_API ListChangedBlocksResult() = default;
    AWS_EBS_API ListChangedBlocksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EBS_API ListChangedBlocksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects containing information about the changed blocks.</p>
     */
    inline const Aws::Vector<ChangedBlock>& GetChangedBlocks() const { return m_changedBlocks; }
    template<typename ChangedBlocksT = Aws::Vector<ChangedBlock>>
    void SetChangedBlocks(ChangedBlocksT&& value) { m_changedBlocksHasBeenSet = true; m_changedBlocks = std::forward<ChangedBlocksT>(value); }
    template<typename ChangedBlocksT = Aws::Vector<ChangedBlock>>
    ListChangedBlocksResult& WithChangedBlocks(ChangedBlocksT&& value) { SetChangedBlocks(std::forward<ChangedBlocksT>(value)); return *this;}
    template<typename ChangedBlocksT = ChangedBlock>
    ListChangedBlocksResult& AddChangedBlocks(ChangedBlocksT&& value) { m_changedBlocksHasBeenSet = true; m_changedBlocks.emplace_back(std::forward<ChangedBlocksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time when the <code>BlockToken</code> expires.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiryTime() const { return m_expiryTime; }
    template<typename ExpiryTimeT = Aws::Utils::DateTime>
    void SetExpiryTime(ExpiryTimeT&& value) { m_expiryTimeHasBeenSet = true; m_expiryTime = std::forward<ExpiryTimeT>(value); }
    template<typename ExpiryTimeT = Aws::Utils::DateTime>
    ListChangedBlocksResult& WithExpiryTime(ExpiryTimeT&& value) { SetExpiryTime(std::forward<ExpiryTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the volume in GB.</p>
     */
    inline long long GetVolumeSize() const { return m_volumeSize; }
    inline void SetVolumeSize(long long value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }
    inline ListChangedBlocksResult& WithVolumeSize(long long value) { SetVolumeSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the blocks in the snapshot, in bytes.</p>
     */
    inline int GetBlockSize() const { return m_blockSize; }
    inline void SetBlockSize(int value) { m_blockSizeHasBeenSet = true; m_blockSize = value; }
    inline ListChangedBlocksResult& WithBlockSize(int value) { SetBlockSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListChangedBlocksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListChangedBlocksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ChangedBlock> m_changedBlocks;
    bool m_changedBlocksHasBeenSet = false;

    Aws::Utils::DateTime m_expiryTime{};
    bool m_expiryTimeHasBeenSet = false;

    long long m_volumeSize{0};
    bool m_volumeSizeHasBeenSet = false;

    int m_blockSize{0};
    bool m_blockSizeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EBS
} // namespace Aws
