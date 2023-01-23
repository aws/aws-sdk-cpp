/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Selector of a column from a dataset for profile job configuration. One
   * selector includes either a column name or a regular expression.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/ColumnSelector">AWS
   * API Reference</a></p>
   */
  class ColumnSelector
  {
  public:
    AWS_GLUEDATABREW_API ColumnSelector();
    AWS_GLUEDATABREW_API ColumnSelector(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API ColumnSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A regular expression for selecting a column from a dataset.</p>
     */
    inline const Aws::String& GetRegex() const{ return m_regex; }

    /**
     * <p>A regular expression for selecting a column from a dataset.</p>
     */
    inline bool RegexHasBeenSet() const { return m_regexHasBeenSet; }

    /**
     * <p>A regular expression for selecting a column from a dataset.</p>
     */
    inline void SetRegex(const Aws::String& value) { m_regexHasBeenSet = true; m_regex = value; }

    /**
     * <p>A regular expression for selecting a column from a dataset.</p>
     */
    inline void SetRegex(Aws::String&& value) { m_regexHasBeenSet = true; m_regex = std::move(value); }

    /**
     * <p>A regular expression for selecting a column from a dataset.</p>
     */
    inline void SetRegex(const char* value) { m_regexHasBeenSet = true; m_regex.assign(value); }

    /**
     * <p>A regular expression for selecting a column from a dataset.</p>
     */
    inline ColumnSelector& WithRegex(const Aws::String& value) { SetRegex(value); return *this;}

    /**
     * <p>A regular expression for selecting a column from a dataset.</p>
     */
    inline ColumnSelector& WithRegex(Aws::String&& value) { SetRegex(std::move(value)); return *this;}

    /**
     * <p>A regular expression for selecting a column from a dataset.</p>
     */
    inline ColumnSelector& WithRegex(const char* value) { SetRegex(value); return *this;}


    /**
     * <p>The name of a column from a dataset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a column from a dataset.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of a column from a dataset.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a column from a dataset.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of a column from a dataset.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a column from a dataset.</p>
     */
    inline ColumnSelector& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a column from a dataset.</p>
     */
    inline ColumnSelector& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a column from a dataset.</p>
     */
    inline ColumnSelector& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_regex;
    bool m_regexHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
