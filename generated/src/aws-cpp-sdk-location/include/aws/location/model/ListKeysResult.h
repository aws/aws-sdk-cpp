/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/ListKeysResponseEntry.h>
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
namespace LocationService
{
namespace Model
{
  class ListKeysResult
  {
  public:
    AWS_LOCATIONSERVICE_API ListKeysResult();
    AWS_LOCATIONSERVICE_API ListKeysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API ListKeysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains API key resources in your Amazon Web Services account. Details
     * include API key name, allowed referers and timestamp for when the API key will
     * expire.</p>
     */
    inline const Aws::Vector<ListKeysResponseEntry>& GetEntries() const{ return m_entries; }

    /**
     * <p>Contains API key resources in your Amazon Web Services account. Details
     * include API key name, allowed referers and timestamp for when the API key will
     * expire.</p>
     */
    inline void SetEntries(const Aws::Vector<ListKeysResponseEntry>& value) { m_entries = value; }

    /**
     * <p>Contains API key resources in your Amazon Web Services account. Details
     * include API key name, allowed referers and timestamp for when the API key will
     * expire.</p>
     */
    inline void SetEntries(Aws::Vector<ListKeysResponseEntry>&& value) { m_entries = std::move(value); }

    /**
     * <p>Contains API key resources in your Amazon Web Services account. Details
     * include API key name, allowed referers and timestamp for when the API key will
     * expire.</p>
     */
    inline ListKeysResult& WithEntries(const Aws::Vector<ListKeysResponseEntry>& value) { SetEntries(value); return *this;}

    /**
     * <p>Contains API key resources in your Amazon Web Services account. Details
     * include API key name, allowed referers and timestamp for when the API key will
     * expire.</p>
     */
    inline ListKeysResult& WithEntries(Aws::Vector<ListKeysResponseEntry>&& value) { SetEntries(std::move(value)); return *this;}

    /**
     * <p>Contains API key resources in your Amazon Web Services account. Details
     * include API key name, allowed referers and timestamp for when the API key will
     * expire.</p>
     */
    inline ListKeysResult& AddEntries(const ListKeysResponseEntry& value) { m_entries.push_back(value); return *this; }

    /**
     * <p>Contains API key resources in your Amazon Web Services account. Details
     * include API key name, allowed referers and timestamp for when the API key will
     * expire.</p>
     */
    inline ListKeysResult& AddEntries(ListKeysResponseEntry&& value) { m_entries.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results. </p>
     */
    inline ListKeysResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results. </p>
     */
    inline ListKeysResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results. </p>
     */
    inline ListKeysResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListKeysResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListKeysResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListKeysResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ListKeysResponseEntry> m_entries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
