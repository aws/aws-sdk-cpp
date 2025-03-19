/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/model/StatisticalIssueStatus.h>
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
namespace LookoutEquipment
{
namespace Model
{

  /**
   * <p> Entity that comprises information on categorical values in data.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/CategoricalValues">AWS
   * API Reference</a></p>
   */
  class CategoricalValues
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API CategoricalValues() = default;
    AWS_LOOKOUTEQUIPMENT_API CategoricalValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API CategoricalValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Indicates whether there is a potential data issue related to categorical
     * values. </p>
     */
    inline StatisticalIssueStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(StatisticalIssueStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CategoricalValues& WithStatus(StatisticalIssueStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the number of categories in the data. </p>
     */
    inline int GetNumberOfCategory() const { return m_numberOfCategory; }
    inline bool NumberOfCategoryHasBeenSet() const { return m_numberOfCategoryHasBeenSet; }
    inline void SetNumberOfCategory(int value) { m_numberOfCategoryHasBeenSet = true; m_numberOfCategory = value; }
    inline CategoricalValues& WithNumberOfCategory(int value) { SetNumberOfCategory(value); return *this;}
    ///@}
  private:

    StatisticalIssueStatus m_status{StatisticalIssueStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    int m_numberOfCategory{0};
    bool m_numberOfCategoryHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
