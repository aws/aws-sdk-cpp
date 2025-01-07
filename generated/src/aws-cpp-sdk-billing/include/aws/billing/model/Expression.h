/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/DimensionValues.h>
#include <aws/billing/model/TagValues.h>
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
namespace Billing
{
namespace Model
{

  /**
   * <p> See <a
   * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>.
   * Billing view only supports <code>LINKED_ACCOUNT</code> and <code>Tags</code>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/Expression">AWS
   * API Reference</a></p>
   */
  class Expression
  {
  public:
    AWS_BILLING_API Expression();
    AWS_BILLING_API Expression(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLING_API Expression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The specific <code>Dimension</code> to use for <code>Expression</code>. </p>
     */
    inline const DimensionValues& GetDimensions() const{ return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    inline void SetDimensions(const DimensionValues& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }
    inline void SetDimensions(DimensionValues&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }
    inline Expression& WithDimensions(const DimensionValues& value) { SetDimensions(value); return *this;}
    inline Expression& WithDimensions(DimensionValues&& value) { SetDimensions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The specific <code>Tag</code> to use for <code>Expression</code>. </p>
     */
    inline const TagValues& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const TagValues& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(TagValues&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Expression& WithTags(const TagValues& value) { SetTags(value); return *this;}
    inline Expression& WithTags(TagValues&& value) { SetTags(std::move(value)); return *this;}
    ///@}
  private:

    DimensionValues m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    TagValues m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Billing
} // namespace Aws
