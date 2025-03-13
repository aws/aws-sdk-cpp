/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/TestSetSortAttribute.h>
#include <aws/lexv2-models/model/SortOrder.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Contains information about the methods by which to sort the test
   * set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/TestSetSortBy">AWS
   * API Reference</a></p>
   */
  class TestSetSortBy
  {
  public:
    AWS_LEXMODELSV2_API TestSetSortBy() = default;
    AWS_LEXMODELSV2_API TestSetSortBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TestSetSortBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether to sort the test sets by name or by the time they were last
     * updated.</p>
     */
    inline TestSetSortAttribute GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(TestSetSortAttribute value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline TestSetSortBy& WithAttribute(TestSetSortAttribute value) { SetAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to sort in ascending or descending order.</p>
     */
    inline SortOrder GetOrder() const { return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(SortOrder value) { m_orderHasBeenSet = true; m_order = value; }
    inline TestSetSortBy& WithOrder(SortOrder value) { SetOrder(value); return *this;}
    ///@}
  private:

    TestSetSortAttribute m_attribute{TestSetSortAttribute::NOT_SET};
    bool m_attributeHasBeenSet = false;

    SortOrder m_order{SortOrder::NOT_SET};
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
