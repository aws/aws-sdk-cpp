/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AssetTypesForRule.h>
#include <aws/datazone/model/ProjectsForRule.h>
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
   * <p>The scope of a rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/RuleScope">AWS
   * API Reference</a></p>
   */
  class RuleScope
  {
  public:
    AWS_DATAZONE_API RuleScope() = default;
    AWS_DATAZONE_API RuleScope(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API RuleScope& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The asset type included in the rule scope.</p>
     */
    inline const AssetTypesForRule& GetAssetType() const { return m_assetType; }
    inline bool AssetTypeHasBeenSet() const { return m_assetTypeHasBeenSet; }
    template<typename AssetTypeT = AssetTypesForRule>
    void SetAssetType(AssetTypeT&& value) { m_assetTypeHasBeenSet = true; m_assetType = std::forward<AssetTypeT>(value); }
    template<typename AssetTypeT = AssetTypesForRule>
    RuleScope& WithAssetType(AssetTypeT&& value) { SetAssetType(std::forward<AssetTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data product included in the rule scope.</p>
     */
    inline bool GetDataProduct() const { return m_dataProduct; }
    inline bool DataProductHasBeenSet() const { return m_dataProductHasBeenSet; }
    inline void SetDataProduct(bool value) { m_dataProductHasBeenSet = true; m_dataProduct = value; }
    inline RuleScope& WithDataProduct(bool value) { SetDataProduct(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The project included in the rule scope.</p>
     */
    inline const ProjectsForRule& GetProject() const { return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    template<typename ProjectT = ProjectsForRule>
    void SetProject(ProjectT&& value) { m_projectHasBeenSet = true; m_project = std::forward<ProjectT>(value); }
    template<typename ProjectT = ProjectsForRule>
    RuleScope& WithProject(ProjectT&& value) { SetProject(std::forward<ProjectT>(value)); return *this;}
    ///@}
  private:

    AssetTypesForRule m_assetType;
    bool m_assetTypeHasBeenSet = false;

    bool m_dataProduct{false};
    bool m_dataProductHasBeenSet = false;

    ProjectsForRule m_project;
    bool m_projectHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
