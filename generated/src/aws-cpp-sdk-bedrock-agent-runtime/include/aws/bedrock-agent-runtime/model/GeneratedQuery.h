/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/GeneratedQueryType.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Contains information about a query generated for a natural language
   * query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/GeneratedQuery">AWS
   * API Reference</a></p>
   */
  class GeneratedQuery
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API GeneratedQuery();
    AWS_BEDROCKAGENTRUNTIME_API GeneratedQuery(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API GeneratedQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An SQL query that corresponds to the natural language query.</p>
     */
    inline const Aws::String& GetSql() const{ return m_sql; }
    inline bool SqlHasBeenSet() const { return m_sqlHasBeenSet; }
    inline void SetSql(const Aws::String& value) { m_sqlHasBeenSet = true; m_sql = value; }
    inline void SetSql(Aws::String&& value) { m_sqlHasBeenSet = true; m_sql = std::move(value); }
    inline void SetSql(const char* value) { m_sqlHasBeenSet = true; m_sql.assign(value); }
    inline GeneratedQuery& WithSql(const Aws::String& value) { SetSql(value); return *this;}
    inline GeneratedQuery& WithSql(Aws::String&& value) { SetSql(std::move(value)); return *this;}
    inline GeneratedQuery& WithSql(const char* value) { SetSql(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of transformed query.</p>
     */
    inline const GeneratedQueryType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const GeneratedQueryType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(GeneratedQueryType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline GeneratedQuery& WithType(const GeneratedQueryType& value) { SetType(value); return *this;}
    inline GeneratedQuery& WithType(GeneratedQueryType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_sql;
    bool m_sqlHasBeenSet = false;

    GeneratedQueryType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
