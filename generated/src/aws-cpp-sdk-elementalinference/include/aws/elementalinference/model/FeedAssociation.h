/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {

/**
 * <p>Contains information about the resource that is associated with a feed. It is
 * used in the FeedSummary that is used in the response of a ListFeeds
 * action.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/FeedAssociation">AWS
 * API Reference</a></p>
 */
class FeedAssociation {
 public:
  AWS_ELEMENTALINFERENCE_API FeedAssociation() = default;
  AWS_ELEMENTALINFERENCE_API FeedAssociation(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API FeedAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the associated resource.</p>
   */
  inline const Aws::String& GetAssociatedResourceName() const { return m_associatedResourceName; }
  inline bool AssociatedResourceNameHasBeenSet() const { return m_associatedResourceNameHasBeenSet; }
  template <typename AssociatedResourceNameT = Aws::String>
  void SetAssociatedResourceName(AssociatedResourceNameT&& value) {
    m_associatedResourceNameHasBeenSet = true;
    m_associatedResourceName = std::forward<AssociatedResourceNameT>(value);
  }
  template <typename AssociatedResourceNameT = Aws::String>
  FeedAssociation& WithAssociatedResourceName(AssociatedResourceNameT&& value) {
    SetAssociatedResourceName(std::forward<AssociatedResourceNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_associatedResourceName;
  bool m_associatedResourceNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
