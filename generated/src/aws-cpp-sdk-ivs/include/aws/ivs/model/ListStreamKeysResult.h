/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ivs/model/StreamKeySummary.h>
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
  class ListStreamKeysResult
  {
  public:
    AWS_IVS_API ListStreamKeysResult() = default;
    AWS_IVS_API ListStreamKeysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVS_API ListStreamKeysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are more stream keys than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListStreamKeysResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of stream keys.</p>
     */
    inline const Aws::Vector<StreamKeySummary>& GetStreamKeys() const { return m_streamKeys; }
    template<typename StreamKeysT = Aws::Vector<StreamKeySummary>>
    void SetStreamKeys(StreamKeysT&& value) { m_streamKeysHasBeenSet = true; m_streamKeys = std::forward<StreamKeysT>(value); }
    template<typename StreamKeysT = Aws::Vector<StreamKeySummary>>
    ListStreamKeysResult& WithStreamKeys(StreamKeysT&& value) { SetStreamKeys(std::forward<StreamKeysT>(value)); return *this;}
    template<typename StreamKeysT = StreamKeySummary>
    ListStreamKeysResult& AddStreamKeys(StreamKeysT&& value) { m_streamKeysHasBeenSet = true; m_streamKeys.emplace_back(std::forward<StreamKeysT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListStreamKeysResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<StreamKeySummary> m_streamKeys;
    bool m_streamKeysHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
