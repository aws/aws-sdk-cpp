/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/TestExecutionSortAttribute.h>
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
   * <p>Contains information about the method by which to sort the instances of test
   * executions you have carried out.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/TestExecutionSortBy">AWS
   * API Reference</a></p>
   */
  class TestExecutionSortBy
  {
  public:
    AWS_LEXMODELSV2_API TestExecutionSortBy() = default;
    AWS_LEXMODELSV2_API TestExecutionSortBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TestExecutionSortBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether to sort the test set executions by the date and time at
     * which the test sets were created.</p>
     */
    inline TestExecutionSortAttribute GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(TestExecutionSortAttribute value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline TestExecutionSortBy& WithAttribute(TestExecutionSortAttribute value) { SetAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to sort in ascending or descending order.</p>
     */
    inline SortOrder GetOrder() const { return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(SortOrder value) { m_orderHasBeenSet = true; m_order = value; }
    inline TestExecutionSortBy& WithOrder(SortOrder value) { SetOrder(value); return *this;}
    ///@}
  private:

    TestExecutionSortAttribute m_attribute{TestExecutionSortAttribute::NOT_SET};
    bool m_attributeHasBeenSet = false;

    SortOrder m_order{SortOrder::NOT_SET};
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
