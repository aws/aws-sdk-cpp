/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/LifecyclePolicyDetailExclusionRulesAmisLastLaunched.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Defines criteria for AMIs that are excluded from lifecycle
   * actions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/LifecyclePolicyDetailExclusionRulesAmis">AWS
   * API Reference</a></p>
   */
  class LifecyclePolicyDetailExclusionRulesAmis
  {
  public:
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailExclusionRulesAmis() = default;
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailExclusionRulesAmis(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailExclusionRulesAmis& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configures whether public AMIs are excluded from the lifecycle action.</p>
     */
    inline bool GetIsPublic() const { return m_isPublic; }
    inline bool IsPublicHasBeenSet() const { return m_isPublicHasBeenSet; }
    inline void SetIsPublic(bool value) { m_isPublicHasBeenSet = true; m_isPublic = value; }
    inline LifecyclePolicyDetailExclusionRulesAmis& WithIsPublic(bool value) { SetIsPublic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures Amazon Web Services Regions that are excluded from the lifecycle
     * action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    void SetRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions = std::forward<RegionsT>(value); }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    LifecyclePolicyDetailExclusionRulesAmis& WithRegions(RegionsT&& value) { SetRegions(std::forward<RegionsT>(value)); return *this;}
    template<typename RegionsT = Aws::String>
    LifecyclePolicyDetailExclusionRulesAmis& AddRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions.emplace_back(std::forward<RegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies Amazon Web Services accounts whose resources are excluded from the
     * lifecycle action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSharedAccounts() const { return m_sharedAccounts; }
    inline bool SharedAccountsHasBeenSet() const { return m_sharedAccountsHasBeenSet; }
    template<typename SharedAccountsT = Aws::Vector<Aws::String>>
    void SetSharedAccounts(SharedAccountsT&& value) { m_sharedAccountsHasBeenSet = true; m_sharedAccounts = std::forward<SharedAccountsT>(value); }
    template<typename SharedAccountsT = Aws::Vector<Aws::String>>
    LifecyclePolicyDetailExclusionRulesAmis& WithSharedAccounts(SharedAccountsT&& value) { SetSharedAccounts(std::forward<SharedAccountsT>(value)); return *this;}
    template<typename SharedAccountsT = Aws::String>
    LifecyclePolicyDetailExclusionRulesAmis& AddSharedAccounts(SharedAccountsT&& value) { m_sharedAccountsHasBeenSet = true; m_sharedAccounts.emplace_back(std::forward<SharedAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies configuration details for Image Builder to exclude the most recent
     * resources from lifecycle actions.</p>
     */
    inline const LifecyclePolicyDetailExclusionRulesAmisLastLaunched& GetLastLaunched() const { return m_lastLaunched; }
    inline bool LastLaunchedHasBeenSet() const { return m_lastLaunchedHasBeenSet; }
    template<typename LastLaunchedT = LifecyclePolicyDetailExclusionRulesAmisLastLaunched>
    void SetLastLaunched(LastLaunchedT&& value) { m_lastLaunchedHasBeenSet = true; m_lastLaunched = std::forward<LastLaunchedT>(value); }
    template<typename LastLaunchedT = LifecyclePolicyDetailExclusionRulesAmisLastLaunched>
    LifecyclePolicyDetailExclusionRulesAmis& WithLastLaunched(LastLaunchedT&& value) { SetLastLaunched(std::forward<LastLaunchedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists tags that should be excluded from lifecycle actions for the AMIs that
     * have them.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTagMap() const { return m_tagMap; }
    inline bool TagMapHasBeenSet() const { return m_tagMapHasBeenSet; }
    template<typename TagMapT = Aws::Map<Aws::String, Aws::String>>
    void SetTagMap(TagMapT&& value) { m_tagMapHasBeenSet = true; m_tagMap = std::forward<TagMapT>(value); }
    template<typename TagMapT = Aws::Map<Aws::String, Aws::String>>
    LifecyclePolicyDetailExclusionRulesAmis& WithTagMap(TagMapT&& value) { SetTagMap(std::forward<TagMapT>(value)); return *this;}
    template<typename TagMapKeyT = Aws::String, typename TagMapValueT = Aws::String>
    LifecyclePolicyDetailExclusionRulesAmis& AddTagMap(TagMapKeyT&& key, TagMapValueT&& value) {
      m_tagMapHasBeenSet = true; m_tagMap.emplace(std::forward<TagMapKeyT>(key), std::forward<TagMapValueT>(value)); return *this;
    }
    ///@}
  private:

    bool m_isPublic{false};
    bool m_isPublicHasBeenSet = false;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_sharedAccounts;
    bool m_sharedAccountsHasBeenSet = false;

    LifecyclePolicyDetailExclusionRulesAmisLastLaunched m_lastLaunched;
    bool m_lastLaunchedHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tagMap;
    bool m_tagMapHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
