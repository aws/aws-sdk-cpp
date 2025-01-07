/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains configurations for a query, each of which defines information about
   * example queries to help the query engine generate appropriate SQL
   * queries.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/CuratedQuery">AWS
   * API Reference</a></p>
   */
  class CuratedQuery
  {
  public:
    AWS_BEDROCKAGENT_API CuratedQuery();
    AWS_BEDROCKAGENT_API CuratedQuery(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API CuratedQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An example natural language query.</p>
     */
    inline const Aws::String& GetNaturalLanguage() const{ return m_naturalLanguage; }
    inline bool NaturalLanguageHasBeenSet() const { return m_naturalLanguageHasBeenSet; }
    inline void SetNaturalLanguage(const Aws::String& value) { m_naturalLanguageHasBeenSet = true; m_naturalLanguage = value; }
    inline void SetNaturalLanguage(Aws::String&& value) { m_naturalLanguageHasBeenSet = true; m_naturalLanguage = std::move(value); }
    inline void SetNaturalLanguage(const char* value) { m_naturalLanguageHasBeenSet = true; m_naturalLanguage.assign(value); }
    inline CuratedQuery& WithNaturalLanguage(const Aws::String& value) { SetNaturalLanguage(value); return *this;}
    inline CuratedQuery& WithNaturalLanguage(Aws::String&& value) { SetNaturalLanguage(std::move(value)); return *this;}
    inline CuratedQuery& WithNaturalLanguage(const char* value) { SetNaturalLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SQL equivalent of the natural language query.</p>
     */
    inline const Aws::String& GetSql() const{ return m_sql; }
    inline bool SqlHasBeenSet() const { return m_sqlHasBeenSet; }
    inline void SetSql(const Aws::String& value) { m_sqlHasBeenSet = true; m_sql = value; }
    inline void SetSql(Aws::String&& value) { m_sqlHasBeenSet = true; m_sql = std::move(value); }
    inline void SetSql(const char* value) { m_sqlHasBeenSet = true; m_sql.assign(value); }
    inline CuratedQuery& WithSql(const Aws::String& value) { SetSql(value); return *this;}
    inline CuratedQuery& WithSql(Aws::String&& value) { SetSql(std::move(value)); return *this;}
    inline CuratedQuery& WithSql(const char* value) { SetSql(value); return *this;}
    ///@}
  private:

    Aws::String m_naturalLanguage;
    bool m_naturalLanguageHasBeenSet = false;

    Aws::String m_sql;
    bool m_sqlHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
