/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/model/PublicKeySummary.h>
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
namespace ivsrealtime
{
namespace Model
{
  class ListPublicKeysResult
  {
  public:
    AWS_IVSREALTIME_API ListPublicKeysResult() = default;
    AWS_IVSREALTIME_API ListPublicKeysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API ListPublicKeysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of the matching public keys (summary information only).</p>
     */
    inline const Aws::Vector<PublicKeySummary>& GetPublicKeys() const { return m_publicKeys; }
    template<typename PublicKeysT = Aws::Vector<PublicKeySummary>>
    void SetPublicKeys(PublicKeysT&& value) { m_publicKeysHasBeenSet = true; m_publicKeys = std::forward<PublicKeysT>(value); }
    template<typename PublicKeysT = Aws::Vector<PublicKeySummary>>
    ListPublicKeysResult& WithPublicKeys(PublicKeysT&& value) { SetPublicKeys(std::forward<PublicKeysT>(value)); return *this;}
    template<typename PublicKeysT = PublicKeySummary>
    ListPublicKeysResult& AddPublicKeys(PublicKeysT&& value) { m_publicKeysHasBeenSet = true; m_publicKeys.emplace_back(std::forward<PublicKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more public keys than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPublicKeysResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPublicKeysResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PublicKeySummary> m_publicKeys;
    bool m_publicKeysHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
