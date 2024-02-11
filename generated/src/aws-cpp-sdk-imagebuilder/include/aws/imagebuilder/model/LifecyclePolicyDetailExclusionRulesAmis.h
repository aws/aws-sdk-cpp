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
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailExclusionRulesAmis();
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailExclusionRulesAmis(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailExclusionRulesAmis& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configures whether public AMIs are excluded from the lifecycle action.</p>
     */
    inline bool GetIsPublic() const{ return m_isPublic; }

    /**
     * <p>Configures whether public AMIs are excluded from the lifecycle action.</p>
     */
    inline bool IsPublicHasBeenSet() const { return m_isPublicHasBeenSet; }

    /**
     * <p>Configures whether public AMIs are excluded from the lifecycle action.</p>
     */
    inline void SetIsPublic(bool value) { m_isPublicHasBeenSet = true; m_isPublic = value; }

    /**
     * <p>Configures whether public AMIs are excluded from the lifecycle action.</p>
     */
    inline LifecyclePolicyDetailExclusionRulesAmis& WithIsPublic(bool value) { SetIsPublic(value); return *this;}


    /**
     * <p>Configures Amazon Web Services Regions that are excluded from the lifecycle
     * action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const{ return m_regions; }

    /**
     * <p>Configures Amazon Web Services Regions that are excluded from the lifecycle
     * action.</p>
     */
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }

    /**
     * <p>Configures Amazon Web Services Regions that are excluded from the lifecycle
     * action.</p>
     */
    inline void SetRegions(const Aws::Vector<Aws::String>& value) { m_regionsHasBeenSet = true; m_regions = value; }

    /**
     * <p>Configures Amazon Web Services Regions that are excluded from the lifecycle
     * action.</p>
     */
    inline void SetRegions(Aws::Vector<Aws::String>&& value) { m_regionsHasBeenSet = true; m_regions = std::move(value); }

    /**
     * <p>Configures Amazon Web Services Regions that are excluded from the lifecycle
     * action.</p>
     */
    inline LifecyclePolicyDetailExclusionRulesAmis& WithRegions(const Aws::Vector<Aws::String>& value) { SetRegions(value); return *this;}

    /**
     * <p>Configures Amazon Web Services Regions that are excluded from the lifecycle
     * action.</p>
     */
    inline LifecyclePolicyDetailExclusionRulesAmis& WithRegions(Aws::Vector<Aws::String>&& value) { SetRegions(std::move(value)); return *this;}

    /**
     * <p>Configures Amazon Web Services Regions that are excluded from the lifecycle
     * action.</p>
     */
    inline LifecyclePolicyDetailExclusionRulesAmis& AddRegions(const Aws::String& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }

    /**
     * <p>Configures Amazon Web Services Regions that are excluded from the lifecycle
     * action.</p>
     */
    inline LifecyclePolicyDetailExclusionRulesAmis& AddRegions(Aws::String&& value) { m_regionsHasBeenSet = true; m_regions.push_back(std::move(value)); return *this; }

    /**
     * <p>Configures Amazon Web Services Regions that are excluded from the lifecycle
     * action.</p>
     */
    inline LifecyclePolicyDetailExclusionRulesAmis& AddRegions(const char* value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }


    /**
     * <p>Specifies Amazon Web Services accounts whose resources are excluded from the
     * lifecycle action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSharedAccounts() const{ return m_sharedAccounts; }

    /**
     * <p>Specifies Amazon Web Services accounts whose resources are excluded from the
     * lifecycle action.</p>
     */
    inline bool SharedAccountsHasBeenSet() const { return m_sharedAccountsHasBeenSet; }

    /**
     * <p>Specifies Amazon Web Services accounts whose resources are excluded from the
     * lifecycle action.</p>
     */
    inline void SetSharedAccounts(const Aws::Vector<Aws::String>& value) { m_sharedAccountsHasBeenSet = true; m_sharedAccounts = value; }

    /**
     * <p>Specifies Amazon Web Services accounts whose resources are excluded from the
     * lifecycle action.</p>
     */
    inline void SetSharedAccounts(Aws::Vector<Aws::String>&& value) { m_sharedAccountsHasBeenSet = true; m_sharedAccounts = std::move(value); }

    /**
     * <p>Specifies Amazon Web Services accounts whose resources are excluded from the
     * lifecycle action.</p>
     */
    inline LifecyclePolicyDetailExclusionRulesAmis& WithSharedAccounts(const Aws::Vector<Aws::String>& value) { SetSharedAccounts(value); return *this;}

    /**
     * <p>Specifies Amazon Web Services accounts whose resources are excluded from the
     * lifecycle action.</p>
     */
    inline LifecyclePolicyDetailExclusionRulesAmis& WithSharedAccounts(Aws::Vector<Aws::String>&& value) { SetSharedAccounts(std::move(value)); return *this;}

    /**
     * <p>Specifies Amazon Web Services accounts whose resources are excluded from the
     * lifecycle action.</p>
     */
    inline LifecyclePolicyDetailExclusionRulesAmis& AddSharedAccounts(const Aws::String& value) { m_sharedAccountsHasBeenSet = true; m_sharedAccounts.push_back(value); return *this; }

    /**
     * <p>Specifies Amazon Web Services accounts whose resources are excluded from the
     * lifecycle action.</p>
     */
    inline LifecyclePolicyDetailExclusionRulesAmis& AddSharedAccounts(Aws::String&& value) { m_sharedAccountsHasBeenSet = true; m_sharedAccounts.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies Amazon Web Services accounts whose resources are excluded from the
     * lifecycle action.</p>
     */
    inline LifecyclePolicyDetailExclusionRulesAmis& AddSharedAccounts(const char* value) { m_sharedAccountsHasBeenSet = true; m_sharedAccounts.push_back(value); return *this; }


    /**
     * <p>Specifies configuration details for Image Builder to exclude the most recent
     * resources from lifecycle actions.</p>
     */
    inline const LifecyclePolicyDetailExclusionRulesAmisLastLaunched& GetLastLaunched() const{ return m_lastLaunched; }

    /**
     * <p>Specifies configuration details for Image Builder to exclude the most recent
     * resources from lifecycle actions.</p>
     */
    inline bool LastLaunchedHasBeenSet() const { return m_lastLaunchedHasBeenSet; }

    /**
     * <p>Specifies configuration details for Image Builder to exclude the most recent
     * resources from lifecycle actions.</p>
     */
    inline void SetLastLaunched(const LifecyclePolicyDetailExclusionRulesAmisLastLaunched& value) { m_lastLaunchedHasBeenSet = true; m_lastLaunched = value; }

    /**
     * <p>Specifies configuration details for Image Builder to exclude the most recent
     * resources from lifecycle actions.</p>
     */
    inline void SetLastLaunched(LifecyclePolicyDetailExclusionRulesAmisLastLaunched&& value) { m_lastLaunchedHasBeenSet = true; m_lastLaunched = std::move(value); }

    /**
     * <p>Specifies configuration details for Image Builder to exclude the most recent
     * resources from lifecycle actions.</p>
     */
    inline LifecyclePolicyDetailExclusionRulesAmis& WithLastLaunched(const LifecyclePolicyDetailExclusionRulesAmisLastLaunched& value) { SetLastLaunched(value); return *this;}

    /**
     * <p>Specifies configuration details for Image Builder to exclude the most recent
     * resources from lifecycle actions.</p>
     */
    inline LifecyclePolicyDetailExclusionRulesAmis& WithLastLaunched(LifecyclePolicyDetailExclusionRulesAmisLastLaunched&& value) { SetLastLaunched(std::move(value)); return *this;}


    /**
     * <p>Lists tags that should be excluded from lifecycle actions for the AMIs that
     * have them.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTagMap() const{ return m_tagMap; }

    /**
     * <p>Lists tags that should be excluded from lifecycle actions for the AMIs that
     * have them.</p>
     */
    inline bool TagMapHasBeenSet() const { return m_tagMapHasBeenSet; }

    /**
     * <p>Lists tags that should be excluded from lifecycle actions for the AMIs that
     * have them.</p>
     */
    inline void SetTagMap(const Aws::Map<Aws::String, Aws::String>& value) { m_tagMapHasBeenSet = true; m_tagMap = value; }

    /**
     * <p>Lists tags that should be excluded from lifecycle actions for the AMIs that
     * have them.</p>
     */
    inline void SetTagMap(Aws::Map<Aws::String, Aws::String>&& value) { m_tagMapHasBeenSet = true; m_tagMap = std::move(value); }

    /**
     * <p>Lists tags that should be excluded from lifecycle actions for the AMIs that
     * have them.</p>
     */
    inline LifecyclePolicyDetailExclusionRulesAmis& WithTagMap(const Aws::Map<Aws::String, Aws::String>& value) { SetTagMap(value); return *this;}

    /**
     * <p>Lists tags that should be excluded from lifecycle actions for the AMIs that
     * have them.</p>
     */
    inline LifecyclePolicyDetailExclusionRulesAmis& WithTagMap(Aws::Map<Aws::String, Aws::String>&& value) { SetTagMap(std::move(value)); return *this;}

    /**
     * <p>Lists tags that should be excluded from lifecycle actions for the AMIs that
     * have them.</p>
     */
    inline LifecyclePolicyDetailExclusionRulesAmis& AddTagMap(const Aws::String& key, const Aws::String& value) { m_tagMapHasBeenSet = true; m_tagMap.emplace(key, value); return *this; }

    /**
     * <p>Lists tags that should be excluded from lifecycle actions for the AMIs that
     * have them.</p>
     */
    inline LifecyclePolicyDetailExclusionRulesAmis& AddTagMap(Aws::String&& key, const Aws::String& value) { m_tagMapHasBeenSet = true; m_tagMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>Lists tags that should be excluded from lifecycle actions for the AMIs that
     * have them.</p>
     */
    inline LifecyclePolicyDetailExclusionRulesAmis& AddTagMap(const Aws::String& key, Aws::String&& value) { m_tagMapHasBeenSet = true; m_tagMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Lists tags that should be excluded from lifecycle actions for the AMIs that
     * have them.</p>
     */
    inline LifecyclePolicyDetailExclusionRulesAmis& AddTagMap(Aws::String&& key, Aws::String&& value) { m_tagMapHasBeenSet = true; m_tagMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Lists tags that should be excluded from lifecycle actions for the AMIs that
     * have them.</p>
     */
    inline LifecyclePolicyDetailExclusionRulesAmis& AddTagMap(const char* key, Aws::String&& value) { m_tagMapHasBeenSet = true; m_tagMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Lists tags that should be excluded from lifecycle actions for the AMIs that
     * have them.</p>
     */
    inline LifecyclePolicyDetailExclusionRulesAmis& AddTagMap(Aws::String&& key, const char* value) { m_tagMapHasBeenSet = true; m_tagMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>Lists tags that should be excluded from lifecycle actions for the AMIs that
     * have them.</p>
     */
    inline LifecyclePolicyDetailExclusionRulesAmis& AddTagMap(const char* key, const char* value) { m_tagMapHasBeenSet = true; m_tagMap.emplace(key, value); return *this; }

  private:

    bool m_isPublic;
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
