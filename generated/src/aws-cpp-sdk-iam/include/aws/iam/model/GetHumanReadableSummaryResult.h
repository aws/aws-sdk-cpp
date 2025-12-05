/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/ResponseMetadata.h>
#include <aws/iam/model/SummaryStateType.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace IAM {
namespace Model {
class GetHumanReadableSummaryResult {
 public:
  AWS_IAM_API GetHumanReadableSummaryResult() = default;
  AWS_IAM_API GetHumanReadableSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_IAM_API GetHumanReadableSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Summary content in the specified locale. Summary content is non-empty only if
   * the <code>SummaryState</code> is <code>AVAILABLE</code>.</p>
   */
  inline const Aws::String& GetSummaryContent() const { return m_summaryContent; }
  template <typename SummaryContentT = Aws::String>
  void SetSummaryContent(SummaryContentT&& value) {
    m_summaryContentHasBeenSet = true;
    m_summaryContent = std::forward<SummaryContentT>(value);
  }
  template <typename SummaryContentT = Aws::String>
  GetHumanReadableSummaryResult& WithSummaryContent(SummaryContentT&& value) {
    SetSummaryContent(std::forward<SummaryContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The locale that this response was generated for. This maps to the input
   * locale.</p>
   */
  inline const Aws::String& GetLocale() const { return m_locale; }
  template <typename LocaleT = Aws::String>
  void SetLocale(LocaleT&& value) {
    m_localeHasBeenSet = true;
    m_locale = std::forward<LocaleT>(value);
  }
  template <typename LocaleT = Aws::String>
  GetHumanReadableSummaryResult& WithLocale(LocaleT&& value) {
    SetLocale(std::forward<LocaleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>State of summary generation. This generation process is asynchronous and this
   * attribute indicates the state of the generation process.</p>
   */
  inline SummaryStateType GetSummaryState() const { return m_summaryState; }
  inline void SetSummaryState(SummaryStateType value) {
    m_summaryStateHasBeenSet = true;
    m_summaryState = value;
  }
  inline GetHumanReadableSummaryResult& WithSummaryState(SummaryStateType value) {
    SetSummaryState(value);
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
  GetHumanReadableSummaryResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_summaryContent;

  Aws::String m_locale;

  SummaryStateType m_summaryState{SummaryStateType::NOT_SET};

  ResponseMetadata m_responseMetadata;
  bool m_summaryContentHasBeenSet = false;
  bool m_localeHasBeenSet = false;
  bool m_summaryStateHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
