/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/SigningRepositoryFilterType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECR {
namespace Model {

/**
 * <p>A repository filter used to determine which repositories have their images
 * automatically signed on push. Each filter consists of a filter type and filter
 * value.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/SigningRepositoryFilter">AWS
 * API Reference</a></p>
 */
class SigningRepositoryFilter {
 public:
  AWS_ECR_API SigningRepositoryFilter() = default;
  AWS_ECR_API SigningRepositoryFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECR_API SigningRepositoryFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The filter value used to match repository names. When using
   * <code>WILDCARD_MATCH</code>, the <code>*</code> character matches any sequence
   * of characters.</p> <p>Examples:</p> <ul> <li> <p> <code>myapp/ *</code> - Matches
   * all repositories starting with <code>myapp/</code> </p> </li> <li> <p>
   * <code>* /production</code> - Matches all repositories ending with
   * <code>/production</code> </p> </li> <li> <p> <code>*prod*</code> - Matches all
   * repositories containing <code>prod</code> </p> </li> </ul>
   */
  inline const Aws::String& GetFilter() const { return m_filter; }
  inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
  template <typename FilterT = Aws::String>
  void SetFilter(FilterT&& value) {
    m_filterHasBeenSet = true;
    m_filter = std::forward<FilterT>(value);
  }
  template <typename FilterT = Aws::String>
  SigningRepositoryFilter& WithFilter(FilterT&& value) {
    SetFilter(std::forward<FilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of filter to apply. Currently, only <code>WILDCARD_MATCH</code> is
   * supported, which uses wildcard patterns to match repository names.</p>
   */
  inline SigningRepositoryFilterType GetFilterType() const { return m_filterType; }
  inline bool FilterTypeHasBeenSet() const { return m_filterTypeHasBeenSet; }
  inline void SetFilterType(SigningRepositoryFilterType value) {
    m_filterTypeHasBeenSet = true;
    m_filterType = value;
  }
  inline SigningRepositoryFilter& WithFilterType(SigningRepositoryFilterType value) {
    SetFilterType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_filter;
  bool m_filterHasBeenSet = false;

  SigningRepositoryFilterType m_filterType{SigningRepositoryFilterType::NOT_SET};
  bool m_filterTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
