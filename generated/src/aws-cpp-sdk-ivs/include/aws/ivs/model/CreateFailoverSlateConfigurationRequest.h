/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs/IVSRequest.h>
#include <aws/ivs/IVS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace IVS {
namespace Model {

/**
 */
class CreateFailoverSlateConfigurationRequest : public IVSRequest {
 public:
  AWS_IVS_API CreateFailoverSlateConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateFailoverSlateConfiguration"; }

  AWS_IVS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Failover-slate-configuration name. The value does not need to be unique.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateFailoverSlateConfigurationRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Number of seconds of ingest interruption before the failover slate activates.
   * Minimum: <code>3</code>. Maximum: <code>5</code>. Default: <code>3</code>.</p>
   */
  inline int GetActivationThresholdSeconds() const { return m_activationThresholdSeconds; }
  inline bool ActivationThresholdSecondsHasBeenSet() const { return m_activationThresholdSecondsHasBeenSet; }
  inline void SetActivationThresholdSeconds(int value) {
    m_activationThresholdSecondsHasBeenSet = true;
    m_activationThresholdSeconds = value;
  }
  inline CreateFailoverSlateConfigurationRequest& WithActivationThresholdSeconds(int value) {
    SetActivationThresholdSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Minimum number of seconds that the failover slate displays after activation.
   * Minimum: <code>3</code>. Maximum: <code>10</code>. Default: <code>3</code>.</p>
   */
  inline int GetMinSlateDisplaySeconds() const { return m_minSlateDisplaySeconds; }
  inline bool MinSlateDisplaySecondsHasBeenSet() const { return m_minSlateDisplaySecondsHasBeenSet; }
  inline void SetMinSlateDisplaySeconds(int value) {
    m_minSlateDisplaySecondsHasBeenSet = true;
    m_minSlateDisplaySeconds = value;
  }
  inline CreateFailoverSlateConfigurationRequest& WithMinSlateDisplaySeconds(int value) {
    SetMinSlateDisplaySeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum number of seconds that the failover slate displays. Minimum:
   * <code>60</code>. Maximum: <code>180</code>. Default: <code>60</code>.</p>
   */
  inline int GetMaxSlateDisplaySeconds() const { return m_maxSlateDisplaySeconds; }
  inline bool MaxSlateDisplaySecondsHasBeenSet() const { return m_maxSlateDisplaySecondsHasBeenSet; }
  inline void SetMaxSlateDisplaySeconds(int value) {
    m_maxSlateDisplaySecondsHasBeenSet = true;
    m_maxSlateDisplaySeconds = value;
  }
  inline CreateFailoverSlateConfigurationRequest& WithMaxSlateDisplaySeconds(int value) {
    SetMaxSlateDisplaySeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Array of 1-50 maps, each of the form <code>string:string (key:value)</code>.
   * See <a
   * href="https://docs.aws.amazon.com/tag-editor/latest/userguide/best-practices-and-strats.html">Best
   * practices and strategies</a> in <i>Tagging Amazon Web Services Resources and Tag
   * Editor</i> for details, including restrictions that apply to tags and "Tag
   * naming limits and requirements"; Amazon IVS has no service-specific constraints
   * beyond what is documented there.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateFailoverSlateConfigurationRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateFailoverSlateConfigurationRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  int m_activationThresholdSeconds{0};

  int m_minSlateDisplaySeconds{0};

  int m_maxSlateDisplaySeconds{0};

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_nameHasBeenSet = false;
  bool m_activationThresholdSecondsHasBeenSet = false;
  bool m_minSlateDisplaySecondsHasBeenSet = false;
  bool m_maxSlateDisplaySecondsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace IVS
}  // namespace Aws
