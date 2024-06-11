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
    AWS_CONTROLTOWER_API EnableBaselineRequest();

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
    inline const Aws::String& GetBaselineIdentifier() const{ return m_baselineIdentifier; }
    inline bool BaselineIdentifierHasBeenSet() const { return m_baselineIdentifierHasBeenSet; }
    inline void SetBaselineIdentifier(const Aws::String& value) { m_baselineIdentifierHasBeenSet = true; m_baselineIdentifier = value; }
    inline void SetBaselineIdentifier(Aws::String&& value) { m_baselineIdentifierHasBeenSet = true; m_baselineIdentifier = std::move(value); }
    inline void SetBaselineIdentifier(const char* value) { m_baselineIdentifierHasBeenSet = true; m_baselineIdentifier.assign(value); }
    inline EnableBaselineRequest& WithBaselineIdentifier(const Aws::String& value) { SetBaselineIdentifier(value); return *this;}
    inline EnableBaselineRequest& WithBaselineIdentifier(Aws::String&& value) { SetBaselineIdentifier(std::move(value)); return *this;}
    inline EnableBaselineRequest& WithBaselineIdentifier(const char* value) { SetBaselineIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific version to be enabled of the specified baseline.</p>
     */
    inline const Aws::String& GetBaselineVersion() const{ return m_baselineVersion; }
    inline bool BaselineVersionHasBeenSet() const { return m_baselineVersionHasBeenSet; }
    inline void SetBaselineVersion(const Aws::String& value) { m_baselineVersionHasBeenSet = true; m_baselineVersion = value; }
    inline void SetBaselineVersion(Aws::String&& value) { m_baselineVersionHasBeenSet = true; m_baselineVersion = std::move(value); }
    inline void SetBaselineVersion(const char* value) { m_baselineVersionHasBeenSet = true; m_baselineVersion.assign(value); }
    inline EnableBaselineRequest& WithBaselineVersion(const Aws::String& value) { SetBaselineVersion(value); return *this;}
    inline EnableBaselineRequest& WithBaselineVersion(Aws::String&& value) { SetBaselineVersion(std::move(value)); return *this;}
    inline EnableBaselineRequest& WithBaselineVersion(const char* value) { SetBaselineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>key-value</code> objects that specify enablement parameters,
     * where <code>key</code> is a string and <code>value</code> is a document of any
     * type.</p>
     */
    inline const Aws::Vector<EnabledBaselineParameter>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Vector<EnabledBaselineParameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Vector<EnabledBaselineParameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline EnableBaselineRequest& WithParameters(const Aws::Vector<EnabledBaselineParameter>& value) { SetParameters(value); return *this;}
    inline EnableBaselineRequest& WithParameters(Aws::Vector<EnabledBaselineParameter>&& value) { SetParameters(std::move(value)); return *this;}
    inline EnableBaselineRequest& AddParameters(const EnabledBaselineParameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }
    inline EnableBaselineRequest& AddParameters(EnabledBaselineParameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Tags associated with input to <code>EnableBaseline</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline EnableBaselineRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline EnableBaselineRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline EnableBaselineRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline EnableBaselineRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline EnableBaselineRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline EnableBaselineRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline EnableBaselineRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline EnableBaselineRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline EnableBaselineRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the target on which the baseline will be enabled. Only OUs are
     * supported as targets.</p>
     */
    inline const Aws::String& GetTargetIdentifier() const{ return m_targetIdentifier; }
    inline bool TargetIdentifierHasBeenSet() const { return m_targetIdentifierHasBeenSet; }
    inline void SetTargetIdentifier(const Aws::String& value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier = value; }
    inline void SetTargetIdentifier(Aws::String&& value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier = std::move(value); }
    inline void SetTargetIdentifier(const char* value) { m_targetIdentifierHasBeenSet = true; m_targetIdentifier.assign(value); }
    inline EnableBaselineRequest& WithTargetIdentifier(const Aws::String& value) { SetTargetIdentifier(value); return *this;}
    inline EnableBaselineRequest& WithTargetIdentifier(Aws::String&& value) { SetTargetIdentifier(std::move(value)); return *this;}
    inline EnableBaselineRequest& WithTargetIdentifier(const char* value) { SetTargetIdentifier(value); return *this;}
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
