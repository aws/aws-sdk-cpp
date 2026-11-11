/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/model/TagFilter.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CodeDeploy {
namespace Model {

/**
 * <p>Information about groups of on-premises instance tags.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/OnPremisesTagSet">AWS
 * API Reference</a></p>
 */
class OnPremisesTagSet {
 public:
  AWS_CODEDEPLOY_API OnPremisesTagSet() = default;
  AWS_CODEDEPLOY_API OnPremisesTagSet(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEDEPLOY_API OnPremisesTagSet& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEDEPLOY_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>A list that contains other lists of on-premises instance tag groups. For an
   * instance to be included in the deployment group, it must be identified by all of
   * the tag groups in the list.</p>
   */
  inline const Aws::Vector<Aws::Vector<TagFilter>>& GetOnPremisesTagSetList() const { return m_onPremisesTagSetList; }
  inline bool OnPremisesTagSetListHasBeenSet() const { return m_onPremisesTagSetListHasBeenSet; }
  template <typename OnPremisesTagSetListT = Aws::Vector<Aws::Vector<TagFilter>>>
  void SetOnPremisesTagSetList(OnPremisesTagSetListT&& value) {
    m_onPremisesTagSetListHasBeenSet = true;
    m_onPremisesTagSetList = std::forward<OnPremisesTagSetListT>(value);
  }
  template <typename OnPremisesTagSetListT = Aws::Vector<Aws::Vector<TagFilter>>>
  OnPremisesTagSet& WithOnPremisesTagSetList(OnPremisesTagSetListT&& value) {
    SetOnPremisesTagSetList(std::forward<OnPremisesTagSetListT>(value));
    return *this;
  }
  template <typename OnPremisesTagSetListT = Aws::Vector<TagFilter>>
  OnPremisesTagSet& AddOnPremisesTagSetList(OnPremisesTagSetListT&& value) {
    m_onPremisesTagSetListHasBeenSet = true;
    m_onPremisesTagSetList.emplace_back(std::forward<OnPremisesTagSetListT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::Vector<TagFilter>> m_onPremisesTagSetList;
  bool m_onPremisesTagSetListHasBeenSet = false;
};

}  // namespace Model
}  // namespace CodeDeploy
}  // namespace Aws
