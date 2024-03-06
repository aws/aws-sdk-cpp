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
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailExclusionRules();
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailExclusionRules(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailExclusionRules& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains a list of tags that Image Builder uses to skip lifecycle actions for
     * Image Builder image resources that have them.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTagMap() const{ return m_tagMap; }

    /**
     * <p>Contains a list of tags that Image Builder uses to skip lifecycle actions for
     * Image Builder image resources that have them.</p>
     */
    inline bool TagMapHasBeenSet() const { return m_tagMapHasBeenSet; }

    /**
     * <p>Contains a list of tags that Image Builder uses to skip lifecycle actions for
     * Image Builder image resources that have them.</p>
     */
    inline void SetTagMap(const Aws::Map<Aws::String, Aws::String>& value) { m_tagMapHasBeenSet = true; m_tagMap = value; }

    /**
     * <p>Contains a list of tags that Image Builder uses to skip lifecycle actions for
     * Image Builder image resources that have them.</p>
     */
    inline void SetTagMap(Aws::Map<Aws::String, Aws::String>&& value) { m_tagMapHasBeenSet = true; m_tagMap = std::move(value); }

    /**
     * <p>Contains a list of tags that Image Builder uses to skip lifecycle actions for
     * Image Builder image resources that have them.</p>
     */
    inline LifecyclePolicyDetailExclusionRules& WithTagMap(const Aws::Map<Aws::String, Aws::String>& value) { SetTagMap(value); return *this;}

    /**
     * <p>Contains a list of tags that Image Builder uses to skip lifecycle actions for
     * Image Builder image resources that have them.</p>
     */
    inline LifecyclePolicyDetailExclusionRules& WithTagMap(Aws::Map<Aws::String, Aws::String>&& value) { SetTagMap(std::move(value)); return *this;}

    /**
     * <p>Contains a list of tags that Image Builder uses to skip lifecycle actions for
     * Image Builder image resources that have them.</p>
     */
    inline LifecyclePolicyDetailExclusionRules& AddTagMap(const Aws::String& key, const Aws::String& value) { m_tagMapHasBeenSet = true; m_tagMap.emplace(key, value); return *this; }

    /**
     * <p>Contains a list of tags that Image Builder uses to skip lifecycle actions for
     * Image Builder image resources that have them.</p>
     */
    inline LifecyclePolicyDetailExclusionRules& AddTagMap(Aws::String&& key, const Aws::String& value) { m_tagMapHasBeenSet = true; m_tagMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>Contains a list of tags that Image Builder uses to skip lifecycle actions for
     * Image Builder image resources that have them.</p>
     */
    inline LifecyclePolicyDetailExclusionRules& AddTagMap(const Aws::String& key, Aws::String&& value) { m_tagMapHasBeenSet = true; m_tagMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Contains a list of tags that Image Builder uses to skip lifecycle actions for
     * Image Builder image resources that have them.</p>
     */
    inline LifecyclePolicyDetailExclusionRules& AddTagMap(Aws::String&& key, Aws::String&& value) { m_tagMapHasBeenSet = true; m_tagMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Contains a list of tags that Image Builder uses to skip lifecycle actions for
     * Image Builder image resources that have them.</p>
     */
    inline LifecyclePolicyDetailExclusionRules& AddTagMap(const char* key, Aws::String&& value) { m_tagMapHasBeenSet = true; m_tagMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Contains a list of tags that Image Builder uses to skip lifecycle actions for
     * Image Builder image resources that have them.</p>
     */
    inline LifecyclePolicyDetailExclusionRules& AddTagMap(Aws::String&& key, const char* value) { m_tagMapHasBeenSet = true; m_tagMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>Contains a list of tags that Image Builder uses to skip lifecycle actions for
     * Image Builder image resources that have them.</p>
     */
    inline LifecyclePolicyDetailExclusionRules& AddTagMap(const char* key, const char* value) { m_tagMapHasBeenSet = true; m_tagMap.emplace(key, value); return *this; }


    /**
     * <p>Lists configuration values that apply to AMIs that Image Builder should
     * exclude from the lifecycle action.</p>
     */
    inline const LifecyclePolicyDetailExclusionRulesAmis& GetAmis() const{ return m_amis; }

    /**
     * <p>Lists configuration values that apply to AMIs that Image Builder should
     * exclude from the lifecycle action.</p>
     */
    inline bool AmisHasBeenSet() const { return m_amisHasBeenSet; }

    /**
     * <p>Lists configuration values that apply to AMIs that Image Builder should
     * exclude from the lifecycle action.</p>
     */
    inline void SetAmis(const LifecyclePolicyDetailExclusionRulesAmis& value) { m_amisHasBeenSet = true; m_amis = value; }

    /**
     * <p>Lists configuration values that apply to AMIs that Image Builder should
     * exclude from the lifecycle action.</p>
     */
    inline void SetAmis(LifecyclePolicyDetailExclusionRulesAmis&& value) { m_amisHasBeenSet = true; m_amis = std::move(value); }

    /**
     * <p>Lists configuration values that apply to AMIs that Image Builder should
     * exclude from the lifecycle action.</p>
     */
    inline LifecyclePolicyDetailExclusionRules& WithAmis(const LifecyclePolicyDetailExclusionRulesAmis& value) { SetAmis(value); return *this;}

    /**
     * <p>Lists configuration values that apply to AMIs that Image Builder should
     * exclude from the lifecycle action.</p>
     */
    inline LifecyclePolicyDetailExclusionRules& WithAmis(LifecyclePolicyDetailExclusionRulesAmis&& value) { SetAmis(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_tagMap;
    bool m_tagMapHasBeenSet = false;

    LifecyclePolicyDetailExclusionRulesAmis m_amis;
    bool m_amisHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
