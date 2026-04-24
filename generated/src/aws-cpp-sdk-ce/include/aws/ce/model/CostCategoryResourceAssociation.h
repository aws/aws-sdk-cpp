/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CostExplorer {
namespace Model {

/**
 * <p>A reference to a cost category association that contains information on an
 * associated resource. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/CostCategoryResourceAssociation">AWS
 * API Reference</a></p>
 */
class CostCategoryResourceAssociation {
 public:
  AWS_COSTEXPLORER_API CostCategoryResourceAssociation() = default;
  AWS_COSTEXPLORER_API CostCategoryResourceAssociation(Aws::Utils::Json::JsonView jsonValue);
  AWS_COSTEXPLORER_API CostCategoryResourceAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The unique identifier for an associated resource. </p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  CostCategoryResourceAssociation& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetCostCategoryName() const { return m_costCategoryName; }
  inline bool CostCategoryNameHasBeenSet() const { return m_costCategoryNameHasBeenSet; }
  template <typename CostCategoryNameT = Aws::String>
  void SetCostCategoryName(CostCategoryNameT&& value) {
    m_costCategoryNameHasBeenSet = true;
    m_costCategoryName = std::forward<CostCategoryNameT>(value);
  }
  template <typename CostCategoryNameT = Aws::String>
  CostCategoryResourceAssociation& WithCostCategoryName(CostCategoryNameT&& value) {
    SetCostCategoryName(std::forward<CostCategoryNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for your cost category. </p>
   */
  inline const Aws::String& GetCostCategoryArn() const { return m_costCategoryArn; }
  inline bool CostCategoryArnHasBeenSet() const { return m_costCategoryArnHasBeenSet; }
  template <typename CostCategoryArnT = Aws::String>
  void SetCostCategoryArn(CostCategoryArnT&& value) {
    m_costCategoryArnHasBeenSet = true;
    m_costCategoryArn = std::forward<CostCategoryArnT>(value);
  }
  template <typename CostCategoryArnT = Aws::String>
  CostCategoryResourceAssociation& WithCostCategoryArn(CostCategoryArnT&& value) {
    SetCostCategoryArn(std::forward<CostCategoryArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceArn;

  Aws::String m_costCategoryName;

  Aws::String m_costCategoryArn;
  bool m_resourceArnHasBeenSet = false;
  bool m_costCategoryNameHasBeenSet = false;
  bool m_costCategoryArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace CostExplorer
}  // namespace Aws
