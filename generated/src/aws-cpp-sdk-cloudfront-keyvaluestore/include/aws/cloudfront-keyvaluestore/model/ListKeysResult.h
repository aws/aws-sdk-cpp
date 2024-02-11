/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront-keyvaluestore/model/ListKeysResponseListItem.h>
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
namespace CloudFrontKeyValueStore
{
namespace Model
{
  class ListKeysResult
  {
  public:
    AWS_CLOUDFRONTKEYVALUESTORE_API ListKeysResult();
    AWS_CLOUDFRONTKEYVALUESTORE_API ListKeysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDFRONTKEYVALUESTORE_API ListKeysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If nextToken is returned in the response, there are more results available.
     * Make the next call using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If nextToken is returned in the response, there are more results available.
     * Make the next call using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If nextToken is returned in the response, there are more results available.
     * Make the next call using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If nextToken is returned in the response, there are more results available.
     * Make the next call using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If nextToken is returned in the response, there are more results available.
     * Make the next call using the returned token to retrieve the next page.</p>
     */
    inline ListKeysResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If nextToken is returned in the response, there are more results available.
     * Make the next call using the returned token to retrieve the next page.</p>
     */
    inline ListKeysResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If nextToken is returned in the response, there are more results available.
     * Make the next call using the returned token to retrieve the next page.</p>
     */
    inline ListKeysResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Key value pairs</p>
     */
    inline const Aws::Vector<ListKeysResponseListItem>& GetItems() const{ return m_items; }

    /**
     * <p>Key value pairs</p>
     */
    inline void SetItems(const Aws::Vector<ListKeysResponseListItem>& value) { m_items = value; }

    /**
     * <p>Key value pairs</p>
     */
    inline void SetItems(Aws::Vector<ListKeysResponseListItem>&& value) { m_items = std::move(value); }

    /**
     * <p>Key value pairs</p>
     */
    inline ListKeysResult& WithItems(const Aws::Vector<ListKeysResponseListItem>& value) { SetItems(value); return *this;}

    /**
     * <p>Key value pairs</p>
     */
    inline ListKeysResult& WithItems(Aws::Vector<ListKeysResponseListItem>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Key value pairs</p>
     */
    inline ListKeysResult& AddItems(const ListKeysResponseListItem& value) { m_items.push_back(value); return *this; }

    /**
     * <p>Key value pairs</p>
     */
    inline ListKeysResult& AddItems(ListKeysResponseListItem&& value) { m_items.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListKeysResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListKeysResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListKeysResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ListKeysResponseListItem> m_items;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudFrontKeyValueStore
} // namespace Aws
