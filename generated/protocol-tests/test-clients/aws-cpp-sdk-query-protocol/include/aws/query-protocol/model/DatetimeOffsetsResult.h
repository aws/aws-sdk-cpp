/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>
#include <aws/query-protocol/model/ResponseMetadata.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace QueryProtocol {
namespace Model {
class DatetimeOffsetsResult {
 public:
  AWS_QUERYPROTOCOL_API DatetimeOffsetsResult() = default;
  AWS_QUERYPROTOCOL_API DatetimeOffsetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_QUERYPROTOCOL_API DatetimeOffsetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{

  inline const Aws::Utils::DateTime& GetDatetime() const { return m_datetime; }
  template <typename DatetimeT = Aws::Utils::DateTime>
  void SetDatetime(DatetimeT&& value) {
    m_datetimeHasBeenSet = true;
    m_datetime = std::forward<DatetimeT>(value);
  }
  template <typename DatetimeT = Aws::Utils::DateTime>
  DatetimeOffsetsResult& WithDatetime(DatetimeT&& value) {
    SetDatetime(std::forward<DatetimeT>(value));
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
  DatetimeOffsetsResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_datetime{};
  bool m_datetimeHasBeenSet = false;

  ResponseMetadata m_responseMetadata;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace QueryProtocol
}  // namespace Aws
