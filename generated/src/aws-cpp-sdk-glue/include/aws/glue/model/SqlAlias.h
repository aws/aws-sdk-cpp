/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Represents a single entry in the list of values for <code>SqlAliases</code>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SqlAlias">AWS API
   * Reference</a></p>
   */
  class SqlAlias
  {
  public:
    AWS_GLUE_API SqlAlias();
    AWS_GLUE_API SqlAlias(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API SqlAlias& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A table, or a column in a table.</p>
     */
    inline const Aws::String& GetFrom() const{ return m_from; }

    /**
     * <p>A table, or a column in a table.</p>
     */
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }

    /**
     * <p>A table, or a column in a table.</p>
     */
    inline void SetFrom(const Aws::String& value) { m_fromHasBeenSet = true; m_from = value; }

    /**
     * <p>A table, or a column in a table.</p>
     */
    inline void SetFrom(Aws::String&& value) { m_fromHasBeenSet = true; m_from = std::move(value); }

    /**
     * <p>A table, or a column in a table.</p>
     */
    inline void SetFrom(const char* value) { m_fromHasBeenSet = true; m_from.assign(value); }

    /**
     * <p>A table, or a column in a table.</p>
     */
    inline SqlAlias& WithFrom(const Aws::String& value) { SetFrom(value); return *this;}

    /**
     * <p>A table, or a column in a table.</p>
     */
    inline SqlAlias& WithFrom(Aws::String&& value) { SetFrom(std::move(value)); return *this;}

    /**
     * <p>A table, or a column in a table.</p>
     */
    inline SqlAlias& WithFrom(const char* value) { SetFrom(value); return *this;}


    /**
     * <p>A temporary name given to a table, or a column in a table.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>A temporary name given to a table, or a column in a table.</p>
     */
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }

    /**
     * <p>A temporary name given to a table, or a column in a table.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>A temporary name given to a table, or a column in a table.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }

    /**
     * <p>A temporary name given to a table, or a column in a table.</p>
     */
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }

    /**
     * <p>A temporary name given to a table, or a column in a table.</p>
     */
    inline SqlAlias& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>A temporary name given to a table, or a column in a table.</p>
     */
    inline SqlAlias& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>A temporary name given to a table, or a column in a table.</p>
     */
    inline SqlAlias& WithAlias(const char* value) { SetAlias(value); return *this;}

  private:

    Aws::String m_from;
    bool m_fromHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
