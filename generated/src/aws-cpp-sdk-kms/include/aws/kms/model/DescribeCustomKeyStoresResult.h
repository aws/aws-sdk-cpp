﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/model/CustomKeyStoresListEntry.h>
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
namespace KMS
{
namespace Model
{
  class DescribeCustomKeyStoresResult
  {
  public:
    AWS_KMS_API DescribeCustomKeyStoresResult();
    AWS_KMS_API DescribeCustomKeyStoresResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API DescribeCustomKeyStoresResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains metadata about each custom key store.</p>
     */
    inline const Aws::Vector<CustomKeyStoresListEntry>& GetCustomKeyStores() const{ return m_customKeyStores; }
    inline void SetCustomKeyStores(const Aws::Vector<CustomKeyStoresListEntry>& value) { m_customKeyStores = value; }
    inline void SetCustomKeyStores(Aws::Vector<CustomKeyStoresListEntry>&& value) { m_customKeyStores = std::move(value); }
    inline DescribeCustomKeyStoresResult& WithCustomKeyStores(const Aws::Vector<CustomKeyStoresListEntry>& value) { SetCustomKeyStores(value); return *this;}
    inline DescribeCustomKeyStoresResult& WithCustomKeyStores(Aws::Vector<CustomKeyStoresListEntry>&& value) { SetCustomKeyStores(std::move(value)); return *this;}
    inline DescribeCustomKeyStoresResult& AddCustomKeyStores(const CustomKeyStoresListEntry& value) { m_customKeyStores.push_back(value); return *this; }
    inline DescribeCustomKeyStoresResult& AddCustomKeyStores(CustomKeyStoresListEntry&& value) { m_customKeyStores.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When <code>Truncated</code> is true, this element is present and contains the
     * value to use for the <code>Marker</code> parameter in a subsequent request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }
    inline DescribeCustomKeyStoresResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}
    inline DescribeCustomKeyStoresResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}
    inline DescribeCustomKeyStoresResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that indicates whether there are more items in the list. When this
     * value is true, the list in this response is truncated. To get more items, pass
     * the value of the <code>NextMarker</code> element in this response to the
     * <code>Marker</code> parameter in a subsequent request.</p>
     */
    inline bool GetTruncated() const{ return m_truncated; }
    inline void SetTruncated(bool value) { m_truncated = value; }
    inline DescribeCustomKeyStoresResult& WithTruncated(bool value) { SetTruncated(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeCustomKeyStoresResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeCustomKeyStoresResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeCustomKeyStoresResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CustomKeyStoresListEntry> m_customKeyStores;

    Aws::String m_nextMarker;

    bool m_truncated;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
