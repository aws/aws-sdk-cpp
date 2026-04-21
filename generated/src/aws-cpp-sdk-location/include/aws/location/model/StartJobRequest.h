/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/model/JobAction.h>
#include <aws/location/model/JobActionOptions.h>
#include <aws/location/model/JobInputOptions.h>
#include <aws/location/model/JobOutputOptions.h>

#include <utility>

namespace Aws {
namespace LocationService {
namespace Model {

/**
 */
class StartJobRequest : public LocationServiceRequest {
 public:
  AWS_LOCATIONSERVICE_API StartJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartJob"; }

  AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A unique identifier for this request to ensure idempotency.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartJobRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action to perform on the input data.</p>
   */
  inline JobAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(JobAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline StartJobRequest& WithAction(JobAction value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional parameters that can be requested for each result.</p>
   */
  inline const JobActionOptions& GetActionOptions() const { return m_actionOptions; }
  inline bool ActionOptionsHasBeenSet() const { return m_actionOptionsHasBeenSet; }
  template <typename ActionOptionsT = JobActionOptions>
  void SetActionOptions(ActionOptionsT&& value) {
    m_actionOptionsHasBeenSet = true;
    m_actionOptions = std::forward<ActionOptionsT>(value);
  }
  template <typename ActionOptionsT = JobActionOptions>
  StartJobRequest& WithActionOptions(ActionOptionsT&& value) {
    SetActionOptions(std::forward<ActionOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon Location Service
   * assumes during job processing. Amazon Location Service uses this role to access
   * the input and output locations specified for the job.</p>  <p>The IAM role
   * must be created in the same Amazon Web Services account where you plan to run
   * your job.</p>  <p>For more information about configuring IAM roles for
   * Amazon Location jobs, see <a
   * href="https://docs.aws.amazon.com/location/latest/developerguide/configure-iam-role-policy-credentials.html">Configure
   * IAM permissions</a> in the <i>Amazon Location Service Developer Guide</i>.</p>
   */
  inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
  inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
  template <typename ExecutionRoleArnT = Aws::String>
  void SetExecutionRoleArn(ExecutionRoleArnT&& value) {
    m_executionRoleArnHasBeenSet = true;
    m_executionRoleArn = std::forward<ExecutionRoleArnT>(value);
  }
  template <typename ExecutionRoleArnT = Aws::String>
  StartJobRequest& WithExecutionRoleArn(ExecutionRoleArnT&& value) {
    SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for input data location and format.</p>  <p>Input files
   * have a limitation of 10gb per file, and 1gb per Parquet row-group within the
   * file.</p>
   */
  inline const JobInputOptions& GetInputOptions() const { return m_inputOptions; }
  inline bool InputOptionsHasBeenSet() const { return m_inputOptionsHasBeenSet; }
  template <typename InputOptionsT = JobInputOptions>
  void SetInputOptions(InputOptionsT&& value) {
    m_inputOptionsHasBeenSet = true;
    m_inputOptions = std::forward<InputOptionsT>(value);
  }
  template <typename InputOptionsT = JobInputOptions>
  StartJobRequest& WithInputOptions(InputOptionsT&& value) {
    SetInputOptions(std::forward<InputOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional name for the job resource.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  StartJobRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for output data location and format.</p>
   */
  inline const JobOutputOptions& GetOutputOptions() const { return m_outputOptions; }
  inline bool OutputOptionsHasBeenSet() const { return m_outputOptionsHasBeenSet; }
  template <typename OutputOptionsT = JobOutputOptions>
  void SetOutputOptions(OutputOptionsT&& value) {
    m_outputOptionsHasBeenSet = true;
    m_outputOptions = std::forward<OutputOptionsT>(value);
  }
  template <typename OutputOptionsT = JobOutputOptions>
  StartJobRequest& WithOutputOptions(OutputOptionsT&& value) {
    SetOutputOptions(std::forward<OutputOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags and corresponding values to be associated with the job.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  StartJobRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  StartJobRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  JobAction m_action{JobAction::NOT_SET};

  JobActionOptions m_actionOptions;

  Aws::String m_executionRoleArn;

  JobInputOptions m_inputOptions;

  Aws::String m_name;

  JobOutputOptions m_outputOptions;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_clientTokenHasBeenSet = true;
  bool m_actionHasBeenSet = false;
  bool m_actionOptionsHasBeenSet = false;
  bool m_executionRoleArnHasBeenSet = false;
  bool m_inputOptionsHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_outputOptionsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace LocationService
}  // namespace Aws
