/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/StorageSystemListEntry.h>
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
namespace DataSync
{
namespace Model
{
  class ListStorageSystemsResult
  {
  public:
    AWS_DATASYNC_API ListStorageSystemsResult();
    AWS_DATASYNC_API ListStorageSystemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API ListStorageSystemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Names ARNs) of the on-premises storage systems that
     * you're using with DataSync Discovery.</p>
     */
    inline const Aws::Vector<StorageSystemListEntry>& GetStorageSystems() const{ return m_storageSystems; }

    /**
     * <p>The Amazon Resource Names ARNs) of the on-premises storage systems that
     * you're using with DataSync Discovery.</p>
     */
    inline void SetStorageSystems(const Aws::Vector<StorageSystemListEntry>& value) { m_storageSystems = value; }

    /**
     * <p>The Amazon Resource Names ARNs) of the on-premises storage systems that
     * you're using with DataSync Discovery.</p>
     */
    inline void SetStorageSystems(Aws::Vector<StorageSystemListEntry>&& value) { m_storageSystems = std::move(value); }

    /**
     * <p>The Amazon Resource Names ARNs) of the on-premises storage systems that
     * you're using with DataSync Discovery.</p>
     */
    inline ListStorageSystemsResult& WithStorageSystems(const Aws::Vector<StorageSystemListEntry>& value) { SetStorageSystems(value); return *this;}

    /**
     * <p>The Amazon Resource Names ARNs) of the on-premises storage systems that
     * you're using with DataSync Discovery.</p>
     */
    inline ListStorageSystemsResult& WithStorageSystems(Aws::Vector<StorageSystemListEntry>&& value) { SetStorageSystems(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names ARNs) of the on-premises storage systems that
     * you're using with DataSync Discovery.</p>
     */
    inline ListStorageSystemsResult& AddStorageSystems(const StorageSystemListEntry& value) { m_storageSystems.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names ARNs) of the on-premises storage systems that
     * you're using with DataSync Discovery.</p>
     */
    inline ListStorageSystemsResult& AddStorageSystems(StorageSystemListEntry&& value) { m_storageSystems.push_back(std::move(value)); return *this; }


    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline ListStorageSystemsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline ListStorageSystemsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline ListStorageSystemsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListStorageSystemsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListStorageSystemsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListStorageSystemsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<StorageSystemListEntry> m_storageSystems;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
