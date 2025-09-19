/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace RestXmlProtocol {
namespace Model {

/**
 */
class TimestampFormatHeadersRequest : public RestXmlProtocolRequest {
 public:
  AWS_RESTXMLPROTOCOL_API TimestampFormatHeadersRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "TimestampFormatHeaders"; }

  AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;

  AWS_RESTXMLPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{

  inline const Aws::Utils::DateTime& GetMemberEpochSeconds() const { return m_memberEpochSeconds; }
  inline bool MemberEpochSecondsHasBeenSet() const { return m_memberEpochSecondsHasBeenSet; }
  template <typename MemberEpochSecondsT = Aws::Utils::DateTime>
  void SetMemberEpochSeconds(MemberEpochSecondsT&& value) {
    m_memberEpochSecondsHasBeenSet = true;
    m_memberEpochSeconds = std::forward<MemberEpochSecondsT>(value);
  }
  template <typename MemberEpochSecondsT = Aws::Utils::DateTime>
  TimestampFormatHeadersRequest& WithMemberEpochSeconds(MemberEpochSecondsT&& value) {
    SetMemberEpochSeconds(std::forward<MemberEpochSecondsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetMemberHttpDate() const { return m_memberHttpDate; }
  inline bool MemberHttpDateHasBeenSet() const { return m_memberHttpDateHasBeenSet; }
  template <typename MemberHttpDateT = Aws::Utils::DateTime>
  void SetMemberHttpDate(MemberHttpDateT&& value) {
    m_memberHttpDateHasBeenSet = true;
    m_memberHttpDate = std::forward<MemberHttpDateT>(value);
  }
  template <typename MemberHttpDateT = Aws::Utils::DateTime>
  TimestampFormatHeadersRequest& WithMemberHttpDate(MemberHttpDateT&& value) {
    SetMemberHttpDate(std::forward<MemberHttpDateT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetMemberDateTime() const { return m_memberDateTime; }
  inline bool MemberDateTimeHasBeenSet() const { return m_memberDateTimeHasBeenSet; }
  template <typename MemberDateTimeT = Aws::Utils::DateTime>
  void SetMemberDateTime(MemberDateTimeT&& value) {
    m_memberDateTimeHasBeenSet = true;
    m_memberDateTime = std::forward<MemberDateTimeT>(value);
  }
  template <typename MemberDateTimeT = Aws::Utils::DateTime>
  TimestampFormatHeadersRequest& WithMemberDateTime(MemberDateTimeT&& value) {
    SetMemberDateTime(std::forward<MemberDateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetDefaultFormat() const { return m_defaultFormat; }
  inline bool DefaultFormatHasBeenSet() const { return m_defaultFormatHasBeenSet; }
  template <typename DefaultFormatT = Aws::Utils::DateTime>
  void SetDefaultFormat(DefaultFormatT&& value) {
    m_defaultFormatHasBeenSet = true;
    m_defaultFormat = std::forward<DefaultFormatT>(value);
  }
  template <typename DefaultFormatT = Aws::Utils::DateTime>
  TimestampFormatHeadersRequest& WithDefaultFormat(DefaultFormatT&& value) {
    SetDefaultFormat(std::forward<DefaultFormatT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetTargetEpochSeconds() const { return m_targetEpochSeconds; }
  inline bool TargetEpochSecondsHasBeenSet() const { return m_targetEpochSecondsHasBeenSet; }
  template <typename TargetEpochSecondsT = Aws::Utils::DateTime>
  void SetTargetEpochSeconds(TargetEpochSecondsT&& value) {
    m_targetEpochSecondsHasBeenSet = true;
    m_targetEpochSeconds = std::forward<TargetEpochSecondsT>(value);
  }
  template <typename TargetEpochSecondsT = Aws::Utils::DateTime>
  TimestampFormatHeadersRequest& WithTargetEpochSeconds(TargetEpochSecondsT&& value) {
    SetTargetEpochSeconds(std::forward<TargetEpochSecondsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetTargetHttpDate() const { return m_targetHttpDate; }
  inline bool TargetHttpDateHasBeenSet() const { return m_targetHttpDateHasBeenSet; }
  template <typename TargetHttpDateT = Aws::Utils::DateTime>
  void SetTargetHttpDate(TargetHttpDateT&& value) {
    m_targetHttpDateHasBeenSet = true;
    m_targetHttpDate = std::forward<TargetHttpDateT>(value);
  }
  template <typename TargetHttpDateT = Aws::Utils::DateTime>
  TimestampFormatHeadersRequest& WithTargetHttpDate(TargetHttpDateT&& value) {
    SetTargetHttpDate(std::forward<TargetHttpDateT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetTargetDateTime() const { return m_targetDateTime; }
  inline bool TargetDateTimeHasBeenSet() const { return m_targetDateTimeHasBeenSet; }
  template <typename TargetDateTimeT = Aws::Utils::DateTime>
  void SetTargetDateTime(TargetDateTimeT&& value) {
    m_targetDateTimeHasBeenSet = true;
    m_targetDateTime = std::forward<TargetDateTimeT>(value);
  }
  template <typename TargetDateTimeT = Aws::Utils::DateTime>
  TimestampFormatHeadersRequest& WithTargetDateTime(TargetDateTimeT&& value) {
    SetTargetDateTime(std::forward<TargetDateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  TimestampFormatHeadersRequest& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_memberEpochSeconds{};
  bool m_memberEpochSecondsHasBeenSet = false;

  Aws::Utils::DateTime m_memberHttpDate{};
  bool m_memberHttpDateHasBeenSet = false;

  Aws::Utils::DateTime m_memberDateTime{};
  bool m_memberDateTimeHasBeenSet = false;

  Aws::Utils::DateTime m_defaultFormat{};
  bool m_defaultFormatHasBeenSet = false;

  Aws::Utils::DateTime m_targetEpochSeconds{};
  bool m_targetEpochSecondsHasBeenSet = false;

  Aws::Utils::DateTime m_targetHttpDate{};
  bool m_targetHttpDateHasBeenSet = false;

  Aws::Utils::DateTime m_targetDateTime{};
  bool m_targetDateTimeHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
