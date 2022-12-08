/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/PivotTableConditionalFormattingScopeRole.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The scope of the cell for conditional formatting.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PivotTableConditionalFormattingScope">AWS
   * API Reference</a></p>
   */
  class PivotTableConditionalFormattingScope
  {
  public:
    AWS_QUICKSIGHT_API PivotTableConditionalFormattingScope();
    AWS_QUICKSIGHT_API PivotTableConditionalFormattingScope(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PivotTableConditionalFormattingScope& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The role (field, field total, grand total) of the cell for conditional
     * formatting.</p>
     */
    inline const PivotTableConditionalFormattingScopeRole& GetRole() const{ return m_role; }

    /**
     * <p>The role (field, field total, grand total) of the cell for conditional
     * formatting.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The role (field, field total, grand total) of the cell for conditional
     * formatting.</p>
     */
    inline void SetRole(const PivotTableConditionalFormattingScopeRole& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The role (field, field total, grand total) of the cell for conditional
     * formatting.</p>
     */
    inline void SetRole(PivotTableConditionalFormattingScopeRole&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The role (field, field total, grand total) of the cell for conditional
     * formatting.</p>
     */
    inline PivotTableConditionalFormattingScope& WithRole(const PivotTableConditionalFormattingScopeRole& value) { SetRole(value); return *this;}

    /**
     * <p>The role (field, field total, grand total) of the cell for conditional
     * formatting.</p>
     */
    inline PivotTableConditionalFormattingScope& WithRole(PivotTableConditionalFormattingScopeRole&& value) { SetRole(std::move(value)); return *this;}

  private:

    PivotTableConditionalFormattingScopeRole m_role;
    bool m_roleHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
