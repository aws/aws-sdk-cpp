/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/CertificateFilter.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ACM {
namespace Model {

/**
 * <p>A filter statement used to search for certificates. Can contain AND, OR, NOT
 * logical operators or a single filter.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/CertificateFilterStatement">AWS
 * API Reference</a></p>
 */
class CertificateFilterStatement {
 public:
  AWS_ACM_API CertificateFilterStatement() = default;
  AWS_ACM_API CertificateFilterStatement(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API CertificateFilterStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of filter statements that must all be true.</p>
   */
  inline const Aws::Vector<CertificateFilterStatement>& GetAnd() const { return m_and; }
  inline bool AndHasBeenSet() const { return m_andHasBeenSet; }
  template <typename AndT = Aws::Vector<CertificateFilterStatement>>
  void SetAnd(AndT&& value) {
    m_andHasBeenSet = true;
    m_and = std::forward<AndT>(value);
  }
  template <typename AndT = Aws::Vector<CertificateFilterStatement>>
  CertificateFilterStatement& WithAnd(AndT&& value) {
    SetAnd(std::forward<AndT>(value));
    return *this;
  }
  template <typename AndT = CertificateFilterStatement>
  CertificateFilterStatement& AddAnd(AndT&& value) {
    m_andHasBeenSet = true;
    m_and.emplace_back(std::forward<AndT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of filter statements where at least one must be true.</p>
   */
  inline const Aws::Vector<CertificateFilterStatement>& GetOr() const { return m_or; }
  inline bool OrHasBeenSet() const { return m_orHasBeenSet; }
  template <typename OrT = Aws::Vector<CertificateFilterStatement>>
  void SetOr(OrT&& value) {
    m_orHasBeenSet = true;
    m_or = std::forward<OrT>(value);
  }
  template <typename OrT = Aws::Vector<CertificateFilterStatement>>
  CertificateFilterStatement& WithOr(OrT&& value) {
    SetOr(std::forward<OrT>(value));
    return *this;
  }
  template <typename OrT = CertificateFilterStatement>
  CertificateFilterStatement& AddOr(OrT&& value) {
    m_orHasBeenSet = true;
    m_or.emplace_back(std::forward<OrT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter statement that must not be true.</p>
   */
  inline const CertificateFilterStatement& GetNot() const { return *m_not; }
  inline bool NotHasBeenSet() const { return m_notHasBeenSet; }
  template <typename NotT = CertificateFilterStatement>
  void SetNot(NotT&& value) {
    m_notHasBeenSet = true;
    m_not = Aws::MakeShared<CertificateFilterStatement>("CertificateFilterStatement", std::forward<NotT>(value));
  }
  template <typename NotT = CertificateFilterStatement>
  CertificateFilterStatement& WithNot(NotT&& value) {
    SetNot(std::forward<NotT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A single certificate filter.</p>
   */
  inline const CertificateFilter& GetFilter() const { return m_filter; }
  inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
  template <typename FilterT = CertificateFilter>
  void SetFilter(FilterT&& value) {
    m_filterHasBeenSet = true;
    m_filter = std::forward<FilterT>(value);
  }
  template <typename FilterT = CertificateFilter>
  CertificateFilterStatement& WithFilter(FilterT&& value) {
    SetFilter(std::forward<FilterT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<CertificateFilterStatement> m_and;

  Aws::Vector<CertificateFilterStatement> m_or;

  std::shared_ptr<CertificateFilterStatement> m_not;

  CertificateFilter m_filter;
  bool m_andHasBeenSet = false;
  bool m_orHasBeenSet = false;
  bool m_notHasBeenSet = false;
  bool m_filterHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
