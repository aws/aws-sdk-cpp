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
    AWS_DATAZONE_API AssetTypesForRule();
    AWS_DATAZONE_API AssetTypesForRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AssetTypesForRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The selection mode for the rule.</p>
     */
    inline const RuleScopeSelectionMode& GetSelectionMode() const{ return m_selectionMode; }
    inline bool SelectionModeHasBeenSet() const { return m_selectionModeHasBeenSet; }
    inline void SetSelectionMode(const RuleScopeSelectionMode& value) { m_selectionModeHasBeenSet = true; m_selectionMode = value; }
    inline void SetSelectionMode(RuleScopeSelectionMode&& value) { m_selectionModeHasBeenSet = true; m_selectionMode = std::move(value); }
    inline AssetTypesForRule& WithSelectionMode(const RuleScopeSelectionMode& value) { SetSelectionMode(value); return *this;}
    inline AssetTypesForRule& WithSelectionMode(RuleScopeSelectionMode&& value) { SetSelectionMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific asset types that are included in the rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSpecificAssetTypes() const{ return m_specificAssetTypes; }
    inline bool SpecificAssetTypesHasBeenSet() const { return m_specificAssetTypesHasBeenSet; }
    inline void SetSpecificAssetTypes(const Aws::Vector<Aws::String>& value) { m_specificAssetTypesHasBeenSet = true; m_specificAssetTypes = value; }
    inline void SetSpecificAssetTypes(Aws::Vector<Aws::String>&& value) { m_specificAssetTypesHasBeenSet = true; m_specificAssetTypes = std::move(value); }
    inline AssetTypesForRule& WithSpecificAssetTypes(const Aws::Vector<Aws::String>& value) { SetSpecificAssetTypes(value); return *this;}
    inline AssetTypesForRule& WithSpecificAssetTypes(Aws::Vector<Aws::String>&& value) { SetSpecificAssetTypes(std::move(value)); return *this;}
    inline AssetTypesForRule& AddSpecificAssetTypes(const Aws::String& value) { m_specificAssetTypesHasBeenSet = true; m_specificAssetTypes.push_back(value); return *this; }
    inline AssetTypesForRule& AddSpecificAssetTypes(Aws::String&& value) { m_specificAssetTypesHasBeenSet = true; m_specificAssetTypes.push_back(std::move(value)); return *this; }
    inline AssetTypesForRule& AddSpecificAssetTypes(const char* value) { m_specificAssetTypesHasBeenSet = true; m_specificAssetTypes.push_back(value); return *this; }
    ///@}
  private:

    RuleScopeSelectionMode m_selectionMode;
    bool m_selectionModeHasBeenSet = false;

    Aws::Vector<Aws::String> m_specificAssetTypes;
    bool m_specificAssetTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
