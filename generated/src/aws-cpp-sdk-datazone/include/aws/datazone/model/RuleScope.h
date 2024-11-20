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
    AWS_DATAZONE_API RuleScope();
    AWS_DATAZONE_API RuleScope(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API RuleScope& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The asset type included in the rule scope.</p>
     */
    inline const AssetTypesForRule& GetAssetType() const{ return m_assetType; }
    inline bool AssetTypeHasBeenSet() const { return m_assetTypeHasBeenSet; }
    inline void SetAssetType(const AssetTypesForRule& value) { m_assetTypeHasBeenSet = true; m_assetType = value; }
    inline void SetAssetType(AssetTypesForRule&& value) { m_assetTypeHasBeenSet = true; m_assetType = std::move(value); }
    inline RuleScope& WithAssetType(const AssetTypesForRule& value) { SetAssetType(value); return *this;}
    inline RuleScope& WithAssetType(AssetTypesForRule&& value) { SetAssetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data product included in the rule scope.</p>
     */
    inline bool GetDataProduct() const{ return m_dataProduct; }
    inline bool DataProductHasBeenSet() const { return m_dataProductHasBeenSet; }
    inline void SetDataProduct(bool value) { m_dataProductHasBeenSet = true; m_dataProduct = value; }
    inline RuleScope& WithDataProduct(bool value) { SetDataProduct(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The project included in the rule scope.</p>
     */
    inline const ProjectsForRule& GetProject() const{ return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    inline void SetProject(const ProjectsForRule& value) { m_projectHasBeenSet = true; m_project = value; }
    inline void SetProject(ProjectsForRule&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }
    inline RuleScope& WithProject(const ProjectsForRule& value) { SetProject(value); return *this;}
    inline RuleScope& WithProject(ProjectsForRule&& value) { SetProject(std::move(value)); return *this;}
    ///@}
  private:

    AssetTypesForRule m_assetType;
    bool m_assetTypeHasBeenSet = false;

    bool m_dataProduct;
    bool m_dataProductHasBeenSet = false;

    ProjectsForRule m_project;
    bool m_projectHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
