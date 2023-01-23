/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/KeyPair.h>
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
namespace Lightsail
{
namespace Model
{
  class GetKeyPairsResult
  {
  public:
    AWS_LIGHTSAIL_API GetKeyPairsResult();
    AWS_LIGHTSAIL_API GetKeyPairsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetKeyPairsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of key-value pairs containing information about the key pairs.</p>
     */
    inline const Aws::Vector<KeyPair>& GetKeyPairs() const{ return m_keyPairs; }

    /**
     * <p>An array of key-value pairs containing information about the key pairs.</p>
     */
    inline void SetKeyPairs(const Aws::Vector<KeyPair>& value) { m_keyPairs = value; }

    /**
     * <p>An array of key-value pairs containing information about the key pairs.</p>
     */
    inline void SetKeyPairs(Aws::Vector<KeyPair>&& value) { m_keyPairs = std::move(value); }

    /**
     * <p>An array of key-value pairs containing information about the key pairs.</p>
     */
    inline GetKeyPairsResult& WithKeyPairs(const Aws::Vector<KeyPair>& value) { SetKeyPairs(value); return *this;}

    /**
     * <p>An array of key-value pairs containing information about the key pairs.</p>
     */
    inline GetKeyPairsResult& WithKeyPairs(Aws::Vector<KeyPair>&& value) { SetKeyPairs(std::move(value)); return *this;}

    /**
     * <p>An array of key-value pairs containing information about the key pairs.</p>
     */
    inline GetKeyPairsResult& AddKeyPairs(const KeyPair& value) { m_keyPairs.push_back(value); return *this; }

    /**
     * <p>An array of key-value pairs containing information about the key pairs.</p>
     */
    inline GetKeyPairsResult& AddKeyPairs(KeyPair&& value) { m_keyPairs.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetKeyPairs</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetKeyPairs</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetKeyPairs</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetKeyPairs</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetKeyPairs</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline GetKeyPairsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetKeyPairs</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline GetKeyPairsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetKeyPairs</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline GetKeyPairsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<KeyPair> m_keyPairs;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
