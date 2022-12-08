/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/FilterType.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>Specifies which files, folders, and objects to include or exclude when
   * transferring files from source to destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/FilterRule">AWS
   * API Reference</a></p>
   */
  class FilterRule
  {
  public:
    AWS_DATASYNC_API FilterRule();
    AWS_DATASYNC_API FilterRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API FilterRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of filter rule to apply. DataSync only supports the SIMPLE_PATTERN
     * rule type.</p>
     */
    inline const FilterType& GetFilterType() const{ return m_filterType; }

    /**
     * <p>The type of filter rule to apply. DataSync only supports the SIMPLE_PATTERN
     * rule type.</p>
     */
    inline bool FilterTypeHasBeenSet() const { return m_filterTypeHasBeenSet; }

    /**
     * <p>The type of filter rule to apply. DataSync only supports the SIMPLE_PATTERN
     * rule type.</p>
     */
    inline void SetFilterType(const FilterType& value) { m_filterTypeHasBeenSet = true; m_filterType = value; }

    /**
     * <p>The type of filter rule to apply. DataSync only supports the SIMPLE_PATTERN
     * rule type.</p>
     */
    inline void SetFilterType(FilterType&& value) { m_filterTypeHasBeenSet = true; m_filterType = std::move(value); }

    /**
     * <p>The type of filter rule to apply. DataSync only supports the SIMPLE_PATTERN
     * rule type.</p>
     */
    inline FilterRule& WithFilterType(const FilterType& value) { SetFilterType(value); return *this;}

    /**
     * <p>The type of filter rule to apply. DataSync only supports the SIMPLE_PATTERN
     * rule type.</p>
     */
    inline FilterRule& WithFilterType(FilterType&& value) { SetFilterType(std::move(value)); return *this;}


    /**
     * <p>A single filter string that consists of the patterns to include or exclude.
     * The patterns are delimited by "|" (that is, a pipe), for example:
     * <code>/folder1|/folder2</code> </p> <p> </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>A single filter string that consists of the patterns to include or exclude.
     * The patterns are delimited by "|" (that is, a pipe), for example:
     * <code>/folder1|/folder2</code> </p> <p> </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>A single filter string that consists of the patterns to include or exclude.
     * The patterns are delimited by "|" (that is, a pipe), for example:
     * <code>/folder1|/folder2</code> </p> <p> </p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A single filter string that consists of the patterns to include or exclude.
     * The patterns are delimited by "|" (that is, a pipe), for example:
     * <code>/folder1|/folder2</code> </p> <p> </p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>A single filter string that consists of the patterns to include or exclude.
     * The patterns are delimited by "|" (that is, a pipe), for example:
     * <code>/folder1|/folder2</code> </p> <p> </p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>A single filter string that consists of the patterns to include or exclude.
     * The patterns are delimited by "|" (that is, a pipe), for example:
     * <code>/folder1|/folder2</code> </p> <p> </p>
     */
    inline FilterRule& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>A single filter string that consists of the patterns to include or exclude.
     * The patterns are delimited by "|" (that is, a pipe), for example:
     * <code>/folder1|/folder2</code> </p> <p> </p>
     */
    inline FilterRule& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>A single filter string that consists of the patterns to include or exclude.
     * The patterns are delimited by "|" (that is, a pipe), for example:
     * <code>/folder1|/folder2</code> </p> <p> </p>
     */
    inline FilterRule& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    FilterType m_filterType;
    bool m_filterTypeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
