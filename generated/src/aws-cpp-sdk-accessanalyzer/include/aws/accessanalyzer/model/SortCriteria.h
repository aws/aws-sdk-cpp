/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/OrderBy.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>The criteria used to sort.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/SortCriteria">AWS
   * API Reference</a></p>
   */
  class SortCriteria
  {
  public:
    AWS_ACCESSANALYZER_API SortCriteria() = default;
    AWS_ACCESSANALYZER_API SortCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API SortCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the attribute to sort on.</p>
     */
    inline const Aws::String& GetAttributeName() const { return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    template<typename AttributeNameT = Aws::String>
    void SetAttributeName(AttributeNameT&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::forward<AttributeNameT>(value); }
    template<typename AttributeNameT = Aws::String>
    SortCriteria& WithAttributeName(AttributeNameT&& value) { SetAttributeName(std::forward<AttributeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order, ascending or descending.</p>
     */
    inline OrderBy GetOrderBy() const { return m_orderBy; }
    inline bool OrderByHasBeenSet() const { return m_orderByHasBeenSet; }
    inline void SetOrderBy(OrderBy value) { m_orderByHasBeenSet = true; m_orderBy = value; }
    inline SortCriteria& WithOrderBy(OrderBy value) { SetOrderBy(value); return *this;}
    ///@}
  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    OrderBy m_orderBy{OrderBy::NOT_SET};
    bool m_orderByHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
