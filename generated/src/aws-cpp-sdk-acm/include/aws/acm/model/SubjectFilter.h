/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/CommonNameFilter.h>

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
 * <p>Filters certificates by subject attributes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/SubjectFilter">AWS
 * API Reference</a></p>
 */
class SubjectFilter {
 public:
  AWS_ACM_API SubjectFilter() = default;
  AWS_ACM_API SubjectFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API SubjectFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Filter by common name in the subject.</p>
   */
  inline const CommonNameFilter& GetCommonName() const { return m_commonName; }
  inline bool CommonNameHasBeenSet() const { return m_commonNameHasBeenSet; }
  template <typename CommonNameT = CommonNameFilter>
  void SetCommonName(CommonNameT&& value) {
    m_commonNameHasBeenSet = true;
    m_commonName = std::forward<CommonNameT>(value);
  }
  template <typename CommonNameT = CommonNameFilter>
  SubjectFilter& WithCommonName(CommonNameT&& value) {
    SetCommonName(std::forward<CommonNameT>(value));
    return *this;
  }
  ///@}
 private:
  CommonNameFilter m_commonName;
  bool m_commonNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
