/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/RuleScopeSelectionMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The asset type for the rule details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AssetTypesForRule">AWS
   * API Reference</a></p>
   */
  class AssetTypesForRule
  {
  public:
    AWS_DATAZONE_API AssetTypesForRule() = default;
    AWS_DATAZONE_API AssetTypesForRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AssetTypesForRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The selection mode for the rule.</p>
     */
    inline RuleScopeSelectionMode GetSelectionMode() const { return m_selectionMode; }
    inline bool SelectionModeHasBeenSet() const { return m_selectionModeHasBeenSet; }
    inline void SetSelectionMode(RuleScopeSelectionMode value) { m_selectionModeHasBeenSet = true; m_selectionMode = value; }
    inline AssetTypesForRule& WithSelectionMode(RuleScopeSelectionMode value) { SetSelectionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific asset types that are included in the rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSpecificAssetTypes() const { return m_specificAssetTypes; }
    inline bool SpecificAssetTypesHasBeenSet() const { return m_specificAssetTypesHasBeenSet; }
    template<typename SpecificAssetTypesT = Aws::Vector<Aws::String>>
    void SetSpecificAssetTypes(SpecificAssetTypesT&& value) { m_specificAssetTypesHasBeenSet = true; m_specificAssetTypes = std::forward<SpecificAssetTypesT>(value); }
    template<typename SpecificAssetTypesT = Aws::Vector<Aws::String>>
    AssetTypesForRule& WithSpecificAssetTypes(SpecificAssetTypesT&& value) { SetSpecificAssetTypes(std::forward<SpecificAssetTypesT>(value)); return *this;}
    template<typename SpecificAssetTypesT = Aws::String>
    AssetTypesForRule& AddSpecificAssetTypes(SpecificAssetTypesT&& value) { m_specificAssetTypesHasBeenSet = true; m_specificAssetTypes.emplace_back(std::forward<SpecificAssetTypesT>(value)); return *this; }
    ///@}
  private:

    RuleScopeSelectionMode m_selectionMode{RuleScopeSelectionMode::NOT_SET};
    bool m_selectionModeHasBeenSet = false;

    Aws::Vector<Aws::String> m_specificAssetTypes;
    bool m_specificAssetTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
