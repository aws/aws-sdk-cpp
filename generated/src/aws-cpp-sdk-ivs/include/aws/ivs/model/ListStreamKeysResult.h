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
    AWS_IVS_API ListStreamKeysResult();
    AWS_IVS_API ListStreamKeysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVS_API ListStreamKeysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If there are more stream keys than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are more stream keys than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are more stream keys than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are more stream keys than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are more stream keys than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline ListStreamKeysResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are more stream keys than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline ListStreamKeysResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are more stream keys than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline ListStreamKeysResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>List of stream keys.</p>
     */
    inline const Aws::Vector<StreamKeySummary>& GetStreamKeys() const{ return m_streamKeys; }

    /**
     * <p>List of stream keys.</p>
     */
    inline void SetStreamKeys(const Aws::Vector<StreamKeySummary>& value) { m_streamKeys = value; }

    /**
     * <p>List of stream keys.</p>
     */
    inline void SetStreamKeys(Aws::Vector<StreamKeySummary>&& value) { m_streamKeys = std::move(value); }

    /**
     * <p>List of stream keys.</p>
     */
    inline ListStreamKeysResult& WithStreamKeys(const Aws::Vector<StreamKeySummary>& value) { SetStreamKeys(value); return *this;}

    /**
     * <p>List of stream keys.</p>
     */
    inline ListStreamKeysResult& WithStreamKeys(Aws::Vector<StreamKeySummary>&& value) { SetStreamKeys(std::move(value)); return *this;}

    /**
     * <p>List of stream keys.</p>
     */
    inline ListStreamKeysResult& AddStreamKeys(const StreamKeySummary& value) { m_streamKeys.push_back(value); return *this; }

    /**
     * <p>List of stream keys.</p>
     */
    inline ListStreamKeysResult& AddStreamKeys(StreamKeySummary&& value) { m_streamKeys.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<StreamKeySummary> m_streamKeys;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
