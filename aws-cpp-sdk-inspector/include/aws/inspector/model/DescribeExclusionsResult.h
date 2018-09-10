/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_INSPECTOR_API DescribeExclusionsResult
  {
  public:
    DescribeExclusionsResult();
    DescribeExclusionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeExclusionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the exclusions.</p>
     */
    inline const Aws::Map<Aws::String, Exclusion>& GetExclusions() const{ return m_exclusions; }

    /**
     * <p>Information about the exclusions.</p>
     */
    inline void SetExclusions(const Aws::Map<Aws::String, Exclusion>& value) { m_exclusions = value; }

    /**
     * <p>Information about the exclusions.</p>
     */
    inline void SetExclusions(Aws::Map<Aws::String, Exclusion>&& value) { m_exclusions = std::move(value); }

    /**
     * <p>Information about the exclusions.</p>
     */
    inline DescribeExclusionsResult& WithExclusions(const Aws::Map<Aws::String, Exclusion>& value) { SetExclusions(value); return *this;}

    /**
     * <p>Information about the exclusions.</p>
     */
    inline DescribeExclusionsResult& WithExclusions(Aws::Map<Aws::String, Exclusion>&& value) { SetExclusions(std::move(value)); return *this;}

    /**
     * <p>Information about the exclusions.</p>
     */
    inline DescribeExclusionsResult& AddExclusions(const Aws::String& key, const Exclusion& value) { m_exclusions.emplace(key, value); return *this; }

    /**
     * <p>Information about the exclusions.</p>
     */
    inline DescribeExclusionsResult& AddExclusions(Aws::String&& key, const Exclusion& value) { m_exclusions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Information about the exclusions.</p>
     */
    inline DescribeExclusionsResult& AddExclusions(const Aws::String& key, Exclusion&& value) { m_exclusions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Information about the exclusions.</p>
     */
    inline DescribeExclusionsResult& AddExclusions(Aws::String&& key, Exclusion&& value) { m_exclusions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Information about the exclusions.</p>
     */
    inline DescribeExclusionsResult& AddExclusions(const char* key, Exclusion&& value) { m_exclusions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Information about the exclusions.</p>
     */
    inline DescribeExclusionsResult& AddExclusions(const char* key, const Exclusion& value) { m_exclusions.emplace(key, value); return *this; }


    /**
     * <p>Exclusion details that cannot be described. An error code is provided for
     * each failed item.</p>
     */
    inline const Aws::Map<Aws::String, FailedItemDetails>& GetFailedItems() const{ return m_failedItems; }

    /**
     * <p>Exclusion details that cannot be described. An error code is provided for
     * each failed item.</p>
     */
    inline void SetFailedItems(const Aws::Map<Aws::String, FailedItemDetails>& value) { m_failedItems = value; }

    /**
     * <p>Exclusion details that cannot be described. An error code is provided for
     * each failed item.</p>
     */
    inline void SetFailedItems(Aws::Map<Aws::String, FailedItemDetails>&& value) { m_failedItems = std::move(value); }

    /**
     * <p>Exclusion details that cannot be described. An error code is provided for
     * each failed item.</p>
     */
    inline DescribeExclusionsResult& WithFailedItems(const Aws::Map<Aws::String, FailedItemDetails>& value) { SetFailedItems(value); return *this;}

    /**
     * <p>Exclusion details that cannot be described. An error code is provided for
     * each failed item.</p>
     */
    inline DescribeExclusionsResult& WithFailedItems(Aws::Map<Aws::String, FailedItemDetails>&& value) { SetFailedItems(std::move(value)); return *this;}

    /**
     * <p>Exclusion details that cannot be described. An error code is provided for
     * each failed item.</p>
     */
    inline DescribeExclusionsResult& AddFailedItems(const Aws::String& key, const FailedItemDetails& value) { m_failedItems.emplace(key, value); return *this; }

    /**
     * <p>Exclusion details that cannot be described. An error code is provided for
     * each failed item.</p>
     */
    inline DescribeExclusionsResult& AddFailedItems(Aws::String&& key, const FailedItemDetails& value) { m_failedItems.emplace(std::move(key), value); return *this; }

    /**
     * <p>Exclusion details that cannot be described. An error code is provided for
     * each failed item.</p>
     */
    inline DescribeExclusionsResult& AddFailedItems(const Aws::String& key, FailedItemDetails&& value) { m_failedItems.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Exclusion details that cannot be described. An error code is provided for
     * each failed item.</p>
     */
    inline DescribeExclusionsResult& AddFailedItems(Aws::String&& key, FailedItemDetails&& value) { m_failedItems.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Exclusion details that cannot be described. An error code is provided for
     * each failed item.</p>
     */
    inline DescribeExclusionsResult& AddFailedItems(const char* key, FailedItemDetails&& value) { m_failedItems.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Exclusion details that cannot be described. An error code is provided for
     * each failed item.</p>
     */
    inline DescribeExclusionsResult& AddFailedItems(const char* key, const FailedItemDetails& value) { m_failedItems.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Exclusion> m_exclusions;

    Aws::Map<Aws::String, FailedItemDetails> m_failedItems;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
