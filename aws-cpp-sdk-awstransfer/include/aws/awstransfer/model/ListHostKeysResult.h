/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/ListedHostKey.h>
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
namespace Transfer
{
namespace Model
{
  class ListHostKeysResult
  {
  public:
    AWS_TRANSFER_API ListHostKeysResult();
    AWS_TRANSFER_API ListHostKeysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API ListHostKeysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a token that you can use to call <code>ListHostKeys</code> again and
     * receive additional results, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Returns a token that you can use to call <code>ListHostKeys</code> again and
     * receive additional results, if there are any.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Returns a token that you can use to call <code>ListHostKeys</code> again and
     * receive additional results, if there are any.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Returns a token that you can use to call <code>ListHostKeys</code> again and
     * receive additional results, if there are any.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Returns a token that you can use to call <code>ListHostKeys</code> again and
     * receive additional results, if there are any.</p>
     */
    inline ListHostKeysResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Returns a token that you can use to call <code>ListHostKeys</code> again and
     * receive additional results, if there are any.</p>
     */
    inline ListHostKeysResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Returns a token that you can use to call <code>ListHostKeys</code> again and
     * receive additional results, if there are any.</p>
     */
    inline ListHostKeysResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Returns the server identifier that contains the listed host keys.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>Returns the server identifier that contains the listed host keys.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverId = value; }

    /**
     * <p>Returns the server identifier that contains the listed host keys.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverId = std::move(value); }

    /**
     * <p>Returns the server identifier that contains the listed host keys.</p>
     */
    inline void SetServerId(const char* value) { m_serverId.assign(value); }

    /**
     * <p>Returns the server identifier that contains the listed host keys.</p>
     */
    inline ListHostKeysResult& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>Returns the server identifier that contains the listed host keys.</p>
     */
    inline ListHostKeysResult& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>Returns the server identifier that contains the listed host keys.</p>
     */
    inline ListHostKeysResult& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>Returns an array, where each item contains the details of a host key.</p>
     */
    inline const Aws::Vector<ListedHostKey>& GetHostKeys() const{ return m_hostKeys; }

    /**
     * <p>Returns an array, where each item contains the details of a host key.</p>
     */
    inline void SetHostKeys(const Aws::Vector<ListedHostKey>& value) { m_hostKeys = value; }

    /**
     * <p>Returns an array, where each item contains the details of a host key.</p>
     */
    inline void SetHostKeys(Aws::Vector<ListedHostKey>&& value) { m_hostKeys = std::move(value); }

    /**
     * <p>Returns an array, where each item contains the details of a host key.</p>
     */
    inline ListHostKeysResult& WithHostKeys(const Aws::Vector<ListedHostKey>& value) { SetHostKeys(value); return *this;}

    /**
     * <p>Returns an array, where each item contains the details of a host key.</p>
     */
    inline ListHostKeysResult& WithHostKeys(Aws::Vector<ListedHostKey>&& value) { SetHostKeys(std::move(value)); return *this;}

    /**
     * <p>Returns an array, where each item contains the details of a host key.</p>
     */
    inline ListHostKeysResult& AddHostKeys(const ListedHostKey& value) { m_hostKeys.push_back(value); return *this; }

    /**
     * <p>Returns an array, where each item contains the details of a host key.</p>
     */
    inline ListHostKeysResult& AddHostKeys(ListedHostKey&& value) { m_hostKeys.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::String m_serverId;

    Aws::Vector<ListedHostKey> m_hostKeys;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
