/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/ApiKey.h>
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
namespace AppSync
{
namespace Model
{
  class ListApiKeysResult
  {
  public:
    AWS_APPSYNC_API ListApiKeysResult();
    AWS_APPSYNC_API ListApiKeysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API ListApiKeysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>ApiKey</code> objects.</p>
     */
    inline const Aws::Vector<ApiKey>& GetApiKeys() const{ return m_apiKeys; }

    /**
     * <p>The <code>ApiKey</code> objects.</p>
     */
    inline void SetApiKeys(const Aws::Vector<ApiKey>& value) { m_apiKeys = value; }

    /**
     * <p>The <code>ApiKey</code> objects.</p>
     */
    inline void SetApiKeys(Aws::Vector<ApiKey>&& value) { m_apiKeys = std::move(value); }

    /**
     * <p>The <code>ApiKey</code> objects.</p>
     */
    inline ListApiKeysResult& WithApiKeys(const Aws::Vector<ApiKey>& value) { SetApiKeys(value); return *this;}

    /**
     * <p>The <code>ApiKey</code> objects.</p>
     */
    inline ListApiKeysResult& WithApiKeys(Aws::Vector<ApiKey>&& value) { SetApiKeys(std::move(value)); return *this;}

    /**
     * <p>The <code>ApiKey</code> objects.</p>
     */
    inline ListApiKeysResult& AddApiKeys(const ApiKey& value) { m_apiKeys.push_back(value); return *this; }

    /**
     * <p>The <code>ApiKey</code> objects.</p>
     */
    inline ListApiKeysResult& AddApiKeys(ApiKey&& value) { m_apiKeys.push_back(std::move(value)); return *this; }


    /**
     * <p>An identifier to pass in the next request to this operation to return the
     * next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier to pass in the next request to this operation to return the
     * next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An identifier to pass in the next request to this operation to return the
     * next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An identifier to pass in the next request to this operation to return the
     * next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An identifier to pass in the next request to this operation to return the
     * next set of items in the list.</p>
     */
    inline ListApiKeysResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier to pass in the next request to this operation to return the
     * next set of items in the list.</p>
     */
    inline ListApiKeysResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier to pass in the next request to this operation to return the
     * next set of items in the list.</p>
     */
    inline ListApiKeysResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ApiKey> m_apiKeys;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
