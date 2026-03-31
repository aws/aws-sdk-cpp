/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/FrontOfQuotaShareJobSummary.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Batch {
namespace Model {

/**
 * <p>An object that represents the details of the first <code>RUNNABLE</code> job
 * in each named quota share associated with a single job queue.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/FrontOfQuotaSharesDetail">AWS
 * API Reference</a></p>
 */
class FrontOfQuotaSharesDetail {
 public:
  AWS_BATCH_API FrontOfQuotaSharesDetail() = default;
  AWS_BATCH_API FrontOfQuotaSharesDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API FrontOfQuotaSharesDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Contains a list of the first <code>RUNNABLE</code> job in each named quota
   * share.</p>
   */
  inline const Aws::Map<Aws::String, Aws::Vector<FrontOfQuotaShareJobSummary>>& GetQuotaShares() const { return m_quotaShares; }
  inline bool QuotaSharesHasBeenSet() const { return m_quotaSharesHasBeenSet; }
  template <typename QuotaSharesT = Aws::Map<Aws::String, Aws::Vector<FrontOfQuotaShareJobSummary>>>
  void SetQuotaShares(QuotaSharesT&& value) {
    m_quotaSharesHasBeenSet = true;
    m_quotaShares = std::forward<QuotaSharesT>(value);
  }
  template <typename QuotaSharesT = Aws::Map<Aws::String, Aws::Vector<FrontOfQuotaShareJobSummary>>>
  FrontOfQuotaSharesDetail& WithQuotaShares(QuotaSharesT&& value) {
    SetQuotaShares(std::forward<QuotaSharesT>(value));
    return *this;
  }
  template <typename QuotaSharesKeyT = Aws::String, typename QuotaSharesValueT = Aws::Vector<FrontOfQuotaShareJobSummary>>
  FrontOfQuotaSharesDetail& AddQuotaShares(QuotaSharesKeyT&& key, QuotaSharesValueT&& value) {
    m_quotaSharesHasBeenSet = true;
    m_quotaShares.emplace(std::forward<QuotaSharesKeyT>(key), std::forward<QuotaSharesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Unix timestamp (in milliseconds) for when the first <code>RUNNABLE</code>
   * job per quota share were all last updated.</p>
   */
  inline long long GetLastUpdatedAt() const { return m_lastUpdatedAt; }
  inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
  inline void SetLastUpdatedAt(long long value) {
    m_lastUpdatedAtHasBeenSet = true;
    m_lastUpdatedAt = value;
  }
  inline FrontOfQuotaSharesDetail& WithLastUpdatedAt(long long value) {
    SetLastUpdatedAt(value);
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::Vector<FrontOfQuotaShareJobSummary>> m_quotaShares;

  long long m_lastUpdatedAt{0};
  bool m_quotaSharesHasBeenSet = false;
  bool m_lastUpdatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
