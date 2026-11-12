/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/FetchQuery.h>
#include <aws/guardduty/model/FetchResult.h>
#include <aws/guardduty/model/FetchType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains information about data that GuardDuty retrieved during an
 * investigation, including what GuardDuty requested and what it
 * received.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/FetchRecord">AWS
 * API Reference</a></p>
 */
class FetchRecord {
 public:
  AWS_GUARDDUTY_API FetchRecord() = default;
  AWS_GUARDDUTY_API FetchRecord(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API FetchRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The kind of data that GuardDuty retrieved. The value determines which members
   * of <code>Query</code> and <code>Result</code> can be set. Possible values:</p>
   * <ul> <li> <p> <code>FINDINGS</code> – GuardDuty findings.</p> </li> <li> <p>
   * <code>DETECTOR</code> – The configuration of a GuardDuty detector.</p> </li>
   * <li> <p> <code>REPUTATION</code> – Reputation information about a threat
   * indicator, such as an IP address, a domain, or a file hash.</p> </li> <li> <p>
   * <code>FINDING_TYPE_DOCUMENTATION</code> – The documentation for a finding
   * type.</p> </li> <li> <p> <code>CLOUD_TRAIL_RAW_EVENTS</code> – Amazon Web
   * Services CloudTrail events.</p> </li> <li> <p> <code>RUNTIME_SIGNALS</code> –
   * Runtime signals.</p> </li> <li> <p> <code>MEMBER_ACCOUNTS</code> – A list of
   * member accounts.</p> </li> </ul>
   */
  inline FetchType GetFetchType() const { return m_fetchType; }
  inline bool FetchTypeHasBeenSet() const { return m_fetchTypeHasBeenSet; }
  inline void SetFetchType(FetchType value) {
    m_fetchTypeHasBeenSet = true;
    m_fetchType = value;
  }
  inline FetchRecord& WithFetchType(FetchType value) {
    SetFetchType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The request that GuardDuty made. Not every record includes a query.</p>
   */
  inline const FetchQuery& GetQuery() const { return m_query; }
  inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }
  template <typename QueryT = FetchQuery>
  void SetQuery(QueryT&& value) {
    m_queryHasBeenSet = true;
    m_query = std::forward<QueryT>(value);
  }
  template <typename QueryT = FetchQuery>
  FetchRecord& WithQuery(QueryT&& value) {
    SetQuery(std::forward<QueryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data that GuardDuty received in response to the request. Not every record
   * includes a result.</p>
   */
  inline const FetchResult& GetResult() const { return m_result; }
  inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
  template <typename ResultT = FetchResult>
  void SetResult(ResultT&& value) {
    m_resultHasBeenSet = true;
    m_result = std::forward<ResultT>(value);
  }
  template <typename ResultT = FetchResult>
  FetchRecord& WithResult(ResultT&& value) {
    SetResult(std::forward<ResultT>(value));
    return *this;
  }
  ///@}
 private:
  FetchType m_fetchType{FetchType::NOT_SET};

  FetchQuery m_query;

  FetchResult m_result;
  bool m_fetchTypeHasBeenSet = false;
  bool m_queryHasBeenSet = false;
  bool m_resultHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
