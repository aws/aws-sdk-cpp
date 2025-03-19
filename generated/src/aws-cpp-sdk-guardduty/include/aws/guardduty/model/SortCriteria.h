/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/OrderBy.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the criteria used for sorting
   * findings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/SortCriteria">AWS
   * API Reference</a></p>
   */
  class SortCriteria
  {
  public:
    AWS_GUARDDUTY_API SortCriteria() = default;
    AWS_GUARDDUTY_API SortCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API SortCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents the finding attribute, such as <code>accountId</code>, that sorts
     * the findings.</p>
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
     * <p>The order by which the sorted findings are to be displayed.</p>
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
} // namespace GuardDuty
} // namespace Aws
