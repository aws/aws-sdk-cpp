/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/query-protocol/QueryProtocolRequest.h>
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace QueryProtocol {
namespace Model {

/**
 */
class QueryTimestampsRequest : public QueryProtocolRequest {
 public:
  AWS_QUERYPROTOCOL_API QueryTimestampsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "QueryTimestamps"; }

  AWS_QUERYPROTOCOL_API Aws::String SerializePayload() const override;

 protected:
  AWS_QUERYPROTOCOL_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{

  inline const Aws::Utils::DateTime& GetNormalFormat() const { return m_normalFormat; }
  inline bool NormalFormatHasBeenSet() const { return m_normalFormatHasBeenSet; }
  template <typename NormalFormatT = Aws::Utils::DateTime>
  void SetNormalFormat(NormalFormatT&& value) {
    m_normalFormatHasBeenSet = true;
    m_normalFormat = std::forward<NormalFormatT>(value);
  }
  template <typename NormalFormatT = Aws::Utils::DateTime>
  QueryTimestampsRequest& WithNormalFormat(NormalFormatT&& value) {
    SetNormalFormat(std::forward<NormalFormatT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetEpochMember() const { return m_epochMember; }
  inline bool EpochMemberHasBeenSet() const { return m_epochMemberHasBeenSet; }
  template <typename EpochMemberT = Aws::Utils::DateTime>
  void SetEpochMember(EpochMemberT&& value) {
    m_epochMemberHasBeenSet = true;
    m_epochMember = std::forward<EpochMemberT>(value);
  }
  template <typename EpochMemberT = Aws::Utils::DateTime>
  QueryTimestampsRequest& WithEpochMember(EpochMemberT&& value) {
    SetEpochMember(std::forward<EpochMemberT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetEpochTarget() const { return m_epochTarget; }
  inline bool EpochTargetHasBeenSet() const { return m_epochTargetHasBeenSet; }
  template <typename EpochTargetT = Aws::Utils::DateTime>
  void SetEpochTarget(EpochTargetT&& value) {
    m_epochTargetHasBeenSet = true;
    m_epochTarget = std::forward<EpochTargetT>(value);
  }
  template <typename EpochTargetT = Aws::Utils::DateTime>
  QueryTimestampsRequest& WithEpochTarget(EpochTargetT&& value) {
    SetEpochTarget(std::forward<EpochTargetT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_normalFormat{};
  bool m_normalFormatHasBeenSet = false;

  Aws::Utils::DateTime m_epochMember{};
  bool m_epochMemberHasBeenSet = false;

  Aws::Utils::DateTime m_epochTarget{};
  bool m_epochTargetHasBeenSet = false;
};

}  // namespace Model
}  // namespace QueryProtocol
}  // namespace Aws
