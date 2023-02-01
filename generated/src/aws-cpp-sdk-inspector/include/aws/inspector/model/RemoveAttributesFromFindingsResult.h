/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class RemoveAttributesFromFindingsResult
  {
  public:
    AWS_INSPECTOR_API RemoveAttributesFromFindingsResult();
    AWS_INSPECTOR_API RemoveAttributesFromFindingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API RemoveAttributesFromFindingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Attributes details that cannot be described. An error code is provided for
     * each failed item.</p>
     */
    inline const Aws::Map<Aws::String, FailedItemDetails>& GetFailedItems() const{ return m_failedItems; }

    /**
     * <p>Attributes details that cannot be described. An error code is provided for
     * each failed item.</p>
     */
    inline void SetFailedItems(const Aws::Map<Aws::String, FailedItemDetails>& value) { m_failedItems = value; }

    /**
     * <p>Attributes details that cannot be described. An error code is provided for
     * each failed item.</p>
     */
    inline void SetFailedItems(Aws::Map<Aws::String, FailedItemDetails>&& value) { m_failedItems = std::move(value); }

    /**
     * <p>Attributes details that cannot be described. An error code is provided for
     * each failed item.</p>
     */
    inline RemoveAttributesFromFindingsResult& WithFailedItems(const Aws::Map<Aws::String, FailedItemDetails>& value) { SetFailedItems(value); return *this;}

    /**
     * <p>Attributes details that cannot be described. An error code is provided for
     * each failed item.</p>
     */
    inline RemoveAttributesFromFindingsResult& WithFailedItems(Aws::Map<Aws::String, FailedItemDetails>&& value) { SetFailedItems(std::move(value)); return *this;}

    /**
     * <p>Attributes details that cannot be described. An error code is provided for
     * each failed item.</p>
     */
    inline RemoveAttributesFromFindingsResult& AddFailedItems(const Aws::String& key, const FailedItemDetails& value) { m_failedItems.emplace(key, value); return *this; }

    /**
     * <p>Attributes details that cannot be described. An error code is provided for
     * each failed item.</p>
     */
    inline RemoveAttributesFromFindingsResult& AddFailedItems(Aws::String&& key, const FailedItemDetails& value) { m_failedItems.emplace(std::move(key), value); return *this; }

    /**
     * <p>Attributes details that cannot be described. An error code is provided for
     * each failed item.</p>
     */
    inline RemoveAttributesFromFindingsResult& AddFailedItems(const Aws::String& key, FailedItemDetails&& value) { m_failedItems.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Attributes details that cannot be described. An error code is provided for
     * each failed item.</p>
     */
    inline RemoveAttributesFromFindingsResult& AddFailedItems(Aws::String&& key, FailedItemDetails&& value) { m_failedItems.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Attributes details that cannot be described. An error code is provided for
     * each failed item.</p>
     */
    inline RemoveAttributesFromFindingsResult& AddFailedItems(const char* key, FailedItemDetails&& value) { m_failedItems.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Attributes details that cannot be described. An error code is provided for
     * each failed item.</p>
     */
    inline RemoveAttributesFromFindingsResult& AddFailedItems(const char* key, const FailedItemDetails& value) { m_failedItems.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, FailedItemDetails> m_failedItems;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
