/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dataexchange/model/LFTag.h>
#include <aws/dataexchange/model/DatabaseLFTagPolicyPermission.h>
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
   * <p>The LF-tag policy and permissions for database resources.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/DatabaseLFTagPolicyAndPermissions">AWS
   * API Reference</a></p>
   */
  class DatabaseLFTagPolicyAndPermissions
  {
  public:
    AWS_DATAEXCHANGE_API DatabaseLFTagPolicyAndPermissions();
    AWS_DATAEXCHANGE_API DatabaseLFTagPolicyAndPermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API DatabaseLFTagPolicyAndPermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of LF-tag conditions that apply to database resources.</p>
     */
    inline const Aws::Vector<LFTag>& GetExpression() const{ return m_expression; }

    /**
     * <p>A list of LF-tag conditions that apply to database resources.</p>
     */
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    /**
     * <p>A list of LF-tag conditions that apply to database resources.</p>
     */
    inline void SetExpression(const Aws::Vector<LFTag>& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>A list of LF-tag conditions that apply to database resources.</p>
     */
    inline void SetExpression(Aws::Vector<LFTag>&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p>A list of LF-tag conditions that apply to database resources.</p>
     */
    inline DatabaseLFTagPolicyAndPermissions& WithExpression(const Aws::Vector<LFTag>& value) { SetExpression(value); return *this;}

    /**
     * <p>A list of LF-tag conditions that apply to database resources.</p>
     */
    inline DatabaseLFTagPolicyAndPermissions& WithExpression(Aws::Vector<LFTag>&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>A list of LF-tag conditions that apply to database resources.</p>
     */
    inline DatabaseLFTagPolicyAndPermissions& AddExpression(const LFTag& value) { m_expressionHasBeenSet = true; m_expression.push_back(value); return *this; }

    /**
     * <p>A list of LF-tag conditions that apply to database resources.</p>
     */
    inline DatabaseLFTagPolicyAndPermissions& AddExpression(LFTag&& value) { m_expressionHasBeenSet = true; m_expression.push_back(std::move(value)); return *this; }


    /**
     * <p>The permissions granted to subscribers on database resources.</p>
     */
    inline const Aws::Vector<DatabaseLFTagPolicyPermission>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>The permissions granted to subscribers on database resources.</p>
     */
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }

    /**
     * <p>The permissions granted to subscribers on database resources.</p>
     */
    inline void SetPermissions(const Aws::Vector<DatabaseLFTagPolicyPermission>& value) { m_permissionsHasBeenSet = true; m_permissions = value; }

    /**
     * <p>The permissions granted to subscribers on database resources.</p>
     */
    inline void SetPermissions(Aws::Vector<DatabaseLFTagPolicyPermission>&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }

    /**
     * <p>The permissions granted to subscribers on database resources.</p>
     */
    inline DatabaseLFTagPolicyAndPermissions& WithPermissions(const Aws::Vector<DatabaseLFTagPolicyPermission>& value) { SetPermissions(value); return *this;}

    /**
     * <p>The permissions granted to subscribers on database resources.</p>
     */
    inline DatabaseLFTagPolicyAndPermissions& WithPermissions(Aws::Vector<DatabaseLFTagPolicyPermission>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>The permissions granted to subscribers on database resources.</p>
     */
    inline DatabaseLFTagPolicyAndPermissions& AddPermissions(const DatabaseLFTagPolicyPermission& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }

    /**
     * <p>The permissions granted to subscribers on database resources.</p>
     */
    inline DatabaseLFTagPolicyAndPermissions& AddPermissions(DatabaseLFTagPolicyPermission&& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<LFTag> m_expression;
    bool m_expressionHasBeenSet = false;

    Aws::Vector<DatabaseLFTagPolicyPermission> m_permissions;
    bool m_permissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
