/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/StreamKey.h>
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
namespace IVS
{
namespace Model
{
  class CreateStreamKeyResult
  {
  public:
    AWS_IVS_API CreateStreamKeyResult() = default;
    AWS_IVS_API CreateStreamKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVS_API CreateStreamKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Stream key used to authenticate an RTMPS stream for ingestion.</p>
     */
    inline const StreamKey& GetStreamKey() const { return m_streamKey; }
    template<typename StreamKeyT = StreamKey>
    void SetStreamKey(StreamKeyT&& value) { m_streamKeyHasBeenSet = true; m_streamKey = std::forward<StreamKeyT>(value); }
    template<typename StreamKeyT = StreamKey>
    CreateStreamKeyResult& WithStreamKey(StreamKeyT&& value) { SetStreamKey(std::forward<StreamKeyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateStreamKeyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    StreamKey m_streamKey;
    bool m_streamKeyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
