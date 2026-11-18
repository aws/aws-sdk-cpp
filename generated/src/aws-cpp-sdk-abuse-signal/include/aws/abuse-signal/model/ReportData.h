/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/abuse-signal/AbuseSignal_EXPORTS.h>
#include <aws/core/utils/Document.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AbuseSignal {
namespace Model {

/**
 * <p>The abuse report data in XARF format. This is a union type, so exactly one
 * member must be specified.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/abuse-signal-2026-01-12/ReportData">AWS
 * API Reference</a></p>
 */
class ReportData {
 public:
  AWS_ABUSESIGNAL_API ReportData() = default;
  AWS_ABUSESIGNAL_API ReportData(Aws::Utils::Json::JsonView jsonValue);
  AWS_ABUSESIGNAL_API ReportData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ABUSESIGNAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A JSON object that conforms to the XARF v4 specification. At a minimum, the
   * document must include the XARF core fields, including the required
   * <code>category</code> and <code>type</code> fields that classify the report (for
   * example, <code>category</code> <code>content</code> with <code>type</code>
   * <code>phishing</code>). For the XARF core fields and detailed schema definitions
   * of each report type, see the <a href="https://xarf.org/docs/specification/">XARF
   * v4 Technical Specification on the XARF website</a>.</p>  <p>Never include
   * images, video, or copies of child sexual abuse or child sexual exploitation
   * material in a report, in any field and for any report type. Send URLs, hash
   * values, and reference identifiers only.</p>  <p>If you suspect that
   * activity is illegal, use the XARF <code>description</code> field to explain why
   * and name the laws concerned.</p> <p> <b>Testing your integration</b> </p> <p>To
   * test your integration, add the tag <code>lifecycle:test</code> to the report.
   * Amazon Web Services validates test reports and returns a report ID and status in
   * the same way as other reports, but doesn't process them as abuse reports. Amazon
   * Web Services deletes test reports shortly after submission.</p> <p>Use test
   * values only, such as example.com and the IP address ranges reserved for
   * documentation (192.0.2.0/24, 198.51.100.0/24 and 203.0.113.0/24). Don't add this
   * tag to a real abuse report.</p> <p>Tag keys that begin with <code>aws:</code>
   * are reserved.</p>
   */
  inline Aws::Utils::DocumentView GetXarf() const { return m_xarf; }
  inline bool XarfHasBeenSet() const { return m_xarfHasBeenSet; }
  template <typename XarfT = Aws::Utils::Document>
  void SetXarf(XarfT&& value) {
    m_xarfHasBeenSet = true;
    m_xarf = std::forward<XarfT>(value);
  }
  template <typename XarfT = Aws::Utils::Document>
  ReportData& WithXarf(XarfT&& value) {
    SetXarf(std::forward<XarfT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::Document m_xarf;
  bool m_xarfHasBeenSet = false;
};

}  // namespace Model
}  // namespace AbuseSignal
}  // namespace Aws
