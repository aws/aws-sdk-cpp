/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/ec2-protocol/EC2Protocol_EXPORTS.h>
#include <aws/ec2-protocol/model/ResponseMetadata.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace EC2Protocol {
namespace Model {
class XmlTimestampsResponse {
 public:
  AWS_EC2PROTOCOL_API XmlTimestampsResponse() = default;
  AWS_EC2PROTOCOL_API XmlTimestampsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2PROTOCOL_API XmlTimestampsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{

  inline const Aws::Utils::DateTime& GetNormal() const { return m_normal; }
  template <typename NormalT = Aws::Utils::DateTime>
  void SetNormal(NormalT&& value) {
    m_normalHasBeenSet = true;
    m_normal = std::forward<NormalT>(value);
  }
  template <typename NormalT = Aws::Utils::DateTime>
  XmlTimestampsResponse& WithNormal(NormalT&& value) {
    SetNormal(std::forward<NormalT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetDateTime() const { return m_dateTime; }
  template <typename DateTimeT = Aws::Utils::DateTime>
  void SetDateTime(DateTimeT&& value) {
    m_dateTimeHasBeenSet = true;
    m_dateTime = std::forward<DateTimeT>(value);
  }
  template <typename DateTimeT = Aws::Utils::DateTime>
  XmlTimestampsResponse& WithDateTime(DateTimeT&& value) {
    SetDateTime(std::forward<DateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetDateTimeOnTarget() const { return m_dateTimeOnTarget; }
  template <typename DateTimeOnTargetT = Aws::Utils::DateTime>
  void SetDateTimeOnTarget(DateTimeOnTargetT&& value) {
    m_dateTimeOnTargetHasBeenSet = true;
    m_dateTimeOnTarget = std::forward<DateTimeOnTargetT>(value);
  }
  template <typename DateTimeOnTargetT = Aws::Utils::DateTime>
  XmlTimestampsResponse& WithDateTimeOnTarget(DateTimeOnTargetT&& value) {
    SetDateTimeOnTarget(std::forward<DateTimeOnTargetT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetEpochSeconds() const { return m_epochSeconds; }
  template <typename EpochSecondsT = Aws::Utils::DateTime>
  void SetEpochSeconds(EpochSecondsT&& value) {
    m_epochSecondsHasBeenSet = true;
    m_epochSeconds = std::forward<EpochSecondsT>(value);
  }
  template <typename EpochSecondsT = Aws::Utils::DateTime>
  XmlTimestampsResponse& WithEpochSeconds(EpochSecondsT&& value) {
    SetEpochSeconds(std::forward<EpochSecondsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetEpochSecondsOnTarget() const { return m_epochSecondsOnTarget; }
  template <typename EpochSecondsOnTargetT = Aws::Utils::DateTime>
  void SetEpochSecondsOnTarget(EpochSecondsOnTargetT&& value) {
    m_epochSecondsOnTargetHasBeenSet = true;
    m_epochSecondsOnTarget = std::forward<EpochSecondsOnTargetT>(value);
  }
  template <typename EpochSecondsOnTargetT = Aws::Utils::DateTime>
  XmlTimestampsResponse& WithEpochSecondsOnTarget(EpochSecondsOnTargetT&& value) {
    SetEpochSecondsOnTarget(std::forward<EpochSecondsOnTargetT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetHttpDate() const { return m_httpDate; }
  template <typename HttpDateT = Aws::Utils::DateTime>
  void SetHttpDate(HttpDateT&& value) {
    m_httpDateHasBeenSet = true;
    m_httpDate = std::forward<HttpDateT>(value);
  }
  template <typename HttpDateT = Aws::Utils::DateTime>
  XmlTimestampsResponse& WithHttpDate(HttpDateT&& value) {
    SetHttpDate(std::forward<HttpDateT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetHttpDateOnTarget() const { return m_httpDateOnTarget; }
  template <typename HttpDateOnTargetT = Aws::Utils::DateTime>
  void SetHttpDateOnTarget(HttpDateOnTargetT&& value) {
    m_httpDateOnTargetHasBeenSet = true;
    m_httpDateOnTarget = std::forward<HttpDateOnTargetT>(value);
  }
  template <typename HttpDateOnTargetT = Aws::Utils::DateTime>
  XmlTimestampsResponse& WithHttpDateOnTarget(HttpDateOnTargetT&& value) {
    SetHttpDateOnTarget(std::forward<HttpDateOnTargetT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
  template <typename ResponseMetadataT = ResponseMetadata>
  void SetResponseMetadata(ResponseMetadataT&& value) {
    m_responseMetadataHasBeenSet = true;
    m_responseMetadata = std::forward<ResponseMetadataT>(value);
  }
  template <typename ResponseMetadataT = ResponseMetadata>
  XmlTimestampsResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_normal{};
  bool m_normalHasBeenSet = false;

  Aws::Utils::DateTime m_dateTime{};
  bool m_dateTimeHasBeenSet = false;

  Aws::Utils::DateTime m_dateTimeOnTarget{};
  bool m_dateTimeOnTargetHasBeenSet = false;

  Aws::Utils::DateTime m_epochSeconds{};
  bool m_epochSecondsHasBeenSet = false;

  Aws::Utils::DateTime m_epochSecondsOnTarget{};
  bool m_epochSecondsOnTargetHasBeenSet = false;

  Aws::Utils::DateTime m_httpDate{};
  bool m_httpDateHasBeenSet = false;

  Aws::Utils::DateTime m_httpDateOnTarget{};
  bool m_httpDateOnTargetHasBeenSet = false;

  ResponseMetadata m_responseMetadata;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2Protocol
}  // namespace Aws
