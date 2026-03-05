/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/DataZone_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>Additional details on the queried entity that can be requested in the
 * response.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AdditionalAttributes">AWS
 * API Reference</a></p>
 */
class AdditionalAttributes {
 public:
  AWS_DATAZONE_API AdditionalAttributes() = default;
  AWS_DATAZONE_API AdditionalAttributes(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API AdditionalAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Names of forms on the query entity that can be requested in the response.</p>
   */
  inline const Aws::Vector<Aws::String>& GetFormNames() const { return m_formNames; }
  inline bool FormNamesHasBeenSet() const { return m_formNamesHasBeenSet; }
  template <typename FormNamesT = Aws::Vector<Aws::String>>
  void SetFormNames(FormNamesT&& value) {
    m_formNamesHasBeenSet = true;
    m_formNames = std::forward<FormNamesT>(value);
  }
  template <typename FormNamesT = Aws::Vector<Aws::String>>
  AdditionalAttributes& WithFormNames(FormNamesT&& value) {
    SetFormNames(std::forward<FormNamesT>(value));
    return *this;
  }
  template <typename FormNamesT = Aws::String>
  AdditionalAttributes& AddFormNames(FormNamesT&& value) {
    m_formNamesHasBeenSet = true;
    m_formNames.emplace_back(std::forward<FormNamesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_formNames;
  bool m_formNamesHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
