/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInferenceRequest.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace ElementalInference {
namespace Model {

/**
 */
class DeleteScheduleActionRequest : public ElementalInferenceRequest {
 public:
  AWS_ELEMENTALINFERENCE_API DeleteScheduleActionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteScheduleAction"; }

  AWS_ELEMENTALINFERENCE_API Aws::String SerializePayload() const override;

  AWS_ELEMENTALINFERENCE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The ID of the feed that holds the schedule action.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  DeleteScheduleActionRequest& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the schedule action that you want to delete.</p>
   */
  inline const Aws::String& GetActionName() const { return m_actionName; }
  inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }
  template <typename ActionNameT = Aws::String>
  void SetActionName(ActionNameT&& value) {
    m_actionNameHasBeenSet = true;
    m_actionName = std::forward<ActionNameT>(value);
  }
  template <typename ActionNameT = Aws::String>
  DeleteScheduleActionRequest& WithActionName(ActionNameT&& value) {
    SetActionName(std::forward<ActionNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_actionName;
  bool m_idHasBeenSet = false;
  bool m_actionNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
