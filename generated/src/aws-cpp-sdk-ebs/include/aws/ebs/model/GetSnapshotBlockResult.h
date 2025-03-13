/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ebs/EBS_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ebs/model/ChecksumAlgorithm.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace EBS
{
namespace Model
{
  class GetSnapshotBlockResult
  {
  public:
    AWS_EBS_API GetSnapshotBlockResult() = default;
    AWS_EBS_API GetSnapshotBlockResult(GetSnapshotBlockResult&&) = default;
    AWS_EBS_API GetSnapshotBlockResult& operator=(GetSnapshotBlockResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetSnapshotBlockResult(const GetSnapshotBlockResult&) = delete;
    GetSnapshotBlockResult& operator=(const GetSnapshotBlockResult&) = delete;


    AWS_EBS_API GetSnapshotBlockResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_EBS_API GetSnapshotBlockResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>The size of the data in the block.</p>
     */
    inline int GetDataLength() const { return m_dataLength; }
    inline void SetDataLength(int value) { m_dataLengthHasBeenSet = true; m_dataLength = value; }
    inline GetSnapshotBlockResult& WithDataLength(int value) { SetDataLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data content of the block.</p>
     */
    inline Aws::IOStream& GetBlockData() const { return m_blockData.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_blockData = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    /**
     * <p>The checksum generated for the block, which is Base64 encoded.</p>
     */
    inline const Aws::String& GetChecksum() const { return m_checksum; }
    template<typename ChecksumT = Aws::String>
    void SetChecksum(ChecksumT&& value) { m_checksumHasBeenSet = true; m_checksum = std::forward<ChecksumT>(value); }
    template<typename ChecksumT = Aws::String>
    GetSnapshotBlockResult& WithChecksum(ChecksumT&& value) { SetChecksum(std::forward<ChecksumT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm used to generate the checksum for the block, such as
     * SHA256.</p>
     */
    inline ChecksumAlgorithm GetChecksumAlgorithm() const { return m_checksumAlgorithm; }
    inline void SetChecksumAlgorithm(ChecksumAlgorithm value) { m_checksumAlgorithmHasBeenSet = true; m_checksumAlgorithm = value; }
    inline GetSnapshotBlockResult& WithChecksumAlgorithm(ChecksumAlgorithm value) { SetChecksumAlgorithm(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSnapshotBlockResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_dataLength{0};
    bool m_dataLengthHasBeenSet = false;

    Aws::Utils::Stream::ResponseStream m_blockData{};
    bool m_blockDataHasBeenSet = false;

    Aws::String m_checksum;
    bool m_checksumHasBeenSet = false;

    ChecksumAlgorithm m_checksumAlgorithm{ChecksumAlgorithm::NOT_SET};
    bool m_checksumAlgorithmHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EBS
} // namespace Aws
