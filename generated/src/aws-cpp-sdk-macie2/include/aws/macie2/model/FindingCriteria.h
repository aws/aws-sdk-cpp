/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/CriterionAdditionalProperties.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies, as a map, one or more property-based conditions that filter the
   * results of a query for findings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/FindingCriteria">AWS
   * API Reference</a></p>
   */
  class FindingCriteria
  {
  public:
    AWS_MACIE2_API FindingCriteria() = default;
    AWS_MACIE2_API FindingCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API FindingCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A condition that specifies the property, operator, and one or more values to
     * use to filter the results.</p>
     */
    inline const Aws::Map<Aws::String, CriterionAdditionalProperties>& GetCriterion() const { return m_criterion; }
    inline bool CriterionHasBeenSet() const { return m_criterionHasBeenSet; }
    template<typename CriterionT = Aws::Map<Aws::String, CriterionAdditionalProperties>>
    void SetCriterion(CriterionT&& value) { m_criterionHasBeenSet = true; m_criterion = std::forward<CriterionT>(value); }
    template<typename CriterionT = Aws::Map<Aws::String, CriterionAdditionalProperties>>
    FindingCriteria& WithCriterion(CriterionT&& value) { SetCriterion(std::forward<CriterionT>(value)); return *this;}
    template<typename CriterionKeyT = Aws::String, typename CriterionValueT = CriterionAdditionalProperties>
    FindingCriteria& AddCriterion(CriterionKeyT&& key, CriterionValueT&& value) {
      m_criterionHasBeenSet = true; m_criterion.emplace(std::forward<CriterionKeyT>(key), std::forward<CriterionValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, CriterionAdditionalProperties> m_criterion;
    bool m_criterionHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
