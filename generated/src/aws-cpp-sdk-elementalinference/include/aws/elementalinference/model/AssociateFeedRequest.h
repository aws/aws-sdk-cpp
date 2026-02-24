/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elementalinference/ElementalInferenceRequest.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/CreateOutput.h>

#include <utility>

namespace Aws {
namespace ElementalInference {
namespace Model {

/**
 */
class AssociateFeedRequest : public ElementalInferenceRequest {
 public:
  AWS_ELEMENTALINFERENCE_API AssociateFeedRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AssociateFeed"; }

  AWS_ELEMENTALINFERENCE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the feed.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  AssociateFeedRequest& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An identifier for the resource. If the resource is from an AWS service, this
   * identifier must be the full ARN of that resource. Otherwise, the identifier is a
   * name that you assign and that is appropriate for the application that owns the
   * resource. This name must not resemble an ARN.</p>
   */
  inline const Aws::String& GetAssociatedResourceName() const { return m_associatedResourceName; }
  inline bool AssociatedResourceNameHasBeenSet() const { return m_associatedResourceNameHasBeenSet; }
  template <typename AssociatedResourceNameT = Aws::String>
  void SetAssociatedResourceName(AssociatedResourceNameT&& value) {
    m_associatedResourceNameHasBeenSet = true;
    m_associatedResourceName = std::forward<AssociatedResourceNameT>(value);
  }
  template <typename AssociatedResourceNameT = Aws::String>
  AssociateFeedRequest& WithAssociatedResourceName(AssociatedResourceNameT&& value) {
    SetAssociatedResourceName(std::forward<AssociatedResourceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The outputs to add to this feed. You must specify at least one output. You
   * can later use the UpdateFeed action to change the list of outputs.</p>
   */
  inline const Aws::Vector<CreateOutput>& GetOutputs() const { return m_outputs; }
  inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
  template <typename OutputsT = Aws::Vector<CreateOutput>>
  void SetOutputs(OutputsT&& value) {
    m_outputsHasBeenSet = true;
    m_outputs = std::forward<OutputsT>(value);
  }
  template <typename OutputsT = Aws::Vector<CreateOutput>>
  AssociateFeedRequest& WithOutputs(OutputsT&& value) {
    SetOutputs(std::forward<OutputsT>(value));
    return *this;
  }
  template <typename OutputsT = CreateOutput>
  AssociateFeedRequest& AddOutputs(OutputsT&& value) {
    m_outputsHasBeenSet = true;
    m_outputs.emplace_back(std::forward<OutputsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Set to true if you want to do a dry run of the associate action.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline AssociateFeedRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_associatedResourceName{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::Vector<CreateOutput> m_outputs;

  bool m_dryRun{false};
  bool m_idHasBeenSet = false;
  bool m_associatedResourceNameHasBeenSet = true;
  bool m_outputsHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
