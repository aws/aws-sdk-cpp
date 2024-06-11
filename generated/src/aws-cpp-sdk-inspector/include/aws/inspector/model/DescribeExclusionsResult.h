﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/Exclusion.h>
#include <aws/inspector/model/FailedItemDetails.h>
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
namespace Inspector
{
namespace Model
{
  class DescribeExclusionsResult
  {
  public:
    AWS_INSPECTOR_API DescribeExclusionsResult();
    AWS_INSPECTOR_API DescribeExclusionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API DescribeExclusionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the exclusions.</p>
     */
    inline const Aws::Map<Aws::String, Exclusion>& GetExclusions() const{ return m_exclusions; }
    inline void SetExclusions(const Aws::Map<Aws::String, Exclusion>& value) { m_exclusions = value; }
    inline void SetExclusions(Aws::Map<Aws::String, Exclusion>&& value) { m_exclusions = std::move(value); }
    inline DescribeExclusionsResult& WithExclusions(const Aws::Map<Aws::String, Exclusion>& value) { SetExclusions(value); return *this;}
    inline DescribeExclusionsResult& WithExclusions(Aws::Map<Aws::String, Exclusion>&& value) { SetExclusions(std::move(value)); return *this;}
    inline DescribeExclusionsResult& AddExclusions(const Aws::String& key, const Exclusion& value) { m_exclusions.emplace(key, value); return *this; }
    inline DescribeExclusionsResult& AddExclusions(Aws::String&& key, const Exclusion& value) { m_exclusions.emplace(std::move(key), value); return *this; }
    inline DescribeExclusionsResult& AddExclusions(const Aws::String& key, Exclusion&& value) { m_exclusions.emplace(key, std::move(value)); return *this; }
    inline DescribeExclusionsResult& AddExclusions(Aws::String&& key, Exclusion&& value) { m_exclusions.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeExclusionsResult& AddExclusions(const char* key, Exclusion&& value) { m_exclusions.emplace(key, std::move(value)); return *this; }
    inline DescribeExclusionsResult& AddExclusions(const char* key, const Exclusion& value) { m_exclusions.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Exclusion details that cannot be described. An error code is provided for
     * each failed item.</p>
     */
    inline const Aws::Map<Aws::String, FailedItemDetails>& GetFailedItems() const{ return m_failedItems; }
    inline void SetFailedItems(const Aws::Map<Aws::String, FailedItemDetails>& value) { m_failedItems = value; }
    inline void SetFailedItems(Aws::Map<Aws::String, FailedItemDetails>&& value) { m_failedItems = std::move(value); }
    inline DescribeExclusionsResult& WithFailedItems(const Aws::Map<Aws::String, FailedItemDetails>& value) { SetFailedItems(value); return *this;}
    inline DescribeExclusionsResult& WithFailedItems(Aws::Map<Aws::String, FailedItemDetails>&& value) { SetFailedItems(std::move(value)); return *this;}
    inline DescribeExclusionsResult& AddFailedItems(const Aws::String& key, const FailedItemDetails& value) { m_failedItems.emplace(key, value); return *this; }
    inline DescribeExclusionsResult& AddFailedItems(Aws::String&& key, const FailedItemDetails& value) { m_failedItems.emplace(std::move(key), value); return *this; }
    inline DescribeExclusionsResult& AddFailedItems(const Aws::String& key, FailedItemDetails&& value) { m_failedItems.emplace(key, std::move(value)); return *this; }
    inline DescribeExclusionsResult& AddFailedItems(Aws::String&& key, FailedItemDetails&& value) { m_failedItems.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeExclusionsResult& AddFailedItems(const char* key, FailedItemDetails&& value) { m_failedItems.emplace(key, std::move(value)); return *this; }
    inline DescribeExclusionsResult& AddFailedItems(const char* key, const FailedItemDetails& value) { m_failedItems.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeExclusionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeExclusionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeExclusionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Exclusion> m_exclusions;

    Aws::Map<Aws::String, FailedItemDetails> m_failedItems;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
