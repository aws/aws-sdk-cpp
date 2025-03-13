/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs/model/PlaybackKeyPairSummary.h>
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
  class ListPlaybackKeyPairsResult
  {
  public:
    AWS_IVS_API ListPlaybackKeyPairsResult() = default;
    AWS_IVS_API ListPlaybackKeyPairsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVS_API ListPlaybackKeyPairsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of key pairs.</p>
     */
    inline const Aws::Vector<PlaybackKeyPairSummary>& GetKeyPairs() const { return m_keyPairs; }
    template<typename KeyPairsT = Aws::Vector<PlaybackKeyPairSummary>>
    void SetKeyPairs(KeyPairsT&& value) { m_keyPairsHasBeenSet = true; m_keyPairs = std::forward<KeyPairsT>(value); }
    template<typename KeyPairsT = Aws::Vector<PlaybackKeyPairSummary>>
    ListPlaybackKeyPairsResult& WithKeyPairs(KeyPairsT&& value) { SetKeyPairs(std::forward<KeyPairsT>(value)); return *this;}
    template<typename KeyPairsT = PlaybackKeyPairSummary>
    ListPlaybackKeyPairsResult& AddKeyPairs(KeyPairsT&& value) { m_keyPairsHasBeenSet = true; m_keyPairs.emplace_back(std::forward<KeyPairsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more key pairs than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPlaybackKeyPairsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPlaybackKeyPairsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PlaybackKeyPairSummary> m_keyPairs;
    bool m_keyPairsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
