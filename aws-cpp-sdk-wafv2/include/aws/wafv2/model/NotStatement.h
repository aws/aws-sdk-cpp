/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <utility>
#include <memory>

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
   * <p>A logical rule statement used to negate the results of another rule
   * statement. You provide one <a>Statement</a> within the
   * <code>NotStatement</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/NotStatement">AWS
   * API Reference</a></p>
   */
  class AWS_WAFV2_API NotStatement
  {
  public:
    NotStatement();
    NotStatement(Aws::Utils::Json::JsonView jsonValue);
    NotStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The statement to negate. You can use any statement that can be nested.</p>
     */
    const Statement& GetStatement() const;

    /**
     * <p>The statement to negate. You can use any statement that can be nested.</p>
     */
    bool StatementHasBeenSet() const;

    /**
     * <p>The statement to negate. You can use any statement that can be nested.</p>
     */
    void SetStatement(const Statement& value);

    /**
     * <p>The statement to negate. You can use any statement that can be nested.</p>
     */
    void SetStatement(Statement&& value);

    /**
     * <p>The statement to negate. You can use any statement that can be nested.</p>
     */
    NotStatement& WithStatement(const Statement& value);

    /**
     * <p>The statement to negate. You can use any statement that can be nested.</p>
     */
    NotStatement& WithStatement(Statement&& value);

  private:

    std::shared_ptr<Statement> m_statement;
    bool m_statementHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
