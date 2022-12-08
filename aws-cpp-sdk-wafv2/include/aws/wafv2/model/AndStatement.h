/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/Statement.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace WAFV2
{
namespace Model
{
  class Statement;

  /**
   * <p>A logical rule statement used to combine other rule statements with AND
   * logic. You provide more than one <a>Statement</a> within the
   * <code>AndStatement</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/AndStatement">AWS
   * API Reference</a></p>
   */
  class AndStatement
  {
  public:
    AWS_WAFV2_API AndStatement();
    AWS_WAFV2_API AndStatement(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API AndStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The statements to combine with AND logic. You can use any statements that can
     * be nested. </p>
     */
    inline const Aws::Vector<Statement>& GetStatements() const{ return m_statements; }

    /**
     * <p>The statements to combine with AND logic. You can use any statements that can
     * be nested. </p>
     */
    inline bool StatementsHasBeenSet() const { return m_statementsHasBeenSet; }

    /**
     * <p>The statements to combine with AND logic. You can use any statements that can
     * be nested. </p>
     */
    inline void SetStatements(const Aws::Vector<Statement>& value) { m_statementsHasBeenSet = true; m_statements = value; }

    /**
     * <p>The statements to combine with AND logic. You can use any statements that can
     * be nested. </p>
     */
    inline void SetStatements(Aws::Vector<Statement>&& value) { m_statementsHasBeenSet = true; m_statements = std::move(value); }

    /**
     * <p>The statements to combine with AND logic. You can use any statements that can
     * be nested. </p>
     */
    inline AndStatement& WithStatements(const Aws::Vector<Statement>& value) { SetStatements(value); return *this;}

    /**
     * <p>The statements to combine with AND logic. You can use any statements that can
     * be nested. </p>
     */
    inline AndStatement& WithStatements(Aws::Vector<Statement>&& value) { SetStatements(std::move(value)); return *this;}

    /**
     * <p>The statements to combine with AND logic. You can use any statements that can
     * be nested. </p>
     */
    inline AndStatement& AddStatements(const Statement& value) { m_statementsHasBeenSet = true; m_statements.push_back(value); return *this; }

    /**
     * <p>The statements to combine with AND logic. You can use any statements that can
     * be nested. </p>
     */
    inline AndStatement& AddStatements(Statement&& value) { m_statementsHasBeenSet = true; m_statements.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Statement> m_statements;
    bool m_statementsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
