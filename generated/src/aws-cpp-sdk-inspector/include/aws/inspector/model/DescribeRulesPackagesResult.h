/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/RulesPackage.h>
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
  class DescribeRulesPackagesResult
  {
  public:
    AWS_INSPECTOR_API DescribeRulesPackagesResult() = default;
    AWS_INSPECTOR_API DescribeRulesPackagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API DescribeRulesPackagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the rules package.</p>
     */
    inline const Aws::Vector<RulesPackage>& GetRulesPackages() const { return m_rulesPackages; }
    template<typename RulesPackagesT = Aws::Vector<RulesPackage>>
    void SetRulesPackages(RulesPackagesT&& value) { m_rulesPackagesHasBeenSet = true; m_rulesPackages = std::forward<RulesPackagesT>(value); }
    template<typename RulesPackagesT = Aws::Vector<RulesPackage>>
    DescribeRulesPackagesResult& WithRulesPackages(RulesPackagesT&& value) { SetRulesPackages(std::forward<RulesPackagesT>(value)); return *this;}
    template<typename RulesPackagesT = RulesPackage>
    DescribeRulesPackagesResult& AddRulesPackages(RulesPackagesT&& value) { m_rulesPackagesHasBeenSet = true; m_rulesPackages.emplace_back(std::forward<RulesPackagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Rules package details that cannot be described. An error code is provided for
     * each failed item.</p>
     */
    inline const Aws::Map<Aws::String, FailedItemDetails>& GetFailedItems() const { return m_failedItems; }
    template<typename FailedItemsT = Aws::Map<Aws::String, FailedItemDetails>>
    void SetFailedItems(FailedItemsT&& value) { m_failedItemsHasBeenSet = true; m_failedItems = std::forward<FailedItemsT>(value); }
    template<typename FailedItemsT = Aws::Map<Aws::String, FailedItemDetails>>
    DescribeRulesPackagesResult& WithFailedItems(FailedItemsT&& value) { SetFailedItems(std::forward<FailedItemsT>(value)); return *this;}
    template<typename FailedItemsKeyT = Aws::String, typename FailedItemsValueT = FailedItemDetails>
    DescribeRulesPackagesResult& AddFailedItems(FailedItemsKeyT&& key, FailedItemsValueT&& value) {
      m_failedItemsHasBeenSet = true; m_failedItems.emplace(std::forward<FailedItemsKeyT>(key), std::forward<FailedItemsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRulesPackagesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RulesPackage> m_rulesPackages;
    bool m_rulesPackagesHasBeenSet = false;

    Aws::Map<Aws::String, FailedItemDetails> m_failedItems;
    bool m_failedItemsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
