/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/ControlTowerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/controltower/model/EnabledBaselineParameter.h>
#include <utility>

namespace Aws
{
namespace ControlTower
{
namespace Model
{

  /**
   */
  class EnableBaselineRequest : public ControlTowerRequest
  {
  public:
    AWS_CONTROLTOWER_API EnableBaselineRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableBaseline"; }

    AWS_CONTROLTOWER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the baseline to be enabled.</p>
     */
    inline const Aws::String& GetBaselineIdentifier() const { return m_baselineIdentifier; }
    inline bool BaselineIdentifierHasBeenSet() const { return m_baselineIdentifierHasBeenSet; }
    template<typename BaselineIdentifierT = Aws::String>
    void SetBaselineIdentifier(BaselineIdentifierT&& value) { m_baselineIdentifierHasBeenSet = true; m_baselineIdentifier = std::forward<BaselineIdentifierT>(value); }
    template<typename BaselineIdentifierT = Aws::String>
    EnableBaselineRequest& WithBaselineIdentifier(BaselineIdentifierT&& value) { SetBaselineIdentifier(std::forward<BaselineIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific version to be enabled of the specified baseline.</p>
     */
    inline const Aws::String& GetBaselineVersion() const { return m_baselineVersion; }
    inline bool BaselineVersionHasBeenSet() const { return m_baselineVersionHasBeenSet; }
    template<typename BaselineVersionT = Aws::String>
    void SetBaselineVersion(BaselineVersionT&& value) { m_baselineVersionHasBeenSet = true; m_baselineVersion = std::forward<BaselineVersionT>(value); }
    template<typename BaselineVersionT = Aws::String>
    EnableBaselineRequest& WithBaselineVersion(BaselineVersionT&& value) { SetBaselineVersion(std::forward<BaselineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>key-value</code> objects that specify enablement parameters,
     * where <code>key</code> is a string and <code>value</code> is a document of any
     * type.</p>
     */
    inline const Aws::Vector<EnabledBaselineParameter>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Vector<EnabledBaselineParameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<EnabledBaselineParameter>>
    EnableBaselineRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = EnabledBaselineParameter>
    EnableBaselineRequest& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Tags associated with input to <code>EnableBaseline</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    EnableBaselineRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    EnableBaselineRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The ARN of the target on which the baseline will be enabled. Only OUs are
     * supported as targets.</p>
     */
    inline const Aws::String& GetTargetIdentifier() const { return m_targetIdentifier; }
    inline bool TargetIdentifierHasBeenSet() const { return m_targetIdentifierHasBeenSet; }
    template<typename TargetIdentifierT = Aws::String>
    void SetTargetIdentifier(TargetIdentifierT&& value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier = std::forward<TargetIdentifierT>(value); }
    template<typename TargetIdentifierT = Aws::String>
    EnableBaselineRequest& WithTargetIdentifier(TargetIdentifierT&& value) { SetTargetIdentifier(std::forward<TargetIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_baselineIdentifier;
    bool m_baselineIdentifierHasBeenSet = false;

    Aws::String m_baselineVersion;
    bool m_baselineVersionHasBeenSet = false;

    Aws::Vector<EnabledBaselineParameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_targetIdentifier;
    bool m_targetIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
