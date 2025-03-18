/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dataexchange/model/LFTag.h>
#include <aws/dataexchange/model/TableTagPolicyLFPermission.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>The LF-tag policy and permissions that apply to table
   * resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/TableLFTagPolicyAndPermissions">AWS
   * API Reference</a></p>
   */
  class TableLFTagPolicyAndPermissions
  {
  public:
    AWS_DATAEXCHANGE_API TableLFTagPolicyAndPermissions() = default;
    AWS_DATAEXCHANGE_API TableLFTagPolicyAndPermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API TableLFTagPolicyAndPermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of LF-tag conditions that apply to table resources.</p>
     */
    inline const Aws::Vector<LFTag>& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::Vector<LFTag>>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::Vector<LFTag>>
    TableLFTagPolicyAndPermissions& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    template<typename ExpressionT = LFTag>
    TableLFTagPolicyAndPermissions& AddExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression.emplace_back(std::forward<ExpressionT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The permissions granted to subscribers on table resources.</p>
     */
    inline const Aws::Vector<TableTagPolicyLFPermission>& GetPermissions() const { return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    template<typename PermissionsT = Aws::Vector<TableTagPolicyLFPermission>>
    void SetPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions = std::forward<PermissionsT>(value); }
    template<typename PermissionsT = Aws::Vector<TableTagPolicyLFPermission>>
    TableLFTagPolicyAndPermissions& WithPermissions(PermissionsT&& value) { SetPermissions(std::forward<PermissionsT>(value)); return *this;}
    inline TableLFTagPolicyAndPermissions& AddPermissions(TableTagPolicyLFPermission value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<LFTag> m_expression;
    bool m_expressionHasBeenSet = false;

    Aws::Vector<TableTagPolicyLFPermission> m_permissions;
    bool m_permissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
