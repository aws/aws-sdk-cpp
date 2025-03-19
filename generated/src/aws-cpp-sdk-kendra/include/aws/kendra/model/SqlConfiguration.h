/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/QueryIdentifiersEnclosingOption.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides the configuration information to use a SQL database.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/SqlConfiguration">AWS
   * API Reference</a></p>
   */
  class SqlConfiguration
  {
  public:
    AWS_KENDRA_API SqlConfiguration() = default;
    AWS_KENDRA_API SqlConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API SqlConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines whether Amazon Kendra encloses SQL identifiers for tables and
     * column names in double quotes (") when making a database query.</p> <p>By
     * default, Amazon Kendra passes SQL identifiers the way that they are entered into
     * the data source configuration. It does not change the case of identifiers or
     * enclose them in quotes.</p> <p>PostgreSQL internally converts uppercase
     * characters to lower case characters in identifiers unless they are quoted.
     * Choosing this option encloses identifiers in quotes so that PostgreSQL does not
     * convert the character's case.</p> <p>For MySQL databases, you must enable the
     * <code>ansi_quotes</code> option when you set this field to
     * <code>DOUBLE_QUOTES</code>.</p>
     */
    inline QueryIdentifiersEnclosingOption GetQueryIdentifiersEnclosingOption() const { return m_queryIdentifiersEnclosingOption; }
    inline bool QueryIdentifiersEnclosingOptionHasBeenSet() const { return m_queryIdentifiersEnclosingOptionHasBeenSet; }
    inline void SetQueryIdentifiersEnclosingOption(QueryIdentifiersEnclosingOption value) { m_queryIdentifiersEnclosingOptionHasBeenSet = true; m_queryIdentifiersEnclosingOption = value; }
    inline SqlConfiguration& WithQueryIdentifiersEnclosingOption(QueryIdentifiersEnclosingOption value) { SetQueryIdentifiersEnclosingOption(value); return *this;}
    ///@}
  private:

    QueryIdentifiersEnclosingOption m_queryIdentifiersEnclosingOption{QueryIdentifiersEnclosingOption::NOT_SET};
    bool m_queryIdentifiersEnclosingOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
