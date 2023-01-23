/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/inspector/model/Finding.h>
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
  class DescribeFindingsResult
  {
  public:
    AWS_INSPECTOR_API DescribeFindingsResult();
    AWS_INSPECTOR_API DescribeFindingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API DescribeFindingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the finding.</p>
     */
    inline const Aws::Vector<Finding>& GetFindings() const{ return m_findings; }

    /**
     * <p>Information about the finding.</p>
     */
    inline void SetFindings(const Aws::Vector<Finding>& value) { m_findings = value; }

    /**
     * <p>Information about the finding.</p>
     */
    inline void SetFindings(Aws::Vector<Finding>&& value) { m_findings = std::move(value); }

    /**
     * <p>Information about the finding.</p>
     */
    inline DescribeFindingsResult& WithFindings(const Aws::Vector<Finding>& value) { SetFindings(value); return *this;}

    /**
     * <p>Information about the finding.</p>
     */
    inline DescribeFindingsResult& WithFindings(Aws::Vector<Finding>&& value) { SetFindings(std::move(value)); return *this;}

    /**
     * <p>Information about the finding.</p>
     */
    inline DescribeFindingsResult& AddFindings(const Finding& value) { m_findings.push_back(value); return *this; }

    /**
     * <p>Information about the finding.</p>
     */
    inline DescribeFindingsResult& AddFindings(Finding&& value) { m_findings.push_back(std::move(value)); return *this; }


    /**
     * <p>Finding details that cannot be described. An error code is provided for each
     * failed item.</p>
     */
    inline const Aws::Map<Aws::String, FailedItemDetails>& GetFailedItems() const{ return m_failedItems; }

    /**
     * <p>Finding details that cannot be described. An error code is provided for each
     * failed item.</p>
     */
    inline void SetFailedItems(const Aws::Map<Aws::String, FailedItemDetails>& value) { m_failedItems = value; }

    /**
     * <p>Finding details that cannot be described. An error code is provided for each
     * failed item.</p>
     */
    inline void SetFailedItems(Aws::Map<Aws::String, FailedItemDetails>&& value) { m_failedItems = std::move(value); }

    /**
     * <p>Finding details that cannot be described. An error code is provided for each
     * failed item.</p>
     */
    inline DescribeFindingsResult& WithFailedItems(const Aws::Map<Aws::String, FailedItemDetails>& value) { SetFailedItems(value); return *this;}

    /**
     * <p>Finding details that cannot be described. An error code is provided for each
     * failed item.</p>
     */
    inline DescribeFindingsResult& WithFailedItems(Aws::Map<Aws::String, FailedItemDetails>&& value) { SetFailedItems(std::move(value)); return *this;}

    /**
     * <p>Finding details that cannot be described. An error code is provided for each
     * failed item.</p>
     */
    inline DescribeFindingsResult& AddFailedItems(const Aws::String& key, const FailedItemDetails& value) { m_failedItems.emplace(key, value); return *this; }

    /**
     * <p>Finding details that cannot be described. An error code is provided for each
     * failed item.</p>
     */
    inline DescribeFindingsResult& AddFailedItems(Aws::String&& key, const FailedItemDetails& value) { m_failedItems.emplace(std::move(key), value); return *this; }

    /**
     * <p>Finding details that cannot be described. An error code is provided for each
     * failed item.</p>
     */
    inline DescribeFindingsResult& AddFailedItems(const Aws::String& key, FailedItemDetails&& value) { m_failedItems.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Finding details that cannot be described. An error code is provided for each
     * failed item.</p>
     */
    inline DescribeFindingsResult& AddFailedItems(Aws::String&& key, FailedItemDetails&& value) { m_failedItems.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Finding details that cannot be described. An error code is provided for each
     * failed item.</p>
     */
    inline DescribeFindingsResult& AddFailedItems(const char* key, FailedItemDetails&& value) { m_failedItems.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Finding details that cannot be described. An error code is provided for each
     * failed item.</p>
     */
    inline DescribeFindingsResult& AddFailedItems(const char* key, const FailedItemDetails& value) { m_failedItems.emplace(key, value); return *this; }

  private:

    Aws::Vector<Finding> m_findings;

    Aws::Map<Aws::String, FailedItemDetails> m_failedItems;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
