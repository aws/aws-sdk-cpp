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
    AWS_IVSREALTIME_API ListPublicKeysResult();
    AWS_IVSREALTIME_API ListPublicKeysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API ListPublicKeysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of the matching public keys (summary information only).</p>
     */
    inline const Aws::Vector<PublicKeySummary>& GetPublicKeys() const{ return m_publicKeys; }
    inline void SetPublicKeys(const Aws::Vector<PublicKeySummary>& value) { m_publicKeys = value; }
    inline void SetPublicKeys(Aws::Vector<PublicKeySummary>&& value) { m_publicKeys = std::move(value); }
    inline ListPublicKeysResult& WithPublicKeys(const Aws::Vector<PublicKeySummary>& value) { SetPublicKeys(value); return *this;}
    inline ListPublicKeysResult& WithPublicKeys(Aws::Vector<PublicKeySummary>&& value) { SetPublicKeys(std::move(value)); return *this;}
    inline ListPublicKeysResult& AddPublicKeys(const PublicKeySummary& value) { m_publicKeys.push_back(value); return *this; }
    inline ListPublicKeysResult& AddPublicKeys(PublicKeySummary&& value) { m_publicKeys.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more public keys than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListPublicKeysResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPublicKeysResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPublicKeysResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPublicKeysResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPublicKeysResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPublicKeysResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<PublicKeySummary> m_publicKeys;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
