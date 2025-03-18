/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/imagebuilder/model/LifecyclePolicyDetailExclusionRulesAmis.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Specifies resources that lifecycle policy actions should not apply
   * to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/LifecyclePolicyDetailExclusionRules">AWS
   * API Reference</a></p>
   */
  class LifecyclePolicyDetailExclusionRules
  {
  public:
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailExclusionRules() = default;
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailExclusionRules(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailExclusionRules& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains a list of tags that Image Builder uses to skip lifecycle actions for
     * Image Builder image resources that have them.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTagMap() const { return m_tagMap; }
    inline bool TagMapHasBeenSet() const { return m_tagMapHasBeenSet; }
    template<typename TagMapT = Aws::Map<Aws::String, Aws::String>>
    void SetTagMap(TagMapT&& value) { m_tagMapHasBeenSet = true; m_tagMap = std::forward<TagMapT>(value); }
    template<typename TagMapT = Aws::Map<Aws::String, Aws::String>>
    LifecyclePolicyDetailExclusionRules& WithTagMap(TagMapT&& value) { SetTagMap(std::forward<TagMapT>(value)); return *this;}
    template<typename TagMapKeyT = Aws::String, typename TagMapValueT = Aws::String>
    LifecyclePolicyDetailExclusionRules& AddTagMap(TagMapKeyT&& key, TagMapValueT&& value) {
      m_tagMapHasBeenSet = true; m_tagMap.emplace(std::forward<TagMapKeyT>(key), std::forward<TagMapValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Lists configuration values that apply to AMIs that Image Builder should
     * exclude from the lifecycle action.</p>
     */
    inline const LifecyclePolicyDetailExclusionRulesAmis& GetAmis() const { return m_amis; }
    inline bool AmisHasBeenSet() const { return m_amisHasBeenSet; }
    template<typename AmisT = LifecyclePolicyDetailExclusionRulesAmis>
    void SetAmis(AmisT&& value) { m_amisHasBeenSet = true; m_amis = std::forward<AmisT>(value); }
    template<typename AmisT = LifecyclePolicyDetailExclusionRulesAmis>
    LifecyclePolicyDetailExclusionRules& WithAmis(AmisT&& value) { SetAmis(std::forward<AmisT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_tagMap;
    bool m_tagMapHasBeenSet = false;

    LifecyclePolicyDetailExclusionRulesAmis m_amis;
    bool m_amisHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
